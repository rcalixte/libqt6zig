const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QCalendar = @import("libqt6").QCalendar;
const QCalendarWidget = @import("libqt6").QCalendarWidget;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QContextMenuEvent = @import("libqt6").QContextMenuEvent;
const QCursor = @import("libqt6").QCursor;
const QDate = @import("libqt6").QDate;
const QDateTime = @import("libqt6").QDateTime;
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
const QLineEdit = @import("libqt6").QLineEdit;
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
const QStyleOptionSpinBox = @import("libqt6").QStyleOptionSpinBox;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTime = @import("libqt6").QTime;
const QTimeZone = @import("libqt6").QTimeZone;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qabstractspinbox_enums = @import("libqabstractspinbox.zig").enums;
const qdatetimeedit_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qvalidator_enums = @import("libqvalidator.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html)
pub const QDateTimeEdit = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDateTimeEdit,

    pub const _is_QDateTimeEdit = {};
    pub const _is_QAbstractSpinBox = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QDateTimeEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QDateTimeEdit {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDateTimeEdit_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QDateTimeEdit object.
    ///
    pub fn New2() QDateTimeEdit {
        return .{ .ptr = qtc.QDateTimeEdit_new2() };
    }

    /// New3 constructs a new QDateTimeEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dt: QDateTime `
    ///
    pub fn New3(dt: anytype) QDateTimeEdit {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        return .{ .ptr = qtc.QDateTimeEdit_new3(@ptrCast(dt.ptr)) };
    }

    /// New4 constructs a new QDateTimeEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` d: QDate `
    ///
    pub fn New4(d: anytype) QDateTimeEdit {
        comptime _ = @TypeOf(d)._is_QDate;
        return .{ .ptr = qtc.QDateTimeEdit_new4(@ptrCast(d.ptr)) };
    }

    /// New5 constructs a new QDateTimeEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` t: QTime `
    ///
    pub fn New5(t: anytype) QDateTimeEdit {
        comptime _ = @TypeOf(t)._is_QTime;
        return .{ .ptr = qtc.QDateTimeEdit_new5(@ptrCast(t.ptr)) };
    }

    /// New6 constructs a new QDateTimeEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` dt: QDateTime `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New6(dt: anytype, parent: anytype) QDateTimeEdit {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDateTimeEdit_new6(@ptrCast(dt.ptr), @ptrCast(parent.ptr)) };
    }

    /// New7 constructs a new QDateTimeEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` d: QDate `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New7(d: anytype, parent: anytype) QDateTimeEdit {
        comptime _ = @TypeOf(d)._is_QDate;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDateTimeEdit_new7(@ptrCast(d.ptr), @ptrCast(parent.ptr)) };
    }

    /// New8 constructs a new QDateTimeEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` t: QTime `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New8(t: anytype, parent: anytype) QDateTimeEdit {
        comptime _ = @TypeOf(t)._is_QTime;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDateTimeEdit_new8(@ptrCast(t.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MetaObject(self: QDateTimeEdit) QMetaObject {
        return .{ .ptr = qtc.QDateTimeEdit_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QDateTimeEdit, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDateTimeEdit_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperMetaObject(self: QDateTimeEdit) QMetaObject {
        return .{ .ptr = qtc.QDateTimeEdit_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDateTimeEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDateTimeEdit_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDateTimeEdit_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDateTimeEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDateTimeEdit_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QDateTimeEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDateTimeEdit_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDateTimeEdit_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QDateTimeEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDateTimeEdit_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn DateTime(self: QDateTimeEdit) QDateTime {
        return .{ .ptr = qtc.QDateTimeEdit_DateTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Date(self: QDateTimeEdit) QDate {
        return .{ .ptr = qtc.QDateTimeEdit_Date(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#time)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Time(self: QDateTimeEdit) QTime {
        return .{ .ptr = qtc.QDateTimeEdit_Time(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Calendar(self: QDateTimeEdit) QCalendar {
        return .{ .ptr = qtc.QDateTimeEdit_Calendar(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` calendar: QCalendar `
    ///
    pub fn SetCalendar(self: QDateTimeEdit, calendar: anytype) void {
        comptime _ = @TypeOf(calendar)._is_QCalendar;
        qtc.QDateTimeEdit_SetCalendar(@ptrCast(self.ptr), @ptrCast(calendar.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MinimumDateTime(self: QDateTimeEdit) QDateTime {
        return .{ .ptr = qtc.QDateTimeEdit_MinimumDateTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ClearMinimumDateTime(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_ClearMinimumDateTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` dt: QDateTime `
    ///
    pub fn SetMinimumDateTime(self: QDateTimeEdit, dt: anytype) void {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        qtc.QDateTimeEdit_SetMinimumDateTime(@ptrCast(self.ptr), @ptrCast(dt.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MaximumDateTime(self: QDateTimeEdit) QDateTime {
        return .{ .ptr = qtc.QDateTimeEdit_MaximumDateTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ClearMaximumDateTime(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_ClearMaximumDateTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` dt: QDateTime `
    ///
    pub fn SetMaximumDateTime(self: QDateTimeEdit, dt: anytype) void {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        qtc.QDateTimeEdit_SetMaximumDateTime(@ptrCast(self.ptr), @ptrCast(dt.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` min: QDateTime `
    ///
    /// ` max: QDateTime `
    ///
    pub fn SetDateTimeRange(self: QDateTimeEdit, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QDateTime;
        comptime _ = @TypeOf(max)._is_QDateTime;
        qtc.QDateTimeEdit_SetDateTimeRange(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MinimumDate(self: QDateTimeEdit) QDate {
        return .{ .ptr = qtc.QDateTimeEdit_MinimumDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` min: QDate `
    ///
    pub fn SetMinimumDate(self: QDateTimeEdit, min: anytype) void {
        comptime _ = @TypeOf(min)._is_QDate;
        qtc.QDateTimeEdit_SetMinimumDate(@ptrCast(self.ptr), @ptrCast(min.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ClearMinimumDate(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_ClearMinimumDate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MaximumDate(self: QDateTimeEdit) QDate {
        return .{ .ptr = qtc.QDateTimeEdit_MaximumDate(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` max: QDate `
    ///
    pub fn SetMaximumDate(self: QDateTimeEdit, max: anytype) void {
        comptime _ = @TypeOf(max)._is_QDate;
        qtc.QDateTimeEdit_SetMaximumDate(@ptrCast(self.ptr), @ptrCast(max.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ClearMaximumDate(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_ClearMaximumDate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` min: QDate `
    ///
    /// ` max: QDate `
    ///
    pub fn SetDateRange(self: QDateTimeEdit, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QDate;
        comptime _ = @TypeOf(max)._is_QDate;
        qtc.QDateTimeEdit_SetDateRange(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MinimumTime(self: QDateTimeEdit) QTime {
        return .{ .ptr = qtc.QDateTimeEdit_MinimumTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` min: QTime `
    ///
    pub fn SetMinimumTime(self: QDateTimeEdit, min: anytype) void {
        comptime _ = @TypeOf(min)._is_QTime;
        qtc.QDateTimeEdit_SetMinimumTime(@ptrCast(self.ptr), @ptrCast(min.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ClearMinimumTime(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_ClearMinimumTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MaximumTime(self: QDateTimeEdit) QTime {
        return .{ .ptr = qtc.QDateTimeEdit_MaximumTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` max: QTime `
    ///
    pub fn SetMaximumTime(self: QDateTimeEdit, max: anytype) void {
        comptime _ = @TypeOf(max)._is_QTime;
        qtc.QDateTimeEdit_SetMaximumTime(@ptrCast(self.ptr), @ptrCast(max.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ClearMaximumTime(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_ClearMaximumTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` min: QTime `
    ///
    /// ` max: QTime `
    ///
    pub fn SetTimeRange(self: QDateTimeEdit, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QTime;
        comptime _ = @TypeOf(max)._is_QTime;
        qtc.QDateTimeEdit_SetTimeRange(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#displayedSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qdatetimeedit_enums.Section `
    ///
    pub fn DisplayedSections(self: QDateTimeEdit) i32 {
        return qtc.QDateTimeEdit_DisplayedSections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qdatetimeedit_enums.Section `
    ///
    pub fn CurrentSection(self: QDateTimeEdit) i32 {
        return qtc.QDateTimeEdit_CurrentSection(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` index: i32 `
    ///
    /// ## Returns:
    ///
    /// ` qdatetimeedit_enums.Section `
    ///
    pub fn SectionAt(self: QDateTimeEdit, index: i32) i32 {
        return qtc.QDateTimeEdit_SectionAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` section: qdatetimeedit_enums.Section `
    ///
    pub fn SetCurrentSection(self: QDateTimeEdit, section: i32) void {
        qtc.QDateTimeEdit_SetCurrentSection(@ptrCast(self.ptr), @bitCast(section));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSectionIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn CurrentSectionIndex(self: QDateTimeEdit) i32 {
        return qtc.QDateTimeEdit_CurrentSectionIndex(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSectionIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentSectionIndex(self: QDateTimeEdit, index: i32) void {
        qtc.QDateTimeEdit_SetCurrentSectionIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn CalendarWidget(self: QDateTimeEdit) QCalendarWidget {
        return .{ .ptr = qtc.QDateTimeEdit_CalendarWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` calendarWidget: QCalendarWidget `
    ///
    pub fn SetCalendarWidget(self: QDateTimeEdit, calendarWidget: anytype) void {
        comptime _ = @TypeOf(calendarWidget)._is_QCalendarWidget;
        qtc.QDateTimeEdit_SetCalendarWidget(@ptrCast(self.ptr), @ptrCast(calendarWidget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SectionCount(self: QDateTimeEdit) i32 {
        return qtc.QDateTimeEdit_SectionCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setSelectedSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` section: qdatetimeedit_enums.Section `
    ///
    pub fn SetSelectedSection(self: QDateTimeEdit, section: i32) void {
        qtc.QDateTimeEdit_SetSelectedSection(@ptrCast(self.ptr), @bitCast(section));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` section: qdatetimeedit_enums.Section `
    ///
    pub fn SectionText(self: QDateTimeEdit, allocator: std.mem.Allocator, section: i32) []const u8 {
        var _str = qtc.QDateTimeEdit_SectionText(@ptrCast(self.ptr), @bitCast(section));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.SectionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#displayFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayFormat(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDateTimeEdit_DisplayFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.DisplayFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDisplayFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetDisplayFormat(self: QDateTimeEdit, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QDateTimeEdit_SetDisplayFormat(@ptrCast(self.ptr), format_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarPopup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn CalendarPopup(self: QDateTimeEdit) bool {
        return qtc.QDateTimeEdit_CalendarPopup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarPopup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetCalendarPopup(self: QDateTimeEdit, enable: bool) void {
        qtc.QDateTimeEdit_SetCalendarPopup(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeSpec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimeSpec `
    ///
    pub fn TimeSpec(self: QDateTimeEdit) i32 {
        return qtc.QDateTimeEdit_TimeSpec(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeSpec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn SetTimeSpec(self: QDateTimeEdit, spec: i32) void {
        qtc.QDateTimeEdit_SetTimeSpec(@ptrCast(self.ptr), @bitCast(spec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn TimeZone(self: QDateTimeEdit) QTimeZone {
        return .{ .ptr = qtc.QDateTimeEdit_TimeZone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn SetTimeZone(self: QDateTimeEdit, zone: anytype) void {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        qtc.QDateTimeEdit_SetTimeZone(@ptrCast(self.ptr), @ptrCast(zone.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SizeHint(self: QDateTimeEdit) QSize {
        return .{ .ptr = qtc.QDateTimeEdit_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QDateTimeEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.QDateTimeEdit_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperSizeHint(self: QDateTimeEdit) QSize {
        return .{ .ptr = qtc.QDateTimeEdit_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Clear(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: QDateTimeEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QDateTimeEdit_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperClear(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_SuperClear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` steps: i32 `
    ///
    pub fn StepBy(self: QDateTimeEdit, steps: i32) void {
        qtc.QDateTimeEdit_StepBy(@ptrCast(self.ptr), @bitCast(steps));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, steps: i32) callconv(.c) void `
    ///
    pub fn OnStepBy(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, i32) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnStepBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStepBy` instead
    ///
    pub const QBaseStepBy = SuperStepBy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` steps: i32 `
    ///
    pub fn SuperStepBy(self: QDateTimeEdit, steps: i32) void {
        qtc.QDateTimeEdit_SuperStepBy(@ptrCast(self.ptr), @bitCast(steps));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDateTimeEdit, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDateTimeEdit_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QEvent) callconv(.c) bool) void {
        qtc.QDateTimeEdit_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDateTimeEdit, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDateTimeEdit_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn DateTimeChanged(self: QDateTimeEdit, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.QDateTimeEdit_DateTimeChanged(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, dateTime: QDateTime) callconv(.c) void `
    ///
    pub fn OnDateTimeChanged(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QDateTime) callconv(.c) void) void {
        qtc.QDateTimeEdit_Connect_DateTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn TimeChanged(self: QDateTimeEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.QDateTimeEdit_TimeChanged(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, time: QTime) callconv(.c) void `
    ///
    pub fn OnTimeChanged(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QTime) callconv(.c) void) void {
        qtc.QDateTimeEdit_Connect_TimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn DateChanged(self: QDateTimeEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.QDateTimeEdit_DateChanged(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, date: QDate) callconv(.c) void `
    ///
    pub fn OnDateChanged(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QDate) callconv(.c) void) void {
        qtc.QDateTimeEdit_Connect_DateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn SetDateTime(self: QDateTimeEdit, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.QDateTimeEdit_SetDateTime(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn SetDate(self: QDateTimeEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.QDateTimeEdit_SetDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn SetTime(self: QDateTimeEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.QDateTimeEdit_SetTime(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QDateTimeEdit_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QKeyEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QDateTimeEdit_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QDateTimeEdit_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QWheelEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QDateTimeEdit_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QDateTimeEdit_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QFocusEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QDateTimeEdit_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QDateTimeEdit, next: bool) bool {
        return qtc.QDateTimeEdit_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, bool) callconv(.c) bool) void {
        qtc.QDateTimeEdit_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QDateTimeEdit, next: bool) bool {
        return qtc.QDateTimeEdit_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` input: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    /// ## Returns:
    ///
    /// ` qvalidator_enums.State `
    ///
    pub fn Validate(self: QDateTimeEdit, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return qtc.QDateTimeEdit_Validate(@ptrCast(self.ptr), input_str, @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, input: [*:0]const u8, pos: *i32) callconv(.c) i32 `
    ///
    pub fn OnValidate(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QDateTimeEdit_OnValidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperValidate` instead
    ///
    pub const QBaseValidate = SuperValidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` input: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    /// ## Returns:
    ///
    /// ` qvalidator_enums.State `
    ///
    pub fn SuperValidate(self: QDateTimeEdit, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return qtc.QDateTimeEdit_SuperValidate(@ptrCast(self.ptr), input_str, @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` input: []const u8 `
    ///
    pub fn Fixup(self: QDateTimeEdit, input: []const u8) void {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        qtc.QDateTimeEdit_Fixup(@ptrCast(self.ptr), input_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, input: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFixup(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnFixup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFixup` instead
    ///
    pub const QBaseFixup = SuperFixup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` input: []const u8 `
    ///
    pub fn SuperFixup(self: QDateTimeEdit, input: []const u8) void {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        qtc.QDateTimeEdit_SuperFixup(@ptrCast(self.ptr), input_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DateTimeFromText(self: QDateTimeEdit, text: []const u8) QDateTime {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QDateTimeEdit_DateTimeFromText(@ptrCast(self.ptr), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, text: [*:0]const u8) callconv(.c) QDateTime `
    ///
    pub fn OnDateTimeFromText(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, [*:0]const u8) callconv(.c) QDateTime) void {
        qtc.QDateTimeEdit_OnDateTimeFromText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDateTimeFromText` instead
    ///
    pub const QBaseDateTimeFromText = SuperDateTimeFromText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperDateTimeFromText(self: QDateTimeEdit, text: []const u8) QDateTime {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QDateTimeEdit_SuperDateTimeFromText(@ptrCast(self.ptr), text_str) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dt: QDateTime `
    ///
    pub fn TextFromDateTime(self: QDateTimeEdit, allocator: std.mem.Allocator, dt: anytype) []const u8 {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        var _str = qtc.QDateTimeEdit_TextFromDateTime(@ptrCast(self.ptr), @ptrCast(dt.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.TextFromDateTime: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, dt: QDateTime) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnTextFromDateTime(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QDateTime) callconv(.c) [*:0]const u8) void {
        qtc.QDateTimeEdit_OnTextFromDateTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTextFromDateTime` instead
    ///
    pub const QBaseTextFromDateTime = SuperTextFromDateTime;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dt: QDateTime `
    ///
    pub fn SuperTextFromDateTime(self: QDateTimeEdit, allocator: std.mem.Allocator, dt: anytype) []const u8 {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        var _str = qtc.QDateTimeEdit_SuperTextFromDateTime(@ptrCast(self.ptr), @ptrCast(dt.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.TextFromDateTime: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn StepEnabled(self: QDateTimeEdit) i32 {
        return qtc.QDateTimeEdit_StepEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnStepEnabled(self: QDateTimeEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QDateTimeEdit_OnStepEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperStepEnabled` instead
    ///
    pub const QBaseStepEnabled = SuperStepEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn SuperStepEnabled(self: QDateTimeEdit) i32 {
        return qtc.QDateTimeEdit_SuperStepEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateTimeEdit_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateTimeEdit_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QDateTimeEdit_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QPaintEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QDateTimeEdit_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` option: QStyleOptionSpinBox `
    ///
    pub fn InitStyleOption(self: QDateTimeEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSpinBox;
        qtc.QDateTimeEdit_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, option: QStyleOptionSpinBox) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QStyleOptionSpinBox) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` option: QStyleOptionSpinBox `
    ///
    pub fn SuperInitStyleOption(self: QDateTimeEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSpinBox;
        qtc.QDateTimeEdit_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn ButtonSymbols(self: QDateTimeEdit) i32 {
        return qtc.QAbstractSpinBox_ButtonSymbols(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` bs: qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn SetButtonSymbols(self: QDateTimeEdit, bs: i32) void {
        qtc.QAbstractSpinBox_SetButtonSymbols(@ptrCast(self.ptr), @bitCast(bs));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` cm: qabstractspinbox_enums.CorrectionMode `
    ///
    pub fn SetCorrectionMode(self: QDateTimeEdit, cm: i32) void {
        qtc.QAbstractSpinBox_SetCorrectionMode(@ptrCast(self.ptr), @bitCast(cm));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.CorrectionMode `
    ///
    pub fn CorrectionMode(self: QDateTimeEdit) i32 {
        return qtc.QAbstractSpinBox_CorrectionMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn HasAcceptableInput(self: QDateTimeEdit) bool {
        return qtc.QAbstractSpinBox_HasAcceptableInput(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSpinBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SpecialValueText(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSpinBox_SpecialValueText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.SpecialValueText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` txt: []const u8 `
    ///
    pub fn SetSpecialValueText(self: QDateTimeEdit, txt: []const u8) void {
        const txt_str = qtc.libqt_string{
            .len = txt.len,
            .data = txt.ptr,
        };
        qtc.QAbstractSpinBox_SetSpecialValueText(@ptrCast(self.ptr), txt_str);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Wrapping(self: QDateTimeEdit) bool {
        return qtc.QAbstractSpinBox_Wrapping(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` w: bool `
    ///
    pub fn SetWrapping(self: QDateTimeEdit, w: bool) void {
        qtc.QAbstractSpinBox_SetWrapping(@ptrCast(self.ptr), w);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` r: bool `
    ///
    pub fn SetReadOnly(self: QDateTimeEdit, r: bool) void {
        qtc.QAbstractSpinBox_SetReadOnly(@ptrCast(self.ptr), r);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsReadOnly(self: QDateTimeEdit) bool {
        return qtc.QAbstractSpinBox_IsReadOnly(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` kt: bool `
    ///
    pub fn SetKeyboardTracking(self: QDateTimeEdit, kt: bool) void {
        qtc.QAbstractSpinBox_SetKeyboardTracking(@ptrCast(self.ptr), kt);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn KeyboardTracking(self: QDateTimeEdit) bool {
        return qtc.QAbstractSpinBox_KeyboardTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` flag: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QDateTimeEdit, flag: i32) void {
        qtc.QAbstractSpinBox_SetAlignment(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QDateTimeEdit) i32 {
        return qtc.QAbstractSpinBox_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: QDateTimeEdit, frame: bool) void {
        qtc.QAbstractSpinBox_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn HasFrame(self: QDateTimeEdit) bool {
        return qtc.QAbstractSpinBox_HasFrame(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` on: bool `
    ///
    pub fn SetAccelerated(self: QDateTimeEdit, on: bool) void {
        qtc.QAbstractSpinBox_SetAccelerated(@ptrCast(self.ptr), on);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsAccelerated(self: QDateTimeEdit) bool {
        return qtc.QAbstractSpinBox_IsAccelerated(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` shown: bool `
    ///
    pub fn SetGroupSeparatorShown(self: QDateTimeEdit, shown: bool) void {
        qtc.QAbstractSpinBox_SetGroupSeparatorShown(@ptrCast(self.ptr), shown);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsGroupSeparatorShown(self: QDateTimeEdit) bool {
        return qtc.QAbstractSpinBox_IsGroupSeparatorShown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn InterpretText(self: QDateTimeEdit) void {
        qtc.QAbstractSpinBox_InterpretText(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn StepUp(self: QDateTimeEdit) void {
        qtc.QAbstractSpinBox_StepUp(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn StepDown(self: QDateTimeEdit) void {
        qtc.QAbstractSpinBox_StepDown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SelectAll(self: QDateTimeEdit) void {
        qtc.QAbstractSpinBox_SelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn EditingFinished(self: QDateTimeEdit) void {
        qtc.QAbstractSpinBox_EditingFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit) callconv(.c) void `
    ///
    pub fn OnEditingFinished(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit) callconv(.c) void) void {
        qtc.QAbstractSpinBox_Connect_EditingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn WinId(self: QDateTimeEdit) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn CreateWinId(self: QDateTimeEdit) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn InternalWinId(self: QDateTimeEdit) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn EffectiveWinId(self: QDateTimeEdit) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Style(self: QDateTimeEdit) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QDateTimeEdit, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsTopLevel(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsWindow(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsModal(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QDateTimeEdit) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QDateTimeEdit, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsEnabled(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QDateTimeEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QDateTimeEdit, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QDateTimeEdit, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QDateTimeEdit, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn FrameGeometry(self: QDateTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Geometry(self: QDateTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn NormalGeometry(self: QDateTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn X(self: QDateTimeEdit) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Y(self: QDateTimeEdit) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Pos(self: QDateTimeEdit) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn FrameSize(self: QDateTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Size(self: QDateTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Width(self: QDateTimeEdit) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Height(self: QDateTimeEdit) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Rect(self: QDateTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ChildrenRect(self: QDateTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ChildrenRegion(self: QDateTimeEdit) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MinimumSize(self: QDateTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MaximumSize(self: QDateTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MinimumWidth(self: QDateTimeEdit) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MinimumHeight(self: QDateTimeEdit) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MaximumWidth(self: QDateTimeEdit) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MaximumHeight(self: QDateTimeEdit) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QDateTimeEdit, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QDateTimeEdit, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QDateTimeEdit, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QDateTimeEdit, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QDateTimeEdit, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QDateTimeEdit, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QDateTimeEdit, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QDateTimeEdit, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SizeIncrement(self: QDateTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QDateTimeEdit, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QDateTimeEdit, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn BaseSize(self: QDateTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QDateTimeEdit, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QDateTimeEdit, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QDateTimeEdit, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QDateTimeEdit, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QDateTimeEdit, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QDateTimeEdit, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QDateTimeEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QDateTimeEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QDateTimeEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QDateTimeEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QDateTimeEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QDateTimeEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QDateTimeEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QDateTimeEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QDateTimeEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QDateTimeEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QDateTimeEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QDateTimeEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn Window(self: QDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn NativeParentWidget(self: QDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn TopLevelWidget(self: QDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Palette(self: QDateTimeEdit) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QDateTimeEdit, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QDateTimeEdit, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QDateTimeEdit) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QDateTimeEdit, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QDateTimeEdit) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Font(self: QDateTimeEdit) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QDateTimeEdit, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn FontMetrics(self: QDateTimeEdit) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn FontInfo(self: QDateTimeEdit) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Cursor(self: QDateTimeEdit) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QDateTimeEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn UnsetCursor(self: QDateTimeEdit) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QDateTimeEdit, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn HasMouseTracking(self: QDateTimeEdit) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn UnderMouse(self: QDateTimeEdit) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QDateTimeEdit, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn HasTabletTracking(self: QDateTimeEdit) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QDateTimeEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QDateTimeEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Mask(self: QDateTimeEdit) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ClearMask(self: QDateTimeEdit) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QDateTimeEdit, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QDateTimeEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Grab(self: QDateTimeEdit) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn GraphicsEffect(self: QDateTimeEdit) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QDateTimeEdit, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QDateTimeEdit, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QDateTimeEdit, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QDateTimeEdit, windowTitle: []const u8) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QDateTimeEdit, styleSheet: []const u8) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QDateTimeEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn WindowIcon(self: QDateTimeEdit) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QDateTimeEdit, windowIconText: []const u8) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QDateTimeEdit, windowRole: []const u8) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QDateTimeEdit, filePath: []const u8) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QDateTimeEdit, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn WindowOpacity(self: QDateTimeEdit) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsWindowModified(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QDateTimeEdit, toolTip: []const u8) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QDateTimeEdit, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ToolTipDuration(self: QDateTimeEdit) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QDateTimeEdit, statusTip: []const u8) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QDateTimeEdit, whatsThis: []const u8) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QDateTimeEdit, name: []const u8) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QDateTimeEdit, description: []const u8) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QDateTimeEdit, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QDateTimeEdit) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn UnsetLayoutDirection(self: QDateTimeEdit) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QDateTimeEdit, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Locale(self: QDateTimeEdit) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn UnsetLocale(self: QDateTimeEdit) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsRightToLeft(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsLeftToRight(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SetFocus(self: QDateTimeEdit) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsActiveWindow(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ActivateWindow(self: QDateTimeEdit) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ClearFocus(self: QDateTimeEdit) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QDateTimeEdit, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QDateTimeEdit) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QDateTimeEdit, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn HasFocus(self: QDateTimeEdit) bool {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QDateTimeEdit, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn FocusProxy(self: QDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QDateTimeEdit) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QDateTimeEdit, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn GrabMouse(self: QDateTimeEdit) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ReleaseMouse(self: QDateTimeEdit) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn GrabKeyboard(self: QDateTimeEdit) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ReleaseKeyboard(self: QDateTimeEdit) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QDateTimeEdit, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QDateTimeEdit, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QDateTimeEdit, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QDateTimeEdit, id: i32) void {
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn UpdatesEnabled(self: QDateTimeEdit) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QDateTimeEdit, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn GraphicsProxyWidget(self: QDateTimeEdit) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Update(self: QDateTimeEdit) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Repaint(self: QDateTimeEdit) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QDateTimeEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QDateTimeEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QDateTimeEdit, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Show(self: QDateTimeEdit) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Hide(self: QDateTimeEdit) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ShowMinimized(self: QDateTimeEdit) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ShowMaximized(self: QDateTimeEdit) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ShowFullScreen(self: QDateTimeEdit) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ShowNormal(self: QDateTimeEdit) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Close(self: QDateTimeEdit) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Raise(self: QDateTimeEdit) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Lower(self: QDateTimeEdit) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QDateTimeEdit, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QDateTimeEdit, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QDateTimeEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QDateTimeEdit, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QDateTimeEdit, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdatetimeedit.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QDateTimeEdit, geometry: []u8) bool {
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn AdjustSize(self: QDateTimeEdit) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsVisible(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QDateTimeEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsHidden(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsMinimized(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsMaximized(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsFullScreen(self: QDateTimeEdit) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QDateTimeEdit) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QDateTimeEdit, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QDateTimeEdit, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SizePolicy(self: QDateTimeEdit) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QDateTimeEdit, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QDateTimeEdit, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn VisibleRegion(self: QDateTimeEdit) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QDateTimeEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QDateTimeEdit, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ContentsMargins(self: QDateTimeEdit) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ContentsRect(self: QDateTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Layout(self: QDateTimeEdit) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QDateTimeEdit, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn UpdateGeometry(self: QDateTimeEdit) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QDateTimeEdit, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QDateTimeEdit, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QDateTimeEdit, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QDateTimeEdit, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn FocusWidget(self: QDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn NextInFocusChain(self: QDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn PreviousInFocusChain(self: QDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn AcceptDrops(self: QDateTimeEdit) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QDateTimeEdit, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QDateTimeEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QDateTimeEdit, actions: []QAction) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QDateTimeEdit, before: anytype, actions: []QAction) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QDateTimeEdit, before: anytype, action: anytype) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QDateTimeEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QDateTimeEdit, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qdatetimeedit.Actions: Memory allocation failed");
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QDateTimeEdit, text: []const u8) QAction {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QDateTimeEdit, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QDateTimeEdit, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QDateTimeEdit, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn ParentWidget(self: QDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QDateTimeEdit, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QDateTimeEdit) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QDateTimeEdit, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QDateTimeEdit, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QDateTimeEdit) i32 {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QDateTimeEdit, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QDateTimeEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QDateTimeEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QDateTimeEdit, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QDateTimeEdit, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn EnsurePolished(self: QDateTimeEdit) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QDateTimeEdit, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn AutoFillBackground(self: QDateTimeEdit) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QDateTimeEdit, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn BackingStore(self: QDateTimeEdit) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn WindowHandle(self: QDateTimeEdit) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Screen(self: QDateTimeEdit) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QDateTimeEdit, screen: anytype) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QDateTimeEdit, title: []const u8) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QDateTimeEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QDateTimeEdit, iconText: []const u8) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QDateTimeEdit, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QDateTimeEdit) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QDateTimeEdit, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QDateTimeEdit, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QDateTimeEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QDateTimeEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QDateTimeEdit, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QDateTimeEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QDateTimeEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QDateTimeEdit, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QDateTimeEdit, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QDateTimeEdit, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QDateTimeEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QDateTimeEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QDateTimeEdit, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QDateTimeEdit, param1: i32, on: bool) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatetimeedit.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QDateTimeEdit, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsWidgetType(self: QDateTimeEdit) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsWindowType(self: QDateTimeEdit) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn IsQuickItemType(self: QDateTimeEdit) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SignalsBlocked(self: QDateTimeEdit) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QDateTimeEdit, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Thread(self: QDateTimeEdit) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDateTimeEdit, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QDateTimeEdit, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QDateTimeEdit, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QDateTimeEdit, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QDateTimeEdit, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QDateTimeEdit, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdatetimeedit.Children: Memory allocation failed");
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QDateTimeEdit, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QDateTimeEdit, obj: anytype) void {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDateTimeEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn Disconnect3(self: QDateTimeEdit) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QDateTimeEdit, receiver: anytype) bool {
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn DumpObjectTree(self: QDateTimeEdit) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn DumpObjectInfo(self: QDateTimeEdit) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QDateTimeEdit, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDateTimeEdit, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QDateTimeEdit, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdatetimeedit.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdatetimeedit.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn BindingStorage(self: QDateTimeEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn BindingStorage2(self: QDateTimeEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Destroyed(self: QDateTimeEdit) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Parent(self: QDateTimeEdit) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QDateTimeEdit, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn DeleteLater(self: QDateTimeEdit) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QDateTimeEdit, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QDateTimeEdit, time: i64, timerType: i32) i32 {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDateTimeEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDateTimeEdit, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QDateTimeEdit, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDateTimeEdit, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDateTimeEdit, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn PaintingActive(self: QDateTimeEdit) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn WidthMM(self: QDateTimeEdit) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn HeightMM(self: QDateTimeEdit) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn LogicalDpiX(self: QDateTimeEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn LogicalDpiY(self: QDateTimeEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn PhysicalDpiX(self: QDateTimeEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn PhysicalDpiY(self: QDateTimeEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn DevicePixelRatio(self: QDateTimeEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn DevicePixelRatioF(self: QDateTimeEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn ColorCount(self: QDateTimeEdit) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Depth(self: QDateTimeEdit) i32 {
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

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn MinimumSizeHint(self: QDateTimeEdit) QSize {
        return .{ .ptr = qtc.QDateTimeEdit_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperMinimumSizeHint(self: QDateTimeEdit) QSize {
        return .{ .ptr = qtc.QDateTimeEdit_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QDateTimeEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.QDateTimeEdit_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QDateTimeEdit, param1: i32) QVariant {
        return .{ .ptr = qtc.QDateTimeEdit_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QDateTimeEdit, param1: i32) QVariant {
        return .{ .ptr = qtc.QDateTimeEdit_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, i32) callconv(.c) QVariant) void {
        qtc.QDateTimeEdit_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QDateTimeEdit_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QDateTimeEdit_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QResizeEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QDateTimeEdit_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QDateTimeEdit_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QKeyEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QDateTimeEdit_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QDateTimeEdit_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QFocusEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QDateTimeEdit_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QDateTimeEdit_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QContextMenuEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn ChangeEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateTimeEdit_ChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperChangeEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateTimeEdit_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QDateTimeEdit_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QDateTimeEdit_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QCloseEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QDateTimeEdit_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QDateTimeEdit_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QHideEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateTimeEdit_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateTimeEdit_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateTimeEdit_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateTimeEdit_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDateTimeEdit_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDateTimeEdit_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QTimerEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QDateTimeEdit_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QDateTimeEdit_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QShowEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn DevType(self: QDateTimeEdit) i32 {
        return qtc.QDateTimeEdit_DevType(@ptrCast(self.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperDevType(self: QDateTimeEdit) i32 {
        return qtc.QDateTimeEdit_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QDateTimeEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QDateTimeEdit_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QDateTimeEdit, visible: bool) void {
        qtc.QDateTimeEdit_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QDateTimeEdit, visible: bool) void {
        qtc.QDateTimeEdit_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, bool) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QDateTimeEdit, param1: i32) i32 {
        return qtc.QDateTimeEdit_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QDateTimeEdit, param1: i32) i32 {
        return qtc.QDateTimeEdit_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, i32) callconv(.c) i32) void {
        qtc.QDateTimeEdit_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn HasHeightForWidth(self: QDateTimeEdit) bool {
        return qtc.QDateTimeEdit_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperHasHeightForWidth(self: QDateTimeEdit) bool {
        return qtc.QDateTimeEdit_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QDateTimeEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QDateTimeEdit_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn PaintEngine(self: QDateTimeEdit) QPaintEngine {
        return .{ .ptr = qtc.QDateTimeEdit_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperPaintEngine(self: QDateTimeEdit) QPaintEngine {
        return .{ .ptr = qtc.QDateTimeEdit_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QDateTimeEdit, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QDateTimeEdit_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateTimeEdit_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateTimeEdit_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QDateTimeEdit_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QDateTimeEdit_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QEnterEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateTimeEdit_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateTimeEdit_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QDateTimeEdit_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QDateTimeEdit_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QMoveEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QDateTimeEdit_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QDateTimeEdit_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QTabletEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QDateTimeEdit_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QDateTimeEdit_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QActionEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QDateTimeEdit_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QDateTimeEdit_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QDragEnterEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QDateTimeEdit_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QDateTimeEdit_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QDragMoveEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QDateTimeEdit_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QDateTimeEdit_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QDateTimeEdit_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QDateTimeEdit_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QDropEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QDateTimeEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QDateTimeEdit_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QDateTimeEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QDateTimeEdit_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QDateTimeEdit_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QDateTimeEdit, param1: i32) i32 {
        return qtc.QDateTimeEdit_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QDateTimeEdit, param1: i32) i32 {
        return qtc.QDateTimeEdit_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, i32) callconv(.c) i32) void {
        qtc.QDateTimeEdit_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QDateTimeEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QDateTimeEdit_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QDateTimeEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QDateTimeEdit_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QPainter) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QDateTimeEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QDateTimeEdit_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QDateTimeEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QDateTimeEdit_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QDateTimeEdit_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SharedPainter(self: QDateTimeEdit) QPainter {
        return .{ .ptr = qtc.QDateTimeEdit_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperSharedPainter(self: QDateTimeEdit) QPainter {
        return .{ .ptr = qtc.QDateTimeEdit_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QDateTimeEdit, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QDateTimeEdit_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QDateTimeEdit_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QDateTimeEdit_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QInputMethodEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDateTimeEdit, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDateTimeEdit_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDateTimeEdit, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDateTimeEdit_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDateTimeEdit_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDateTimeEdit_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDateTimeEdit_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QChildEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateTimeEdit_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateTimeEdit_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QEvent) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QDateTimeEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateTimeEdit_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDateTimeEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateTimeEdit_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QMetaMethod) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QDateTimeEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateTimeEdit_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDateTimeEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateTimeEdit_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QMetaMethod) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn LineEdit(self: QDateTimeEdit) QLineEdit {
        return .{ .ptr = qtc.QDateTimeEdit_LineEdit(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperLineEdit` instead
    ///
    pub const QBaseLineEdit = SuperLineEdit;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperLineEdit(self: QDateTimeEdit) QLineEdit {
        return .{ .ptr = qtc.QDateTimeEdit_SuperLineEdit(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QLineEdit `
    ///
    pub fn OnLineEdit(self: QDateTimeEdit, callback: *const fn () callconv(.c) QLineEdit) void {
        qtc.QDateTimeEdit_OnLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SetLineEdit(self: QDateTimeEdit, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.QDateTimeEdit_SetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetLineEdit` instead
    ///
    pub const QBaseSetLineEdit = SuperSetLineEdit;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SuperSetLineEdit(self: QDateTimeEdit, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.QDateTimeEdit_SuperSetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, edit: QLineEdit) callconv(.c) void `
    ///
    pub fn OnSetLineEdit(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QLineEdit) callconv(.c) void) void {
        qtc.QDateTimeEdit_OnSetLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn UpdateMicroFocus(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperUpdateMicroFocus(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QDateTimeEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QDateTimeEdit_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Create(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_Create(@ptrCast(self.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperCreate(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QDateTimeEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QDateTimeEdit_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Destroy(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperDestroy(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QDateTimeEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QDateTimeEdit_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn FocusNextChild(self: QDateTimeEdit) bool {
        return qtc.QDateTimeEdit_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperFocusNextChild(self: QDateTimeEdit) bool {
        return qtc.QDateTimeEdit_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QDateTimeEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QDateTimeEdit_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn FocusPreviousChild(self: QDateTimeEdit) bool {
        return qtc.QDateTimeEdit_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperFocusPreviousChild(self: QDateTimeEdit) bool {
        return qtc.QDateTimeEdit_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QDateTimeEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QDateTimeEdit_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Sender(self: QDateTimeEdit) QObject {
        return .{ .ptr = qtc.QDateTimeEdit_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperSender(self: QDateTimeEdit) QObject {
        return .{ .ptr = qtc.QDateTimeEdit_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QDateTimeEdit, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDateTimeEdit_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn SenderSignalIndex(self: QDateTimeEdit) i32 {
        return qtc.QDateTimeEdit_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    pub fn SuperSenderSignalIndex(self: QDateTimeEdit) i32 {
        return qtc.QDateTimeEdit_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QDateTimeEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QDateTimeEdit_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QDateTimeEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDateTimeEdit_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDateTimeEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDateTimeEdit_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDateTimeEdit_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QDateTimeEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDateTimeEdit_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDateTimeEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDateTimeEdit_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, QMetaMethod) callconv(.c) bool) void {
        qtc.QDateTimeEdit_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QDateTimeEdit, metricA: i32, metricB: i32) f64 {
        return qtc.QDateTimeEdit_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QDateTimeEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QDateTimeEdit, metricA: i32, metricB: i32) f64 {
        return qtc.QDateTimeEdit_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit`
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, i32, i32) callconv(.c) f64) void {
        qtc.QDateTimeEdit_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateTimeEdit `
    ///
    /// ` callback: *const fn (self: QDateTimeEdit, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QDateTimeEdit, callback: *const fn (QDateTimeEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dtor.QDateTimeEdit)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDateTimeEdit `
    ///
    pub fn Delete(self: QDateTimeEdit) void {
        qtc.QDateTimeEdit_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtimeedit.html)
pub const QTimeEdit = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimeedit.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTimeEdit,

    pub const _is_QTimeEdit = {};
    pub const _is_QDateTimeEdit = {};
    pub const _is_QAbstractSpinBox = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QTimeEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QTimeEdit {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QTimeEdit_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QTimeEdit object.
    ///
    pub fn New2() QTimeEdit {
        return .{ .ptr = qtc.QTimeEdit_new2() };
    }

    /// New3 constructs a new QTimeEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` time: QTime `
    ///
    pub fn New3(time: anytype) QTimeEdit {
        comptime _ = @TypeOf(time)._is_QTime;
        return .{ .ptr = qtc.QTimeEdit_new3(@ptrCast(time.ptr)) };
    }

    /// New4 constructs a new QTimeEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` time: QTime `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New4(time: anytype, parent: anytype) QTimeEdit {
        comptime _ = @TypeOf(time)._is_QTime;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QTimeEdit_new4(@ptrCast(time.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MetaObject(self: QTimeEdit) QMetaObject {
        return .{ .ptr = qtc.QTimeEdit_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QTimeEdit, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTimeEdit_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTimeEdit `
    ///
    pub fn SuperMetaObject(self: QTimeEdit) QMetaObject {
        return .{ .ptr = qtc.QTimeEdit_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTimeEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTimeEdit_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QTimeEdit, callback: *const fn (QTimeEdit, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTimeEdit_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QTimeEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTimeEdit_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QTimeEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTimeEdit_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QTimeEdit, callback: *const fn (QTimeEdit, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTimeEdit_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QTimeEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTimeEdit_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimeedit.html#userTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn UserTimeChanged(self: QTimeEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.QTimeEdit_UserTimeChanged(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimeedit.html#userTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit, time: QTime) callconv(.c) void `
    ///
    pub fn OnUserTimeChanged(self: QTimeEdit, callback: *const fn (QTimeEdit, QTime) callconv(.c) void) void {
        qtc.QTimeEdit_Connect_UserTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn DateTime(self: QTimeEdit) QDateTime {
        return .{ .ptr = qtc.QDateTimeEdit_DateTime(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Date(self: QTimeEdit) QDate {
        return .{ .ptr = qtc.QDateTimeEdit_Date(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#time)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Time(self: QTimeEdit) QTime {
        return .{ .ptr = qtc.QDateTimeEdit_Time(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Calendar(self: QTimeEdit) QCalendar {
        return .{ .ptr = qtc.QDateTimeEdit_Calendar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` calendar: QCalendar `
    ///
    pub fn SetCalendar(self: QTimeEdit, calendar: anytype) void {
        comptime _ = @TypeOf(calendar)._is_QCalendar;
        qtc.QDateTimeEdit_SetCalendar(@ptrCast(self.ptr), @ptrCast(calendar.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MinimumDateTime(self: QTimeEdit) QDateTime {
        return .{ .ptr = qtc.QDateTimeEdit_MinimumDateTime(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ClearMinimumDateTime(self: QTimeEdit) void {
        qtc.QDateTimeEdit_ClearMinimumDateTime(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` dt: QDateTime `
    ///
    pub fn SetMinimumDateTime(self: QTimeEdit, dt: anytype) void {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        qtc.QDateTimeEdit_SetMinimumDateTime(@ptrCast(self.ptr), @ptrCast(dt.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MaximumDateTime(self: QTimeEdit) QDateTime {
        return .{ .ptr = qtc.QDateTimeEdit_MaximumDateTime(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ClearMaximumDateTime(self: QTimeEdit) void {
        qtc.QDateTimeEdit_ClearMaximumDateTime(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` dt: QDateTime `
    ///
    pub fn SetMaximumDateTime(self: QTimeEdit, dt: anytype) void {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        qtc.QDateTimeEdit_SetMaximumDateTime(@ptrCast(self.ptr), @ptrCast(dt.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` min: QDateTime `
    ///
    /// ` max: QDateTime `
    ///
    pub fn SetDateTimeRange(self: QTimeEdit, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QDateTime;
        comptime _ = @TypeOf(max)._is_QDateTime;
        qtc.QDateTimeEdit_SetDateTimeRange(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MinimumDate(self: QTimeEdit) QDate {
        return .{ .ptr = qtc.QDateTimeEdit_MinimumDate(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` min: QDate `
    ///
    pub fn SetMinimumDate(self: QTimeEdit, min: anytype) void {
        comptime _ = @TypeOf(min)._is_QDate;
        qtc.QDateTimeEdit_SetMinimumDate(@ptrCast(self.ptr), @ptrCast(min.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ClearMinimumDate(self: QTimeEdit) void {
        qtc.QDateTimeEdit_ClearMinimumDate(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MaximumDate(self: QTimeEdit) QDate {
        return .{ .ptr = qtc.QDateTimeEdit_MaximumDate(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` max: QDate `
    ///
    pub fn SetMaximumDate(self: QTimeEdit, max: anytype) void {
        comptime _ = @TypeOf(max)._is_QDate;
        qtc.QDateTimeEdit_SetMaximumDate(@ptrCast(self.ptr), @ptrCast(max.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ClearMaximumDate(self: QTimeEdit) void {
        qtc.QDateTimeEdit_ClearMaximumDate(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` min: QDate `
    ///
    /// ` max: QDate `
    ///
    pub fn SetDateRange(self: QTimeEdit, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QDate;
        comptime _ = @TypeOf(max)._is_QDate;
        qtc.QDateTimeEdit_SetDateRange(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MinimumTime(self: QTimeEdit) QTime {
        return .{ .ptr = qtc.QDateTimeEdit_MinimumTime(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` min: QTime `
    ///
    pub fn SetMinimumTime(self: QTimeEdit, min: anytype) void {
        comptime _ = @TypeOf(min)._is_QTime;
        qtc.QDateTimeEdit_SetMinimumTime(@ptrCast(self.ptr), @ptrCast(min.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ClearMinimumTime(self: QTimeEdit) void {
        qtc.QDateTimeEdit_ClearMinimumTime(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MaximumTime(self: QTimeEdit) QTime {
        return .{ .ptr = qtc.QDateTimeEdit_MaximumTime(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` max: QTime `
    ///
    pub fn SetMaximumTime(self: QTimeEdit, max: anytype) void {
        comptime _ = @TypeOf(max)._is_QTime;
        qtc.QDateTimeEdit_SetMaximumTime(@ptrCast(self.ptr), @ptrCast(max.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ClearMaximumTime(self: QTimeEdit) void {
        qtc.QDateTimeEdit_ClearMaximumTime(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` min: QTime `
    ///
    /// ` max: QTime `
    ///
    pub fn SetTimeRange(self: QTimeEdit, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QTime;
        comptime _ = @TypeOf(max)._is_QTime;
        qtc.QDateTimeEdit_SetTimeRange(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#displayedSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qdatetimeedit_enums.Section `
    ///
    pub fn DisplayedSections(self: QTimeEdit) i32 {
        return qtc.QDateTimeEdit_DisplayedSections(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qdatetimeedit_enums.Section `
    ///
    pub fn CurrentSection(self: QTimeEdit) i32 {
        return qtc.QDateTimeEdit_CurrentSection(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` index: i32 `
    ///
    /// ## Returns:
    ///
    /// ` qdatetimeedit_enums.Section `
    ///
    pub fn SectionAt(self: QTimeEdit, index: i32) i32 {
        return qtc.QDateTimeEdit_SectionAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` section: qdatetimeedit_enums.Section `
    ///
    pub fn SetCurrentSection(self: QTimeEdit, section: i32) void {
        qtc.QDateTimeEdit_SetCurrentSection(@ptrCast(self.ptr), @bitCast(section));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSectionIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn CurrentSectionIndex(self: QTimeEdit) i32 {
        return qtc.QDateTimeEdit_CurrentSectionIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSectionIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentSectionIndex(self: QTimeEdit, index: i32) void {
        qtc.QDateTimeEdit_SetCurrentSectionIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn CalendarWidget(self: QTimeEdit) QCalendarWidget {
        return .{ .ptr = qtc.QDateTimeEdit_CalendarWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` calendarWidget: QCalendarWidget `
    ///
    pub fn SetCalendarWidget(self: QTimeEdit, calendarWidget: anytype) void {
        comptime _ = @TypeOf(calendarWidget)._is_QCalendarWidget;
        qtc.QDateTimeEdit_SetCalendarWidget(@ptrCast(self.ptr), @ptrCast(calendarWidget.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SectionCount(self: QTimeEdit) i32 {
        return qtc.QDateTimeEdit_SectionCount(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setSelectedSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` section: qdatetimeedit_enums.Section `
    ///
    pub fn SetSelectedSection(self: QTimeEdit, section: i32) void {
        qtc.QDateTimeEdit_SetSelectedSection(@ptrCast(self.ptr), @bitCast(section));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` section: qdatetimeedit_enums.Section `
    ///
    pub fn SectionText(self: QTimeEdit, allocator: std.mem.Allocator, section: i32) []const u8 {
        var _str = qtc.QDateTimeEdit_SectionText(@ptrCast(self.ptr), @bitCast(section));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.SectionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#displayFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayFormat(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDateTimeEdit_DisplayFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.DisplayFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDisplayFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetDisplayFormat(self: QTimeEdit, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QDateTimeEdit_SetDisplayFormat(@ptrCast(self.ptr), format_str);
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarPopup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn CalendarPopup(self: QTimeEdit) bool {
        return qtc.QDateTimeEdit_CalendarPopup(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarPopup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetCalendarPopup(self: QTimeEdit, enable: bool) void {
        qtc.QDateTimeEdit_SetCalendarPopup(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeSpec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimeSpec `
    ///
    pub fn TimeSpec(self: QTimeEdit) i32 {
        return qtc.QDateTimeEdit_TimeSpec(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeSpec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn SetTimeSpec(self: QTimeEdit, spec: i32) void {
        qtc.QDateTimeEdit_SetTimeSpec(@ptrCast(self.ptr), @bitCast(spec));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn TimeZone(self: QTimeEdit) QTimeZone {
        return .{ .ptr = qtc.QDateTimeEdit_TimeZone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn SetTimeZone(self: QTimeEdit, zone: anytype) void {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        qtc.QDateTimeEdit_SetTimeZone(@ptrCast(self.ptr), @ptrCast(zone.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn DateTimeChanged(self: QTimeEdit, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.QDateTimeEdit_DateTimeChanged(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit, dateTime: QDateTime) callconv(.c) void `
    ///
    pub fn OnDateTimeChanged(self: QTimeEdit, callback: *const fn (QTimeEdit, QDateTime) callconv(.c) void) void {
        qtc.QDateTimeEdit_Connect_DateTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn TimeChanged(self: QTimeEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.QDateTimeEdit_TimeChanged(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit, time: QTime) callconv(.c) void `
    ///
    pub fn OnTimeChanged(self: QTimeEdit, callback: *const fn (QTimeEdit, QTime) callconv(.c) void) void {
        qtc.QDateTimeEdit_Connect_TimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn DateChanged(self: QTimeEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.QDateTimeEdit_DateChanged(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit, date: QDate) callconv(.c) void `
    ///
    pub fn OnDateChanged(self: QTimeEdit, callback: *const fn (QTimeEdit, QDate) callconv(.c) void) void {
        qtc.QDateTimeEdit_Connect_DateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn SetDateTime(self: QTimeEdit, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.QDateTimeEdit_SetDateTime(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn SetDate(self: QTimeEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.QDateTimeEdit_SetDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn SetTime(self: QTimeEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.QDateTimeEdit_SetTime(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn ButtonSymbols(self: QTimeEdit) i32 {
        return qtc.QAbstractSpinBox_ButtonSymbols(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` bs: qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn SetButtonSymbols(self: QTimeEdit, bs: i32) void {
        qtc.QAbstractSpinBox_SetButtonSymbols(@ptrCast(self.ptr), @bitCast(bs));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` cm: qabstractspinbox_enums.CorrectionMode `
    ///
    pub fn SetCorrectionMode(self: QTimeEdit, cm: i32) void {
        qtc.QAbstractSpinBox_SetCorrectionMode(@ptrCast(self.ptr), @bitCast(cm));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.CorrectionMode `
    ///
    pub fn CorrectionMode(self: QTimeEdit) i32 {
        return qtc.QAbstractSpinBox_CorrectionMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn HasAcceptableInput(self: QTimeEdit) bool {
        return qtc.QAbstractSpinBox_HasAcceptableInput(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSpinBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SpecialValueText(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSpinBox_SpecialValueText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.SpecialValueText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` txt: []const u8 `
    ///
    pub fn SetSpecialValueText(self: QTimeEdit, txt: []const u8) void {
        const txt_str = qtc.libqt_string{
            .len = txt.len,
            .data = txt.ptr,
        };
        qtc.QAbstractSpinBox_SetSpecialValueText(@ptrCast(self.ptr), txt_str);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Wrapping(self: QTimeEdit) bool {
        return qtc.QAbstractSpinBox_Wrapping(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` w: bool `
    ///
    pub fn SetWrapping(self: QTimeEdit, w: bool) void {
        qtc.QAbstractSpinBox_SetWrapping(@ptrCast(self.ptr), w);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` r: bool `
    ///
    pub fn SetReadOnly(self: QTimeEdit, r: bool) void {
        qtc.QAbstractSpinBox_SetReadOnly(@ptrCast(self.ptr), r);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsReadOnly(self: QTimeEdit) bool {
        return qtc.QAbstractSpinBox_IsReadOnly(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` kt: bool `
    ///
    pub fn SetKeyboardTracking(self: QTimeEdit, kt: bool) void {
        qtc.QAbstractSpinBox_SetKeyboardTracking(@ptrCast(self.ptr), kt);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn KeyboardTracking(self: QTimeEdit) bool {
        return qtc.QAbstractSpinBox_KeyboardTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` flag: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QTimeEdit, flag: i32) void {
        qtc.QAbstractSpinBox_SetAlignment(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QTimeEdit) i32 {
        return qtc.QAbstractSpinBox_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: QTimeEdit, frame: bool) void {
        qtc.QAbstractSpinBox_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn HasFrame(self: QTimeEdit) bool {
        return qtc.QAbstractSpinBox_HasFrame(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` on: bool `
    ///
    pub fn SetAccelerated(self: QTimeEdit, on: bool) void {
        qtc.QAbstractSpinBox_SetAccelerated(@ptrCast(self.ptr), on);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsAccelerated(self: QTimeEdit) bool {
        return qtc.QAbstractSpinBox_IsAccelerated(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` shown: bool `
    ///
    pub fn SetGroupSeparatorShown(self: QTimeEdit, shown: bool) void {
        qtc.QAbstractSpinBox_SetGroupSeparatorShown(@ptrCast(self.ptr), shown);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsGroupSeparatorShown(self: QTimeEdit) bool {
        return qtc.QAbstractSpinBox_IsGroupSeparatorShown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn InterpretText(self: QTimeEdit) void {
        qtc.QAbstractSpinBox_InterpretText(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn StepUp(self: QTimeEdit) void {
        qtc.QAbstractSpinBox_StepUp(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn StepDown(self: QTimeEdit) void {
        qtc.QAbstractSpinBox_StepDown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SelectAll(self: QTimeEdit) void {
        qtc.QAbstractSpinBox_SelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn EditingFinished(self: QTimeEdit) void {
        qtc.QAbstractSpinBox_EditingFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit) callconv(.c) void `
    ///
    pub fn OnEditingFinished(self: QTimeEdit, callback: *const fn (QTimeEdit) callconv(.c) void) void {
        qtc.QAbstractSpinBox_Connect_EditingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn WinId(self: QTimeEdit) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn CreateWinId(self: QTimeEdit) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn InternalWinId(self: QTimeEdit) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn EffectiveWinId(self: QTimeEdit) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Style(self: QTimeEdit) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QTimeEdit, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsTopLevel(self: QTimeEdit) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsWindow(self: QTimeEdit) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsModal(self: QTimeEdit) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QTimeEdit) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QTimeEdit, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsEnabled(self: QTimeEdit) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QTimeEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QTimeEdit, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QTimeEdit, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QTimeEdit, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn FrameGeometry(self: QTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Geometry(self: QTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn NormalGeometry(self: QTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn X(self: QTimeEdit) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Y(self: QTimeEdit) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Pos(self: QTimeEdit) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn FrameSize(self: QTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Size(self: QTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Width(self: QTimeEdit) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Height(self: QTimeEdit) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Rect(self: QTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ChildrenRect(self: QTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ChildrenRegion(self: QTimeEdit) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MinimumSize(self: QTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MaximumSize(self: QTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MinimumWidth(self: QTimeEdit) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MinimumHeight(self: QTimeEdit) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MaximumWidth(self: QTimeEdit) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MaximumHeight(self: QTimeEdit) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QTimeEdit, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QTimeEdit, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QTimeEdit, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QTimeEdit, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QTimeEdit, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QTimeEdit, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QTimeEdit, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QTimeEdit, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SizeIncrement(self: QTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QTimeEdit, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QTimeEdit, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn BaseSize(self: QTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QTimeEdit, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QTimeEdit, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QTimeEdit, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QTimeEdit, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QTimeEdit, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QTimeEdit, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QTimeEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QTimeEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QTimeEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QTimeEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QTimeEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QTimeEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QTimeEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QTimeEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QTimeEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QTimeEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QTimeEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QTimeEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QTimeEdit `
    ///
    pub fn Window(self: QTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn NativeParentWidget(self: QTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn TopLevelWidget(self: QTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Palette(self: QTimeEdit) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QTimeEdit, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QTimeEdit, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QTimeEdit) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QTimeEdit, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QTimeEdit) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Font(self: QTimeEdit) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QTimeEdit, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn FontMetrics(self: QTimeEdit) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn FontInfo(self: QTimeEdit) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Cursor(self: QTimeEdit) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QTimeEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn UnsetCursor(self: QTimeEdit) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QTimeEdit, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn HasMouseTracking(self: QTimeEdit) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn UnderMouse(self: QTimeEdit) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QTimeEdit, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn HasTabletTracking(self: QTimeEdit) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QTimeEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QTimeEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Mask(self: QTimeEdit) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ClearMask(self: QTimeEdit) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QTimeEdit, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QTimeEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Grab(self: QTimeEdit) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn GraphicsEffect(self: QTimeEdit) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QTimeEdit, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QTimeEdit, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QTimeEdit, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QTimeEdit, windowTitle: []const u8) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QTimeEdit, styleSheet: []const u8) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QTimeEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn WindowIcon(self: QTimeEdit) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QTimeEdit, windowIconText: []const u8) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QTimeEdit, windowRole: []const u8) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QTimeEdit, filePath: []const u8) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QTimeEdit, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn WindowOpacity(self: QTimeEdit) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsWindowModified(self: QTimeEdit) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QTimeEdit, toolTip: []const u8) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QTimeEdit, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ToolTipDuration(self: QTimeEdit) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QTimeEdit, statusTip: []const u8) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QTimeEdit, whatsThis: []const u8) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QTimeEdit, name: []const u8) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QTimeEdit, description: []const u8) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QTimeEdit, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QTimeEdit) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn UnsetLayoutDirection(self: QTimeEdit) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QTimeEdit, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Locale(self: QTimeEdit) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn UnsetLocale(self: QTimeEdit) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsRightToLeft(self: QTimeEdit) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsLeftToRight(self: QTimeEdit) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SetFocus(self: QTimeEdit) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsActiveWindow(self: QTimeEdit) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ActivateWindow(self: QTimeEdit) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ClearFocus(self: QTimeEdit) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QTimeEdit, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QTimeEdit) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QTimeEdit, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn HasFocus(self: QTimeEdit) bool {
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
    /// ` self: QTimeEdit `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QTimeEdit, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn FocusProxy(self: QTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QTimeEdit) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QTimeEdit, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn GrabMouse(self: QTimeEdit) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ReleaseMouse(self: QTimeEdit) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn GrabKeyboard(self: QTimeEdit) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ReleaseKeyboard(self: QTimeEdit) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QTimeEdit, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QTimeEdit, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QTimeEdit, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QTimeEdit, id: i32) void {
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
    /// ` self: QTimeEdit `
    ///
    pub fn UpdatesEnabled(self: QTimeEdit) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QTimeEdit, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn GraphicsProxyWidget(self: QTimeEdit) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Update(self: QTimeEdit) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Repaint(self: QTimeEdit) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QTimeEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QTimeEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QTimeEdit, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Show(self: QTimeEdit) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Hide(self: QTimeEdit) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ShowMinimized(self: QTimeEdit) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ShowMaximized(self: QTimeEdit) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ShowFullScreen(self: QTimeEdit) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ShowNormal(self: QTimeEdit) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Close(self: QTimeEdit) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Raise(self: QTimeEdit) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Lower(self: QTimeEdit) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QTimeEdit, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QTimeEdit, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QTimeEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QTimeEdit, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QTimeEdit, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtimeedit.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QTimeEdit, geometry: []u8) bool {
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
    /// ` self: QTimeEdit `
    ///
    pub fn AdjustSize(self: QTimeEdit) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsVisible(self: QTimeEdit) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QTimeEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsHidden(self: QTimeEdit) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsMinimized(self: QTimeEdit) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsMaximized(self: QTimeEdit) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsFullScreen(self: QTimeEdit) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QTimeEdit) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QTimeEdit, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QTimeEdit, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SizePolicy(self: QTimeEdit) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QTimeEdit, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QTimeEdit, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn VisibleRegion(self: QTimeEdit) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QTimeEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QTimeEdit, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ContentsMargins(self: QTimeEdit) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ContentsRect(self: QTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Layout(self: QTimeEdit) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QTimeEdit, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn UpdateGeometry(self: QTimeEdit) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QTimeEdit, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QTimeEdit, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QTimeEdit, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QTimeEdit, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn FocusWidget(self: QTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn NextInFocusChain(self: QTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn PreviousInFocusChain(self: QTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn AcceptDrops(self: QTimeEdit) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QTimeEdit, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QTimeEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QTimeEdit, actions: []QAction) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QTimeEdit, before: anytype, actions: []QAction) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QTimeEdit, before: anytype, action: anytype) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QTimeEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QTimeEdit, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qtimeedit.Actions: Memory allocation failed");
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
    /// ` self: QTimeEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QTimeEdit, text: []const u8) QAction {
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
    /// ` self: QTimeEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QTimeEdit, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QTimeEdit `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QTimeEdit, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QTimeEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QTimeEdit, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QTimeEdit `
    ///
    pub fn ParentWidget(self: QTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QTimeEdit, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QTimeEdit) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QTimeEdit, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QTimeEdit, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QTimeEdit) i32 {
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
    /// ` self: QTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QTimeEdit, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QTimeEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QTimeEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QTimeEdit, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QTimeEdit, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn EnsurePolished(self: QTimeEdit) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QTimeEdit, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn AutoFillBackground(self: QTimeEdit) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QTimeEdit, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn BackingStore(self: QTimeEdit) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn WindowHandle(self: QTimeEdit) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Screen(self: QTimeEdit) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QTimeEdit, screen: anytype) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QTimeEdit, title: []const u8) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QTimeEdit, callback: *const fn (QTimeEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QTimeEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QTimeEdit, callback: *const fn (QTimeEdit, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QTimeEdit, iconText: []const u8) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QTimeEdit, callback: *const fn (QTimeEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QTimeEdit, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QTimeEdit, callback: *const fn (QTimeEdit, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QTimeEdit) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QTimeEdit, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QTimeEdit, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QTimeEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QTimeEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QTimeEdit, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QTimeEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QTimeEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QTimeEdit, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QTimeEdit, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QTimeEdit, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QTimeEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QTimeEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QTimeEdit, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QTimeEdit, param1: i32, on: bool) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QTimeEdit, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsWidgetType(self: QTimeEdit) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsWindowType(self: QTimeEdit) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn IsQuickItemType(self: QTimeEdit) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SignalsBlocked(self: QTimeEdit) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QTimeEdit, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Thread(self: QTimeEdit) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTimeEdit, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QTimeEdit, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QTimeEdit, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QTimeEdit, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QTimeEdit, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QTimeEdit, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtimeedit.Children: Memory allocation failed");
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
    /// ` self: QTimeEdit `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QTimeEdit, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QTimeEdit, obj: anytype) void {
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
    /// ` self: QTimeEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTimeEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTimeEdit `
    ///
    pub fn Disconnect3(self: QTimeEdit) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QTimeEdit, receiver: anytype) bool {
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
    /// ` self: QTimeEdit `
    ///
    pub fn DumpObjectTree(self: QTimeEdit) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn DumpObjectInfo(self: QTimeEdit) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTimeEdit, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTimeEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTimeEdit, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QTimeEdit, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtimeedit.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtimeedit.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTimeEdit `
    ///
    pub fn BindingStorage(self: QTimeEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn BindingStorage2(self: QTimeEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Destroyed(self: QTimeEdit) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QTimeEdit, callback: *const fn (QTimeEdit) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Parent(self: QTimeEdit) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QTimeEdit, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn DeleteLater(self: QTimeEdit) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QTimeEdit, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QTimeEdit, time: i64, timerType: i32) i32 {
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
    /// ` self: QTimeEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTimeEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTimeEdit, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QTimeEdit, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTimeEdit, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTimeEdit `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTimeEdit, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QTimeEdit, callback: *const fn (QTimeEdit, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn PaintingActive(self: QTimeEdit) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn WidthMM(self: QTimeEdit) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn HeightMM(self: QTimeEdit) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn LogicalDpiX(self: QTimeEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn LogicalDpiY(self: QTimeEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn PhysicalDpiX(self: QTimeEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn PhysicalDpiY(self: QTimeEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn DevicePixelRatio(self: QTimeEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn DevicePixelRatioF(self: QTimeEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn ColorCount(self: QTimeEdit) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Depth(self: QTimeEdit) i32 {
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

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SizeHint(self: QTimeEdit) QSize {
        return .{ .ptr = qtc.QTimeEdit_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SuperSizeHint(self: QTimeEdit) QSize {
        return .{ .ptr = qtc.QTimeEdit_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QTimeEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTimeEdit_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Clear(self: QTimeEdit) void {
        qtc.QTimeEdit_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SuperClear(self: QTimeEdit) void {
        qtc.QTimeEdit_SuperClear(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: QTimeEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QTimeEdit_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` steps: i32 `
    ///
    pub fn StepBy(self: QTimeEdit, steps: i32) void {
        qtc.QTimeEdit_StepBy(@ptrCast(self.ptr), @bitCast(steps));
    }

    /// ### DEPRECATED: Use `SuperStepBy` instead
    ///
    pub const QBaseStepBy = SuperStepBy;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` steps: i32 `
    ///
    pub fn SuperStepBy(self: QTimeEdit, steps: i32) void {
        qtc.QTimeEdit_SuperStepBy(@ptrCast(self.ptr), @bitCast(steps));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, steps: i32) callconv(.c) void `
    ///
    pub fn OnStepBy(self: QTimeEdit, callback: *const fn (QTimeEdit, i32) callconv(.c) void) void {
        qtc.QTimeEdit_OnStepBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QTimeEdit, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTimeEdit_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QTimeEdit, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTimeEdit_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QEvent) callconv(.c) bool) void {
        qtc.QTimeEdit_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTimeEdit_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTimeEdit_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QKeyEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QTimeEdit_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QTimeEdit_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QWheelEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTimeEdit_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTimeEdit_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QFocusEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QTimeEdit, next: bool) bool {
        return qtc.QTimeEdit_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QTimeEdit, next: bool) bool {
        return qtc.QTimeEdit_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QTimeEdit, callback: *const fn (QTimeEdit, bool) callconv(.c) bool) void {
        qtc.QTimeEdit_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` input: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    /// ## Returns:
    ///
    /// ` qvalidator_enums.State `
    ///
    pub fn Validate(self: QTimeEdit, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return qtc.QTimeEdit_Validate(@ptrCast(self.ptr), input_str, @ptrCast(pos));
    }

    /// ### DEPRECATED: Use `SuperValidate` instead
    ///
    pub const QBaseValidate = SuperValidate;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` input: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    /// ## Returns:
    ///
    /// ` qvalidator_enums.State `
    ///
    pub fn SuperValidate(self: QTimeEdit, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return qtc.QTimeEdit_SuperValidate(@ptrCast(self.ptr), input_str, @ptrCast(pos));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, input: [*:0]const u8, pos: *i32) callconv(.c) i32 `
    ///
    pub fn OnValidate(self: QTimeEdit, callback: *const fn (QTimeEdit, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QTimeEdit_OnValidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` input: []const u8 `
    ///
    pub fn Fixup(self: QTimeEdit, input: []const u8) void {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        qtc.QTimeEdit_Fixup(@ptrCast(self.ptr), input_str);
    }

    /// ### DEPRECATED: Use `SuperFixup` instead
    ///
    pub const QBaseFixup = SuperFixup;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` input: []const u8 `
    ///
    pub fn SuperFixup(self: QTimeEdit, input: []const u8) void {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        qtc.QTimeEdit_SuperFixup(@ptrCast(self.ptr), input_str);
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, input: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFixup(self: QTimeEdit, callback: *const fn (QTimeEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QTimeEdit_OnFixup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DateTimeFromText(self: QTimeEdit, text: []const u8) QDateTime {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QTimeEdit_DateTimeFromText(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `SuperDateTimeFromText` instead
    ///
    pub const QBaseDateTimeFromText = SuperDateTimeFromText;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperDateTimeFromText(self: QTimeEdit, text: []const u8) QDateTime {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QTimeEdit_SuperDateTimeFromText(@ptrCast(self.ptr), text_str) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, text: [*:0]const u8) callconv(.c) QDateTime `
    ///
    pub fn OnDateTimeFromText(self: QTimeEdit, callback: *const fn (QTimeEdit, [*:0]const u8) callconv(.c) QDateTime) void {
        qtc.QTimeEdit_OnDateTimeFromText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dt: QDateTime `
    ///
    pub fn TextFromDateTime(self: QTimeEdit, allocator: std.mem.Allocator, dt: anytype) []const u8 {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        var _str = qtc.QTimeEdit_TextFromDateTime(@ptrCast(self.ptr), @ptrCast(dt.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.TextFromDateTime: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperTextFromDateTime` instead
    ///
    pub const QBaseTextFromDateTime = SuperTextFromDateTime;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dt: QDateTime `
    ///
    pub fn SuperTextFromDateTime(self: QTimeEdit, allocator: std.mem.Allocator, dt: anytype) []const u8 {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        var _str = qtc.QTimeEdit_SuperTextFromDateTime(@ptrCast(self.ptr), @ptrCast(dt.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtimeedit.TextFromDateTime: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, dt: QDateTime) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnTextFromDateTime(self: QTimeEdit, callback: *const fn (QTimeEdit, QDateTime) callconv(.c) [*:0]const u8) void {
        qtc.QTimeEdit_OnTextFromDateTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn StepEnabled(self: QTimeEdit) i32 {
        return qtc.QTimeEdit_StepEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperStepEnabled` instead
    ///
    pub const QBaseStepEnabled = SuperStepEnabled;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn SuperStepEnabled(self: QTimeEdit) i32 {
        return qtc.QTimeEdit_SuperStepEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnStepEnabled(self: QTimeEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QTimeEdit_OnStepEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTimeEdit_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTimeEdit_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QTimeEdit_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QTimeEdit_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QPaintEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` option: QStyleOptionSpinBox `
    ///
    pub fn InitStyleOption(self: QTimeEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSpinBox;
        qtc.QTimeEdit_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` option: QStyleOptionSpinBox `
    ///
    pub fn SuperInitStyleOption(self: QTimeEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSpinBox;
        qtc.QTimeEdit_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, option: QStyleOptionSpinBox) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QTimeEdit, callback: *const fn (QTimeEdit, QStyleOptionSpinBox) callconv(.c) void) void {
        qtc.QTimeEdit_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn MinimumSizeHint(self: QTimeEdit) QSize {
        return .{ .ptr = qtc.QTimeEdit_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SuperMinimumSizeHint(self: QTimeEdit) QSize {
        return .{ .ptr = qtc.QTimeEdit_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QTimeEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTimeEdit_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QTimeEdit, param1: i32) QVariant {
        return .{ .ptr = qtc.QTimeEdit_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QTimeEdit, param1: i32) QVariant {
        return .{ .ptr = qtc.QTimeEdit_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QTimeEdit, callback: *const fn (QTimeEdit, i32) callconv(.c) QVariant) void {
        qtc.QTimeEdit_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QTimeEdit_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QTimeEdit_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QResizeEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTimeEdit_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTimeEdit_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QKeyEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTimeEdit_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTimeEdit_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QFocusEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QTimeEdit_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QTimeEdit_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QContextMenuEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn ChangeEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTimeEdit_ChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperChangeEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTimeEdit_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QTimeEdit_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QTimeEdit_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QCloseEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QTimeEdit_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QTimeEdit_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QHideEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTimeEdit_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTimeEdit_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTimeEdit_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTimeEdit_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTimeEdit_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTimeEdit_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QTimerEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QTimeEdit_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QTimeEdit_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QShowEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn DevType(self: QTimeEdit) i32 {
        return qtc.QTimeEdit_DevType(@ptrCast(self.ptr));
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
    /// ` self: QTimeEdit `
    ///
    pub fn SuperDevType(self: QTimeEdit) i32 {
        return qtc.QTimeEdit_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QTimeEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QTimeEdit_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QTimeEdit, visible: bool) void {
        qtc.QTimeEdit_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QTimeEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QTimeEdit, visible: bool) void {
        qtc.QTimeEdit_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QTimeEdit, callback: *const fn (QTimeEdit, bool) callconv(.c) void) void {
        qtc.QTimeEdit_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QTimeEdit, param1: i32) i32 {
        return qtc.QTimeEdit_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTimeEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QTimeEdit, param1: i32) i32 {
        return qtc.QTimeEdit_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QTimeEdit, callback: *const fn (QTimeEdit, i32) callconv(.c) i32) void {
        qtc.QTimeEdit_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn HasHeightForWidth(self: QTimeEdit) bool {
        return qtc.QTimeEdit_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QTimeEdit `
    ///
    pub fn SuperHasHeightForWidth(self: QTimeEdit) bool {
        return qtc.QTimeEdit_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QTimeEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QTimeEdit_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn PaintEngine(self: QTimeEdit) QPaintEngine {
        return .{ .ptr = qtc.QTimeEdit_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QTimeEdit `
    ///
    pub fn SuperPaintEngine(self: QTimeEdit) QPaintEngine {
        return .{ .ptr = qtc.QTimeEdit_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QTimeEdit, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QTimeEdit_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTimeEdit_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTimeEdit_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QTimeEdit_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QTimeEdit_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QEnterEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTimeEdit_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTimeEdit_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QTimeEdit_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QTimeEdit_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QMoveEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QTimeEdit_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QTimeEdit_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QTabletEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QTimeEdit_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QTimeEdit_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QActionEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QTimeEdit_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QTimeEdit_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QDragEnterEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QTimeEdit_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QTimeEdit_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QDragMoveEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QTimeEdit_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QTimeEdit_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QTimeEdit_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QTimeEdit_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QDropEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QTimeEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTimeEdit_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QTimeEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QTimeEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTimeEdit_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QTimeEdit_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QTimeEdit, param1: i32) i32 {
        return qtc.QTimeEdit_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTimeEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QTimeEdit, param1: i32) i32 {
        return qtc.QTimeEdit_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QTimeEdit, callback: *const fn (QTimeEdit, i32) callconv(.c) i32) void {
        qtc.QTimeEdit_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QTimeEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTimeEdit_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QTimeEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTimeEdit_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QTimeEdit, callback: *const fn (QTimeEdit, QPainter) callconv(.c) void) void {
        qtc.QTimeEdit_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QTimeEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTimeEdit_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QTimeEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QTimeEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTimeEdit_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QTimeEdit, callback: *const fn (QTimeEdit, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QTimeEdit_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SharedPainter(self: QTimeEdit) QPainter {
        return .{ .ptr = qtc.QTimeEdit_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QTimeEdit `
    ///
    pub fn SuperSharedPainter(self: QTimeEdit) QPainter {
        return .{ .ptr = qtc.QTimeEdit_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QTimeEdit, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QTimeEdit_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QTimeEdit_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QTimeEdit_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QInputMethodEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTimeEdit, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTimeEdit_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QTimeEdit, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTimeEdit_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QTimeEdit, callback: *const fn (QTimeEdit, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTimeEdit_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTimeEdit_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTimeEdit_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QChildEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTimeEdit_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTimeEdit_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QTimeEdit, callback: *const fn (QTimeEdit, QEvent) callconv(.c) void) void {
        qtc.QTimeEdit_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QTimeEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTimeEdit_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QTimeEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTimeEdit_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QTimeEdit, callback: *const fn (QTimeEdit, QMetaMethod) callconv(.c) void) void {
        qtc.QTimeEdit_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QTimeEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTimeEdit_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QTimeEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTimeEdit_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QTimeEdit, callback: *const fn (QTimeEdit, QMetaMethod) callconv(.c) void) void {
        qtc.QTimeEdit_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn LineEdit(self: QTimeEdit) QLineEdit {
        return .{ .ptr = qtc.QTimeEdit_LineEdit(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperLineEdit` instead
    ///
    pub const QBaseLineEdit = SuperLineEdit;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SuperLineEdit(self: QTimeEdit) QLineEdit {
        return .{ .ptr = qtc.QTimeEdit_SuperLineEdit(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QLineEdit `
    ///
    pub fn OnLineEdit(self: QTimeEdit, callback: *const fn () callconv(.c) QLineEdit) void {
        qtc.QTimeEdit_OnLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SetLineEdit(self: QTimeEdit, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.QTimeEdit_SetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetLineEdit` instead
    ///
    pub const QBaseSetLineEdit = SuperSetLineEdit;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SuperSetLineEdit(self: QTimeEdit, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.QTimeEdit_SuperSetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, edit: QLineEdit) callconv(.c) void `
    ///
    pub fn OnSetLineEdit(self: QTimeEdit, callback: *const fn (QTimeEdit, QLineEdit) callconv(.c) void) void {
        qtc.QTimeEdit_OnSetLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn UpdateMicroFocus(self: QTimeEdit) void {
        qtc.QTimeEdit_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QTimeEdit `
    ///
    pub fn SuperUpdateMicroFocus(self: QTimeEdit) void {
        qtc.QTimeEdit_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QTimeEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QTimeEdit_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Create(self: QTimeEdit) void {
        qtc.QTimeEdit_Create(@ptrCast(self.ptr));
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
    /// ` self: QTimeEdit `
    ///
    pub fn SuperCreate(self: QTimeEdit) void {
        qtc.QTimeEdit_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QTimeEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QTimeEdit_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Destroy(self: QTimeEdit) void {
        qtc.QTimeEdit_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QTimeEdit `
    ///
    pub fn SuperDestroy(self: QTimeEdit) void {
        qtc.QTimeEdit_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QTimeEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QTimeEdit_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn FocusNextChild(self: QTimeEdit) bool {
        return qtc.QTimeEdit_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QTimeEdit `
    ///
    pub fn SuperFocusNextChild(self: QTimeEdit) bool {
        return qtc.QTimeEdit_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QTimeEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QTimeEdit_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn FocusPreviousChild(self: QTimeEdit) bool {
        return qtc.QTimeEdit_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QTimeEdit `
    ///
    pub fn SuperFocusPreviousChild(self: QTimeEdit) bool {
        return qtc.QTimeEdit_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QTimeEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QTimeEdit_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Sender(self: QTimeEdit) QObject {
        return .{ .ptr = qtc.QTimeEdit_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTimeEdit `
    ///
    pub fn SuperSender(self: QTimeEdit) QObject {
        return .{ .ptr = qtc.QTimeEdit_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QTimeEdit, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTimeEdit_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn SenderSignalIndex(self: QTimeEdit) i32 {
        return qtc.QTimeEdit_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTimeEdit `
    ///
    pub fn SuperSenderSignalIndex(self: QTimeEdit) i32 {
        return qtc.QTimeEdit_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QTimeEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QTimeEdit_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QTimeEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTimeEdit_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QTimeEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTimeEdit_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QTimeEdit, callback: *const fn (QTimeEdit, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTimeEdit_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QTimeEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTimeEdit_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QTimeEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTimeEdit_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QTimeEdit, callback: *const fn (QTimeEdit, QMetaMethod) callconv(.c) bool) void {
        qtc.QTimeEdit_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QTimeEdit, metricA: i32, metricB: i32) f64 {
        return qtc.QTimeEdit_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QTimeEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QTimeEdit, metricA: i32, metricB: i32) f64 {
        return qtc.QTimeEdit_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit`
    ///
    /// ` callback: *const fn (self: QTimeEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QTimeEdit, callback: *const fn (QTimeEdit, i32, i32) callconv(.c) f64) void {
        qtc.QTimeEdit_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QTimeEdit `
    ///
    /// ` callback: *const fn (self: QTimeEdit, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QTimeEdit, callback: *const fn (QTimeEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtimeedit.html#dtor.QTimeEdit)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTimeEdit `
    ///
    pub fn Delete(self: QTimeEdit) void {
        qtc.QTimeEdit_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdateedit.html)
pub const QDateEdit = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdateedit.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDateEdit,

    pub const _is_QDateEdit = {};
    pub const _is_QDateTimeEdit = {};
    pub const _is_QAbstractSpinBox = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QDateEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QDateEdit {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDateEdit_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QDateEdit object.
    ///
    pub fn New2() QDateEdit {
        return .{ .ptr = qtc.QDateEdit_new2() };
    }

    /// New3 constructs a new QDateEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` date: QDate `
    ///
    pub fn New3(date: anytype) QDateEdit {
        comptime _ = @TypeOf(date)._is_QDate;
        return .{ .ptr = qtc.QDateEdit_new3(@ptrCast(date.ptr)) };
    }

    /// New4 constructs a new QDateEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` date: QDate `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New4(date: anytype, parent: anytype) QDateEdit {
        comptime _ = @TypeOf(date)._is_QDate;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDateEdit_new4(@ptrCast(date.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MetaObject(self: QDateEdit) QMetaObject {
        return .{ .ptr = qtc.QDateEdit_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QDateEdit, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDateEdit_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDateEdit `
    ///
    pub fn SuperMetaObject(self: QDateEdit) QMetaObject {
        return .{ .ptr = qtc.QDateEdit_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDateEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDateEdit_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDateEdit, callback: *const fn (QDateEdit, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDateEdit_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDateEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDateEdit_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QDateEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDateEdit_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDateEdit, callback: *const fn (QDateEdit, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDateEdit_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QDateEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDateEdit_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdateedit.html#userDateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn UserDateChanged(self: QDateEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.QDateEdit_UserDateChanged(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdateedit.html#userDateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit, date: QDate) callconv(.c) void `
    ///
    pub fn OnUserDateChanged(self: QDateEdit, callback: *const fn (QDateEdit, QDate) callconv(.c) void) void {
        qtc.QDateEdit_Connect_UserDateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn DateTime(self: QDateEdit) QDateTime {
        return .{ .ptr = qtc.QDateTimeEdit_DateTime(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Date(self: QDateEdit) QDate {
        return .{ .ptr = qtc.QDateTimeEdit_Date(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#time)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Time(self: QDateEdit) QTime {
        return .{ .ptr = qtc.QDateTimeEdit_Time(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Calendar(self: QDateEdit) QCalendar {
        return .{ .ptr = qtc.QDateTimeEdit_Calendar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` calendar: QCalendar `
    ///
    pub fn SetCalendar(self: QDateEdit, calendar: anytype) void {
        comptime _ = @TypeOf(calendar)._is_QCalendar;
        qtc.QDateTimeEdit_SetCalendar(@ptrCast(self.ptr), @ptrCast(calendar.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MinimumDateTime(self: QDateEdit) QDateTime {
        return .{ .ptr = qtc.QDateTimeEdit_MinimumDateTime(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ClearMinimumDateTime(self: QDateEdit) void {
        qtc.QDateTimeEdit_ClearMinimumDateTime(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` dt: QDateTime `
    ///
    pub fn SetMinimumDateTime(self: QDateEdit, dt: anytype) void {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        qtc.QDateTimeEdit_SetMinimumDateTime(@ptrCast(self.ptr), @ptrCast(dt.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MaximumDateTime(self: QDateEdit) QDateTime {
        return .{ .ptr = qtc.QDateTimeEdit_MaximumDateTime(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ClearMaximumDateTime(self: QDateEdit) void {
        qtc.QDateTimeEdit_ClearMaximumDateTime(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` dt: QDateTime `
    ///
    pub fn SetMaximumDateTime(self: QDateEdit, dt: anytype) void {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        qtc.QDateTimeEdit_SetMaximumDateTime(@ptrCast(self.ptr), @ptrCast(dt.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` min: QDateTime `
    ///
    /// ` max: QDateTime `
    ///
    pub fn SetDateTimeRange(self: QDateEdit, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QDateTime;
        comptime _ = @TypeOf(max)._is_QDateTime;
        qtc.QDateTimeEdit_SetDateTimeRange(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MinimumDate(self: QDateEdit) QDate {
        return .{ .ptr = qtc.QDateTimeEdit_MinimumDate(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` min: QDate `
    ///
    pub fn SetMinimumDate(self: QDateEdit, min: anytype) void {
        comptime _ = @TypeOf(min)._is_QDate;
        qtc.QDateTimeEdit_SetMinimumDate(@ptrCast(self.ptr), @ptrCast(min.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ClearMinimumDate(self: QDateEdit) void {
        qtc.QDateTimeEdit_ClearMinimumDate(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MaximumDate(self: QDateEdit) QDate {
        return .{ .ptr = qtc.QDateTimeEdit_MaximumDate(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` max: QDate `
    ///
    pub fn SetMaximumDate(self: QDateEdit, max: anytype) void {
        comptime _ = @TypeOf(max)._is_QDate;
        qtc.QDateTimeEdit_SetMaximumDate(@ptrCast(self.ptr), @ptrCast(max.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ClearMaximumDate(self: QDateEdit) void {
        qtc.QDateTimeEdit_ClearMaximumDate(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` min: QDate `
    ///
    /// ` max: QDate `
    ///
    pub fn SetDateRange(self: QDateEdit, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QDate;
        comptime _ = @TypeOf(max)._is_QDate;
        qtc.QDateTimeEdit_SetDateRange(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#minimumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MinimumTime(self: QDateEdit) QTime {
        return .{ .ptr = qtc.QDateTimeEdit_MinimumTime(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMinimumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` min: QTime `
    ///
    pub fn SetMinimumTime(self: QDateEdit, min: anytype) void {
        comptime _ = @TypeOf(min)._is_QTime;
        qtc.QDateTimeEdit_SetMinimumTime(@ptrCast(self.ptr), @ptrCast(min.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMinimumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ClearMinimumTime(self: QDateEdit) void {
        qtc.QDateTimeEdit_ClearMinimumTime(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#maximumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MaximumTime(self: QDateEdit) QTime {
        return .{ .ptr = qtc.QDateTimeEdit_MaximumTime(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setMaximumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` max: QTime `
    ///
    pub fn SetMaximumTime(self: QDateEdit, max: anytype) void {
        comptime _ = @TypeOf(max)._is_QTime;
        qtc.QDateTimeEdit_SetMaximumTime(@ptrCast(self.ptr), @ptrCast(max.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clearMaximumTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ClearMaximumTime(self: QDateEdit) void {
        qtc.QDateTimeEdit_ClearMaximumTime(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` min: QTime `
    ///
    /// ` max: QTime `
    ///
    pub fn SetTimeRange(self: QDateEdit, min: anytype, max: anytype) void {
        comptime _ = @TypeOf(min)._is_QTime;
        comptime _ = @TypeOf(max)._is_QTime;
        qtc.QDateTimeEdit_SetTimeRange(@ptrCast(self.ptr), @ptrCast(min.ptr), @ptrCast(max.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#displayedSections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qdatetimeedit_enums.Section `
    ///
    pub fn DisplayedSections(self: QDateEdit) i32 {
        return qtc.QDateTimeEdit_DisplayedSections(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` qdatetimeedit_enums.Section `
    ///
    pub fn CurrentSection(self: QDateEdit) i32 {
        return qtc.QDateTimeEdit_CurrentSection(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` index: i32 `
    ///
    /// ## Returns:
    ///
    /// ` qdatetimeedit_enums.Section `
    ///
    pub fn SectionAt(self: QDateEdit, index: i32) i32 {
        return qtc.QDateTimeEdit_SectionAt(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` section: qdatetimeedit_enums.Section `
    ///
    pub fn SetCurrentSection(self: QDateEdit, section: i32) void {
        qtc.QDateTimeEdit_SetCurrentSection(@ptrCast(self.ptr), @bitCast(section));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#currentSectionIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn CurrentSectionIndex(self: QDateEdit) i32 {
        return qtc.QDateTimeEdit_CurrentSectionIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCurrentSectionIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCurrentSectionIndex(self: QDateEdit, index: i32) void {
        qtc.QDateTimeEdit_SetCurrentSectionIndex(@ptrCast(self.ptr), @bitCast(index));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn CalendarWidget(self: QDateEdit) QCalendarWidget {
        return .{ .ptr = qtc.QDateTimeEdit_CalendarWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` calendarWidget: QCalendarWidget `
    ///
    pub fn SetCalendarWidget(self: QDateEdit, calendarWidget: anytype) void {
        comptime _ = @TypeOf(calendarWidget)._is_QCalendarWidget;
        qtc.QDateTimeEdit_SetCalendarWidget(@ptrCast(self.ptr), @ptrCast(calendarWidget.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SectionCount(self: QDateEdit) i32 {
        return qtc.QDateTimeEdit_SectionCount(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setSelectedSection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` section: qdatetimeedit_enums.Section `
    ///
    pub fn SetSelectedSection(self: QDateEdit, section: i32) void {
        qtc.QDateTimeEdit_SetSelectedSection(@ptrCast(self.ptr), @bitCast(section));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sectionText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` section: qdatetimeedit_enums.Section `
    ///
    pub fn SectionText(self: QDateEdit, allocator: std.mem.Allocator, section: i32) []const u8 {
        var _str = qtc.QDateTimeEdit_SectionText(@ptrCast(self.ptr), @bitCast(section));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.SectionText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#displayFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayFormat(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDateTimeEdit_DisplayFormat(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.DisplayFormat: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDisplayFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` format: []const u8 `
    ///
    pub fn SetDisplayFormat(self: QDateEdit, format: []const u8) void {
        const format_str = qtc.libqt_string{
            .len = format.len,
            .data = format.ptr,
        };
        qtc.QDateTimeEdit_SetDisplayFormat(@ptrCast(self.ptr), format_str);
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#calendarPopup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn CalendarPopup(self: QDateEdit) bool {
        return qtc.QDateTimeEdit_CalendarPopup(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setCalendarPopup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetCalendarPopup(self: QDateEdit, enable: bool) void {
        qtc.QDateTimeEdit_SetCalendarPopup(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeSpec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TimeSpec `
    ///
    pub fn TimeSpec(self: QDateEdit) i32 {
        return qtc.QDateTimeEdit_TimeSpec(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeSpec)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` spec: qnamespace_enums.TimeSpec `
    ///
    pub fn SetTimeSpec(self: QDateEdit, spec: i32) void {
        qtc.QDateTimeEdit_SetTimeSpec(@ptrCast(self.ptr), @bitCast(spec));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn TimeZone(self: QDateEdit) QTimeZone {
        return .{ .ptr = qtc.QDateTimeEdit_TimeZone(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTimeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn SetTimeZone(self: QDateEdit, zone: anytype) void {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        qtc.QDateTimeEdit_SetTimeZone(@ptrCast(self.ptr), @ptrCast(zone.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn DateTimeChanged(self: QDateEdit, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.QDateTimeEdit_DateTimeChanged(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit, dateTime: QDateTime) callconv(.c) void `
    ///
    pub fn OnDateTimeChanged(self: QDateEdit, callback: *const fn (QDateEdit, QDateTime) callconv(.c) void) void {
        qtc.QDateTimeEdit_Connect_DateTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn TimeChanged(self: QDateEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.QDateTimeEdit_TimeChanged(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#timeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit, time: QTime) callconv(.c) void `
    ///
    pub fn OnTimeChanged(self: QDateEdit, callback: *const fn (QDateEdit, QTime) callconv(.c) void) void {
        qtc.QDateTimeEdit_Connect_TimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn DateChanged(self: QDateEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.QDateTimeEdit_DateChanged(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit, date: QDate) callconv(.c) void `
    ///
    pub fn OnDateChanged(self: QDateEdit, callback: *const fn (QDateEdit, QDate) callconv(.c) void) void {
        qtc.QDateTimeEdit_Connect_DateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn SetDateTime(self: QDateEdit, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.QDateTimeEdit_SetDateTime(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn SetDate(self: QDateEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.QDateTimeEdit_SetDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#setTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn SetTime(self: QDateEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.QDateTimeEdit_SetTime(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn ButtonSymbols(self: QDateEdit) i32 {
        return qtc.QAbstractSpinBox_ButtonSymbols(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` bs: qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn SetButtonSymbols(self: QDateEdit, bs: i32) void {
        qtc.QAbstractSpinBox_SetButtonSymbols(@ptrCast(self.ptr), @bitCast(bs));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` cm: qabstractspinbox_enums.CorrectionMode `
    ///
    pub fn SetCorrectionMode(self: QDateEdit, cm: i32) void {
        qtc.QAbstractSpinBox_SetCorrectionMode(@ptrCast(self.ptr), @bitCast(cm));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.CorrectionMode `
    ///
    pub fn CorrectionMode(self: QDateEdit) i32 {
        return qtc.QAbstractSpinBox_CorrectionMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn HasAcceptableInput(self: QDateEdit) bool {
        return qtc.QAbstractSpinBox_HasAcceptableInput(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSpinBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SpecialValueText(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSpinBox_SpecialValueText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.SpecialValueText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` txt: []const u8 `
    ///
    pub fn SetSpecialValueText(self: QDateEdit, txt: []const u8) void {
        const txt_str = qtc.libqt_string{
            .len = txt.len,
            .data = txt.ptr,
        };
        qtc.QAbstractSpinBox_SetSpecialValueText(@ptrCast(self.ptr), txt_str);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Wrapping(self: QDateEdit) bool {
        return qtc.QAbstractSpinBox_Wrapping(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` w: bool `
    ///
    pub fn SetWrapping(self: QDateEdit, w: bool) void {
        qtc.QAbstractSpinBox_SetWrapping(@ptrCast(self.ptr), w);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` r: bool `
    ///
    pub fn SetReadOnly(self: QDateEdit, r: bool) void {
        qtc.QAbstractSpinBox_SetReadOnly(@ptrCast(self.ptr), r);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsReadOnly(self: QDateEdit) bool {
        return qtc.QAbstractSpinBox_IsReadOnly(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` kt: bool `
    ///
    pub fn SetKeyboardTracking(self: QDateEdit, kt: bool) void {
        qtc.QAbstractSpinBox_SetKeyboardTracking(@ptrCast(self.ptr), kt);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn KeyboardTracking(self: QDateEdit) bool {
        return qtc.QAbstractSpinBox_KeyboardTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` flag: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QDateEdit, flag: i32) void {
        qtc.QAbstractSpinBox_SetAlignment(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QDateEdit) i32 {
        return qtc.QAbstractSpinBox_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: QDateEdit, frame: bool) void {
        qtc.QAbstractSpinBox_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn HasFrame(self: QDateEdit) bool {
        return qtc.QAbstractSpinBox_HasFrame(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` on: bool `
    ///
    pub fn SetAccelerated(self: QDateEdit, on: bool) void {
        qtc.QAbstractSpinBox_SetAccelerated(@ptrCast(self.ptr), on);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsAccelerated(self: QDateEdit) bool {
        return qtc.QAbstractSpinBox_IsAccelerated(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` shown: bool `
    ///
    pub fn SetGroupSeparatorShown(self: QDateEdit, shown: bool) void {
        qtc.QAbstractSpinBox_SetGroupSeparatorShown(@ptrCast(self.ptr), shown);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsGroupSeparatorShown(self: QDateEdit) bool {
        return qtc.QAbstractSpinBox_IsGroupSeparatorShown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn InterpretText(self: QDateEdit) void {
        qtc.QAbstractSpinBox_InterpretText(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn StepUp(self: QDateEdit) void {
        qtc.QAbstractSpinBox_StepUp(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn StepDown(self: QDateEdit) void {
        qtc.QAbstractSpinBox_StepDown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SelectAll(self: QDateEdit) void {
        qtc.QAbstractSpinBox_SelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn EditingFinished(self: QDateEdit) void {
        qtc.QAbstractSpinBox_EditingFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit) callconv(.c) void `
    ///
    pub fn OnEditingFinished(self: QDateEdit, callback: *const fn (QDateEdit) callconv(.c) void) void {
        qtc.QAbstractSpinBox_Connect_EditingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn WinId(self: QDateEdit) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn CreateWinId(self: QDateEdit) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn InternalWinId(self: QDateEdit) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn EffectiveWinId(self: QDateEdit) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Style(self: QDateEdit) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QDateEdit, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsTopLevel(self: QDateEdit) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsWindow(self: QDateEdit) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsModal(self: QDateEdit) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QDateEdit) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QDateEdit, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsEnabled(self: QDateEdit) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QDateEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QDateEdit, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QDateEdit, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QDateEdit, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn FrameGeometry(self: QDateEdit) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Geometry(self: QDateEdit) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn NormalGeometry(self: QDateEdit) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn X(self: QDateEdit) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Y(self: QDateEdit) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Pos(self: QDateEdit) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn FrameSize(self: QDateEdit) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Size(self: QDateEdit) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Width(self: QDateEdit) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Height(self: QDateEdit) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Rect(self: QDateEdit) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ChildrenRect(self: QDateEdit) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ChildrenRegion(self: QDateEdit) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MinimumSize(self: QDateEdit) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MaximumSize(self: QDateEdit) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MinimumWidth(self: QDateEdit) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MinimumHeight(self: QDateEdit) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MaximumWidth(self: QDateEdit) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MaximumHeight(self: QDateEdit) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QDateEdit, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QDateEdit, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QDateEdit, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QDateEdit, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QDateEdit, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QDateEdit, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QDateEdit, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QDateEdit, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SizeIncrement(self: QDateEdit) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QDateEdit, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QDateEdit, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn BaseSize(self: QDateEdit) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QDateEdit, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QDateEdit, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QDateEdit, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QDateEdit, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QDateEdit, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QDateEdit, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QDateEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QDateEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QDateEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QDateEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QDateEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QDateEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QDateEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QDateEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QDateEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QDateEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QDateEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QDateEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QDateEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QDateEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QDateEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QDateEdit `
    ///
    pub fn Window(self: QDateEdit) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn NativeParentWidget(self: QDateEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn TopLevelWidget(self: QDateEdit) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Palette(self: QDateEdit) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QDateEdit, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QDateEdit, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QDateEdit) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QDateEdit, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QDateEdit) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Font(self: QDateEdit) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QDateEdit, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn FontMetrics(self: QDateEdit) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn FontInfo(self: QDateEdit) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Cursor(self: QDateEdit) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QDateEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn UnsetCursor(self: QDateEdit) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QDateEdit, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn HasMouseTracking(self: QDateEdit) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn UnderMouse(self: QDateEdit) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QDateEdit, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn HasTabletTracking(self: QDateEdit) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QDateEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QDateEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Mask(self: QDateEdit) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ClearMask(self: QDateEdit) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QDateEdit, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QDateEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Grab(self: QDateEdit) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn GraphicsEffect(self: QDateEdit) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QDateEdit, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QDateEdit, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QDateEdit, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QDateEdit, windowTitle: []const u8) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QDateEdit, styleSheet: []const u8) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QDateEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn WindowIcon(self: QDateEdit) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QDateEdit, windowIconText: []const u8) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QDateEdit, windowRole: []const u8) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QDateEdit, filePath: []const u8) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QDateEdit, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn WindowOpacity(self: QDateEdit) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsWindowModified(self: QDateEdit) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QDateEdit, toolTip: []const u8) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QDateEdit, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ToolTipDuration(self: QDateEdit) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QDateEdit, statusTip: []const u8) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QDateEdit, whatsThis: []const u8) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QDateEdit, name: []const u8) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QDateEdit, description: []const u8) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QDateEdit, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QDateEdit) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn UnsetLayoutDirection(self: QDateEdit) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QDateEdit, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Locale(self: QDateEdit) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn UnsetLocale(self: QDateEdit) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsRightToLeft(self: QDateEdit) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsLeftToRight(self: QDateEdit) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SetFocus(self: QDateEdit) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsActiveWindow(self: QDateEdit) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ActivateWindow(self: QDateEdit) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ClearFocus(self: QDateEdit) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QDateEdit, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QDateEdit) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QDateEdit, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn HasFocus(self: QDateEdit) bool {
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
    /// ` self: QDateEdit `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QDateEdit, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn FocusProxy(self: QDateEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QDateEdit) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QDateEdit, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn GrabMouse(self: QDateEdit) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QDateEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ReleaseMouse(self: QDateEdit) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn GrabKeyboard(self: QDateEdit) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ReleaseKeyboard(self: QDateEdit) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QDateEdit, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QDateEdit, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QDateEdit, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QDateEdit, id: i32) void {
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
    /// ` self: QDateEdit `
    ///
    pub fn UpdatesEnabled(self: QDateEdit) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QDateEdit, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn GraphicsProxyWidget(self: QDateEdit) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Update(self: QDateEdit) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Repaint(self: QDateEdit) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QDateEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QDateEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QDateEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QDateEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QDateEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QDateEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QDateEdit, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Show(self: QDateEdit) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Hide(self: QDateEdit) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ShowMinimized(self: QDateEdit) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ShowMaximized(self: QDateEdit) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ShowFullScreen(self: QDateEdit) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ShowNormal(self: QDateEdit) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Close(self: QDateEdit) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Raise(self: QDateEdit) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Lower(self: QDateEdit) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QDateEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QDateEdit, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QDateEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QDateEdit, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QDateEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QDateEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QDateEdit, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QDateEdit, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdateedit.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QDateEdit, geometry: []u8) bool {
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
    /// ` self: QDateEdit `
    ///
    pub fn AdjustSize(self: QDateEdit) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsVisible(self: QDateEdit) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QDateEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsHidden(self: QDateEdit) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsMinimized(self: QDateEdit) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsMaximized(self: QDateEdit) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsFullScreen(self: QDateEdit) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QDateEdit) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QDateEdit, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QDateEdit, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SizePolicy(self: QDateEdit) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QDateEdit, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QDateEdit, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn VisibleRegion(self: QDateEdit) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QDateEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QDateEdit, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ContentsMargins(self: QDateEdit) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ContentsRect(self: QDateEdit) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Layout(self: QDateEdit) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QDateEdit, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn UpdateGeometry(self: QDateEdit) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QDateEdit, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QDateEdit, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QDateEdit, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QDateEdit, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn FocusWidget(self: QDateEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn NextInFocusChain(self: QDateEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn PreviousInFocusChain(self: QDateEdit) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn AcceptDrops(self: QDateEdit) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QDateEdit, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QDateEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QDateEdit, actions: []QAction) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QDateEdit, before: anytype, actions: []QAction) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QDateEdit, before: anytype, action: anytype) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QDateEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QDateEdit, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qdateedit.Actions: Memory allocation failed");
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
    /// ` self: QDateEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QDateEdit, text: []const u8) QAction {
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
    /// ` self: QDateEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QDateEdit, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QDateEdit `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QDateEdit, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QDateEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QDateEdit, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QDateEdit `
    ///
    pub fn ParentWidget(self: QDateEdit) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QDateEdit, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QDateEdit) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QDateEdit, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QDateEdit, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QDateEdit) i32 {
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
    /// ` self: QDateEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QDateEdit, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QDateEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QDateEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QDateEdit, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QDateEdit, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn EnsurePolished(self: QDateEdit) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QDateEdit, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn AutoFillBackground(self: QDateEdit) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QDateEdit, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn BackingStore(self: QDateEdit) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn WindowHandle(self: QDateEdit) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Screen(self: QDateEdit) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QDateEdit, screen: anytype) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QDateEdit, title: []const u8) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QDateEdit, callback: *const fn (QDateEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QDateEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QDateEdit, callback: *const fn (QDateEdit, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QDateEdit, iconText: []const u8) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QDateEdit, callback: *const fn (QDateEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QDateEdit, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QDateEdit, callback: *const fn (QDateEdit, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QDateEdit) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QDateEdit, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QDateEdit, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QDateEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QDateEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QDateEdit, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QDateEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QDateEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QDateEdit, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QDateEdit, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QDateEdit, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QDateEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QDateEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QDateEdit, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QDateEdit, param1: i32, on: bool) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QDateEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QDateEdit, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsWidgetType(self: QDateEdit) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsWindowType(self: QDateEdit) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn IsQuickItemType(self: QDateEdit) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SignalsBlocked(self: QDateEdit) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QDateEdit, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Thread(self: QDateEdit) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDateEdit, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QDateEdit, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QDateEdit, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QDateEdit, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QDateEdit, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QDateEdit, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdateedit.Children: Memory allocation failed");
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
    /// ` self: QDateEdit `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QDateEdit, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QDateEdit, obj: anytype) void {
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
    /// ` self: QDateEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDateEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDateEdit `
    ///
    pub fn Disconnect3(self: QDateEdit) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QDateEdit, receiver: anytype) bool {
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
    /// ` self: QDateEdit `
    ///
    pub fn DumpObjectTree(self: QDateEdit) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn DumpObjectInfo(self: QDateEdit) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QDateEdit, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDateEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDateEdit, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QDateEdit, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdateedit.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdateedit.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDateEdit `
    ///
    pub fn BindingStorage(self: QDateEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn BindingStorage2(self: QDateEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Destroyed(self: QDateEdit) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QDateEdit, callback: *const fn (QDateEdit) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Parent(self: QDateEdit) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QDateEdit, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn DeleteLater(self: QDateEdit) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QDateEdit, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QDateEdit, time: i64, timerType: i32) i32 {
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
    /// ` self: QDateEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDateEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDateEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDateEdit, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QDateEdit, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDateEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDateEdit, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDateEdit `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDateEdit, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDateEdit `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDateEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QDateEdit, callback: *const fn (QDateEdit, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn PaintingActive(self: QDateEdit) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn WidthMM(self: QDateEdit) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn HeightMM(self: QDateEdit) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn LogicalDpiX(self: QDateEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn LogicalDpiY(self: QDateEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn PhysicalDpiX(self: QDateEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn PhysicalDpiY(self: QDateEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn DevicePixelRatio(self: QDateEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn DevicePixelRatioF(self: QDateEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn ColorCount(self: QDateEdit) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Depth(self: QDateEdit) i32 {
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

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SizeHint(self: QDateEdit) QSize {
        return .{ .ptr = qtc.QDateEdit_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SuperSizeHint(self: QDateEdit) QSize {
        return .{ .ptr = qtc.QDateEdit_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QDateEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.QDateEdit_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Clear(self: QDateEdit) void {
        qtc.QDateEdit_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SuperClear(self: QDateEdit) void {
        qtc.QDateEdit_SuperClear(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#clear)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: QDateEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QDateEdit_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` steps: i32 `
    ///
    pub fn StepBy(self: QDateEdit, steps: i32) void {
        qtc.QDateEdit_StepBy(@ptrCast(self.ptr), @bitCast(steps));
    }

    /// ### DEPRECATED: Use `SuperStepBy` instead
    ///
    pub const QBaseStepBy = SuperStepBy;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` steps: i32 `
    ///
    pub fn SuperStepBy(self: QDateEdit, steps: i32) void {
        qtc.QDateEdit_SuperStepBy(@ptrCast(self.ptr), @bitCast(steps));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, steps: i32) callconv(.c) void `
    ///
    pub fn OnStepBy(self: QDateEdit, callback: *const fn (QDateEdit, i32) callconv(.c) void) void {
        qtc.QDateEdit_OnStepBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDateEdit, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDateEdit_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDateEdit, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDateEdit_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QDateEdit, callback: *const fn (QDateEdit, QEvent) callconv(.c) bool) void {
        qtc.QDateEdit_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QDateEdit_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QDateEdit_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QDateEdit, callback: *const fn (QDateEdit, QKeyEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QDateEdit_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QDateEdit_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QDateEdit, callback: *const fn (QDateEdit, QWheelEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QDateEdit_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QDateEdit_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QDateEdit, callback: *const fn (QDateEdit, QFocusEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QDateEdit, next: bool) bool {
        return qtc.QDateEdit_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QDateEdit, next: bool) bool {
        return qtc.QDateEdit_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QDateEdit, callback: *const fn (QDateEdit, bool) callconv(.c) bool) void {
        qtc.QDateEdit_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` input: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    /// ## Returns:
    ///
    /// ` qvalidator_enums.State `
    ///
    pub fn Validate(self: QDateEdit, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return qtc.QDateEdit_Validate(@ptrCast(self.ptr), input_str, @ptrCast(pos));
    }

    /// ### DEPRECATED: Use `SuperValidate` instead
    ///
    pub const QBaseValidate = SuperValidate;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` input: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    /// ## Returns:
    ///
    /// ` qvalidator_enums.State `
    ///
    pub fn SuperValidate(self: QDateEdit, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return qtc.QDateEdit_SuperValidate(@ptrCast(self.ptr), input_str, @ptrCast(pos));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#validate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, input: [*:0]const u8, pos: *i32) callconv(.c) i32 `
    ///
    pub fn OnValidate(self: QDateEdit, callback: *const fn (QDateEdit, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QDateEdit_OnValidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` input: []const u8 `
    ///
    pub fn Fixup(self: QDateEdit, input: []const u8) void {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        qtc.QDateEdit_Fixup(@ptrCast(self.ptr), input_str);
    }

    /// ### DEPRECATED: Use `SuperFixup` instead
    ///
    pub const QBaseFixup = SuperFixup;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` input: []const u8 `
    ///
    pub fn SuperFixup(self: QDateEdit, input: []const u8) void {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        qtc.QDateEdit_SuperFixup(@ptrCast(self.ptr), input_str);
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#fixup)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, input: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFixup(self: QDateEdit, callback: *const fn (QDateEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QDateEdit_OnFixup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn DateTimeFromText(self: QDateEdit, text: []const u8) QDateTime {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QDateEdit_DateTimeFromText(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `SuperDateTimeFromText` instead
    ///
    pub const QBaseDateTimeFromText = SuperDateTimeFromText;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperDateTimeFromText(self: QDateEdit, text: []const u8) QDateTime {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QDateEdit_SuperDateTimeFromText(@ptrCast(self.ptr), text_str) };
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#dateTimeFromText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, text: [*:0]const u8) callconv(.c) QDateTime `
    ///
    pub fn OnDateTimeFromText(self: QDateEdit, callback: *const fn (QDateEdit, [*:0]const u8) callconv(.c) QDateTime) void {
        qtc.QDateEdit_OnDateTimeFromText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dt: QDateTime `
    ///
    pub fn TextFromDateTime(self: QDateEdit, allocator: std.mem.Allocator, dt: anytype) []const u8 {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        var _str = qtc.QDateEdit_TextFromDateTime(@ptrCast(self.ptr), @ptrCast(dt.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.TextFromDateTime: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperTextFromDateTime` instead
    ///
    pub const QBaseTextFromDateTime = SuperTextFromDateTime;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dt: QDateTime `
    ///
    pub fn SuperTextFromDateTime(self: QDateEdit, allocator: std.mem.Allocator, dt: anytype) []const u8 {
        comptime _ = @TypeOf(dt)._is_QDateTime;
        var _str = qtc.QDateEdit_SuperTextFromDateTime(@ptrCast(self.ptr), @ptrCast(dt.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdateedit.TextFromDateTime: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#textFromDateTime)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, dt: QDateTime) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnTextFromDateTime(self: QDateEdit, callback: *const fn (QDateEdit, QDateTime) callconv(.c) [*:0]const u8) void {
        qtc.QDateEdit_OnTextFromDateTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn StepEnabled(self: QDateEdit) i32 {
        return qtc.QDateEdit_StepEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperStepEnabled` instead
    ///
    pub const QBaseStepEnabled = SuperStepEnabled;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn SuperStepEnabled(self: QDateEdit) i32 {
        return qtc.QDateEdit_SuperStepEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#stepEnabled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnStepEnabled(self: QDateEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QDateEdit_OnStepEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateEdit_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateEdit_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QDateEdit, callback: *const fn (QDateEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QDateEdit_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QDateEdit_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QDateEdit, callback: *const fn (QDateEdit, QPaintEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` option: QStyleOptionSpinBox `
    ///
    pub fn InitStyleOption(self: QDateEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSpinBox;
        qtc.QDateEdit_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` option: QStyleOptionSpinBox `
    ///
    pub fn SuperInitStyleOption(self: QDateEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSpinBox;
        qtc.QDateEdit_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QDateTimeEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, option: QStyleOptionSpinBox) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QDateEdit, callback: *const fn (QDateEdit, QStyleOptionSpinBox) callconv(.c) void) void {
        qtc.QDateEdit_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn MinimumSizeHint(self: QDateEdit) QSize {
        return .{ .ptr = qtc.QDateEdit_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SuperMinimumSizeHint(self: QDateEdit) QSize {
        return .{ .ptr = qtc.QDateEdit_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QDateEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.QDateEdit_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QDateEdit, param1: i32) QVariant {
        return .{ .ptr = qtc.QDateEdit_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QDateEdit, param1: i32) QVariant {
        return .{ .ptr = qtc.QDateEdit_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QDateEdit, callback: *const fn (QDateEdit, i32) callconv(.c) QVariant) void {
        qtc.QDateEdit_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QDateEdit_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QDateEdit_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QDateEdit, callback: *const fn (QDateEdit, QResizeEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QDateEdit_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QDateEdit_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QDateEdit, callback: *const fn (QDateEdit, QKeyEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QDateEdit_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QDateEdit_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QDateEdit, callback: *const fn (QDateEdit, QFocusEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QDateEdit_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QDateEdit_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QDateEdit, callback: *const fn (QDateEdit, QContextMenuEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn ChangeEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateEdit_ChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperChangeEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateEdit_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QDateEdit, callback: *const fn (QDateEdit, QEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QDateEdit_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QDateEdit_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QDateEdit, callback: *const fn (QDateEdit, QCloseEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QDateEdit_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperHideEvent` instead
    ///
    pub const QBaseHideEvent = SuperHideEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QDateEdit_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QDateEdit, callback: *const fn (QDateEdit, QHideEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateEdit_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateEdit_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QDateEdit, callback: *const fn (QDateEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateEdit_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateEdit_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QDateEdit, callback: *const fn (QDateEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDateEdit_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDateEdit_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QDateEdit, callback: *const fn (QDateEdit, QTimerEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QDateEdit_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QDateEdit_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QDateEdit, callback: *const fn (QDateEdit, QShowEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn DevType(self: QDateEdit) i32 {
        return qtc.QDateEdit_DevType(@ptrCast(self.ptr));
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
    /// ` self: QDateEdit `
    ///
    pub fn SuperDevType(self: QDateEdit) i32 {
        return qtc.QDateEdit_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QDateEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QDateEdit_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QDateEdit, visible: bool) void {
        qtc.QDateEdit_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QDateEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QDateEdit, visible: bool) void {
        qtc.QDateEdit_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QDateEdit, callback: *const fn (QDateEdit, bool) callconv(.c) void) void {
        qtc.QDateEdit_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QDateEdit, param1: i32) i32 {
        return qtc.QDateEdit_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QDateEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QDateEdit, param1: i32) i32 {
        return qtc.QDateEdit_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QDateEdit, callback: *const fn (QDateEdit, i32) callconv(.c) i32) void {
        qtc.QDateEdit_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn HasHeightForWidth(self: QDateEdit) bool {
        return qtc.QDateEdit_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QDateEdit `
    ///
    pub fn SuperHasHeightForWidth(self: QDateEdit) bool {
        return qtc.QDateEdit_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QDateEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QDateEdit_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn PaintEngine(self: QDateEdit) QPaintEngine {
        return .{ .ptr = qtc.QDateEdit_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QDateEdit `
    ///
    pub fn SuperPaintEngine(self: QDateEdit) QPaintEngine {
        return .{ .ptr = qtc.QDateEdit_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QDateEdit, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QDateEdit_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateEdit_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDateEdit_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QDateEdit, callback: *const fn (QDateEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QDateEdit_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QDateEdit_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QDateEdit, callback: *const fn (QDateEdit, QEnterEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateEdit_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateEdit_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QDateEdit, callback: *const fn (QDateEdit, QEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QDateEdit_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QDateEdit_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QDateEdit, callback: *const fn (QDateEdit, QMoveEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QDateEdit_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QDateEdit_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QDateEdit, callback: *const fn (QDateEdit, QTabletEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QDateEdit_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QDateEdit_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QDateEdit, callback: *const fn (QDateEdit, QActionEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QDateEdit_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QDateEdit_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QDateEdit, callback: *const fn (QDateEdit, QDragEnterEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QDateEdit_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QDateEdit_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QDateEdit, callback: *const fn (QDateEdit, QDragMoveEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QDateEdit_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QDateEdit_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QDateEdit, callback: *const fn (QDateEdit, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QDateEdit_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QDateEdit_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QDateEdit, callback: *const fn (QDateEdit, QDropEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QDateEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QDateEdit_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QDateEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QDateEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QDateEdit_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QDateEdit, callback: *const fn (QDateEdit, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QDateEdit_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QDateEdit, param1: i32) i32 {
        return qtc.QDateEdit_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QDateEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QDateEdit, param1: i32) i32 {
        return qtc.QDateEdit_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QDateEdit, callback: *const fn (QDateEdit, i32) callconv(.c) i32) void {
        qtc.QDateEdit_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QDateEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QDateEdit_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QDateEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QDateEdit_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QDateEdit, callback: *const fn (QDateEdit, QPainter) callconv(.c) void) void {
        qtc.QDateEdit_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QDateEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QDateEdit_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QDateEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QDateEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QDateEdit_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QDateEdit, callback: *const fn (QDateEdit, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QDateEdit_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SharedPainter(self: QDateEdit) QPainter {
        return .{ .ptr = qtc.QDateEdit_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QDateEdit `
    ///
    pub fn SuperSharedPainter(self: QDateEdit) QPainter {
        return .{ .ptr = qtc.QDateEdit_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QDateEdit, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QDateEdit_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QDateEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QDateEdit_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QDateEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QDateEdit_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QDateEdit, callback: *const fn (QDateEdit, QInputMethodEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDateEdit, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDateEdit_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDateEdit, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDateEdit_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QDateEdit, callback: *const fn (QDateEdit, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDateEdit_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDateEdit_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDateEdit_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QDateEdit, callback: *const fn (QDateEdit, QChildEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateEdit_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDateEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDateEdit_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QDateEdit, callback: *const fn (QDateEdit, QEvent) callconv(.c) void) void {
        qtc.QDateEdit_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QDateEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateEdit_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDateEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateEdit_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QDateEdit, callback: *const fn (QDateEdit, QMetaMethod) callconv(.c) void) void {
        qtc.QDateEdit_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QDateEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateEdit_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDateEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDateEdit_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QDateEdit, callback: *const fn (QDateEdit, QMetaMethod) callconv(.c) void) void {
        qtc.QDateEdit_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn LineEdit(self: QDateEdit) QLineEdit {
        return .{ .ptr = qtc.QDateEdit_LineEdit(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperLineEdit` instead
    ///
    pub const QBaseLineEdit = SuperLineEdit;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SuperLineEdit(self: QDateEdit) QLineEdit {
        return .{ .ptr = qtc.QDateEdit_SuperLineEdit(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QLineEdit `
    ///
    pub fn OnLineEdit(self: QDateEdit, callback: *const fn () callconv(.c) QLineEdit) void {
        qtc.QDateEdit_OnLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SetLineEdit(self: QDateEdit, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.QDateEdit_SetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetLineEdit` instead
    ///
    pub const QBaseSetLineEdit = SuperSetLineEdit;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SuperSetLineEdit(self: QDateEdit, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.QDateEdit_SuperSetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, edit: QLineEdit) callconv(.c) void `
    ///
    pub fn OnSetLineEdit(self: QDateEdit, callback: *const fn (QDateEdit, QLineEdit) callconv(.c) void) void {
        qtc.QDateEdit_OnSetLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn UpdateMicroFocus(self: QDateEdit) void {
        qtc.QDateEdit_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QDateEdit `
    ///
    pub fn SuperUpdateMicroFocus(self: QDateEdit) void {
        qtc.QDateEdit_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QDateEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QDateEdit_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Create(self: QDateEdit) void {
        qtc.QDateEdit_Create(@ptrCast(self.ptr));
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
    /// ` self: QDateEdit `
    ///
    pub fn SuperCreate(self: QDateEdit) void {
        qtc.QDateEdit_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QDateEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QDateEdit_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Destroy(self: QDateEdit) void {
        qtc.QDateEdit_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QDateEdit `
    ///
    pub fn SuperDestroy(self: QDateEdit) void {
        qtc.QDateEdit_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QDateEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QDateEdit_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn FocusNextChild(self: QDateEdit) bool {
        return qtc.QDateEdit_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QDateEdit `
    ///
    pub fn SuperFocusNextChild(self: QDateEdit) bool {
        return qtc.QDateEdit_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QDateEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QDateEdit_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn FocusPreviousChild(self: QDateEdit) bool {
        return qtc.QDateEdit_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QDateEdit `
    ///
    pub fn SuperFocusPreviousChild(self: QDateEdit) bool {
        return qtc.QDateEdit_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QDateEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QDateEdit_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Sender(self: QDateEdit) QObject {
        return .{ .ptr = qtc.QDateEdit_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDateEdit `
    ///
    pub fn SuperSender(self: QDateEdit) QObject {
        return .{ .ptr = qtc.QDateEdit_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QDateEdit, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDateEdit_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    pub fn SenderSignalIndex(self: QDateEdit) i32 {
        return qtc.QDateEdit_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDateEdit `
    ///
    pub fn SuperSenderSignalIndex(self: QDateEdit) i32 {
        return qtc.QDateEdit_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QDateEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QDateEdit_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QDateEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDateEdit_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDateEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDateEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDateEdit_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QDateEdit, callback: *const fn (QDateEdit, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDateEdit_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QDateEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDateEdit_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDateEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDateEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDateEdit_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QDateEdit, callback: *const fn (QDateEdit, QMetaMethod) callconv(.c) bool) void {
        qtc.QDateEdit_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDateEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QDateEdit, metricA: i32, metricB: i32) f64 {
        return qtc.QDateEdit_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QDateEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QDateEdit, metricA: i32, metricB: i32) f64 {
        return qtc.QDateEdit_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit`
    ///
    /// ` callback: *const fn (self: QDateEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QDateEdit, callback: *const fn (QDateEdit, i32, i32) callconv(.c) f64) void {
        qtc.QDateEdit_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QDateEdit `
    ///
    /// ` callback: *const fn (self: QDateEdit, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QDateEdit, callback: *const fn (QDateEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdateedit.html#dtor.QDateEdit)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDateEdit `
    ///
    pub fn Delete(self: QDateEdit) void {
        qtc.QDateEdit_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdatetimeedit.html#public-types)
pub const enums = struct {
    pub const Section = enum(i32) {
        pub const NoSection: i32 = 0;
        pub const AmPmSection: i32 = 1;
        pub const MSecSection: i32 = 2;
        pub const SecondSection: i32 = 4;
        pub const MinuteSection: i32 = 8;
        pub const HourSection: i32 = 16;
        pub const DaySection: i32 = 256;
        pub const MonthSection: i32 = 512;
        pub const YearSection: i32 = 1024;
        pub const TimeSections_Mask: i32 = 31;
        pub const DateSections_Mask: i32 = 1792;
    };
};
