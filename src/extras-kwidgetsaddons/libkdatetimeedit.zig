const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
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
const QThread = @import("libqt6").QThread;
const QTime = @import("libqt6").QTime;
const QTimeZone = @import("libqt6").QTimeZone;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const kdatetimeedit_enums = enums;
const qlocale_enums = @import("../libqlocale.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");
const ArrayMap_QDate_constu8 = std.array_hash_map.Auto(QDate, []const u8);

/// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html)
pub const KDateTimeEdit = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KDateTimeEdit,

    pub const _is_KDateTimeEdit = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new KDateTimeEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KDateTimeEdit {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KDateTimeEdit_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KDateTimeEdit object.
    ///
    pub fn New2() KDateTimeEdit {
        return .{ .ptr = qtc.KDateTimeEdit_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn MetaObject(self: KDateTimeEdit) QMetaObject {
        return .{ .ptr = qtc.KDateTimeEdit_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KDateTimeEdit, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KDateTimeEdit_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperMetaObject(self: KDateTimeEdit) QMetaObject {
        return .{ .ptr = qtc.KDateTimeEdit_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KDateTimeEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDateTimeEdit_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KDateTimeEdit_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KDateTimeEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KDateTimeEdit_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KDateTimeEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDateTimeEdit_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KDateTimeEdit_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KDateTimeEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KDateTimeEdit_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of kdatetimeedit_enums.Option `
    ///
    pub fn Options(self: KDateTimeEdit) i32 {
        return qtc.KDateTimeEdit_Options(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn DateTime(self: KDateTimeEdit) QDateTime {
        return .{ .ptr = qtc.KDateTimeEdit_DateTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#date)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Date(self: KDateTimeEdit) QDate {
        return .{ .ptr = qtc.KDateTimeEdit_Date(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#time)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Time(self: KDateTimeEdit) QTime {
        return .{ .ptr = qtc.KDateTimeEdit_Time(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn TimeZone(self: KDateTimeEdit) QTimeZone {
        return .{ .ptr = qtc.KDateTimeEdit_TimeZone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#calendarLocalesList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CalendarLocalesList(self: KDateTimeEdit, allocator: std.mem.Allocator) []QLocale {
        const _arr: qtc.libqt_list = qtc.KDateTimeEdit_CalendarLocalesList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QLocale, _arr.len) catch @panic("kdatetimeedit.CalendarLocalesList: Memory allocation failed");
        const _data: [*]QtC.QLocale = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#minimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn MinimumDateTime(self: KDateTimeEdit) QDateTime {
        return .{ .ptr = qtc.KDateTimeEdit_MinimumDateTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#maximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn MaximumDateTime(self: KDateTimeEdit) QDateTime {
        return .{ .ptr = qtc.KDateTimeEdit_MaximumDateTime(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateDisplayFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qlocale_enums.FormatType `
    ///
    pub fn DateDisplayFormat(self: KDateTimeEdit) i32 {
        return qtc.KDateTimeEdit_DateDisplayFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DateMap(self: KDateTimeEdit, allocator: std.mem.Allocator) ArrayMap_QDate_constu8 {
        const _map: qtc.libqt_map = qtc.KDateTimeEdit_DateMap(@ptrCast(self.ptr));
        var _ret: ArrayMap_QDate_constu8 = .empty;
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]QtC.QDate = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kdatetimeedit.DateMap: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, .{ .ptr = @ptrCast(_key) }, _value_slice) catch @panic("kdatetimeedit.DateMap: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeDisplayFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qlocale_enums.FormatType `
    ///
    pub fn TimeDisplayFormat(self: KDateTimeEdit) i32 {
        return qtc.KDateTimeEdit_TimeDisplayFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeListInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn TimeListInterval(self: KDateTimeEdit) i32 {
        return qtc.KDateTimeEdit_TimeListInterval(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TimeList(self: KDateTimeEdit, allocator: std.mem.Allocator) []QTime {
        const _arr: qtc.libqt_list = qtc.KDateTimeEdit_TimeList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTime, _arr.len) catch @panic("kdatetimeedit.TimeList: Memory allocation failed");
        const _data: [*]QtC.QTime = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeZones)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TimeZones(self: KDateTimeEdit, allocator: std.mem.Allocator) []QTimeZone {
        const _arr: qtc.libqt_list = qtc.KDateTimeEdit_TimeZones(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTimeZone, _arr.len) catch @panic("kdatetimeedit.TimeZones: Memory allocation failed");
        const _data: [*]QtC.QTimeZone = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsValid(self: KDateTimeEdit) bool {
        return qtc.KDateTimeEdit_IsValid(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsNull(self: KDateTimeEdit) bool {
        return qtc.KDateTimeEdit_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#isValidDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsValidDate(self: KDateTimeEdit) bool {
        return qtc.KDateTimeEdit_IsValidDate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#isNullDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsNullDate(self: KDateTimeEdit) bool {
        return qtc.KDateTimeEdit_IsNullDate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#isValidTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsValidTime(self: KDateTimeEdit) bool {
        return qtc.KDateTimeEdit_IsValidTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#isNullTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsNullTime(self: KDateTimeEdit) bool {
        return qtc.KDateTimeEdit_IsNullTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTimeEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn DateTimeEntered(self: KDateTimeEdit, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.KDateTimeEdit_DateTimeEntered(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTimeEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, dateTime: QDateTime) callconv(.c) void `
    ///
    pub fn OnDateTimeEntered(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QDateTime) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_DateTimeEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTimeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn DateTimeChanged(self: KDateTimeEdit, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.KDateTimeEdit_DateTimeChanged(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTimeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, dateTime: QDateTime) callconv(.c) void `
    ///
    pub fn OnDateTimeChanged(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QDateTime) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_DateTimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTimeEdited)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn DateTimeEdited(self: KDateTimeEdit, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.KDateTimeEdit_DateTimeEdited(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateTimeEdited)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, dateTime: QDateTime) callconv(.c) void `
    ///
    pub fn OnDateTimeEdited(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QDateTime) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_DateTimeEdited(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#calendarEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` calendarLocale: QLocale `
    ///
    pub fn CalendarEntered(self: KDateTimeEdit, calendarLocale: anytype) void {
        comptime _ = @TypeOf(calendarLocale)._is_QLocale;
        qtc.KDateTimeEdit_CalendarEntered(@ptrCast(self.ptr), @ptrCast(calendarLocale.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#calendarEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, calendarLocale: QLocale) callconv(.c) void `
    ///
    pub fn OnCalendarEntered(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QLocale) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_CalendarEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#calendarChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` calendarLocale: QLocale `
    ///
    pub fn CalendarChanged(self: KDateTimeEdit, calendarLocale: anytype) void {
        comptime _ = @TypeOf(calendarLocale)._is_QLocale;
        qtc.KDateTimeEdit_CalendarChanged(@ptrCast(self.ptr), @ptrCast(calendarLocale.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#calendarChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, calendarLocale: QLocale) callconv(.c) void `
    ///
    pub fn OnCalendarChanged(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QLocale) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_CalendarChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn DateEntered(self: KDateTimeEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.KDateTimeEdit_DateEntered(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, date: QDate) callconv(.c) void `
    ///
    pub fn OnDateEntered(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QDate) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_DateEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn DateChanged(self: KDateTimeEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.KDateTimeEdit_DateChanged(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, date: QDate) callconv(.c) void `
    ///
    pub fn OnDateChanged(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QDate) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_DateChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateEdited)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn DateEdited(self: KDateTimeEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.KDateTimeEdit_DateEdited(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dateEdited)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, date: QDate) callconv(.c) void `
    ///
    pub fn OnDateEdited(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QDate) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_DateEdited(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn TimeEntered(self: KDateTimeEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.KDateTimeEdit_TimeEntered(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, time: QTime) callconv(.c) void `
    ///
    pub fn OnTimeEntered(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QTime) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_TimeEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn TimeChanged(self: KDateTimeEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.KDateTimeEdit_TimeChanged(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, time: QTime) callconv(.c) void `
    ///
    pub fn OnTimeChanged(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QTime) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_TimeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeEdited)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn TimeEdited(self: KDateTimeEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.KDateTimeEdit_TimeEdited(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeEdited)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, time: QTime) callconv(.c) void `
    ///
    pub fn OnTimeEdited(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QTime) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_TimeEdited(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeZoneEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn TimeZoneEntered(self: KDateTimeEdit, zone: anytype) void {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        qtc.KDateTimeEdit_TimeZoneEntered(@ptrCast(self.ptr), @ptrCast(zone.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeZoneEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, zone: QTimeZone) callconv(.c) void `
    ///
    pub fn OnTimeZoneEntered(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QTimeZone) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_TimeZoneEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeZoneChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn TimeZoneChanged(self: KDateTimeEdit, zone: anytype) void {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        qtc.KDateTimeEdit_TimeZoneChanged(@ptrCast(self.ptr), @ptrCast(zone.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#timeZoneChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, zone: QTimeZone) callconv(.c) void `
    ///
    pub fn OnTimeZoneChanged(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QTimeZone) callconv(.c) void) void {
        qtc.KDateTimeEdit_Connect_TimeZoneChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` options: flag of kdatetimeedit_enums.Option `
    ///
    pub fn SetOptions(self: KDateTimeEdit, options: i32) void {
        qtc.KDateTimeEdit_SetOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn SetDateTime(self: KDateTimeEdit, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.KDateTimeEdit_SetDateTime(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn SetDate(self: KDateTimeEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.KDateTimeEdit_SetDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn SetTime(self: KDateTimeEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.KDateTimeEdit_SetTime(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn SetTimeZone(self: KDateTimeEdit, zone: anytype) void {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        qtc.KDateTimeEdit_SetTimeZone(@ptrCast(self.ptr), @ptrCast(zone.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDateTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` minDateTime: QDateTime `
    ///
    /// ` maxDateTime: QDateTime `
    ///
    pub fn SetDateTimeRange(self: KDateTimeEdit, minDateTime: anytype, maxDateTime: anytype) void {
        comptime _ = @TypeOf(minDateTime)._is_QDateTime;
        comptime _ = @TypeOf(maxDateTime)._is_QDateTime;
        qtc.KDateTimeEdit_SetDateTimeRange(@ptrCast(self.ptr), @ptrCast(minDateTime.ptr), @ptrCast(maxDateTime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#resetDateTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ResetDateTimeRange(self: KDateTimeEdit) void {
        qtc.KDateTimeEdit_ResetDateTimeRange(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setMinimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` minDateTime: QDateTime `
    ///
    pub fn SetMinimumDateTime(self: KDateTimeEdit, minDateTime: anytype) void {
        comptime _ = @TypeOf(minDateTime)._is_QDateTime;
        qtc.KDateTimeEdit_SetMinimumDateTime(@ptrCast(self.ptr), @ptrCast(minDateTime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#resetMinimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ResetMinimumDateTime(self: KDateTimeEdit) void {
        qtc.KDateTimeEdit_ResetMinimumDateTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setMaximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` maxDateTime: QDateTime `
    ///
    pub fn SetMaximumDateTime(self: KDateTimeEdit, maxDateTime: anytype) void {
        comptime _ = @TypeOf(maxDateTime)._is_QDateTime;
        qtc.KDateTimeEdit_SetMaximumDateTime(@ptrCast(self.ptr), @ptrCast(maxDateTime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#resetMaximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ResetMaximumDateTime(self: KDateTimeEdit) void {
        qtc.KDateTimeEdit_ResetMaximumDateTime(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDateDisplayFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` format: qlocale_enums.FormatType `
    ///
    pub fn SetDateDisplayFormat(self: KDateTimeEdit, format: i32) void {
        qtc.KDateTimeEdit_SetDateDisplayFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setCalendarLocalesList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` calendarLocales: []QLocale `
    ///
    pub fn SetCalendarLocalesList(self: KDateTimeEdit, calendarLocales: []QLocale) void {
        const calendarLocales_list = qtc.libqt_list{
            .len = calendarLocales.len,
            .data = @ptrCast(calendarLocales.ptr),
        };
        qtc.KDateTimeEdit_SetCalendarLocalesList(@ptrCast(self.ptr), calendarLocales_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDateMap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` dateMap: ArrayMap_QDate_constu8 `
    ///
    pub fn SetDateMap(self: KDateTimeEdit, allocator: std.mem.Allocator, dateMap: ArrayMap_QDate_constu8) void {
        const dateMap_count = dateMap.count();
        const dateMap_keys = allocator.alloc(QtC.QDate, dateMap_count) catch @panic("kdatetimeedit.SetDateMap: Memory allocation failed");
        defer allocator.free(dateMap_keys);
        const dateMap_values = allocator.alloc(qtc.libqt_string, dateMap_count) catch @panic("kdatetimeedit.SetDateMap: Memory allocation failed");
        defer allocator.free(dateMap_values);
        var i: usize = 0;
        var dateMap_it = dateMap.iterator();
        while (dateMap_it.next()) |it_entry| : (i += 1) {
            const dateMap_key = it_entry.key_ptr.*;
            dateMap_keys[i] = @ptrCast(dateMap_key.ptr);
            const value = it_entry.value_ptr.*;
            dateMap_values[i] = qtc.libqt_string{
                .len = value.len,
                .data = value.ptr,
            };
        }
        const dateMap_map = qtc.libqt_map{
            .len = dateMap_count,
            .keys = @ptrCast(dateMap_keys.ptr),
            .values = @ptrCast(dateMap_values.ptr),
        };
        qtc.KDateTimeEdit_SetDateMap(@ptrCast(self.ptr), dateMap_map);
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeDisplayFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` format: qlocale_enums.FormatType `
    ///
    pub fn SetTimeDisplayFormat(self: KDateTimeEdit, format: i32) void {
        qtc.KDateTimeEdit_SetTimeDisplayFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeListInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` minutes: i32 `
    ///
    pub fn SetTimeListInterval(self: KDateTimeEdit, minutes: i32) void {
        qtc.KDateTimeEdit_SetTimeListInterval(@ptrCast(self.ptr), @bitCast(minutes));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` timeList: []QTime `
    ///
    pub fn SetTimeList(self: KDateTimeEdit, timeList: []QTime) void {
        const timeList_list = qtc.libqt_list{
            .len = timeList.len,
            .data = @ptrCast(timeList.ptr),
        };
        qtc.KDateTimeEdit_SetTimeList(@ptrCast(self.ptr), timeList_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeZones)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` zones: []QTimeZone `
    ///
    pub fn SetTimeZones(self: KDateTimeEdit, zones: []QTimeZone) void {
        const zones_list = qtc.libqt_list{
            .len = zones.len,
            .data = @ptrCast(zones.ptr),
        };
        qtc.KDateTimeEdit_SetTimeZones(@ptrCast(self.ptr), zones_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#eventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KDateTimeEdit, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDateTimeEdit_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#eventFilter)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, object: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QObject, QEvent) callconv(.c) bool) void {
        qtc.KDateTimeEdit_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#eventFilter)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KDateTimeEdit, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDateTimeEdit_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KDateTimeEdit_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QFocusEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KDateTimeEdit_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#focusOutEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KDateTimeEdit_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QFocusEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KDateTimeEdit_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KDateTimeEdit_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QResizeEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KDateTimeEdit_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn AssignDateTime(self: KDateTimeEdit, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.KDateTimeEdit_AssignDateTime(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignDateTime)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, dateTime: QDateTime) callconv(.c) void `
    ///
    pub fn OnAssignDateTime(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QDateTime) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnAssignDateTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAssignDateTime` instead
    ///
    pub const QBaseAssignDateTime = SuperAssignDateTime;

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignDateTime)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` dateTime: QDateTime `
    ///
    pub fn SuperAssignDateTime(self: KDateTimeEdit, dateTime: anytype) void {
        comptime _ = @TypeOf(dateTime)._is_QDateTime;
        qtc.KDateTimeEdit_SuperAssignDateTime(@ptrCast(self.ptr), @ptrCast(dateTime.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignDate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn AssignDate(self: KDateTimeEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.KDateTimeEdit_AssignDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignDate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, date: QDate) callconv(.c) void `
    ///
    pub fn OnAssignDate(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QDate) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnAssignDate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAssignDate` instead
    ///
    pub const QBaseAssignDate = SuperAssignDate;

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignDate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` date: QDate `
    ///
    pub fn SuperAssignDate(self: KDateTimeEdit, date: anytype) void {
        comptime _ = @TypeOf(date)._is_QDate;
        qtc.KDateTimeEdit_SuperAssignDate(@ptrCast(self.ptr), @ptrCast(date.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn AssignTime(self: KDateTimeEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.KDateTimeEdit_AssignTime(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignTime)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, time: QTime) callconv(.c) void `
    ///
    pub fn OnAssignTime(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QTime) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnAssignTime(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAssignTime` instead
    ///
    pub const QBaseAssignTime = SuperAssignTime;

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignTime)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` time: QTime `
    ///
    pub fn SuperAssignTime(self: KDateTimeEdit, time: anytype) void {
        comptime _ = @TypeOf(time)._is_QTime;
        qtc.KDateTimeEdit_SuperAssignTime(@ptrCast(self.ptr), @ptrCast(time.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignTimeZone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn AssignTimeZone(self: KDateTimeEdit, zone: anytype) void {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        qtc.KDateTimeEdit_AssignTimeZone(@ptrCast(self.ptr), @ptrCast(zone.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignTimeZone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, zone: QTimeZone) callconv(.c) void `
    ///
    pub fn OnAssignTimeZone(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QTimeZone) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnAssignTimeZone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAssignTimeZone` instead
    ///
    pub const QBaseAssignTimeZone = SuperAssignTimeZone;

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#assignTimeZone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` zone: QTimeZone `
    ///
    pub fn SuperAssignTimeZone(self: KDateTimeEdit, zone: anytype) void {
        comptime _ = @TypeOf(zone)._is_QTimeZone;
        qtc.KDateTimeEdit_SuperAssignTimeZone(@ptrCast(self.ptr), @ptrCast(zone.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDateTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` minDateTime: QDateTime `
    ///
    /// ` maxDateTime: QDateTime `
    ///
    /// ` minWarnMsg: []const u8 `
    ///
    pub fn SetDateTimeRange3(self: KDateTimeEdit, minDateTime: anytype, maxDateTime: anytype, minWarnMsg: []const u8) void {
        comptime _ = @TypeOf(minDateTime)._is_QDateTime;
        comptime _ = @TypeOf(maxDateTime)._is_QDateTime;
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        qtc.KDateTimeEdit_SetDateTimeRange3(@ptrCast(self.ptr), @ptrCast(minDateTime.ptr), @ptrCast(maxDateTime.ptr), minWarnMsg_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setDateTimeRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` minDateTime: QDateTime `
    ///
    /// ` maxDateTime: QDateTime `
    ///
    /// ` minWarnMsg: []const u8 `
    ///
    /// ` maxWarnMsg: []const u8 `
    ///
    pub fn SetDateTimeRange4(self: KDateTimeEdit, minDateTime: anytype, maxDateTime: anytype, minWarnMsg: []const u8, maxWarnMsg: []const u8) void {
        comptime _ = @TypeOf(minDateTime)._is_QDateTime;
        comptime _ = @TypeOf(maxDateTime)._is_QDateTime;
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        const maxWarnMsg_str = qtc.libqt_string{
            .len = maxWarnMsg.len,
            .data = maxWarnMsg.ptr,
        };
        qtc.KDateTimeEdit_SetDateTimeRange4(@ptrCast(self.ptr), @ptrCast(minDateTime.ptr), @ptrCast(maxDateTime.ptr), minWarnMsg_str, maxWarnMsg_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setMinimumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` minDateTime: QDateTime `
    ///
    /// ` minWarnMsg: []const u8 `
    ///
    pub fn SetMinimumDateTime2(self: KDateTimeEdit, minDateTime: anytype, minWarnMsg: []const u8) void {
        comptime _ = @TypeOf(minDateTime)._is_QDateTime;
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        qtc.KDateTimeEdit_SetMinimumDateTime2(@ptrCast(self.ptr), @ptrCast(minDateTime.ptr), minWarnMsg_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setMaximumDateTime)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` maxDateTime: QDateTime `
    ///
    /// ` maxWarnMsg: []const u8 `
    ///
    pub fn SetMaximumDateTime2(self: KDateTimeEdit, maxDateTime: anytype, maxWarnMsg: []const u8) void {
        comptime _ = @TypeOf(maxDateTime)._is_QDateTime;
        const maxWarnMsg_str = qtc.libqt_string{
            .len = maxWarnMsg.len,
            .data = maxWarnMsg.ptr,
        };
        qtc.KDateTimeEdit_SetMaximumDateTime2(@ptrCast(self.ptr), @ptrCast(maxDateTime.ptr), maxWarnMsg_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` timeList: []QTime `
    ///
    /// ` minWarnMsg: []const u8 `
    ///
    pub fn SetTimeList2(self: KDateTimeEdit, timeList: []QTime, minWarnMsg: []const u8) void {
        const timeList_list = qtc.libqt_list{
            .len = timeList.len,
            .data = @ptrCast(timeList.ptr),
        };
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        qtc.KDateTimeEdit_SetTimeList2(@ptrCast(self.ptr), timeList_list, minWarnMsg_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#setTimeList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` timeList: []QTime `
    ///
    /// ` minWarnMsg: []const u8 `
    ///
    /// ` maxWarnMsg: []const u8 `
    ///
    pub fn SetTimeList3(self: KDateTimeEdit, timeList: []QTime, minWarnMsg: []const u8, maxWarnMsg: []const u8) void {
        const timeList_list = qtc.libqt_list{
            .len = timeList.len,
            .data = @ptrCast(timeList.ptr),
        };
        const minWarnMsg_str = qtc.libqt_string{
            .len = minWarnMsg.len,
            .data = minWarnMsg.ptr,
        };
        const maxWarnMsg_str = qtc.libqt_string{
            .len = maxWarnMsg.len,
            .data = maxWarnMsg.ptr,
        };
        qtc.KDateTimeEdit_SetTimeList3(@ptrCast(self.ptr), timeList_list, minWarnMsg_str, maxWarnMsg_str);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn WinId(self: KDateTimeEdit) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn CreateWinId(self: KDateTimeEdit) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn InternalWinId(self: KDateTimeEdit) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn EffectiveWinId(self: KDateTimeEdit) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Style(self: KDateTimeEdit) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KDateTimeEdit, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsTopLevel(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsWindow(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsModal(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KDateTimeEdit) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KDateTimeEdit, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsEnabled(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KDateTimeEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KDateTimeEdit, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KDateTimeEdit, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KDateTimeEdit, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn FrameGeometry(self: KDateTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Geometry(self: KDateTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn NormalGeometry(self: KDateTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn X(self: KDateTimeEdit) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Y(self: KDateTimeEdit) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Pos(self: KDateTimeEdit) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn FrameSize(self: KDateTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Size(self: KDateTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Width(self: KDateTimeEdit) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Height(self: KDateTimeEdit) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Rect(self: KDateTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ChildrenRect(self: KDateTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ChildrenRegion(self: KDateTimeEdit) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn MinimumSize(self: KDateTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn MaximumSize(self: KDateTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn MinimumWidth(self: KDateTimeEdit) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn MinimumHeight(self: KDateTimeEdit) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn MaximumWidth(self: KDateTimeEdit) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn MaximumHeight(self: KDateTimeEdit) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KDateTimeEdit, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KDateTimeEdit, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KDateTimeEdit, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KDateTimeEdit, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KDateTimeEdit, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KDateTimeEdit, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KDateTimeEdit, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KDateTimeEdit, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn SizeIncrement(self: KDateTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KDateTimeEdit, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KDateTimeEdit, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn BaseSize(self: KDateTimeEdit) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KDateTimeEdit, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KDateTimeEdit, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KDateTimeEdit, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KDateTimeEdit, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KDateTimeEdit, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KDateTimeEdit, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KDateTimeEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KDateTimeEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KDateTimeEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KDateTimeEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KDateTimeEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KDateTimeEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KDateTimeEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KDateTimeEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KDateTimeEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KDateTimeEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KDateTimeEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KDateTimeEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn Window(self: KDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn NativeParentWidget(self: KDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn TopLevelWidget(self: KDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Palette(self: KDateTimeEdit) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KDateTimeEdit, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KDateTimeEdit, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KDateTimeEdit) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KDateTimeEdit, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KDateTimeEdit) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Font(self: KDateTimeEdit) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KDateTimeEdit, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn FontMetrics(self: KDateTimeEdit) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn FontInfo(self: KDateTimeEdit) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Cursor(self: KDateTimeEdit) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KDateTimeEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn UnsetCursor(self: KDateTimeEdit) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KDateTimeEdit, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn HasMouseTracking(self: KDateTimeEdit) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn UnderMouse(self: KDateTimeEdit) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KDateTimeEdit, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn HasTabletTracking(self: KDateTimeEdit) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KDateTimeEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KDateTimeEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Mask(self: KDateTimeEdit) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ClearMask(self: KDateTimeEdit) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KDateTimeEdit, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KDateTimeEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Grab(self: KDateTimeEdit) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn GraphicsEffect(self: KDateTimeEdit) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KDateTimeEdit, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KDateTimeEdit, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KDateTimeEdit, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KDateTimeEdit, windowTitle: []const u8) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KDateTimeEdit, styleSheet: []const u8) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KDateTimeEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn WindowIcon(self: KDateTimeEdit) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KDateTimeEdit, windowIconText: []const u8) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KDateTimeEdit, windowRole: []const u8) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KDateTimeEdit, filePath: []const u8) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KDateTimeEdit, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn WindowOpacity(self: KDateTimeEdit) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsWindowModified(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KDateTimeEdit, toolTip: []const u8) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KDateTimeEdit, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ToolTipDuration(self: KDateTimeEdit) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KDateTimeEdit, statusTip: []const u8) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KDateTimeEdit, whatsThis: []const u8) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KDateTimeEdit, name: []const u8) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KDateTimeEdit, description: []const u8) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KDateTimeEdit, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KDateTimeEdit) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn UnsetLayoutDirection(self: KDateTimeEdit) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KDateTimeEdit, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Locale(self: KDateTimeEdit) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn UnsetLocale(self: KDateTimeEdit) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsRightToLeft(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsLeftToRight(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn SetFocus(self: KDateTimeEdit) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsActiveWindow(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ActivateWindow(self: KDateTimeEdit) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ClearFocus(self: KDateTimeEdit) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KDateTimeEdit, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KDateTimeEdit) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KDateTimeEdit, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn HasFocus(self: KDateTimeEdit) bool {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KDateTimeEdit, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn FocusProxy(self: KDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KDateTimeEdit) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KDateTimeEdit, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn GrabMouse(self: KDateTimeEdit) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ReleaseMouse(self: KDateTimeEdit) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn GrabKeyboard(self: KDateTimeEdit) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ReleaseKeyboard(self: KDateTimeEdit) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KDateTimeEdit, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KDateTimeEdit, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KDateTimeEdit, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KDateTimeEdit, id: i32) void {
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn UpdatesEnabled(self: KDateTimeEdit) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KDateTimeEdit, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn GraphicsProxyWidget(self: KDateTimeEdit) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Update(self: KDateTimeEdit) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Repaint(self: KDateTimeEdit) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KDateTimeEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KDateTimeEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KDateTimeEdit, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Show(self: KDateTimeEdit) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Hide(self: KDateTimeEdit) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ShowMinimized(self: KDateTimeEdit) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ShowMaximized(self: KDateTimeEdit) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ShowFullScreen(self: KDateTimeEdit) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ShowNormal(self: KDateTimeEdit) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Close(self: KDateTimeEdit) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Raise(self: KDateTimeEdit) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Lower(self: KDateTimeEdit) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KDateTimeEdit, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KDateTimeEdit, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KDateTimeEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KDateTimeEdit, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KDateTimeEdit, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kdatetimeedit.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KDateTimeEdit, geometry: []u8) bool {
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn AdjustSize(self: KDateTimeEdit) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsVisible(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KDateTimeEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsHidden(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsMinimized(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsMaximized(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsFullScreen(self: KDateTimeEdit) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KDateTimeEdit) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KDateTimeEdit, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KDateTimeEdit, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn SizePolicy(self: KDateTimeEdit) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KDateTimeEdit, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KDateTimeEdit, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn VisibleRegion(self: KDateTimeEdit) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KDateTimeEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KDateTimeEdit, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ContentsMargins(self: KDateTimeEdit) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ContentsRect(self: KDateTimeEdit) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Layout(self: KDateTimeEdit) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KDateTimeEdit, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn UpdateGeometry(self: KDateTimeEdit) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KDateTimeEdit, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KDateTimeEdit, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KDateTimeEdit, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KDateTimeEdit, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn FocusWidget(self: KDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn NextInFocusChain(self: KDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn PreviousInFocusChain(self: KDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn AcceptDrops(self: KDateTimeEdit) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KDateTimeEdit, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KDateTimeEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KDateTimeEdit, actions: []QAction) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KDateTimeEdit, before: anytype, actions: []QAction) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KDateTimeEdit, before: anytype, action: anytype) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KDateTimeEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KDateTimeEdit, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kdatetimeedit.Actions: Memory allocation failed");
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KDateTimeEdit, text: []const u8) QAction {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KDateTimeEdit, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KDateTimeEdit, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KDateTimeEdit, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn ParentWidget(self: KDateTimeEdit) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KDateTimeEdit, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KDateTimeEdit) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KDateTimeEdit, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KDateTimeEdit, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KDateTimeEdit) i32 {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KDateTimeEdit, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KDateTimeEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KDateTimeEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KDateTimeEdit, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KDateTimeEdit, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn EnsurePolished(self: KDateTimeEdit) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KDateTimeEdit, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn AutoFillBackground(self: KDateTimeEdit) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KDateTimeEdit, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn BackingStore(self: KDateTimeEdit) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn WindowHandle(self: KDateTimeEdit) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Screen(self: KDateTimeEdit) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KDateTimeEdit, screen: anytype) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KDateTimeEdit, title: []const u8) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KDateTimeEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KDateTimeEdit, iconText: []const u8) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KDateTimeEdit, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KDateTimeEdit) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KDateTimeEdit, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KDateTimeEdit, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KDateTimeEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KDateTimeEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KDateTimeEdit, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KDateTimeEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KDateTimeEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KDateTimeEdit, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KDateTimeEdit, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KDateTimeEdit, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KDateTimeEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KDateTimeEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KDateTimeEdit, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KDateTimeEdit, param1: i32, on: bool) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KDateTimeEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kdatetimeedit.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KDateTimeEdit, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsWidgetType(self: KDateTimeEdit) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsWindowType(self: KDateTimeEdit) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn IsQuickItemType(self: KDateTimeEdit) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn SignalsBlocked(self: KDateTimeEdit) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KDateTimeEdit, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Thread(self: KDateTimeEdit) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KDateTimeEdit, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KDateTimeEdit, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KDateTimeEdit, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KDateTimeEdit, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KDateTimeEdit, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KDateTimeEdit, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kdatetimeedit.Children: Memory allocation failed");
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KDateTimeEdit, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KDateTimeEdit, obj: anytype) void {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KDateTimeEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn Disconnect3(self: KDateTimeEdit) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KDateTimeEdit, receiver: anytype) bool {
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn DumpObjectTree(self: KDateTimeEdit) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn DumpObjectInfo(self: KDateTimeEdit) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KDateTimeEdit, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KDateTimeEdit, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KDateTimeEdit, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kdatetimeedit.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kdatetimeedit.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn BindingStorage(self: KDateTimeEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn BindingStorage2(self: KDateTimeEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Destroyed(self: KDateTimeEdit) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Parent(self: KDateTimeEdit) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KDateTimeEdit, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn DeleteLater(self: KDateTimeEdit) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KDateTimeEdit, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KDateTimeEdit, time: i64, timerType: i32) i32 {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KDateTimeEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KDateTimeEdit, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KDateTimeEdit, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KDateTimeEdit, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KDateTimeEdit, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn PaintingActive(self: KDateTimeEdit) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn WidthMM(self: KDateTimeEdit) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn HeightMM(self: KDateTimeEdit) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn LogicalDpiX(self: KDateTimeEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn LogicalDpiY(self: KDateTimeEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn PhysicalDpiX(self: KDateTimeEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn PhysicalDpiY(self: KDateTimeEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn DevicePixelRatio(self: KDateTimeEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn DevicePixelRatioF(self: KDateTimeEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn ColorCount(self: KDateTimeEdit) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Depth(self: KDateTimeEdit) i32 {
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

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn DevType(self: KDateTimeEdit) i32 {
        return qtc.KDateTimeEdit_DevType(@ptrCast(self.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperDevType(self: KDateTimeEdit) i32 {
        return qtc.KDateTimeEdit_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KDateTimeEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.KDateTimeEdit_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KDateTimeEdit, visible: bool) void {
        qtc.KDateTimeEdit_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KDateTimeEdit, visible: bool) void {
        qtc.KDateTimeEdit_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, bool) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn SizeHint(self: KDateTimeEdit) QSize {
        return .{ .ptr = qtc.KDateTimeEdit_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperSizeHint(self: KDateTimeEdit) QSize {
        return .{ .ptr = qtc.KDateTimeEdit_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KDateTimeEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.KDateTimeEdit_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn MinimumSizeHint(self: KDateTimeEdit) QSize {
        return .{ .ptr = qtc.KDateTimeEdit_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperMinimumSizeHint(self: KDateTimeEdit) QSize {
        return .{ .ptr = qtc.KDateTimeEdit_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KDateTimeEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.KDateTimeEdit_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KDateTimeEdit, param1: i32) i32 {
        return qtc.KDateTimeEdit_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KDateTimeEdit, param1: i32) i32 {
        return qtc.KDateTimeEdit_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, i32) callconv(.c) i32) void {
        qtc.KDateTimeEdit_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn HasHeightForWidth(self: KDateTimeEdit) bool {
        return qtc.KDateTimeEdit_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperHasHeightForWidth(self: KDateTimeEdit) bool {
        return qtc.KDateTimeEdit_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KDateTimeEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.KDateTimeEdit_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn PaintEngine(self: KDateTimeEdit) QPaintEngine {
        return .{ .ptr = qtc.KDateTimeEdit_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperPaintEngine(self: KDateTimeEdit) QPaintEngine {
        return .{ .ptr = qtc.KDateTimeEdit_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KDateTimeEdit, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KDateTimeEdit_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KDateTimeEdit, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDateTimeEdit_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KDateTimeEdit, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KDateTimeEdit_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QEvent) callconv(.c) bool) void {
        qtc.KDateTimeEdit_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDateTimeEdit_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDateTimeEdit_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QMouseEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDateTimeEdit_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDateTimeEdit_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QMouseEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDateTimeEdit_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDateTimeEdit_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QMouseEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDateTimeEdit_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KDateTimeEdit_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QMouseEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KDateTimeEdit_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KDateTimeEdit_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QWheelEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KDateTimeEdit_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KDateTimeEdit_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QKeyEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KDateTimeEdit_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KDateTimeEdit_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QKeyEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KDateTimeEdit_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KDateTimeEdit_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QEnterEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDateTimeEdit_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDateTimeEdit_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KDateTimeEdit_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KDateTimeEdit_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QPaintEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KDateTimeEdit_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KDateTimeEdit_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QMoveEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KDateTimeEdit_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KDateTimeEdit_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QCloseEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KDateTimeEdit_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KDateTimeEdit_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QContextMenuEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KDateTimeEdit_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KDateTimeEdit_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QTabletEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KDateTimeEdit_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KDateTimeEdit_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QActionEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KDateTimeEdit_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KDateTimeEdit_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QDragEnterEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KDateTimeEdit_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KDateTimeEdit_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QDragMoveEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KDateTimeEdit_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KDateTimeEdit_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KDateTimeEdit_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KDateTimeEdit_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QDropEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KDateTimeEdit_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KDateTimeEdit_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QShowEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KDateTimeEdit_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KDateTimeEdit_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QHideEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KDateTimeEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KDateTimeEdit_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KDateTimeEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KDateTimeEdit_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KDateTimeEdit_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KDateTimeEdit_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KDateTimeEdit_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KDateTimeEdit, param1: i32) i32 {
        return qtc.KDateTimeEdit_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KDateTimeEdit, param1: i32) i32 {
        return qtc.KDateTimeEdit_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, i32) callconv(.c) i32) void {
        qtc.KDateTimeEdit_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KDateTimeEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KDateTimeEdit_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KDateTimeEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KDateTimeEdit_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QPainter) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KDateTimeEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KDateTimeEdit_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KDateTimeEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KDateTimeEdit_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KDateTimeEdit_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn SharedPainter(self: KDateTimeEdit) QPainter {
        return .{ .ptr = qtc.KDateTimeEdit_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperSharedPainter(self: KDateTimeEdit) QPainter {
        return .{ .ptr = qtc.KDateTimeEdit_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KDateTimeEdit, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KDateTimeEdit_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KDateTimeEdit_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KDateTimeEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KDateTimeEdit_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QInputMethodEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KDateTimeEdit, param1: i32) QVariant {
        return .{ .ptr = qtc.KDateTimeEdit_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KDateTimeEdit, param1: i32) QVariant {
        return .{ .ptr = qtc.KDateTimeEdit_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, i32) callconv(.c) QVariant) void {
        qtc.KDateTimeEdit_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KDateTimeEdit, next: bool) bool {
        return qtc.KDateTimeEdit_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KDateTimeEdit, next: bool) bool {
        return qtc.KDateTimeEdit_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, bool) callconv(.c) bool) void {
        qtc.KDateTimeEdit_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KDateTimeEdit_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KDateTimeEdit_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QTimerEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KDateTimeEdit_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KDateTimeEdit_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QChildEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDateTimeEdit_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KDateTimeEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KDateTimeEdit_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QEvent) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KDateTimeEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDateTimeEdit_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KDateTimeEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDateTimeEdit_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QMetaMethod) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KDateTimeEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDateTimeEdit_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KDateTimeEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KDateTimeEdit_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QMetaMethod) callconv(.c) void) void {
        qtc.KDateTimeEdit_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn UpdateMicroFocus(self: KDateTimeEdit) void {
        qtc.KDateTimeEdit_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperUpdateMicroFocus(self: KDateTimeEdit) void {
        qtc.KDateTimeEdit_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KDateTimeEdit, callback: *const fn () callconv(.c) void) void {
        qtc.KDateTimeEdit_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Create(self: KDateTimeEdit) void {
        qtc.KDateTimeEdit_Create(@ptrCast(self.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperCreate(self: KDateTimeEdit) void {
        qtc.KDateTimeEdit_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KDateTimeEdit, callback: *const fn () callconv(.c) void) void {
        qtc.KDateTimeEdit_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Destroy(self: KDateTimeEdit) void {
        qtc.KDateTimeEdit_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperDestroy(self: KDateTimeEdit) void {
        qtc.KDateTimeEdit_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KDateTimeEdit, callback: *const fn () callconv(.c) void) void {
        qtc.KDateTimeEdit_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn FocusNextChild(self: KDateTimeEdit) bool {
        return qtc.KDateTimeEdit_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperFocusNextChild(self: KDateTimeEdit) bool {
        return qtc.KDateTimeEdit_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KDateTimeEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.KDateTimeEdit_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn FocusPreviousChild(self: KDateTimeEdit) bool {
        return qtc.KDateTimeEdit_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperFocusPreviousChild(self: KDateTimeEdit) bool {
        return qtc.KDateTimeEdit_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KDateTimeEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.KDateTimeEdit_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Sender(self: KDateTimeEdit) QObject {
        return .{ .ptr = qtc.KDateTimeEdit_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperSender(self: KDateTimeEdit) QObject {
        return .{ .ptr = qtc.KDateTimeEdit_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KDateTimeEdit, callback: *const fn () callconv(.c) QObject) void {
        qtc.KDateTimeEdit_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn SenderSignalIndex(self: KDateTimeEdit) i32 {
        return qtc.KDateTimeEdit_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    pub fn SuperSenderSignalIndex(self: KDateTimeEdit) i32 {
        return qtc.KDateTimeEdit_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KDateTimeEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.KDateTimeEdit_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KDateTimeEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDateTimeEdit_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KDateTimeEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KDateTimeEdit_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, [*:0]const u8) callconv(.c) i32) void {
        qtc.KDateTimeEdit_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KDateTimeEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDateTimeEdit_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KDateTimeEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KDateTimeEdit_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, QMetaMethod) callconv(.c) bool) void {
        qtc.KDateTimeEdit_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KDateTimeEdit, metricA: i32, metricB: i32) f64 {
        return qtc.KDateTimeEdit_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KDateTimeEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KDateTimeEdit, metricA: i32, metricB: i32) f64 {
        return qtc.KDateTimeEdit_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit`
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, i32, i32) callconv(.c) f64) void {
        qtc.KDateTimeEdit_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KDateTimeEdit `
    ///
    /// ` callback: *const fn (self: KDateTimeEdit, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KDateTimeEdit, callback: *const fn (KDateTimeEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#dtor.KDateTimeEdit)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KDateTimeEdit `
    ///
    pub fn Delete(self: KDateTimeEdit) void {
        qtc.KDateTimeEdit_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kdatetimeedit.html#public-types)
pub const enums = struct {
    pub const Option = enum(i32) {
        pub const ShowCalendar: i32 = 1;
        pub const ShowDate: i32 = 2;
        pub const ShowTime: i32 = 4;
        pub const ShowTimeZone: i32 = 8;
        pub const EditDate: i32 = 32;
        pub const EditTime: i32 = 64;
        pub const SelectCalendar: i32 = 256;
        pub const SelectDate: i32 = 512;
        pub const SelectTime: i32 = 1024;
        pub const SelectTimeZone: i32 = 2048;
        pub const DatePicker: i32 = 4096;
        pub const DateKeywords: i32 = 8192;
        pub const ForceTime: i32 = 16384;
        pub const WarnOnInvalid: i32 = 32768;
    };
};
