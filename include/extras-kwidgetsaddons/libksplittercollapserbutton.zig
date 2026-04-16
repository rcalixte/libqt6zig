const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QButtonGroup = @import("libqt6").QButtonGroup;
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
const QIcon = @import("libqt6").QIcon;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMenu = @import("libqt6").QMenu;
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
const QSplitter = @import("libqt6").QSplitter;
const QStyle = @import("libqt6").QStyle;
const QStyleOptionToolButton = @import("libqt6").QStyleOptionToolButton;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qtoolbutton_enums = @import("../libqtoolbutton.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html)
pub const KSplitterCollapserButton = extern struct {
    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KSplitterCollapserButton,

    pub const _is_KSplitterCollapserButton = {};
    pub const _is_QToolButton = {};
    pub const _is_QAbstractButton = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new KSplitterCollapserButton object.
    ///
    /// ## Parameter(s):
    ///
    /// ` childWidget: QWidget `
    ///
    /// ` splitter: QSplitter `
    ///
    pub fn New(childWidget: anytype, splitter: anytype) KSplitterCollapserButton {
        comptime _ = @TypeOf(childWidget)._is_QWidget;
        comptime _ = @TypeOf(splitter)._is_QSplitter;
        return .{ .ptr = qtc.KSplitterCollapserButton_new(@ptrCast(childWidget.ptr), @ptrCast(splitter.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn MetaObject(self: KSplitterCollapserButton) QMetaObject {
        return .{ .ptr = qtc.KSplitterCollapserButton_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KSplitterCollapserButton_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperMetaObject(self: KSplitterCollapserButton) QMetaObject {
        return .{ .ptr = qtc.KSplitterCollapserButton_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KSplitterCollapserButton, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSplitterCollapserButton_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KSplitterCollapserButton_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KSplitterCollapserButton, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KSplitterCollapserButton_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KSplitterCollapserButton, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSplitterCollapserButton_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KSplitterCollapserButton_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KSplitterCollapserButton, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KSplitterCollapserButton_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#isWidgetCollapsed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsWidgetCollapsed(self: KSplitterCollapserButton) bool {
        return qtc.KSplitterCollapserButton_IsWidgetCollapsed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SizeHint(self: KSplitterCollapserButton) QSize {
        return .{ .ptr = qtc.KSplitterCollapserButton_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) QSize) void {
        qtc.KSplitterCollapserButton_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperSizeHint(self: KSplitterCollapserButton) QSize {
        return .{ .ptr = qtc.KSplitterCollapserButton_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#collapse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Collapse(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_Collapse(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#restore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Restore(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_Restore(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#setCollapsed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` collapsed: bool `
    ///
    pub fn SetCollapsed(self: KSplitterCollapserButton, collapsed: bool) void {
        qtc.KSplitterCollapserButton_SetCollapsed(@ptrCast(self.ptr), collapsed);
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn EventFilter(self: KSplitterCollapserButton, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.KSplitterCollapserButton_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QObject, QEvent) callconv(.c) bool) void {
        qtc.KSplitterCollapserButton_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperEventFilter(self: KSplitterCollapserButton, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.KSplitterCollapserButton_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn PaintEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.KSplitterCollapserButton_PaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QPaintEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.KSplitterCollapserButton_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#enterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KSplitterCollapserButton_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#enterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QEnterEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEnterEvent` instead
    ///
    pub const QBaseEnterEvent = SuperEnterEvent;

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#enterEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KSplitterCollapserButton_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#leaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSplitterCollapserButton_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#leaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLeaveEvent` instead
    ///
    pub const QBaseLeaveEvent = SuperLeaveEvent;

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#leaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSplitterCollapserButton_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#showEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KSplitterCollapserButton_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#showEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QShowEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#showEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KSplitterCollapserButton_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#toolButtonStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ToolButtonStyle `
    ///
    pub fn ToolButtonStyle(self: KSplitterCollapserButton) i32 {
        return qtc.QToolButton_ToolButtonStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#arrowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ArrowType `
    ///
    pub fn ArrowType(self: KSplitterCollapserButton) i32 {
        return qtc.QToolButton_ArrowType(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setArrowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` typeVal: qnamespace_enums.ArrowType `
    ///
    pub fn SetArrowType(self: KSplitterCollapserButton, typeVal: i32) void {
        qtc.QToolButton_SetArrowType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` menu: QMenu `
    ///
    pub fn SetMenu(self: KSplitterCollapserButton, menu: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.QToolButton_SetMenu(@ptrCast(self.ptr), @ptrCast(menu.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#menu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Menu(self: KSplitterCollapserButton) QMenu {
        return .{ .ptr = qtc.QToolButton_Menu(@ptrCast(self.ptr)) };
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setPopupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` mode: qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn SetPopupMode(self: KSplitterCollapserButton, mode: i32) void {
        qtc.QToolButton_SetPopupMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#popupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn PopupMode(self: KSplitterCollapserButton) i32 {
        return qtc.QToolButton_PopupMode(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#defaultAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn DefaultAction(self: KSplitterCollapserButton) QAction {
        return .{ .ptr = qtc.QToolButton_DefaultAction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setAutoRaise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAutoRaise(self: KSplitterCollapserButton, enable: bool) void {
        qtc.QToolButton_SetAutoRaise(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#autoRaise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn AutoRaise(self: KSplitterCollapserButton) bool {
        return qtc.QToolButton_AutoRaise(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#showMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ShowMenu(self: KSplitterCollapserButton) void {
        qtc.QToolButton_ShowMenu(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setToolButtonStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` style: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn SetToolButtonStyle(self: KSplitterCollapserButton, style: i32) void {
        qtc.QToolButton_SetToolButtonStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setDefaultAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` defaultAction: QAction `
    ///
    pub fn SetDefaultAction(self: KSplitterCollapserButton, defaultAction: anytype) void {
        comptime _ = @TypeOf(defaultAction)._is_QAction;
        qtc.QToolButton_SetDefaultAction(@ptrCast(self.ptr), @ptrCast(defaultAction.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QAction `
    ///
    pub fn Triggered(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAction;
        qtc.QToolButton_Triggered(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: QAction) callconv(.c) void `
    ///
    pub fn OnTriggered(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QAction) callconv(.c) void) void {
        qtc.QToolButton_Connect_Triggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: KSplitterCollapserButton, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QAbstractButton_SetText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractButton_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: KSplitterCollapserButton, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QAbstractButton_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Icon(self: KSplitterCollapserButton) QIcon {
        return .{ .ptr = qtc.QAbstractButton_Icon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IconSize(self: KSplitterCollapserButton) QSize {
        return .{ .ptr = qtc.QAbstractButton_IconSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn SetShortcut(self: KSplitterCollapserButton, key: anytype) void {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        qtc.QAbstractButton_SetShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Shortcut(self: KSplitterCollapserButton) QKeySequence {
        return .{ .ptr = qtc.QAbstractButton_Shortcut(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` checkable: bool `
    ///
    pub fn SetCheckable(self: KSplitterCollapserButton, checkable: bool) void {
        qtc.QAbstractButton_SetCheckable(@ptrCast(self.ptr), checkable);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsCheckable(self: KSplitterCollapserButton) bool {
        return qtc.QAbstractButton_IsCheckable(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsChecked(self: KSplitterCollapserButton) bool {
        return qtc.QAbstractButton_IsChecked(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` down: bool `
    ///
    pub fn SetDown(self: KSplitterCollapserButton, down: bool) void {
        qtc.QAbstractButton_SetDown(@ptrCast(self.ptr), down);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsDown(self: KSplitterCollapserButton) bool {
        return qtc.QAbstractButton_IsDown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` autoRepeat: bool `
    ///
    pub fn SetAutoRepeat(self: KSplitterCollapserButton, autoRepeat: bool) void {
        qtc.QAbstractButton_SetAutoRepeat(@ptrCast(self.ptr), autoRepeat);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn AutoRepeat(self: KSplitterCollapserButton) bool {
        return qtc.QAbstractButton_AutoRepeat(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` autoRepeatDelay: i32 `
    ///
    pub fn SetAutoRepeatDelay(self: KSplitterCollapserButton, autoRepeatDelay: i32) void {
        qtc.QAbstractButton_SetAutoRepeatDelay(@ptrCast(self.ptr), @bitCast(autoRepeatDelay));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn AutoRepeatDelay(self: KSplitterCollapserButton) i32 {
        return qtc.QAbstractButton_AutoRepeatDelay(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` autoRepeatInterval: i32 `
    ///
    pub fn SetAutoRepeatInterval(self: KSplitterCollapserButton, autoRepeatInterval: i32) void {
        qtc.QAbstractButton_SetAutoRepeatInterval(@ptrCast(self.ptr), @bitCast(autoRepeatInterval));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn AutoRepeatInterval(self: KSplitterCollapserButton) i32 {
        return qtc.QAbstractButton_AutoRepeatInterval(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` autoExclusive: bool `
    ///
    pub fn SetAutoExclusive(self: KSplitterCollapserButton, autoExclusive: bool) void {
        qtc.QAbstractButton_SetAutoExclusive(@ptrCast(self.ptr), autoExclusive);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn AutoExclusive(self: KSplitterCollapserButton) bool {
        return qtc.QAbstractButton_AutoExclusive(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Group(self: KSplitterCollapserButton) QButtonGroup {
        return .{ .ptr = qtc.QAbstractButton_Group(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` size: QSize `
    ///
    pub fn SetIconSize(self: KSplitterCollapserButton, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QAbstractButton_SetIconSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn AnimateClick(self: KSplitterCollapserButton) void {
        qtc.QAbstractButton_AnimateClick(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#click)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Click(self: KSplitterCollapserButton) void {
        qtc.QAbstractButton_Click(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Toggle(self: KSplitterCollapserButton) void {
        qtc.QAbstractButton_Toggle(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` checked: bool `
    ///
    pub fn SetChecked(self: KSplitterCollapserButton, checked: bool) void {
        qtc.QAbstractButton_SetChecked(@ptrCast(self.ptr), checked);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Pressed(self: KSplitterCollapserButton) void {
        qtc.QAbstractButton_Pressed(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton) callconv(.c) void `
    ///
    pub fn OnPressed(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Released(self: KSplitterCollapserButton) void {
        qtc.QAbstractButton_Released(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton) callconv(.c) void `
    ///
    pub fn OnReleased(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Clicked(self: KSplitterCollapserButton) void {
        qtc.QAbstractButton_Clicked(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton) callconv(.c) void `
    ///
    pub fn OnClicked(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` checked: bool `
    ///
    pub fn Toggled(self: KSplitterCollapserButton, checked: bool) void {
        qtc.QAbstractButton_Toggled(@ptrCast(self.ptr), checked);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, checked: bool) callconv(.c) void `
    ///
    pub fn OnToggled(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, bool) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Toggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` checked: bool `
    ///
    pub fn Clicked1(self: KSplitterCollapserButton, checked: bool) void {
        qtc.QAbstractButton_Clicked1(@ptrCast(self.ptr), checked);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, checked: bool) callconv(.c) void `
    ///
    pub fn OnClicked1(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, bool) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Clicked1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn WinId(self: KSplitterCollapserButton) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn CreateWinId(self: KSplitterCollapserButton) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn InternalWinId(self: KSplitterCollapserButton) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn EffectiveWinId(self: KSplitterCollapserButton) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Style(self: KSplitterCollapserButton) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KSplitterCollapserButton, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsTopLevel(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsWindow(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsModal(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KSplitterCollapserButton, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsEnabled(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KSplitterCollapserButton, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KSplitterCollapserButton, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KSplitterCollapserButton, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KSplitterCollapserButton, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn FrameGeometry(self: KSplitterCollapserButton) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Geometry(self: KSplitterCollapserButton) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn NormalGeometry(self: KSplitterCollapserButton) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn X(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Y(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Pos(self: KSplitterCollapserButton) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn FrameSize(self: KSplitterCollapserButton) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Size(self: KSplitterCollapserButton) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Width(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Height(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Rect(self: KSplitterCollapserButton) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ChildrenRect(self: KSplitterCollapserButton) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ChildrenRegion(self: KSplitterCollapserButton) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn MinimumSize(self: KSplitterCollapserButton) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn MaximumSize(self: KSplitterCollapserButton) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn MinimumWidth(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn MinimumHeight(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn MaximumWidth(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn MaximumHeight(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KSplitterCollapserButton, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KSplitterCollapserButton, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KSplitterCollapserButton, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KSplitterCollapserButton, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KSplitterCollapserButton, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KSplitterCollapserButton, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KSplitterCollapserButton, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KSplitterCollapserButton, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SizeIncrement(self: KSplitterCollapserButton) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KSplitterCollapserButton, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KSplitterCollapserButton, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn BaseSize(self: KSplitterCollapserButton) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KSplitterCollapserButton, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KSplitterCollapserButton, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KSplitterCollapserButton, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KSplitterCollapserButton, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KSplitterCollapserButton, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KSplitterCollapserButton, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KSplitterCollapserButton, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KSplitterCollapserButton, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KSplitterCollapserButton, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KSplitterCollapserButton, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KSplitterCollapserButton, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KSplitterCollapserButton, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KSplitterCollapserButton, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KSplitterCollapserButton, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KSplitterCollapserButton, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KSplitterCollapserButton, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KSplitterCollapserButton, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KSplitterCollapserButton, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Window(self: KSplitterCollapserButton) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn NativeParentWidget(self: KSplitterCollapserButton) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn TopLevelWidget(self: KSplitterCollapserButton) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Palette(self: KSplitterCollapserButton) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KSplitterCollapserButton, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KSplitterCollapserButton, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KSplitterCollapserButton, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Font(self: KSplitterCollapserButton) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KSplitterCollapserButton, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn FontMetrics(self: KSplitterCollapserButton) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn FontInfo(self: KSplitterCollapserButton) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Cursor(self: KSplitterCollapserButton) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KSplitterCollapserButton, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn UnsetCursor(self: KSplitterCollapserButton) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KSplitterCollapserButton, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn HasMouseTracking(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn UnderMouse(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KSplitterCollapserButton, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn HasTabletTracking(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KSplitterCollapserButton, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KSplitterCollapserButton, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Mask(self: KSplitterCollapserButton) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ClearMask(self: KSplitterCollapserButton) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KSplitterCollapserButton, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KSplitterCollapserButton, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Grab(self: KSplitterCollapserButton) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn GraphicsEffect(self: KSplitterCollapserButton) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KSplitterCollapserButton, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KSplitterCollapserButton, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KSplitterCollapserButton, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KSplitterCollapserButton, windowTitle: []const u8) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KSplitterCollapserButton, styleSheet: []const u8) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KSplitterCollapserButton, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn WindowIcon(self: KSplitterCollapserButton) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KSplitterCollapserButton, windowIconText: []const u8) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KSplitterCollapserButton, windowRole: []const u8) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KSplitterCollapserButton, filePath: []const u8) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KSplitterCollapserButton, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn WindowOpacity(self: KSplitterCollapserButton) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsWindowModified(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KSplitterCollapserButton, toolTip: []const u8) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KSplitterCollapserButton, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ToolTipDuration(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KSplitterCollapserButton, statusTip: []const u8) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KSplitterCollapserButton, whatsThis: []const u8) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KSplitterCollapserButton, name: []const u8) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KSplitterCollapserButton, description: []const u8) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KSplitterCollapserButton, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn UnsetLayoutDirection(self: KSplitterCollapserButton) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KSplitterCollapserButton, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Locale(self: KSplitterCollapserButton) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn UnsetLocale(self: KSplitterCollapserButton) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsRightToLeft(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsLeftToRight(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SetFocus(self: KSplitterCollapserButton) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsActiveWindow(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ActivateWindow(self: KSplitterCollapserButton) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ClearFocus(self: KSplitterCollapserButton) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KSplitterCollapserButton, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KSplitterCollapserButton, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn HasFocus(self: KSplitterCollapserButton) bool {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KSplitterCollapserButton, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn FocusProxy(self: KSplitterCollapserButton) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KSplitterCollapserButton, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn GrabMouse(self: KSplitterCollapserButton) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ReleaseMouse(self: KSplitterCollapserButton) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn GrabKeyboard(self: KSplitterCollapserButton) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ReleaseKeyboard(self: KSplitterCollapserButton) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KSplitterCollapserButton, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KSplitterCollapserButton, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KSplitterCollapserButton, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KSplitterCollapserButton, id: i32) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn UpdatesEnabled(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KSplitterCollapserButton, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn GraphicsProxyWidget(self: KSplitterCollapserButton) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Update(self: KSplitterCollapserButton) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Repaint(self: KSplitterCollapserButton) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KSplitterCollapserButton, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KSplitterCollapserButton, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KSplitterCollapserButton, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Show(self: KSplitterCollapserButton) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Hide(self: KSplitterCollapserButton) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ShowMinimized(self: KSplitterCollapserButton) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ShowMaximized(self: KSplitterCollapserButton) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ShowFullScreen(self: KSplitterCollapserButton) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ShowNormal(self: KSplitterCollapserButton) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Close(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Raise(self: KSplitterCollapserButton) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Lower(self: KSplitterCollapserButton) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KSplitterCollapserButton, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KSplitterCollapserButton, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KSplitterCollapserButton, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KSplitterCollapserButton, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("ksplittercollapserbutton.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KSplitterCollapserButton, geometry: []u8) bool {
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn AdjustSize(self: KSplitterCollapserButton) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsVisible(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KSplitterCollapserButton, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsHidden(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsMinimized(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsMaximized(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsFullScreen(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KSplitterCollapserButton, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KSplitterCollapserButton, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SizePolicy(self: KSplitterCollapserButton) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KSplitterCollapserButton, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KSplitterCollapserButton, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn VisibleRegion(self: KSplitterCollapserButton) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KSplitterCollapserButton, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KSplitterCollapserButton, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ContentsMargins(self: KSplitterCollapserButton) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ContentsRect(self: KSplitterCollapserButton) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Layout(self: KSplitterCollapserButton) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KSplitterCollapserButton, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn UpdateGeometry(self: KSplitterCollapserButton) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KSplitterCollapserButton, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KSplitterCollapserButton, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KSplitterCollapserButton, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KSplitterCollapserButton, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn FocusWidget(self: KSplitterCollapserButton) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn NextInFocusChain(self: KSplitterCollapserButton) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn PreviousInFocusChain(self: KSplitterCollapserButton) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn AcceptDrops(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KSplitterCollapserButton, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KSplitterCollapserButton, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KSplitterCollapserButton, actions: []QAction) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KSplitterCollapserButton, before: anytype, actions: []QAction) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KSplitterCollapserButton, before: anytype, action: anytype) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KSplitterCollapserButton, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("ksplittercollapserbutton.Actions: Memory allocation failed");
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KSplitterCollapserButton, text: []const u8) QAction {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KSplitterCollapserButton, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KSplitterCollapserButton, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KSplitterCollapserButton, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ParentWidget(self: KSplitterCollapserButton) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KSplitterCollapserButton, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KSplitterCollapserButton, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KSplitterCollapserButton, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KSplitterCollapserButton) i32 {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KSplitterCollapserButton, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KSplitterCollapserButton, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KSplitterCollapserButton, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KSplitterCollapserButton, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KSplitterCollapserButton, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn EnsurePolished(self: KSplitterCollapserButton) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KSplitterCollapserButton, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn AutoFillBackground(self: KSplitterCollapserButton) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KSplitterCollapserButton, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn BackingStore(self: KSplitterCollapserButton) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn WindowHandle(self: KSplitterCollapserButton) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Screen(self: KSplitterCollapserButton) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KSplitterCollapserButton, screen: anytype) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KSplitterCollapserButton, title: []const u8) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KSplitterCollapserButton, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KSplitterCollapserButton, iconText: []const u8) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KSplitterCollapserButton, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KSplitterCollapserButton) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KSplitterCollapserButton, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KSplitterCollapserButton, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KSplitterCollapserButton, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KSplitterCollapserButton, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KSplitterCollapserButton, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KSplitterCollapserButton, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KSplitterCollapserButton, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KSplitterCollapserButton, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KSplitterCollapserButton, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KSplitterCollapserButton, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KSplitterCollapserButton, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KSplitterCollapserButton, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KSplitterCollapserButton, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KSplitterCollapserButton, param1: i32, on: bool) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("ksplittercollapserbutton.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KSplitterCollapserButton, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsWidgetType(self: KSplitterCollapserButton) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsWindowType(self: KSplitterCollapserButton) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn IsQuickItemType(self: KSplitterCollapserButton) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SignalsBlocked(self: KSplitterCollapserButton) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KSplitterCollapserButton, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Thread(self: KSplitterCollapserButton) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KSplitterCollapserButton, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KSplitterCollapserButton, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KSplitterCollapserButton, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KSplitterCollapserButton, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KSplitterCollapserButton, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KSplitterCollapserButton, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("ksplittercollapserbutton.Children: Memory allocation failed");
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KSplitterCollapserButton, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KSplitterCollapserButton, obj: anytype) void {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KSplitterCollapserButton, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Disconnect3(self: KSplitterCollapserButton) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KSplitterCollapserButton, receiver: anytype) bool {
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn DumpObjectTree(self: KSplitterCollapserButton) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn DumpObjectInfo(self: KSplitterCollapserButton) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KSplitterCollapserButton, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KSplitterCollapserButton, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KSplitterCollapserButton, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("ksplittercollapserbutton.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("ksplittercollapserbutton.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn BindingStorage(self: KSplitterCollapserButton) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn BindingStorage2(self: KSplitterCollapserButton) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Destroyed(self: KSplitterCollapserButton) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Parent(self: KSplitterCollapserButton) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KSplitterCollapserButton, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn DeleteLater(self: KSplitterCollapserButton) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KSplitterCollapserButton, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KSplitterCollapserButton, time: i64, timerType: i32) i32 {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KSplitterCollapserButton, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KSplitterCollapserButton, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KSplitterCollapserButton, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KSplitterCollapserButton, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KSplitterCollapserButton, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn PaintingActive(self: KSplitterCollapserButton) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn WidthMM(self: KSplitterCollapserButton) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn HeightMM(self: KSplitterCollapserButton) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn LogicalDpiX(self: KSplitterCollapserButton) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn LogicalDpiY(self: KSplitterCollapserButton) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn PhysicalDpiX(self: KSplitterCollapserButton) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn PhysicalDpiY(self: KSplitterCollapserButton) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn DevicePixelRatio(self: KSplitterCollapserButton) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn DevicePixelRatioF(self: KSplitterCollapserButton) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn ColorCount(self: KSplitterCollapserButton) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Depth(self: KSplitterCollapserButton) i32 {
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

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn MinimumSizeHint(self: KSplitterCollapserButton) QSize {
        return .{ .ptr = qtc.KSplitterCollapserButton_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperMinimumSizeHint(self: KSplitterCollapserButton) QSize {
        return .{ .ptr = qtc.KSplitterCollapserButton_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) QSize) void {
        qtc.KSplitterCollapserButton_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: KSplitterCollapserButton, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.KSplitterCollapserButton_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: KSplitterCollapserButton, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.KSplitterCollapserButton_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QEvent) callconv(.c) bool) void {
        qtc.KSplitterCollapserButton_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KSplitterCollapserButton_MousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KSplitterCollapserButton_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QMouseEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KSplitterCollapserButton_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KSplitterCollapserButton_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QMouseEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QActionEvent `
    ///
    pub fn ActionEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QActionEvent;
        qtc.KSplitterCollapserButton_ActionEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperActionEvent` instead
    ///
    pub const QBaseActionEvent = SuperActionEvent;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QActionEvent;
        qtc.KSplitterCollapserButton_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QActionEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn TimerEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KSplitterCollapserButton_TimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KSplitterCollapserButton_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QTimerEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KSplitterCollapserButton_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KSplitterCollapserButton_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` pos: QPoint `
    ///
    pub fn HitButton(self: KSplitterCollapserButton, pos: anytype) bool {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.KSplitterCollapserButton_HitButton(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// ### DEPRECATED: Use `SuperHitButton` instead
    ///
    pub const QBaseHitButton = SuperHitButton;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SuperHitButton(self: KSplitterCollapserButton, pos: anytype) bool {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.KSplitterCollapserButton_SuperHitButton(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, pos: QPoint) callconv(.c) bool `
    ///
    pub fn OnHitButton(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QPoint) callconv(.c) bool) void {
        qtc.KSplitterCollapserButton_OnHitButton(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn CheckStateSet(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_CheckStateSet(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperCheckStateSet` instead
    ///
    pub const QBaseCheckStateSet = SuperCheckStateSet;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperCheckStateSet(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_SuperCheckStateSet(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCheckStateSet(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnCheckStateSet(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn NextCheckState(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_NextCheckState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperNextCheckState` instead
    ///
    pub const QBaseNextCheckState = SuperNextCheckState;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperNextCheckState(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_SuperNextCheckState(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnNextCheckState(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnNextCheckState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` option: QStyleOptionToolButton `
    ///
    pub fn InitStyleOption(self: KSplitterCollapserButton, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionToolButton;
        qtc.KSplitterCollapserButton_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` option: QStyleOptionToolButton `
    ///
    pub fn SuperInitStyleOption(self: KSplitterCollapserButton, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionToolButton;
        qtc.KSplitterCollapserButton_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, option: QStyleOptionToolButton) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QStyleOptionToolButton) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KSplitterCollapserButton, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.KSplitterCollapserButton_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KSplitterCollapserButton, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.KSplitterCollapserButton_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QKeyEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KSplitterCollapserButton, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.KSplitterCollapserButton_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KSplitterCollapserButton, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.KSplitterCollapserButton_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QKeyEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KSplitterCollapserButton, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.KSplitterCollapserButton_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KSplitterCollapserButton, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.KSplitterCollapserButton_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QMouseEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KSplitterCollapserButton, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.KSplitterCollapserButton_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KSplitterCollapserButton, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.KSplitterCollapserButton_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QFocusEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KSplitterCollapserButton, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.KSplitterCollapserButton_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KSplitterCollapserButton, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.KSplitterCollapserButton_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QFocusEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn DevType(self: KSplitterCollapserButton) i32 {
        return qtc.KSplitterCollapserButton_DevType(@ptrCast(self.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperDevType(self: KSplitterCollapserButton) i32 {
        return qtc.KSplitterCollapserButton_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) i32) void {
        qtc.KSplitterCollapserButton_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KSplitterCollapserButton, visible: bool) void {
        qtc.KSplitterCollapserButton_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KSplitterCollapserButton, visible: bool) void {
        qtc.KSplitterCollapserButton_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, bool) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KSplitterCollapserButton, param1: i32) i32 {
        return qtc.KSplitterCollapserButton_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KSplitterCollapserButton, param1: i32) i32 {
        return qtc.KSplitterCollapserButton_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, i32) callconv(.c) i32) void {
        qtc.KSplitterCollapserButton_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn HasHeightForWidth(self: KSplitterCollapserButton) bool {
        return qtc.KSplitterCollapserButton_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperHasHeightForWidth(self: KSplitterCollapserButton) bool {
        return qtc.KSplitterCollapserButton_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) bool) void {
        qtc.KSplitterCollapserButton_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn PaintEngine(self: KSplitterCollapserButton) QPaintEngine {
        return .{ .ptr = qtc.KSplitterCollapserButton_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperPaintEngine(self: KSplitterCollapserButton) QPaintEngine {
        return .{ .ptr = qtc.KSplitterCollapserButton_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KSplitterCollapserButton_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KSplitterCollapserButton_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KSplitterCollapserButton_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QMouseEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KSplitterCollapserButton_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KSplitterCollapserButton_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QWheelEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KSplitterCollapserButton_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KSplitterCollapserButton_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QMoveEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KSplitterCollapserButton_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KSplitterCollapserButton_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QResizeEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KSplitterCollapserButton_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KSplitterCollapserButton_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QCloseEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KSplitterCollapserButton_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KSplitterCollapserButton_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QContextMenuEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KSplitterCollapserButton_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KSplitterCollapserButton_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QTabletEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KSplitterCollapserButton_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KSplitterCollapserButton_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QDragEnterEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KSplitterCollapserButton_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KSplitterCollapserButton_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QDragMoveEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KSplitterCollapserButton_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KSplitterCollapserButton_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KSplitterCollapserButton_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KSplitterCollapserButton_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QDropEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KSplitterCollapserButton_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KSplitterCollapserButton_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QHideEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KSplitterCollapserButton, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KSplitterCollapserButton_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KSplitterCollapserButton, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KSplitterCollapserButton_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KSplitterCollapserButton_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KSplitterCollapserButton, param1: i32) i32 {
        return qtc.KSplitterCollapserButton_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KSplitterCollapserButton, param1: i32) i32 {
        return qtc.KSplitterCollapserButton_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, i32) callconv(.c) i32) void {
        qtc.KSplitterCollapserButton_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KSplitterCollapserButton, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KSplitterCollapserButton_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KSplitterCollapserButton, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KSplitterCollapserButton_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QPainter) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KSplitterCollapserButton, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KSplitterCollapserButton_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KSplitterCollapserButton, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KSplitterCollapserButton_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KSplitterCollapserButton_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SharedPainter(self: KSplitterCollapserButton) QPainter {
        return .{ .ptr = qtc.KSplitterCollapserButton_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperSharedPainter(self: KSplitterCollapserButton) QPainter {
        return .{ .ptr = qtc.KSplitterCollapserButton_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KSplitterCollapserButton_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KSplitterCollapserButton_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KSplitterCollapserButton, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KSplitterCollapserButton_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QInputMethodEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KSplitterCollapserButton, param1: i32) QVariant {
        return .{ .ptr = qtc.KSplitterCollapserButton_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KSplitterCollapserButton, param1: i32) QVariant {
        return .{ .ptr = qtc.KSplitterCollapserButton_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, i32) callconv(.c) QVariant) void {
        qtc.KSplitterCollapserButton_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KSplitterCollapserButton, next: bool) bool {
        return qtc.KSplitterCollapserButton_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KSplitterCollapserButton, next: bool) bool {
        return qtc.KSplitterCollapserButton_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, bool) callconv(.c) bool) void {
        qtc.KSplitterCollapserButton_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSplitterCollapserButton_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KSplitterCollapserButton_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QChildEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSplitterCollapserButton_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KSplitterCollapserButton, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KSplitterCollapserButton_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QEvent) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KSplitterCollapserButton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSplitterCollapserButton_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KSplitterCollapserButton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSplitterCollapserButton_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QMetaMethod) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KSplitterCollapserButton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSplitterCollapserButton_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KSplitterCollapserButton, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KSplitterCollapserButton_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QMetaMethod) callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn UpdateMicroFocus(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperUpdateMicroFocus(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Create(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_Create(@ptrCast(self.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperCreate(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Destroy(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperDestroy(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) void) void {
        qtc.KSplitterCollapserButton_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn FocusNextChild(self: KSplitterCollapserButton) bool {
        return qtc.KSplitterCollapserButton_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperFocusNextChild(self: KSplitterCollapserButton) bool {
        return qtc.KSplitterCollapserButton_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) bool) void {
        qtc.KSplitterCollapserButton_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn FocusPreviousChild(self: KSplitterCollapserButton) bool {
        return qtc.KSplitterCollapserButton_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperFocusPreviousChild(self: KSplitterCollapserButton) bool {
        return qtc.KSplitterCollapserButton_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) bool) void {
        qtc.KSplitterCollapserButton_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Sender(self: KSplitterCollapserButton) QObject {
        return .{ .ptr = qtc.KSplitterCollapserButton_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperSender(self: KSplitterCollapserButton) QObject {
        return .{ .ptr = qtc.KSplitterCollapserButton_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) QObject) void {
        qtc.KSplitterCollapserButton_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SenderSignalIndex(self: KSplitterCollapserButton) i32 {
        return qtc.KSplitterCollapserButton_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn SuperSenderSignalIndex(self: KSplitterCollapserButton) i32 {
        return qtc.KSplitterCollapserButton_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KSplitterCollapserButton, callback: *const fn () callconv(.c) i32) void {
        qtc.KSplitterCollapserButton_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KSplitterCollapserButton, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSplitterCollapserButton_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KSplitterCollapserButton, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KSplitterCollapserButton_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, [*:0]const u8) callconv(.c) i32) void {
        qtc.KSplitterCollapserButton_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KSplitterCollapserButton, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSplitterCollapserButton_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KSplitterCollapserButton, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KSplitterCollapserButton_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, QMetaMethod) callconv(.c) bool) void {
        qtc.KSplitterCollapserButton_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KSplitterCollapserButton, metricA: i32, metricB: i32) f64 {
        return qtc.KSplitterCollapserButton_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KSplitterCollapserButton, metricA: i32, metricB: i32) f64 {
        return qtc.KSplitterCollapserButton_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton`
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, i32, i32) callconv(.c) f64) void {
        qtc.KSplitterCollapserButton_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    /// ` callback: *const fn (self: KSplitterCollapserButton, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KSplitterCollapserButton, callback: *const fn (KSplitterCollapserButton, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/ksplittercollapserbutton.html#dtor.KSplitterCollapserButton)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KSplitterCollapserButton `
    ///
    pub fn Delete(self: KSplitterCollapserButton) void {
        qtc.KSplitterCollapserButton_Delete(@ptrCast(self.ptr));
    }
};
