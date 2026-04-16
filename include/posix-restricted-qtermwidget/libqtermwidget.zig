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

    /// New constructs a new QTermWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QTermWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QTermWidget_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QTermWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` startnow: i32 `
    ///
    pub fn New2(startnow: i32) QTermWidget {
        return .{ .ptr = qtc.QTermWidget_new2(@bitCast(startnow)) };
    }

    /// New3 constructs a new QTermWidget object.
    ///
    pub fn New3() QTermWidget {
        return .{ .ptr = qtc.QTermWidget_new3() };
    }

    /// New4 constructs a new QTermWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` startnow: i32 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New4(startnow: i32, parent: anytype) QTermWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QTermWidget_new4(@bitCast(startnow), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn MetaObject(self: QTermWidget) QMetaObject {
        return .{ .ptr = qtc.QTermWidget_MetaObject(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMetaObject(self: QTermWidget, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTermWidget_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    pub fn SuperMetaObject(self: QTermWidget) QMetaObject {
        return .{ .ptr = qtc.QTermWidget_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTermWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTermWidget_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTermWidget_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QTermWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTermWidget_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

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
    pub fn Metacall(self: QTermWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTermWidget_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QTermWidget, callback: *const fn (QTermWidget, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTermWidget_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

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
    pub fn SuperMetacall(self: QTermWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTermWidget_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SizeHint(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QTermWidget_SizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSizeHint(self: QTermWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTermWidget_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperSizeHint(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QTermWidget_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetTerminalSizeHint(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SetTerminalSizeHint(@ptrCast(self.ptr), enabled);
    }

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
    pub fn OnSetTerminalSizeHint(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetTerminalSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTerminalSizeHint` instead
    ///
    pub const QBaseSetTerminalSizeHint = SuperSetTerminalSizeHint;

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
    pub fn SuperSetTerminalSizeHint(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SuperSetTerminalSizeHint(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn TerminalSizeHint(self: QTermWidget) bool {
        return qtc.QTermWidget_TerminalSizeHint(@ptrCast(self.ptr));
    }

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
    pub fn OnTerminalSizeHint(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnTerminalSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTerminalSizeHint` instead
    ///
    pub const QBaseTerminalSizeHint = SuperTerminalSizeHint;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperTerminalSizeHint(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperTerminalSizeHint(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn StartShellProgram(self: QTermWidget) void {
        qtc.QTermWidget_StartShellProgram(@ptrCast(self.ptr));
    }

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
    pub fn OnStartShellProgram(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnStartShellProgram(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStartShellProgram` instead
    ///
    pub const QBaseStartShellProgram = SuperStartShellProgram;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperStartShellProgram(self: QTermWidget) void {
        qtc.QTermWidget_SuperStartShellProgram(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn StartTerminalTeletype(self: QTermWidget) void {
        qtc.QTermWidget_StartTerminalTeletype(@ptrCast(self.ptr));
    }

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
    pub fn OnStartTerminalTeletype(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnStartTerminalTeletype(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStartTerminalTeletype` instead
    ///
    pub const QBaseStartTerminalTeletype = SuperStartTerminalTeletype;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperStartTerminalTeletype(self: QTermWidget) void {
        qtc.QTermWidget_SuperStartTerminalTeletype(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn GetShellPID(self: QTermWidget) i32 {
        return qtc.QTermWidget_GetShellPID(@ptrCast(self.ptr));
    }

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
    pub fn OnGetShellPID(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnGetShellPID(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetShellPID` instead
    ///
    pub const QBaseGetShellPID = SuperGetShellPID;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperGetShellPID(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperGetShellPID(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn GetForegroundProcessId(self: QTermWidget) i32 {
        return qtc.QTermWidget_GetForegroundProcessId(@ptrCast(self.ptr));
    }

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
    pub fn OnGetForegroundProcessId(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnGetForegroundProcessId(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetForegroundProcessId` instead
    ///
    pub const QBaseGetForegroundProcessId = SuperGetForegroundProcessId;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperGetForegroundProcessId(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperGetForegroundProcessId(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn ChangeDir(self: QTermWidget, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidget_ChangeDir(@ptrCast(self.ptr), dir_str);
    }

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
    pub fn OnChangeDir(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnChangeDir(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChangeDir` instead
    ///
    pub const QBaseChangeDir = SuperChangeDir;

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
    pub fn SuperChangeDir(self: QTermWidget, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidget_SuperChangeDir(@ptrCast(self.ptr), dir_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` font: QFont `
    ///
    pub fn SetTerminalFont(self: QTermWidget, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTermWidget_SetTerminalFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

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
    pub fn OnSetTerminalFont(self: QTermWidget, callback: *const fn (QTermWidget, QFont) callconv(.c) void) void {
        qtc.QTermWidget_OnSetTerminalFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTerminalFont` instead
    ///
    pub const QBaseSetTerminalFont = SuperSetTerminalFont;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` font: QFont `
    ///
    pub fn SuperSetTerminalFont(self: QTermWidget, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTermWidget_SuperSetTerminalFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn GetTerminalFont(self: QTermWidget) QFont {
        return .{ .ptr = qtc.QTermWidget_GetTerminalFont(@ptrCast(self.ptr)) };
    }

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
    pub fn OnGetTerminalFont(self: QTermWidget, callback: *const fn () callconv(.c) QFont) void {
        qtc.QTermWidget_OnGetTerminalFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetTerminalFont` instead
    ///
    pub const QBaseGetTerminalFont = SuperGetTerminalFont;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperGetTerminalFont(self: QTermWidget) QFont {
        return .{ .ptr = qtc.QTermWidget_SuperGetTerminalFont(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` level: f64 `
    ///
    pub fn SetTerminalOpacity(self: QTermWidget, level: f64) void {
        qtc.QTermWidget_SetTerminalOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

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
    pub fn OnSetTerminalOpacity(self: QTermWidget, callback: *const fn (QTermWidget, f64) callconv(.c) void) void {
        qtc.QTermWidget_OnSetTerminalOpacity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTerminalOpacity` instead
    ///
    pub const QBaseSetTerminalOpacity = SuperSetTerminalOpacity;

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
    pub fn SuperSetTerminalOpacity(self: QTermWidget, level: f64) void {
        qtc.QTermWidget_SuperSetTerminalOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` backgroundImage: []const u8 `
    ///
    pub fn SetTerminalBackgroundImage(self: QTermWidget, backgroundImage: []const u8) void {
        const backgroundImage_str = qtc.libqt_string{
            .len = backgroundImage.len,
            .data = backgroundImage.ptr,
        };
        qtc.QTermWidget_SetTerminalBackgroundImage(@ptrCast(self.ptr), backgroundImage_str);
    }

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
    pub fn OnSetTerminalBackgroundImage(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetTerminalBackgroundImage(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTerminalBackgroundImage` instead
    ///
    pub const QBaseSetTerminalBackgroundImage = SuperSetTerminalBackgroundImage;

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
    pub fn SuperSetTerminalBackgroundImage(self: QTermWidget, backgroundImage: []const u8) void {
        const backgroundImage_str = qtc.libqt_string{
            .len = backgroundImage.len,
            .data = backgroundImage.ptr,
        };
        qtc.QTermWidget_SuperSetTerminalBackgroundImage(@ptrCast(self.ptr), backgroundImage_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` mode: i32 `
    ///
    pub fn SetTerminalBackgroundMode(self: QTermWidget, mode: i32) void {
        qtc.QTermWidget_SetTerminalBackgroundMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn OnSetTerminalBackgroundMode(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetTerminalBackgroundMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTerminalBackgroundMode` instead
    ///
    pub const QBaseSetTerminalBackgroundMode = SuperSetTerminalBackgroundMode;

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
    pub fn SuperSetTerminalBackgroundMode(self: QTermWidget, mode: i32) void {
        qtc.QTermWidget_SuperSetTerminalBackgroundMode(@ptrCast(self.ptr), @bitCast(mode));
    }

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
    pub fn SetEnvironment(self: QTermWidget, allocator: std.mem.Allocator, environment: []const []const u8) void {
        const environment_arr = allocator.alloc(qtc.libqt_string, environment.len) catch @panic("qtermwidget.SetEnvironment: Memory allocation failed");
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
        qtc.QTermWidget_SetEnvironment(@ptrCast(self.ptr), environment_list);
    }

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
    pub fn OnSetEnvironment(self: QTermWidget, callback: *const fn (QTermWidget, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetEnvironment(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetEnvironment` instead
    ///
    pub const QBaseSetEnvironment = SuperSetEnvironment;

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
    pub fn SuperSetEnvironment(self: QTermWidget, allocator: std.mem.Allocator, environment: []const []const u8) void {
        const environment_arr = allocator.alloc(qtc.libqt_string, environment.len) catch @panic("qtermwidget.SetEnvironment: Memory allocation failed");
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
        qtc.QTermWidget_SuperSetEnvironment(@ptrCast(self.ptr), environment_list);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` program: []const u8 `
    ///
    pub fn SetShellProgram(self: QTermWidget, program: []const u8) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        qtc.QTermWidget_SetShellProgram(@ptrCast(self.ptr), program_str);
    }

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
    pub fn OnSetShellProgram(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetShellProgram(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetShellProgram` instead
    ///
    pub const QBaseSetShellProgram = SuperSetShellProgram;

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
    pub fn SuperSetShellProgram(self: QTermWidget, program: []const u8) void {
        const program_str = qtc.libqt_string{
            .len = program.len,
            .data = program.ptr,
        };
        qtc.QTermWidget_SuperSetShellProgram(@ptrCast(self.ptr), program_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` dir: []const u8 `
    ///
    pub fn SetWorkingDirectory(self: QTermWidget, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidget_SetWorkingDirectory(@ptrCast(self.ptr), dir_str);
    }

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
    pub fn OnSetWorkingDirectory(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetWorkingDirectory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetWorkingDirectory` instead
    ///
    pub const QBaseSetWorkingDirectory = SuperSetWorkingDirectory;

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
    pub fn SuperSetWorkingDirectory(self: QTermWidget, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
            .len = dir.len,
            .data = dir.ptr,
        };
        qtc.QTermWidget_SuperSetWorkingDirectory(@ptrCast(self.ptr), dir_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WorkingDirectory(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_WorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.WorkingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnWorkingDirectory(self: QTermWidget, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTermWidget_OnWorkingDirectory(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWorkingDirectory` instead
    ///
    pub const QBaseWorkingDirectory = SuperWorkingDirectory;

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
    pub fn SuperWorkingDirectory(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_SuperWorkingDirectory(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.WorkingDirectory: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetArgs(self: QTermWidget, allocator: std.mem.Allocator, args: []const []const u8) void {
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("qtermwidget.SetArgs: Memory allocation failed");
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
        qtc.QTermWidget_SetArgs(@ptrCast(self.ptr), args_list);
    }

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
    pub fn OnSetArgs(self: QTermWidget, callback: *const fn (QTermWidget, ?[*:null]?[*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetArgs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetArgs` instead
    ///
    pub const QBaseSetArgs = SuperSetArgs;

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
    pub fn SuperSetArgs(self: QTermWidget, allocator: std.mem.Allocator, args: []const []const u8) void {
        const args_arr = allocator.alloc(qtc.libqt_string, args.len) catch @panic("qtermwidget.SetArgs: Memory allocation failed");
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
        qtc.QTermWidget_SuperSetArgs(@ptrCast(self.ptr), args_list);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetColorScheme(self: QTermWidget, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTermWidget_SetColorScheme(@ptrCast(self.ptr), name_str);
    }

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
    pub fn OnSetColorScheme(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetColorScheme(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetColorScheme` instead
    ///
    pub const QBaseSetColorScheme = SuperSetColorScheme;

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
    pub fn SuperSetColorScheme(self: QTermWidget, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTermWidget_SuperSetColorScheme(@ptrCast(self.ptr), name_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GetAvailableColorSchemes(self: QTermWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTermWidget_GetAvailableColorSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtermwidget.GetAvailableColorSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtermwidget.GetAvailableColorSchemes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

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
    pub fn OnGetAvailableColorSchemes(self: QTermWidget, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QTermWidget_OnGetAvailableColorSchemes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetAvailableColorSchemes` instead
    ///
    pub const QBaseGetAvailableColorSchemes = SuperGetAvailableColorSchemes;

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
    pub fn SuperGetAvailableColorSchemes(self: QTermWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTermWidget_SuperGetAvailableColorSchemes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtermwidget.GetAvailableColorSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtermwidget.GetAvailableColorSchemes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableColorSchemes(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTermWidget_AvailableColorSchemes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtermwidget.AvailableColorSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtermwidget.AvailableColorSchemes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` custom_dir: []const u8 `
    ///
    pub fn AddCustomColorSchemeDir(custom_dir: []const u8) void {
        const custom_dir_str = qtc.libqt_string{
            .len = custom_dir.len,
            .data = custom_dir.ptr,
        };
        qtc.QTermWidget_AddCustomColorSchemeDir(custom_dir_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` lines: i32 `
    ///
    pub fn SetHistorySize(self: QTermWidget, lines: i32) void {
        qtc.QTermWidget_SetHistorySize(@ptrCast(self.ptr), @bitCast(lines));
    }

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
    pub fn OnSetHistorySize(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetHistorySize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetHistorySize` instead
    ///
    pub const QBaseSetHistorySize = SuperSetHistorySize;

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
    pub fn SuperSetHistorySize(self: QTermWidget, lines: i32) void {
        qtc.QTermWidget_SuperSetHistorySize(@ptrCast(self.ptr), @bitCast(lines));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn HistorySize(self: QTermWidget) i32 {
        return qtc.QTermWidget_HistorySize(@ptrCast(self.ptr));
    }

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
    pub fn OnHistorySize(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnHistorySize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHistorySize` instead
    ///
    pub const QBaseHistorySize = SuperHistorySize;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperHistorySize(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperHistorySize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` scrollBarPosition: qtermwidget_interface_enums.ScrollBarPosition `
    ///
    pub fn SetScrollBarPosition(self: QTermWidget, scrollBarPosition: i32) void {
        qtc.QTermWidget_SetScrollBarPosition(@ptrCast(self.ptr), @bitCast(scrollBarPosition));
    }

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
    pub fn OnSetScrollBarPosition(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetScrollBarPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetScrollBarPosition` instead
    ///
    pub const QBaseSetScrollBarPosition = SuperSetScrollBarPosition;

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
    pub fn SuperSetScrollBarPosition(self: QTermWidget, scrollBarPosition: i32) void {
        qtc.QTermWidget_SuperSetScrollBarPosition(@ptrCast(self.ptr), @bitCast(scrollBarPosition));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ScrollToEnd(self: QTermWidget) void {
        qtc.QTermWidget_ScrollToEnd(@ptrCast(self.ptr));
    }

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
    pub fn OnScrollToEnd(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnScrollToEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScrollToEnd` instead
    ///
    pub const QBaseScrollToEnd = SuperScrollToEnd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperScrollToEnd(self: QTermWidget) void {
        qtc.QTermWidget_SuperScrollToEnd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SendText(self: QTermWidget, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidget_SendText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn OnSendText(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSendText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSendText` instead
    ///
    pub const QBaseSendText = SuperSendText;

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
    pub fn SuperSendText(self: QTermWidget, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidget_SuperSendText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SendKeyEvent(self: QTermWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QTermWidget_SendKeyEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

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
    pub fn OnSendKeyEvent(self: QTermWidget, callback: *const fn (QTermWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnSendKeyEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSendKeyEvent` instead
    ///
    pub const QBaseSendKeyEvent = SuperSendKeyEvent;

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
    pub fn SuperSendKeyEvent(self: QTermWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QTermWidget_SuperSendKeyEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFlowControlEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SetFlowControlEnabled(@ptrCast(self.ptr), enabled);
    }

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
    pub fn OnSetFlowControlEnabled(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetFlowControlEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFlowControlEnabled` instead
    ///
    pub const QBaseSetFlowControlEnabled = SuperSetFlowControlEnabled;

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
    pub fn SuperSetFlowControlEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SuperSetFlowControlEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn FlowControlEnabled(self: QTermWidget) bool {
        return qtc.QTermWidget_FlowControlEnabled(@ptrCast(self.ptr));
    }

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
    pub fn OnFlowControlEnabled(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnFlowControlEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFlowControlEnabled` instead
    ///
    pub const QBaseFlowControlEnabled = SuperFlowControlEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperFlowControlEnabled(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperFlowControlEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetFlowControlWarningEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SetFlowControlWarningEnabled(@ptrCast(self.ptr), enabled);
    }

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
    pub fn OnSetFlowControlWarningEnabled(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetFlowControlWarningEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFlowControlWarningEnabled` instead
    ///
    pub const QBaseSetFlowControlWarningEnabled = SuperSetFlowControlWarningEnabled;

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
    pub fn SuperSetFlowControlWarningEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SuperSetFlowControlWarningEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AvailableKeyBindings(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTermWidget_AvailableKeyBindings();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtermwidget.AvailableKeyBindings: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtermwidget.AvailableKeyBindings: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn KeyBindings(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_KeyBindings(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.KeyBindings: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnKeyBindings(self: QTermWidget, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTermWidget_OnKeyBindings(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyBindings` instead
    ///
    pub const QBaseKeyBindings = SuperKeyBindings;

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
    pub fn SuperKeyBindings(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_SuperKeyBindings(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.KeyBindings: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` motionAfterPasting: i32 `
    ///
    pub fn SetMotionAfterPasting(self: QTermWidget, motionAfterPasting: i32) void {
        qtc.QTermWidget_SetMotionAfterPasting(@ptrCast(self.ptr), @bitCast(motionAfterPasting));
    }

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
    pub fn OnSetMotionAfterPasting(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetMotionAfterPasting(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMotionAfterPasting` instead
    ///
    pub const QBaseSetMotionAfterPasting = SuperSetMotionAfterPasting;

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
    pub fn SuperSetMotionAfterPasting(self: QTermWidget, motionAfterPasting: i32) void {
        qtc.QTermWidget_SuperSetMotionAfterPasting(@ptrCast(self.ptr), @bitCast(motionAfterPasting));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn HistoryLinesCount(self: QTermWidget) i32 {
        return qtc.QTermWidget_HistoryLinesCount(@ptrCast(self.ptr));
    }

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
    pub fn OnHistoryLinesCount(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnHistoryLinesCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHistoryLinesCount` instead
    ///
    pub const QBaseHistoryLinesCount = SuperHistoryLinesCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperHistoryLinesCount(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperHistoryLinesCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ScreenColumnsCount(self: QTermWidget) i32 {
        return qtc.QTermWidget_ScreenColumnsCount(@ptrCast(self.ptr));
    }

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
    pub fn OnScreenColumnsCount(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnScreenColumnsCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScreenColumnsCount` instead
    ///
    pub const QBaseScreenColumnsCount = SuperScreenColumnsCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperScreenColumnsCount(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperScreenColumnsCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ScreenLinesCount(self: QTermWidget) i32 {
        return qtc.QTermWidget_ScreenLinesCount(@ptrCast(self.ptr));
    }

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
    pub fn OnScreenLinesCount(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnScreenLinesCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScreenLinesCount` instead
    ///
    pub const QBaseScreenLinesCount = SuperScreenLinesCount;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperScreenLinesCount(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperScreenLinesCount(@ptrCast(self.ptr));
    }

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
    pub fn SetSelectionStart(self: QTermWidget, row: i32, column: i32) void {
        qtc.QTermWidget_SetSelectionStart(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

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
    pub fn OnSetSelectionStart(self: QTermWidget, callback: *const fn (QTermWidget, i32, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetSelectionStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSelectionStart` instead
    ///
    pub const QBaseSetSelectionStart = SuperSetSelectionStart;

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
    pub fn SuperSetSelectionStart(self: QTermWidget, row: i32, column: i32) void {
        qtc.QTermWidget_SuperSetSelectionStart(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

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
    pub fn SetSelectionEnd(self: QTermWidget, row: i32, column: i32) void {
        qtc.QTermWidget_SetSelectionEnd(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

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
    pub fn OnSetSelectionEnd(self: QTermWidget, callback: *const fn (QTermWidget, i32, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetSelectionEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSelectionEnd` instead
    ///
    pub const QBaseSetSelectionEnd = SuperSetSelectionEnd;

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
    pub fn SuperSetSelectionEnd(self: QTermWidget, row: i32, column: i32) void {
        qtc.QTermWidget_SuperSetSelectionEnd(@ptrCast(self.ptr), @bitCast(row), @bitCast(column));
    }

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
    pub fn GetSelectionStart(self: QTermWidget, row: *i32, column: *i32) void {
        qtc.QTermWidget_GetSelectionStart(@ptrCast(self.ptr), @ptrCast(row), @ptrCast(column));
    }

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
    pub fn OnGetSelectionStart(self: QTermWidget, callback: *const fn (QTermWidget, *i32, *i32) callconv(.c) void) void {
        qtc.QTermWidget_OnGetSelectionStart(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetSelectionStart` instead
    ///
    pub const QBaseGetSelectionStart = SuperGetSelectionStart;

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
    pub fn SuperGetSelectionStart(self: QTermWidget, row: *i32, column: *i32) void {
        qtc.QTermWidget_SuperGetSelectionStart(@ptrCast(self.ptr), @ptrCast(row), @ptrCast(column));
    }

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
    pub fn GetSelectionEnd(self: QTermWidget, row: *i32, column: *i32) void {
        qtc.QTermWidget_GetSelectionEnd(@ptrCast(self.ptr), @ptrCast(row), @ptrCast(column));
    }

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
    pub fn OnGetSelectionEnd(self: QTermWidget, callback: *const fn (QTermWidget, *i32, *i32) callconv(.c) void) void {
        qtc.QTermWidget_OnGetSelectionEnd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetSelectionEnd` instead
    ///
    pub const QBaseGetSelectionEnd = SuperGetSelectionEnd;

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
    pub fn SuperGetSelectionEnd(self: QTermWidget, row: *i32, column: *i32) void {
        qtc.QTermWidget_SuperGetSelectionEnd(@ptrCast(self.ptr), @ptrCast(row), @ptrCast(column));
    }

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
    pub fn SelectedText(self: QTermWidget, allocator: std.mem.Allocator, preserveLineBreaks: bool) []const u8 {
        var _str = qtc.QTermWidget_SelectedText(@ptrCast(self.ptr), preserveLineBreaks);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    /// ` callback: *const fn (self: QTermWidget, preserveLineBreaks: bool) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnSelectedText(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) [*:0]const u8) void {
        qtc.QTermWidget_OnSelectedText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelectedText` instead
    ///
    pub const QBaseSelectedText = SuperSelectedText;

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
    pub fn SuperSelectedText(self: QTermWidget, allocator: std.mem.Allocator, preserveLineBreaks: bool) []const u8 {
        var _str = qtc.QTermWidget_SuperSelectedText(@ptrCast(self.ptr), preserveLineBreaks);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` monitorActivity: bool `
    ///
    pub fn SetMonitorActivity(self: QTermWidget, monitorActivity: bool) void {
        qtc.QTermWidget_SetMonitorActivity(@ptrCast(self.ptr), monitorActivity);
    }

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
    pub fn OnSetMonitorActivity(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetMonitorActivity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMonitorActivity` instead
    ///
    pub const QBaseSetMonitorActivity = SuperSetMonitorActivity;

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
    pub fn SuperSetMonitorActivity(self: QTermWidget, monitorActivity: bool) void {
        qtc.QTermWidget_SuperSetMonitorActivity(@ptrCast(self.ptr), monitorActivity);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` monitorSilence: bool `
    ///
    pub fn SetMonitorSilence(self: QTermWidget, monitorSilence: bool) void {
        qtc.QTermWidget_SetMonitorSilence(@ptrCast(self.ptr), monitorSilence);
    }

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
    pub fn OnSetMonitorSilence(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetMonitorSilence(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMonitorSilence` instead
    ///
    pub const QBaseSetMonitorSilence = SuperSetMonitorSilence;

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
    pub fn SuperSetMonitorSilence(self: QTermWidget, monitorSilence: bool) void {
        qtc.QTermWidget_SuperSetMonitorSilence(@ptrCast(self.ptr), monitorSilence);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` seconds: i32 `
    ///
    pub fn SetSilenceTimeout(self: QTermWidget, seconds: i32) void {
        qtc.QTermWidget_SetSilenceTimeout(@ptrCast(self.ptr), @bitCast(seconds));
    }

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
    pub fn OnSetSilenceTimeout(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetSilenceTimeout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSilenceTimeout` instead
    ///
    pub const QBaseSetSilenceTimeout = SuperSetSilenceTimeout;

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
    pub fn SuperSetSilenceTimeout(self: QTermWidget, seconds: i32) void {
        qtc.QTermWidget_SuperSetSilenceTimeout(@ptrCast(self.ptr), @bitCast(seconds));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` pos: QPoint `
    ///
    pub fn GetHotSpotAt(self: QTermWidget, pos: anytype) Konsole__Filter__HotSpot {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QTermWidget_GetHotSpotAt(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

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
    pub fn GetHotSpotAt2(self: QTermWidget, row: i32, column: i32) Konsole__Filter__HotSpot {
        return .{ .ptr = qtc.QTermWidget_GetHotSpotAt2(@ptrCast(self.ptr), @bitCast(row), @bitCast(column)) };
    }

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
    pub fn FilterActions(self: QTermWidget, allocator: std.mem.Allocator, position: anytype) []QAction {
        comptime _ = @TypeOf(position)._is_QPoint;
        const _arr: qtc.libqt_list = qtc.QTermWidget_FilterActions(@ptrCast(self.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qtermwidget.FilterActions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn OnFilterActions(self: QTermWidget, callback: *const fn (QTermWidget, QPoint) callconv(.c) qtc.libqt_list) void {
        qtc.QTermWidget_OnFilterActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFilterActions` instead
    ///
    pub const QBaseFilterActions = SuperFilterActions;

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
    pub fn SuperFilterActions(self: QTermWidget, allocator: std.mem.Allocator, position: anytype) []QAction {
        comptime _ = @TypeOf(position)._is_QPoint;
        const _arr: qtc.libqt_list = qtc.QTermWidget_SuperFilterActions(@ptrCast(self.ptr), @ptrCast(position.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qtermwidget.FilterActions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn GetPtySlaveFd(self: QTermWidget) i32 {
        return qtc.QTermWidget_GetPtySlaveFd(@ptrCast(self.ptr));
    }

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
    pub fn OnGetPtySlaveFd(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnGetPtySlaveFd(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetPtySlaveFd` instead
    ///
    pub const QBaseGetPtySlaveFd = SuperGetPtySlaveFd;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperGetPtySlaveFd(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperGetPtySlaveFd(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` shape: Emulation_enums.KeyboardCursorShape `
    ///
    pub fn SetKeyboardCursorShape(self: QTermWidget, shape: i32) void {
        qtc.QTermWidget_SetKeyboardCursorShape(@ptrCast(self.ptr), @bitCast(shape));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` blink: bool `
    ///
    pub fn SetBlinkingCursor(self: QTermWidget, blink: bool) void {
        qtc.QTermWidget_SetBlinkingCursor(@ptrCast(self.ptr), blink);
    }

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
    pub fn OnSetBlinkingCursor(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetBlinkingCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetBlinkingCursor` instead
    ///
    pub const QBaseSetBlinkingCursor = SuperSetBlinkingCursor;

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
    pub fn SuperSetBlinkingCursor(self: QTermWidget, blink: bool) void {
        qtc.QTermWidget_SuperSetBlinkingCursor(@ptrCast(self.ptr), blink);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetBidiEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SetBidiEnabled(@ptrCast(self.ptr), enabled);
    }

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
    pub fn OnSetBidiEnabled(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetBidiEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetBidiEnabled` instead
    ///
    pub const QBaseSetBidiEnabled = SuperSetBidiEnabled;

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
    pub fn SuperSetBidiEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QTermWidget_SuperSetBidiEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsBidiEnabled(self: QTermWidget) bool {
        return qtc.QTermWidget_IsBidiEnabled(@ptrCast(self.ptr));
    }

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
    pub fn OnIsBidiEnabled(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnIsBidiEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsBidiEnabled` instead
    ///
    pub const QBaseIsBidiEnabled = SuperIsBidiEnabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperIsBidiEnabled(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperIsBidiEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` autoClose: bool `
    ///
    pub fn SetAutoClose(self: QTermWidget, autoClose: bool) void {
        qtc.QTermWidget_SetAutoClose(@ptrCast(self.ptr), autoClose);
    }

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
    pub fn OnSetAutoClose(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetAutoClose(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAutoClose` instead
    ///
    pub const QBaseSetAutoClose = SuperSetAutoClose;

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
    pub fn SuperSetAutoClose(self: QTermWidget, autoClose: bool) void {
        qtc.QTermWidget_SuperSetAutoClose(@ptrCast(self.ptr), autoClose);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Title(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_Title(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnTitle(self: QTermWidget, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTermWidget_OnTitle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTitle` instead
    ///
    pub const QBaseTitle = SuperTitle;

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
    pub fn SuperTitle(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_SuperTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.Title: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnIcon(self: QTermWidget, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTermWidget_OnIcon(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIcon` instead
    ///
    pub const QBaseIcon = SuperIcon;

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
    pub fn SuperIcon(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_SuperIcon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsTitleChanged(self: QTermWidget) bool {
        return qtc.QTermWidget_IsTitleChanged(@ptrCast(self.ptr));
    }

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
    pub fn OnIsTitleChanged(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnIsTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIsTitleChanged` instead
    ///
    pub const QBaseIsTitleChanged = SuperIsTitleChanged;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperIsTitleChanged(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperIsTitleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn BracketText(self: QTermWidget, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidget_BracketText(@ptrCast(self.ptr), text_str);
    }

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
    pub fn OnBracketText(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnBracketText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBracketText` instead
    ///
    pub const QBaseBracketText = SuperBracketText;

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
    pub fn SuperBracketText(self: QTermWidget, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidget_SuperBracketText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` disable: bool `
    ///
    pub fn DisableBracketedPasteMode(self: QTermWidget, disable: bool) void {
        qtc.QTermWidget_DisableBracketedPasteMode(@ptrCast(self.ptr), disable);
    }

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
    pub fn OnDisableBracketedPasteMode(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnDisableBracketedPasteMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDisableBracketedPasteMode` instead
    ///
    pub const QBaseDisableBracketedPasteMode = SuperDisableBracketedPasteMode;

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
    pub fn SuperDisableBracketedPasteMode(self: QTermWidget, disable: bool) void {
        qtc.QTermWidget_SuperDisableBracketedPasteMode(@ptrCast(self.ptr), disable);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn BracketedPasteModeIsDisabled(self: QTermWidget) bool {
        return qtc.QTermWidget_BracketedPasteModeIsDisabled(@ptrCast(self.ptr));
    }

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
    pub fn OnBracketedPasteModeIsDisabled(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnBracketedPasteModeIsDisabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBracketedPasteModeIsDisabled` instead
    ///
    pub const QBaseBracketedPasteModeIsDisabled = SuperBracketedPasteModeIsDisabled;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperBracketedPasteModeIsDisabled(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperBracketedPasteModeIsDisabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` margin: i32 `
    ///
    pub fn SetMargin(self: QTermWidget, margin: i32) void {
        qtc.QTermWidget_SetMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

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
    pub fn OnSetMargin(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) void) void {
        qtc.QTermWidget_OnSetMargin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMargin` instead
    ///
    pub const QBaseSetMargin = SuperSetMargin;

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
    pub fn SuperSetMargin(self: QTermWidget, margin: i32) void {
        qtc.QTermWidget_SuperSetMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn GetMargin(self: QTermWidget) i32 {
        return qtc.QTermWidget_GetMargin(@ptrCast(self.ptr));
    }

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
    pub fn OnGetMargin(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnGetMargin(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetMargin` instead
    ///
    pub const QBaseGetMargin = SuperGetMargin;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperGetMargin(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperGetMargin(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` drawLineChars: bool `
    ///
    pub fn SetDrawLineChars(self: QTermWidget, drawLineChars: bool) void {
        qtc.QTermWidget_SetDrawLineChars(@ptrCast(self.ptr), drawLineChars);
    }

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
    pub fn OnSetDrawLineChars(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetDrawLineChars(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetDrawLineChars` instead
    ///
    pub const QBaseSetDrawLineChars = SuperSetDrawLineChars;

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
    pub fn SuperSetDrawLineChars(self: QTermWidget, drawLineChars: bool) void {
        qtc.QTermWidget_SuperSetDrawLineChars(@ptrCast(self.ptr), drawLineChars);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` boldIntense: bool `
    ///
    pub fn SetBoldIntense(self: QTermWidget, boldIntense: bool) void {
        qtc.QTermWidget_SetBoldIntense(@ptrCast(self.ptr), boldIntense);
    }

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
    pub fn OnSetBoldIntense(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetBoldIntense(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetBoldIntense` instead
    ///
    pub const QBaseSetBoldIntense = SuperSetBoldIntense;

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
    pub fn SuperSetBoldIntense(self: QTermWidget, boldIntense: bool) void {
        qtc.QTermWidget_SuperSetBoldIntense(@ptrCast(self.ptr), boldIntense);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` confirmMultilinePaste: bool `
    ///
    pub fn SetConfirmMultilinePaste(self: QTermWidget, confirmMultilinePaste: bool) void {
        qtc.QTermWidget_SetConfirmMultilinePaste(@ptrCast(self.ptr), confirmMultilinePaste);
    }

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
    pub fn OnSetConfirmMultilinePaste(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetConfirmMultilinePaste(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetConfirmMultilinePaste` instead
    ///
    pub const QBaseSetConfirmMultilinePaste = SuperSetConfirmMultilinePaste;

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
    pub fn SuperSetConfirmMultilinePaste(self: QTermWidget, confirmMultilinePaste: bool) void {
        qtc.QTermWidget_SuperSetConfirmMultilinePaste(@ptrCast(self.ptr), confirmMultilinePaste);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` trimPastedTrailingNewlines: bool `
    ///
    pub fn SetTrimPastedTrailingNewlines(self: QTermWidget, trimPastedTrailingNewlines: bool) void {
        qtc.QTermWidget_SetTrimPastedTrailingNewlines(@ptrCast(self.ptr), trimPastedTrailingNewlines);
    }

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
    pub fn OnSetTrimPastedTrailingNewlines(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetTrimPastedTrailingNewlines(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTrimPastedTrailingNewlines` instead
    ///
    pub const QBaseSetTrimPastedTrailingNewlines = SuperSetTrimPastedTrailingNewlines;

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
    pub fn SuperSetTrimPastedTrailingNewlines(self: QTermWidget, trimPastedTrailingNewlines: bool) void {
        qtc.QTermWidget_SuperSetTrimPastedTrailingNewlines(@ptrCast(self.ptr), trimPastedTrailingNewlines);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WordCharacters(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_WordCharacters(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.WordCharacters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    /// ` callback: *const fn () callconv(.c) [*:0]const u8 `
    ///
    pub fn OnWordCharacters(self: QTermWidget, callback: *const fn () callconv(.c) [*:0]const u8) void {
        qtc.QTermWidget_OnWordCharacters(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWordCharacters` instead
    ///
    pub const QBaseWordCharacters = SuperWordCharacters;

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
    pub fn SuperWordCharacters(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTermWidget_SuperWordCharacters(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.WordCharacters: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` chars: []const u8 `
    ///
    pub fn SetWordCharacters(self: QTermWidget, chars: []const u8) void {
        const chars_str = qtc.libqt_string{
            .len = chars.len,
            .data = chars.ptr,
        };
        qtc.QTermWidget_SetWordCharacters(@ptrCast(self.ptr), chars_str);
    }

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
    pub fn OnSetWordCharacters(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_OnSetWordCharacters(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetWordCharacters` instead
    ///
    pub const QBaseSetWordCharacters = SuperSetWordCharacters;

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
    pub fn SuperSetWordCharacters(self: QTermWidget, chars: []const u8) void {
        const chars_str = qtc.libqt_string{
            .len = chars.len,
            .data = chars.ptr,
        };
        qtc.QTermWidget_SuperSetWordCharacters(@ptrCast(self.ptr), chars_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` startnow: i32 `
    ///
    pub fn CreateWidget(self: QTermWidget, startnow: i32) QTermWidgetInterface {
        return .{ .ptr = qtc.QTermWidget_CreateWidget(@ptrCast(self.ptr), @bitCast(startnow)) };
    }

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
    pub fn OnCreateWidget(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) QTermWidgetInterface) void {
        qtc.QTermWidget_OnCreateWidget(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateWidget` instead
    ///
    pub const QBaseCreateWidget = SuperCreateWidget;

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
    pub fn SuperCreateWidget(self: QTermWidget, startnow: i32) QTermWidgetInterface {
        return .{ .ptr = qtc.QTermWidget_SuperCreateWidget(@ptrCast(self.ptr), @bitCast(startnow)) };
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Finished(self: QTermWidget) void {
        qtc.QTermWidget_Finished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn OnFinished(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QTermWidget_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: bool `
    ///
    pub fn CopyAvailable(self: QTermWidget, param1: bool) void {
        qtc.QTermWidget_CopyAvailable(@ptrCast(self.ptr), param1);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: bool) callconv(.c) void `
    ///
    pub fn OnCopyAvailable(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_Connect_CopyAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn TermGetFocus(self: QTermWidget) void {
        qtc.QTermWidget_TermGetFocus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn OnTermGetFocus(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QTermWidget_Connect_TermGetFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn TermLostFocus(self: QTermWidget) void {
        qtc.QTermWidget_TermLostFocus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn OnTermLostFocus(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QTermWidget_Connect_TermLostFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn TermKeyPressed(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.QTermWidget_TermKeyPressed(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnTermKeyPressed(self: QTermWidget, callback: *const fn (QTermWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTermWidget_Connect_TermKeyPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn UrlActivated(self: QTermWidget, param1: anytype, fromContextMenu: bool) void {
        comptime _ = @TypeOf(param1)._is_QUrl;
        qtc.QTermWidget_UrlActivated(@ptrCast(self.ptr), @ptrCast(param1.ptr), fromContextMenu);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: QUrl, fromContextMenu: bool) callconv(.c) void `
    ///
    pub fn OnUrlActivated(self: QTermWidget, callback: *const fn (QTermWidget, QUrl, bool) callconv(.c) void) void {
        qtc.QTermWidget_Connect_UrlActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` message: []const u8 `
    ///
    pub fn Bell(self: QTermWidget, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.QTermWidget_Bell(@ptrCast(self.ptr), message_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnBell(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_Connect_Bell(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Activity(self: QTermWidget) void {
        qtc.QTermWidget_Activity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn OnActivity(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QTermWidget_Connect_Activity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Silence(self: QTermWidget) void {
        qtc.QTermWidget_Silence(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn OnSilence(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QTermWidget_Connect_Silence(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SendData(self: QTermWidget, param1: [:0]const u8, param2: i32) void {
        const param1_Cstring = param1.ptr;
        qtc.QTermWidget_SendData(@ptrCast(self.ptr), param1_Cstring, @bitCast(param2));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, param1: [*:0]const u8, param2: i32) callconv(.c) void `
    ///
    pub fn OnSendData(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QTermWidget_Connect_SendData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` profile: []const u8 `
    ///
    pub fn ProfileChanged(self: QTermWidget, profile: []const u8) void {
        const profile_str = qtc.libqt_string{
            .len = profile.len,
            .data = profile.ptr,
        };
        qtc.QTermWidget_ProfileChanged(@ptrCast(self.ptr), profile_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, profile: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnProfileChanged(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_Connect_ProfileChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn TitleChanged(self: QTermWidget) void {
        qtc.QTermWidget_TitleChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget) callconv(.c) void `
    ///
    pub fn OnTitleChanged(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QTermWidget_Connect_TitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ReceivedData(self: QTermWidget, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTermWidget_ReceivedData(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTermWidget `
    ///
    /// ` callback: *const fn (self: QTermWidget, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnReceivedData(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTermWidget_Connect_ReceivedData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn CopyClipboard(self: QTermWidget) void {
        qtc.QTermWidget_CopyClipboard(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn PasteClipboard(self: QTermWidget) void {
        qtc.QTermWidget_PasteClipboard(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn PasteSelection(self: QTermWidget) void {
        qtc.QTermWidget_PasteSelection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ZoomIn(self: QTermWidget) void {
        qtc.QTermWidget_ZoomIn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ZoomOut(self: QTermWidget) void {
        qtc.QTermWidget_ZoomOut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` size: QSize `
    ///
    pub fn SetSize(self: QTermWidget, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QTermWidget_SetSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` kb: []const u8 `
    ///
    pub fn SetKeyBindings(self: QTermWidget, kb: []const u8) void {
        const kb_str = qtc.libqt_string{
            .len = kb.len,
            .data = kb.ptr,
        };
        qtc.QTermWidget_SetKeyBindings(@ptrCast(self.ptr), kb_str);
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Clear(self: QTermWidget) void {
        qtc.QTermWidget_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ToggleShowSearchBar(self: QTermWidget) void {
        qtc.QTermWidget_ToggleShowSearchBar(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` device: QIODevice `
    ///
    pub fn SaveHistory(self: QTermWidget, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QIODevice;
        qtc.QTermWidget_SaveHistory(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` param1: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QResizeEvent;
        qtc.QTermWidget_ResizeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnResizeEvent(self: QTermWidget, callback: *const fn (QTermWidget, QResizeEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

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
    pub fn SuperResizeEvent(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QResizeEvent;
        qtc.QTermWidget_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SessionFinished(self: QTermWidget) void {
        qtc.QTermWidget_SessionFinished(@ptrCast(self.ptr));
    }

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
    pub fn OnSessionFinished(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnSessionFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSessionFinished` instead
    ///
    pub const QBaseSessionFinished = SuperSessionFinished;

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SuperSessionFinished(self: QTermWidget) void {
        qtc.QTermWidget_SuperSessionFinished(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/lxqt/qtermwidget?tab=readme-ov-file#api)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` textSelected: bool `
    ///
    pub fn SelectionChanged(self: QTermWidget, textSelected: bool) void {
        qtc.QTermWidget_SelectionChanged(@ptrCast(self.ptr), textSelected);
    }

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
    pub fn OnSelectionChanged(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelectionChanged` instead
    ///
    pub const QBaseSelectionChanged = SuperSelectionChanged;

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
    pub fn SuperSelectionChanged(self: QTermWidget, textSelected: bool) void {
        qtc.QTermWidget_SuperSelectionChanged(@ptrCast(self.ptr), textSelected);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn WinId(self: QTermWidget) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn CreateWinId(self: QTermWidget) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn InternalWinId(self: QTermWidget) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn EffectiveWinId(self: QTermWidget) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Style(self: QTermWidget) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QTermWidget, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsTopLevel(self: QTermWidget) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsWindow(self: QTermWidget) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsModal(self: QTermWidget) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

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
    pub fn WindowModality(self: QTermWidget) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QTermWidget, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsEnabled(self: QTermWidget) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

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
    pub fn IsEnabledTo(self: QTermWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SetEnabled(self: QTermWidget, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

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
    pub fn SetDisabled(self: QTermWidget, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

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
    pub fn SetWindowModified(self: QTermWidget, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn FrameGeometry(self: QTermWidget) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Geometry(self: QTermWidget) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn NormalGeometry(self: QTermWidget) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn X(self: QTermWidget) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Y(self: QTermWidget) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Pos(self: QTermWidget) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn FrameSize(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Size(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Width(self: QTermWidget) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Height(self: QTermWidget) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Rect(self: QTermWidget) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ChildrenRect(self: QTermWidget) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ChildrenRegion(self: QTermWidget) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn MinimumSize(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn MaximumSize(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn MinimumWidth(self: QTermWidget) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn MinimumHeight(self: QTermWidget) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn MaximumWidth(self: QTermWidget) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn MaximumHeight(self: QTermWidget) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QTermWidget, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

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
    pub fn SetMinimumSize2(self: QTermWidget, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QTermWidget, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

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
    pub fn SetMaximumSize2(self: QTermWidget, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

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
    pub fn SetMinimumWidth(self: QTermWidget, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

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
    pub fn SetMinimumHeight(self: QTermWidget, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

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
    pub fn SetMaximumWidth(self: QTermWidget, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

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
    pub fn SetMaximumHeight(self: QTermWidget, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SizeIncrement(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QTermWidget, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

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
    pub fn SetSizeIncrement2(self: QTermWidget, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn BaseSize(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QTermWidget, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

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
    pub fn SetBaseSize2(self: QTermWidget, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

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
    pub fn SetFixedSize(self: QTermWidget, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

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
    pub fn SetFixedSize2(self: QTermWidget, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

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
    pub fn SetFixedWidth(self: QTermWidget, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

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
    pub fn SetFixedHeight(self: QTermWidget, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

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
    pub fn MapToGlobal(self: QTermWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapToGlobal2(self: QTermWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromGlobal(self: QTermWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromGlobal2(self: QTermWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapToParent(self: QTermWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapToParent2(self: QTermWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromParent(self: QTermWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapFromParent2(self: QTermWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

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
    pub fn MapTo(self: QTermWidget, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapTo(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

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
    pub fn MapTo2(self: QTermWidget, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapTo2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

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
    pub fn MapFrom(self: QTermWidget, param1: anytype, param2: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFrom(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

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
    pub fn MapFrom2(self: QTermWidget, param1: anytype, param2: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFrom2(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#window)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Window(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn NativeParentWidget(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn TopLevelWidget(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Palette(self: QTermWidget) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QTermWidget, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QTermWidget, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

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
    pub fn BackgroundRole(self: QTermWidget) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QTermWidget, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

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
    pub fn ForegroundRole(self: QTermWidget) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Font(self: QTermWidget) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QTermWidget, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn FontMetrics(self: QTermWidget) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn FontInfo(self: QTermWidget) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Cursor(self: QTermWidget) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QTermWidget, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn UnsetCursor(self: QTermWidget) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

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
    pub fn SetMouseTracking(self: QTermWidget, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn HasMouseTracking(self: QTermWidget) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn UnderMouse(self: QTermWidget) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

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
    pub fn SetTabletTracking(self: QTermWidget, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn HasTabletTracking(self: QTermWidget) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QTermWidget, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QTermWidget, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Mask(self: QTermWidget) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ClearMask(self: QTermWidget) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

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
    pub fn Render(self: QTermWidget, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

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
    pub fn Render2(self: QTermWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Grab(self: QTermWidget) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn GraphicsEffect(self: QTermWidget) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

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
    pub fn SetGraphicsEffect(self: QTermWidget, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

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
    pub fn GrabGesture(self: QTermWidget, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn UngrabGesture(self: QTermWidget, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QTermWidget, windowTitle: []const u8) void {
        const windowTitle_str = qtc.libqt_string{
            .len = windowTitle.len,
            .data = windowTitle.ptr,
        };
        qtc.QWidget_SetWindowTitle(@ptrCast(self.ptr), windowTitle_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QTermWidget, styleSheet: []const u8) void {
        const styleSheet_str = qtc.libqt_string{
            .len = styleSheet.len,
            .data = styleSheet.ptr,
        };
        qtc.QWidget_SetStyleSheet(@ptrCast(self.ptr), styleSheet_str);
    }

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
    pub fn StyleSheet(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn WindowTitle(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QTermWidget, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn WindowIcon(self: QTermWidget) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QTermWidget, windowIconText: []const u8) void {
        const windowIconText_str = qtc.libqt_string{
            .len = windowIconText.len,
            .data = windowIconText.ptr,
        };
        qtc.QWidget_SetWindowIconText(@ptrCast(self.ptr), windowIconText_str);
    }

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
    pub fn WindowIconText(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QTermWidget, windowRole: []const u8) void {
        const windowRole_str = qtc.libqt_string{
            .len = windowRole.len,
            .data = windowRole.ptr,
        };
        qtc.QWidget_SetWindowRole(@ptrCast(self.ptr), windowRole_str);
    }

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
    pub fn WindowRole(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWindowFilePath(self: QTermWidget, filePath: []const u8) void {
        const filePath_str = qtc.libqt_string{
            .len = filePath.len,
            .data = filePath.ptr,
        };
        qtc.QWidget_SetWindowFilePath(@ptrCast(self.ptr), filePath_str);
    }

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
    pub fn WindowFilePath(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetWindowOpacity(self: QTermWidget, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn WindowOpacity(self: QTermWidget) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsWindowModified(self: QTermWidget) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QTermWidget, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QWidget_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

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
    pub fn ToolTip(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetToolTipDuration(self: QTermWidget, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ToolTipDuration(self: QTermWidget) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QTermWidget, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QWidget_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

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
    pub fn StatusTip(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QTermWidget, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QWidget_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

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
    pub fn WhatsThis(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn AccessibleName(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetAccessibleName(self: QTermWidget, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QWidget_SetAccessibleName(@ptrCast(self.ptr), name_str);
    }

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
    pub fn AccessibleDescription(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetAccessibleDescription(self: QTermWidget, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.QWidget_SetAccessibleDescription(@ptrCast(self.ptr), description_str);
    }

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
    pub fn SetLayoutDirection(self: QTermWidget, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

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
    pub fn LayoutDirection(self: QTermWidget) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn UnsetLayoutDirection(self: QTermWidget) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QTermWidget, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Locale(self: QTermWidget) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn UnsetLocale(self: QTermWidget) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsRightToLeft(self: QTermWidget) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsLeftToRight(self: QTermWidget) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SetFocus(self: QTermWidget) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsActiveWindow(self: QTermWidget) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ActivateWindow(self: QTermWidget) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ClearFocus(self: QTermWidget) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

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
    pub fn SetFocus2(self: QTermWidget, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

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
    pub fn FocusPolicy(self: QTermWidget) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

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
    pub fn SetFocusPolicy(self: QTermWidget, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn HasFocus(self: QTermWidget) bool {
        return qtc.QWidget_HasFocus(@ptrCast(self.ptr));
    }

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
    pub fn SetTabOrder(param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        comptime _ = @TypeOf(param2)._is_QWidget;
        qtc.QWidget_SetTabOrder(@ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QTermWidget, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn FocusProxy(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

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
    pub fn ContextMenuPolicy(self: QTermWidget) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

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
    pub fn SetContextMenuPolicy(self: QTermWidget, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn GrabMouse(self: QTermWidget) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

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
    pub fn GrabMouse2(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ReleaseMouse(self: QTermWidget) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn GrabKeyboard(self: QTermWidget) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ReleaseKeyboard(self: QTermWidget) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

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
    pub fn GrabShortcut(self: QTermWidget, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

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
    pub fn ReleaseShortcut(self: QTermWidget, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn SetShortcutEnabled(self: QTermWidget, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn SetShortcutAutoRepeat(self: QTermWidget, id: i32) void {
        qtc.QWidget_SetShortcutAutoRepeat(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseGrabber)
    ///
    pub fn MouseGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_MouseGrabber() };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyboardGrabber)
    ///
    pub fn KeyboardGrabber() QWidget {
        return .{ .ptr = qtc.QWidget_KeyboardGrabber() };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn UpdatesEnabled(self: QTermWidget) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

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
    pub fn SetUpdatesEnabled(self: QTermWidget, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn GraphicsProxyWidget(self: QTermWidget) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Update(self: QTermWidget) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Repaint(self: QTermWidget) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QTermWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

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
    pub fn Update3(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Update4(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QTermWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

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
    pub fn Repaint3(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Repaint4(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn SetHidden(self: QTermWidget, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Show(self: QTermWidget) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Hide(self: QTermWidget) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ShowMinimized(self: QTermWidget) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ShowMaximized(self: QTermWidget) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ShowFullScreen(self: QTermWidget) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ShowNormal(self: QTermWidget) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Close(self: QTermWidget) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Raise(self: QTermWidget) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Lower(self: QTermWidget) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

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
    pub fn StackUnder(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QTermWidget, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

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
    pub fn Move2(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn Resize(self: QTermWidget, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

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
    pub fn Resize2(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QTermWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QTermWidget, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

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
    pub fn SaveGeometry(self: QTermWidget, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtermwidget.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QTermWidget, geometry: []u8) bool {
        const geometry_str = qtc.libqt_string{
            .len = geometry.len,
            .data = geometry.ptr,
        };
        return qtc.QWidget_RestoreGeometry(@ptrCast(self.ptr), geometry_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#adjustSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn AdjustSize(self: QTermWidget) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsVisible(self: QTermWidget) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

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
    pub fn IsVisibleTo(self: QTermWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsHidden(self: QTermWidget) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsMinimized(self: QTermWidget) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsMaximized(self: QTermWidget) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsFullScreen(self: QTermWidget) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

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
    pub fn WindowState(self: QTermWidget) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

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
    pub fn SetWindowState(self: QTermWidget, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

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
    pub fn OverrideWindowState(self: QTermWidget, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SizePolicy(self: QTermWidget) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QTermWidget, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

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
    pub fn SetSizePolicy2(self: QTermWidget, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn VisibleRegion(self: QTermWidget) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

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
    pub fn SetContentsMargins(self: QTermWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

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
    pub fn SetContentsMargins2(self: QTermWidget, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ContentsMargins(self: QTermWidget) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ContentsRect(self: QTermWidget) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Layout(self: QTermWidget) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QTermWidget, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn UpdateGeometry(self: QTermWidget) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QTermWidget, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QTermWidget, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

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
    pub fn Scroll(self: QTermWidget, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

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
    pub fn Scroll2(self: QTermWidget, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn FocusWidget(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn NextInFocusChain(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn PreviousInFocusChain(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn AcceptDrops(self: QTermWidget) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

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
    pub fn SetAcceptDrops(self: QTermWidget, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

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
    pub fn AddAction(self: QTermWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QTermWidget, actions: []QAction) void {
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_AddActions(@ptrCast(self.ptr), actions_list);
    }

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
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QTermWidget, before: anytype, actions: []QAction) void {
        comptime _ = @TypeOf(before)._is_QAction;
        const actions_list = qtc.libqt_list{
            .len = actions.len,
            .data = @ptrCast(actions.ptr),
        };
        qtc.QWidget_InsertActions(@ptrCast(self.ptr), @ptrCast(before.ptr), actions_list);
    }

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
    pub fn InsertAction(self: QTermWidget, before: anytype, action: anytype) void {
        comptime _ = @TypeOf(before)._is_QAction;
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_InsertAction(@ptrCast(self.ptr), @ptrCast(before.ptr), @ptrCast(action.ptr));
    }

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
    pub fn RemoveAction(self: QTermWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

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
    pub fn Actions(self: QTermWidget, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qtermwidget.Actions: Memory allocation failed");
        const _data: [*]QtC.QAction = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn AddAction2(self: QTermWidget, text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction2(@ptrCast(self.ptr), text_str) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QTermWidget, icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction3(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str) };
    }

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
    pub fn AddAction4(self: QTermWidget, text: []const u8, shortcut: anytype) QAction {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction4(@ptrCast(self.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QTermWidget, icon: anytype, text: []const u8, shortcut: anytype) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction5(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str, @ptrCast(shortcut.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#parentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ParentWidget(self: QTermWidget) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

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
    pub fn SetWindowFlags(self: QTermWidget, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn WindowFlags(self: QTermWidget) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

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
    pub fn SetWindowFlag(self: QTermWidget, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OverrideWindowFlags(self: QTermWidget, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

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
    pub fn WindowType(self: QTermWidget) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: usize `
    ///
    pub fn Find(param1: usize) QWidget {
        return .{ .ptr = qtc.QWidget_Find(@bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QTermWidget, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

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
    pub fn ChildAt2(self: QTermWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

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
    pub fn ChildAt3(self: QTermWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

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
    pub fn SetAttribute(self: QTermWidget, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn TestAttribute(self: QTermWidget, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn EnsurePolished(self: QTermWidget) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

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
    pub fn IsAncestorOf(self: QTermWidget, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn AutoFillBackground(self: QTermWidget) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

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
    pub fn SetAutoFillBackground(self: QTermWidget, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn BackingStore(self: QTermWidget) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn WindowHandle(self: QTermWidget) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Screen(self: QTermWidget) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QTermWidget, screen: anytype) void {
        comptime _ = @TypeOf(screen)._is_QScreen;
        qtc.QWidget_SetScreen(@ptrCast(self.ptr), @ptrCast(screen.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    pub fn CreateWindowContainer(window: anytype) QWidget {
        comptime _ = @TypeOf(window)._is_QWindow;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer(@ptrCast(window.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitleChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QTermWidget, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QWidget_WindowTitleChanged(@ptrCast(self.ptr), title_str);
    }

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
    pub fn OnWindowTitleChanged(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QTermWidget, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

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
    pub fn OnWindowIconChanged(self: QTermWidget, callback: *const fn (QTermWidget, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn WindowIconTextChanged(self: QTermWidget, iconText: []const u8) void {
        const iconText_str = qtc.libqt_string{
            .len = iconText.len,
            .data = iconText.ptr,
        };
        qtc.QWidget_WindowIconTextChanged(@ptrCast(self.ptr), iconText_str);
    }

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
    pub fn OnWindowIconTextChanged(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QTermWidget, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

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
    pub fn OnCustomContextMenuRequested(self: QTermWidget, callback: *const fn (QTermWidget, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InputMethodHints(self: QTermWidget) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

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
    pub fn SetInputMethodHints(self: QTermWidget, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

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
    pub fn Render22(self: QTermWidget, target: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render22(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr));
    }

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
    pub fn Render3(self: QTermWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render3(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

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
    pub fn Render4(self: QTermWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render4(@ptrCast(self.ptr), @ptrCast(target.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

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
    pub fn Render23(self: QTermWidget, painter: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render23(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr));
    }

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
    pub fn Render32(self: QTermWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render32(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
    }

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
    pub fn Render42(self: QTermWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render42(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
    }

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
    pub fn Grab1(self: QTermWidget, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

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
    pub fn GrabGesture2(self: QTermWidget, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

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
    pub fn GrabShortcut2(self: QTermWidget, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

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
    pub fn SetShortcutEnabled2(self: QTermWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

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
    pub fn SetShortcutAutoRepeat2(self: QTermWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

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
    pub fn SetWindowFlag2(self: QTermWidget, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

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
    pub fn SetAttribute2(self: QTermWidget, param1: i32, on: bool) void {
        qtc.QWidget_SetAttribute2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` parent: QWidget `
    ///
    pub fn CreateWindowContainer2(window: anytype, parent: anytype) QWidget {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer2(@ptrCast(window.ptr), @ptrCast(parent.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWindowContainer)
    ///
    /// ## Parameter(s):
    ///
    /// ` window: QWindow `
    ///
    /// ` parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn CreateWindowContainer3(window: anytype, parent: anytype, flags: i32) QWidget {
        comptime _ = @TypeOf(window)._is_QWindow;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer3(@ptrCast(window.ptr), @ptrCast(parent.ptr), @bitCast(flags)) };
    }

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
    pub fn ObjectName(self: QTermWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtermwidget.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

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
    pub fn SetObjectName(self: QTermWidget, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsWidgetType(self: QTermWidget) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsWindowType(self: QTermWidget) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn IsQuickItemType(self: QTermWidget) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn SignalsBlocked(self: QTermWidget) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

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
    pub fn BlockSignals(self: QTermWidget, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Thread(self: QTermWidget) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTermWidget, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

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
    pub fn StartTimer(self: QTermWidget, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

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
    pub fn StartTimer2(self: QTermWidget, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

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
    pub fn KillTimer(self: QTermWidget, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn KillTimer2(self: QTermWidget, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

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
    pub fn Children(self: QTermWidget, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtermwidget.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

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
    pub fn InstallEventFilter(self: QTermWidget, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

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
    pub fn RemoveEventFilter(self: QTermWidget, obj: anytype) void {
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
    /// ` self: QTermWidget `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTermWidget, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTermWidget `
    ///
    pub fn Disconnect3(self: QTermWidget) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

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
    pub fn Disconnect4(self: QTermWidget, receiver: anytype) bool {
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
    /// ` self: QTermWidget `
    ///
    pub fn DumpObjectTree(self: QTermWidget) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn DumpObjectInfo(self: QTermWidget) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

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
    pub fn SetProperty(self: QTermWidget, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTermWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTermWidget, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

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
    pub fn DynamicPropertyNames(self: QTermWidget, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtermwidget.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtermwidget.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTermWidget `
    ///
    pub fn BindingStorage(self: QTermWidget) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn BindingStorage2(self: QTermWidget) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Destroyed(self: QTermWidget) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroyed(self: QTermWidget, callback: *const fn (QTermWidget) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Parent(self: QTermWidget) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

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
    pub fn Inherits(self: QTermWidget, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn DeleteLater(self: QTermWidget) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

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
    pub fn StartTimer22(self: QTermWidget, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

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
    pub fn StartTimer23(self: QTermWidget, time: i64, timerType: i32) i32 {
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
    /// ` self: QTermWidget `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTermWidget, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTermWidget, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn Disconnect22(self: QTermWidget, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTermWidget, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTermWidget `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTermWidget, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTermWidget `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnDestroyed1(self: QTermWidget, callback: *const fn (QTermWidget, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn PaintingActive(self: QTermWidget) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn WidthMM(self: QTermWidget) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn HeightMM(self: QTermWidget) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn LogicalDpiX(self: QTermWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn LogicalDpiY(self: QTermWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn PhysicalDpiX(self: QTermWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn PhysicalDpiY(self: QTermWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn DevicePixelRatio(self: QTermWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn DevicePixelRatioF(self: QTermWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn ColorCount(self: QTermWidget) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTermWidget `
    ///
    pub fn Depth(self: QTermWidget) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioFScale)
    ///
    pub fn DevicePixelRatioFScale() f64 {
        return qtc.QPaintDevice_DevicePixelRatioFScale();
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#encodeMetricF)
    ///
    /// ## Parameter(s):
    ///
    /// ` metric: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` value: f64 `
    ///
    pub fn EncodeMetricF(metric: i32, value: f64) i32 {
        return qtc.QPaintDevice_EncodeMetricF(@bitCast(metric), @bitCast(value));
    }

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
    pub fn OperatorAssign(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTermWidgetInterface;
        qtc.QTermWidgetInterface_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn DevType(self: QTermWidget) i32 {
        return qtc.QTermWidget_DevType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDevType` instead
    ///
    pub const QBaseDevType = SuperDevType;

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
    pub fn SuperDevType(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperDevType(@ptrCast(self.ptr));
    }

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
    pub fn OnDevType(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SetVisible(self: QTermWidget, visible: bool) void {
        qtc.QTermWidget_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `SuperSetVisible` instead
    ///
    pub const QBaseSetVisible = SuperSetVisible;

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
    pub fn SuperSetVisible(self: QTermWidget, visible: bool) void {
        qtc.QTermWidget_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

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
    pub fn OnSetVisible(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) void) void {
        qtc.QTermWidget_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn MinimumSizeHint(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QTermWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

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
    pub fn SuperMinimumSizeHint(self: QTermWidget) QSize {
        return .{ .ptr = qtc.QTermWidget_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

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
    pub fn OnMinimumSizeHint(self: QTermWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTermWidget_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HeightForWidth(self: QTermWidget, param1: i32) i32 {
        return qtc.QTermWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperHeightForWidth` instead
    ///
    pub const QBaseHeightForWidth = SuperHeightForWidth;

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
    pub fn SuperHeightForWidth(self: QTermWidget, param1: i32) i32 {
        return qtc.QTermWidget_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnHeightForWidth(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) i32) void {
        qtc.QTermWidget_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn HasHeightForWidth(self: QTermWidget) bool {
        return qtc.QTermWidget_HasHeightForWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHasHeightForWidth` instead
    ///
    pub const QBaseHasHeightForWidth = SuperHasHeightForWidth;

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
    pub fn SuperHasHeightForWidth(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

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
    pub fn OnHasHeightForWidth(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn PaintEngine(self: QTermWidget) QPaintEngine {
        return .{ .ptr = qtc.QTermWidget_PaintEngine(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperPaintEngine` instead
    ///
    pub const QBasePaintEngine = SuperPaintEngine;

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
    pub fn SuperPaintEngine(self: QTermWidget) QPaintEngine {
        return .{ .ptr = qtc.QTermWidget_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

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
    pub fn OnPaintEngine(self: QTermWidget, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QTermWidget_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn Event(self: QTermWidget, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTermWidget_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QTermWidget, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTermWidget_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEvent(self: QTermWidget, callback: *const fn (QTermWidget, QEvent) callconv(.c) bool) void {
        qtc.QTermWidget_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTermWidget_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

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
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTermWidget_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMousePressEvent(self: QTermWidget, callback: *const fn (QTermWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTermWidget_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

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
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTermWidget_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMouseReleaseEvent(self: QTermWidget, callback: *const fn (QTermWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTermWidget_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

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
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTermWidget_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMouseDoubleClickEvent(self: QTermWidget, callback: *const fn (QTermWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTermWidget_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

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
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTermWidget_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMouseMoveEvent(self: QTermWidget, callback: *const fn (QTermWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QTermWidget_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

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
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QTermWidget_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnWheelEvent(self: QTermWidget, callback: *const fn (QTermWidget, QWheelEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTermWidget_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

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
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTermWidget_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnKeyPressEvent(self: QTermWidget, callback: *const fn (QTermWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTermWidget_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

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
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTermWidget_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnKeyReleaseEvent(self: QTermWidget, callback: *const fn (QTermWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTermWidget_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

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
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTermWidget_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnFocusInEvent(self: QTermWidget, callback: *const fn (QTermWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTermWidget_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

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
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTermWidget_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnFocusOutEvent(self: QTermWidget, callback: *const fn (QTermWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QTermWidget_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEnterEvent` instead
    ///
    pub const QBaseEnterEvent = SuperEnterEvent;

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
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QTermWidget_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEnterEvent(self: QTermWidget, callback: *const fn (QTermWidget, QEnterEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTermWidget_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperLeaveEvent` instead
    ///
    pub const QBaseLeaveEvent = SuperLeaveEvent;

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
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTermWidget_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnLeaveEvent(self: QTermWidget, callback: *const fn (QTermWidget, QEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QTermWidget_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

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
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QTermWidget_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnPaintEvent(self: QTermWidget, callback: *const fn (QTermWidget, QPaintEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QTermWidget_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMoveEvent` instead
    ///
    pub const QBaseMoveEvent = SuperMoveEvent;

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
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QTermWidget_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnMoveEvent(self: QTermWidget, callback: *const fn (QTermWidget, QMoveEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QTermWidget_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

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
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QTermWidget_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCloseEvent(self: QTermWidget, callback: *const fn (QTermWidget, QCloseEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QTermWidget_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

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
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QTermWidget_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnContextMenuEvent(self: QTermWidget, callback: *const fn (QTermWidget, QContextMenuEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QTermWidget_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTabletEvent` instead
    ///
    pub const QBaseTabletEvent = SuperTabletEvent;

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
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QTermWidget_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTabletEvent(self: QTermWidget, callback: *const fn (QTermWidget, QTabletEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QTermWidget_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperActionEvent` instead
    ///
    pub const QBaseActionEvent = SuperActionEvent;

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
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QTermWidget_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnActionEvent(self: QTermWidget, callback: *const fn (QTermWidget, QActionEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QTermWidget_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

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
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QTermWidget_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnDragEnterEvent(self: QTermWidget, callback: *const fn (QTermWidget, QDragEnterEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QTermWidget_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

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
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QTermWidget_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnDragMoveEvent(self: QTermWidget, callback: *const fn (QTermWidget, QDragMoveEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QTermWidget_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

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
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QTermWidget_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnDragLeaveEvent(self: QTermWidget, callback: *const fn (QTermWidget, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QTermWidget_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

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
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QTermWidget_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnDropEvent(self: QTermWidget, callback: *const fn (QTermWidget, QDropEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QTermWidget_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

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
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QTermWidget_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnShowEvent(self: QTermWidget, callback: *const fn (QTermWidget, QShowEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QTermWidget_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

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
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QTermWidget_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnHideEvent(self: QTermWidget, callback: *const fn (QTermWidget, QHideEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn NativeEvent(self: QTermWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTermWidget_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `SuperNativeEvent` instead
    ///
    pub const QBaseNativeEvent = SuperNativeEvent;

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
    pub fn SuperNativeEvent(self: QTermWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTermWidget_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

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
    pub fn OnNativeEvent(self: QTermWidget, callback: *const fn (QTermWidget, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QTermWidget_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ChangeEvent(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QTermWidget_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

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
    pub fn SuperChangeEvent(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QTermWidget_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnChangeEvent(self: QTermWidget, callback: *const fn (QTermWidget, QEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Metric(self: QTermWidget, param1: i32) i32 {
        return qtc.QTermWidget_Metric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperMetric` instead
    ///
    pub const QBaseMetric = SuperMetric;

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
    pub fn SuperMetric(self: QTermWidget, param1: i32) i32 {
        return qtc.QTermWidget_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

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
    pub fn OnMetric(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) i32) void {
        qtc.QTermWidget_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InitPainter(self: QTermWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTermWidget_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitPainter` instead
    ///
    pub const QBaseInitPainter = SuperInitPainter;

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
    pub fn SuperInitPainter(self: QTermWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTermWidget_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

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
    pub fn OnInitPainter(self: QTermWidget, callback: *const fn (QTermWidget, QPainter) callconv(.c) void) void {
        qtc.QTermWidget_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Redirected(self: QTermWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTermWidget_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperRedirected` instead
    ///
    pub const QBaseRedirected = SuperRedirected;

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
    pub fn SuperRedirected(self: QTermWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTermWidget_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

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
    pub fn OnRedirected(self: QTermWidget, callback: *const fn (QTermWidget, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QTermWidget_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SharedPainter(self: QTermWidget) QPainter {
        return .{ .ptr = qtc.QTermWidget_SharedPainter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSharedPainter` instead
    ///
    pub const QBaseSharedPainter = SuperSharedPainter;

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
    pub fn SuperSharedPainter(self: QTermWidget) QPainter {
        return .{ .ptr = qtc.QTermWidget_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSharedPainter(self: QTermWidget, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QTermWidget_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InputMethodEvent(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QTermWidget_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

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
    pub fn SuperInputMethodEvent(self: QTermWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QTermWidget_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

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
    pub fn OnInputMethodEvent(self: QTermWidget, callback: *const fn (QTermWidget, QInputMethodEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn InputMethodQuery(self: QTermWidget, param1: i32) QVariant {
        return .{ .ptr = qtc.QTermWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

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
    pub fn SuperInputMethodQuery(self: QTermWidget, param1: i32) QVariant {
        return .{ .ptr = qtc.QTermWidget_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

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
    pub fn OnInputMethodQuery(self: QTermWidget, callback: *const fn (QTermWidget, i32) callconv(.c) QVariant) void {
        qtc.QTermWidget_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FocusNextPrevChild(self: QTermWidget, next: bool) bool {
        return qtc.QTermWidget_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

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
    pub fn SuperFocusNextPrevChild(self: QTermWidget, next: bool) bool {
        return qtc.QTermWidget_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

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
    pub fn OnFocusNextPrevChild(self: QTermWidget, callback: *const fn (QTermWidget, bool) callconv(.c) bool) void {
        qtc.QTermWidget_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTermWidget, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTermWidget_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QTermWidget, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTermWidget_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnEventFilter(self: QTermWidget, callback: *const fn (QTermWidget, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTermWidget_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTermWidget_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTermWidget_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnTimerEvent(self: QTermWidget, callback: *const fn (QTermWidget, QTimerEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTermWidget_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTermWidget_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnChildEvent(self: QTermWidget, callback: *const fn (QTermWidget, QChildEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTermWidget_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QTermWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTermWidget_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

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
    pub fn OnCustomEvent(self: QTermWidget, callback: *const fn (QTermWidget, QEvent) callconv(.c) void) void {
        qtc.QTermWidget_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn ConnectNotify(self: QTermWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTermWidget_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QTermWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTermWidget_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnConnectNotify(self: QTermWidget, callback: *const fn (QTermWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QTermWidget_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn DisconnectNotify(self: QTermWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTermWidget_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QTermWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTermWidget_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnDisconnectNotify(self: QTermWidget, callback: *const fn (QTermWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QTermWidget_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn UpdateMicroFocus(self: QTermWidget) void {
        qtc.QTermWidget_UpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateMicroFocus` instead
    ///
    pub const QBaseUpdateMicroFocus = SuperUpdateMicroFocus;

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
    pub fn SuperUpdateMicroFocus(self: QTermWidget) void {
        qtc.QTermWidget_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

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
    pub fn OnUpdateMicroFocus(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Create(self: QTermWidget) void {
        qtc.QTermWidget_Create(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCreate` instead
    ///
    pub const QBaseCreate = SuperCreate;

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
    pub fn SuperCreate(self: QTermWidget) void {
        qtc.QTermWidget_SuperCreate(@ptrCast(self.ptr));
    }

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
    pub fn OnCreate(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Destroy(self: QTermWidget) void {
        qtc.QTermWidget_Destroy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDestroy` instead
    ///
    pub const QBaseDestroy = SuperDestroy;

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
    pub fn SuperDestroy(self: QTermWidget) void {
        qtc.QTermWidget_SuperDestroy(@ptrCast(self.ptr));
    }

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
    pub fn OnDestroy(self: QTermWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTermWidget_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FocusNextChild(self: QTermWidget) bool {
        return qtc.QTermWidget_FocusNextChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusNextChild` instead
    ///
    pub const QBaseFocusNextChild = SuperFocusNextChild;

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
    pub fn SuperFocusNextChild(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperFocusNextChild(@ptrCast(self.ptr));
    }

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
    pub fn OnFocusNextChild(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn FocusPreviousChild(self: QTermWidget) bool {
        return qtc.QTermWidget_FocusPreviousChild(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusPreviousChild` instead
    ///
    pub const QBaseFocusPreviousChild = SuperFocusPreviousChild;

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
    pub fn SuperFocusPreviousChild(self: QTermWidget) bool {
        return qtc.QTermWidget_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

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
    pub fn OnFocusPreviousChild(self: QTermWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTermWidget_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Sender(self: QTermWidget) QObject {
        return .{ .ptr = qtc.QTermWidget_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTermWidget `
    ///
    pub fn SuperSender(self: QTermWidget) QObject {
        return .{ .ptr = qtc.QTermWidget_SuperSender(@ptrCast(self.ptr)) };
    }

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
    pub fn OnSender(self: QTermWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTermWidget_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn SenderSignalIndex(self: QTermWidget) i32 {
        return qtc.QTermWidget_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTermWidget `
    ///
    pub fn SuperSenderSignalIndex(self: QTermWidget) i32 {
        return qtc.QTermWidget_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

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
    pub fn OnSenderSignalIndex(self: QTermWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTermWidget_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn Receivers(self: QTermWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTermWidget_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QTermWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTermWidget_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

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
    pub fn OnReceivers(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTermWidget_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn IsSignalConnected(self: QTermWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTermWidget_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTermWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QTermWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTermWidget_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

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
    pub fn OnIsSignalConnected(self: QTermWidget, callback: *const fn (QTermWidget, QMetaMethod) callconv(.c) bool) void {
        qtc.QTermWidget_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn GetDecodedMetricF(self: QTermWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QTermWidget_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// ### DEPRECATED: Use `SuperGetDecodedMetricF` instead
    ///
    pub const QBaseGetDecodedMetricF = SuperGetDecodedMetricF;

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
    pub fn SuperGetDecodedMetricF(self: QTermWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QTermWidget_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

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
    pub fn OnGetDecodedMetricF(self: QTermWidget, callback: *const fn (QTermWidget, i32, i32) callconv(.c) f64) void {
        qtc.QTermWidget_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

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
    pub fn OnObjectNameChanged(self: QTermWidget, callback: *const fn (QTermWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTermWidget `
    ///
    pub fn Delete(self: QTermWidget) void {
        qtc.QTermWidget_Delete(@ptrCast(self.ptr));
    }
};
