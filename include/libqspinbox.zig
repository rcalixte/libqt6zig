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
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qabstractspinbox_enums = @import("libqabstractspinbox.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qvalidator_enums = @import("libqvalidator.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html)
pub const QSpinBox = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QSpinBox,

    pub const _is_QSpinBox = {};
    pub const _is_QAbstractSpinBox = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QSpinBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QSpinBox {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QSpinBox_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QSpinBox object.
    ///
    pub fn New2() QSpinBox {
        return .{ .ptr = qtc.QSpinBox_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn MetaObject(self: QSpinBox) QMetaObject {
        return .{ .ptr = qtc.QSpinBox_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QSpinBox, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QSpinBox_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperMetaObject(self: QSpinBox) QMetaObject {
        return .{ .ptr = qtc.QSpinBox_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QSpinBox, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSpinBox_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QSpinBox, callback: *const fn (QSpinBox, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QSpinBox_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QSpinBox, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QSpinBox_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QSpinBox, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSpinBox_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QSpinBox, callback: *const fn (QSpinBox, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QSpinBox_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QSpinBox, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QSpinBox_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Value(self: QSpinBox) i32 {
        return qtc.QSpinBox_Value(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSpinBox_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn SetPrefix(self: QSpinBox, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QSpinBox_SetPrefix(@ptrCast(self.ptr), prefix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#suffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Suffix(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSpinBox_Suffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.Suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` suffix: []const u8 `
    ///
    pub fn SetSuffix(self: QSpinBox, suffix: []const u8) void {
        const suffix_str = qtc.libqt_string{
            .len = suffix.len,
            .data = suffix.ptr,
        };
        qtc.QSpinBox_SetSuffix(@ptrCast(self.ptr), suffix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#cleanText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CleanText(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSpinBox_CleanText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.CleanText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#singleStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn SingleStep(self: QSpinBox) i32 {
        return qtc.QSpinBox_SingleStep(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setSingleStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` val: i32 `
    ///
    pub fn SetSingleStep(self: QSpinBox, val: i32) void {
        qtc.QSpinBox_SetSingleStep(@ptrCast(self.ptr), @bitCast(val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#minimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Minimum(self: QSpinBox) i32 {
        return qtc.QSpinBox_Minimum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setMinimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` min: i32 `
    ///
    pub fn SetMinimum(self: QSpinBox, min: i32) void {
        qtc.QSpinBox_SetMinimum(@ptrCast(self.ptr), @bitCast(min));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#maximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Maximum(self: QSpinBox) i32 {
        return qtc.QSpinBox_Maximum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` max: i32 `
    ///
    pub fn SetMaximum(self: QSpinBox, max: i32) void {
        qtc.QSpinBox_SetMaximum(@ptrCast(self.ptr), @bitCast(max));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` min: i32 `
    ///
    /// ` max: i32 `
    ///
    pub fn SetRange(self: QSpinBox, min: i32, max: i32) void {
        qtc.QSpinBox_SetRange(@ptrCast(self.ptr), @bitCast(min), @bitCast(max));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#stepType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.StepType `
    ///
    pub fn StepType(self: QSpinBox) i32 {
        return qtc.QSpinBox_StepType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setStepType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` stepType: qabstractspinbox_enums.StepType `
    ///
    pub fn SetStepType(self: QSpinBox, stepType: i32) void {
        qtc.QSpinBox_SetStepType(@ptrCast(self.ptr), @bitCast(stepType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#displayIntegerBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn DisplayIntegerBase(self: QSpinBox) i32 {
        return qtc.QSpinBox_DisplayIntegerBase(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setDisplayIntegerBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` base: i32 `
    ///
    pub fn SetDisplayIntegerBase(self: QSpinBox, base: i32) void {
        qtc.QSpinBox_SetDisplayIntegerBase(@ptrCast(self.ptr), @bitCast(base));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QSpinBox, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSpinBox_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QSpinBox, callback: *const fn (QSpinBox, QEvent) callconv(.c) bool) void {
        qtc.QSpinBox_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QSpinBox, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSpinBox_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` input: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    /// ## Returns:
    ///
    /// ` qvalidator_enums.State `
    ///
    pub fn Validate(self: QSpinBox, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return qtc.QSpinBox_Validate(@ptrCast(self.ptr), input_str, @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, input: [*:0]const u8, pos: *i32) callconv(.c) i32 `
    ///
    pub fn OnValidate(self: QSpinBox, callback: *const fn (QSpinBox, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QSpinBox_OnValidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperValidate` instead
    ///
    pub const QBaseValidate = SuperValidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` input: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    /// ## Returns:
    ///
    /// ` qvalidator_enums.State `
    ///
    pub fn SuperValidate(self: QSpinBox, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return qtc.QSpinBox_SuperValidate(@ptrCast(self.ptr), input_str, @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ValueFromText(self: QSpinBox, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QSpinBox_ValueFromText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, text: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnValueFromText(self: QSpinBox, callback: *const fn (QSpinBox, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSpinBox_OnValueFromText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperValueFromText` instead
    ///
    pub const QBaseValueFromText = SuperValueFromText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperValueFromText(self: QSpinBox, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QSpinBox_SuperValueFromText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` val: i32 `
    ///
    pub fn TextFromValue(self: QSpinBox, allocator: std.mem.Allocator, val: i32) []const u8 {
        var _str = qtc.QSpinBox_TextFromValue(@ptrCast(self.ptr), @bitCast(val));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.TextFromValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, val: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnTextFromValue(self: QSpinBox, callback: *const fn (QSpinBox, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSpinBox_OnTextFromValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTextFromValue` instead
    ///
    pub const QBaseTextFromValue = SuperTextFromValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` val: i32 `
    ///
    pub fn SuperTextFromValue(self: QSpinBox, allocator: std.mem.Allocator, val: i32) []const u8 {
        var _str = qtc.QSpinBox_SuperTextFromValue(@ptrCast(self.ptr), @bitCast(val));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.TextFromValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` str: []const u8 `
    ///
    pub fn Fixup(self: QSpinBox, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.QSpinBox_Fixup(@ptrCast(self.ptr), str_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, str: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFixup(self: QSpinBox, callback: *const fn (QSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QSpinBox_OnFixup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFixup` instead
    ///
    pub const QBaseFixup = SuperFixup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` str: []const u8 `
    ///
    pub fn SuperFixup(self: QSpinBox, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.QSpinBox_SuperFixup(@ptrCast(self.ptr), str_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` val: i32 `
    ///
    pub fn SetValue(self: QSpinBox, val: i32) void {
        qtc.QSpinBox_SetValue(@ptrCast(self.ptr), @bitCast(val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn ValueChanged(self: QSpinBox, param1: i32) void {
        qtc.QSpinBox_ValueChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, param1: i32) callconv(.c) void `
    ///
    pub fn OnValueChanged(self: QSpinBox, callback: *const fn (QSpinBox, i32) callconv(.c) void) void {
        qtc.QSpinBox_Connect_ValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextChanged(self: QSpinBox, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QSpinBox_TextChanged(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: QSpinBox, callback: *const fn (QSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QSpinBox_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn ButtonSymbols(self: QSpinBox) i32 {
        return qtc.QAbstractSpinBox_ButtonSymbols(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` bs: qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn SetButtonSymbols(self: QSpinBox, bs: i32) void {
        qtc.QAbstractSpinBox_SetButtonSymbols(@ptrCast(self.ptr), @bitCast(bs));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` cm: qabstractspinbox_enums.CorrectionMode `
    ///
    pub fn SetCorrectionMode(self: QSpinBox, cm: i32) void {
        qtc.QAbstractSpinBox_SetCorrectionMode(@ptrCast(self.ptr), @bitCast(cm));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.CorrectionMode `
    ///
    pub fn CorrectionMode(self: QSpinBox) i32 {
        return qtc.QAbstractSpinBox_CorrectionMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn HasAcceptableInput(self: QSpinBox) bool {
        return qtc.QAbstractSpinBox_HasAcceptableInput(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSpinBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SpecialValueText(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSpinBox_SpecialValueText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.SpecialValueText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` txt: []const u8 `
    ///
    pub fn SetSpecialValueText(self: QSpinBox, txt: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    pub fn Wrapping(self: QSpinBox) bool {
        return qtc.QAbstractSpinBox_Wrapping(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` w: bool `
    ///
    pub fn SetWrapping(self: QSpinBox, w: bool) void {
        qtc.QAbstractSpinBox_SetWrapping(@ptrCast(self.ptr), w);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` r: bool `
    ///
    pub fn SetReadOnly(self: QSpinBox, r: bool) void {
        qtc.QAbstractSpinBox_SetReadOnly(@ptrCast(self.ptr), r);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsReadOnly(self: QSpinBox) bool {
        return qtc.QAbstractSpinBox_IsReadOnly(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` kt: bool `
    ///
    pub fn SetKeyboardTracking(self: QSpinBox, kt: bool) void {
        qtc.QAbstractSpinBox_SetKeyboardTracking(@ptrCast(self.ptr), kt);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn KeyboardTracking(self: QSpinBox) bool {
        return qtc.QAbstractSpinBox_KeyboardTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` flag: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QSpinBox, flag: i32) void {
        qtc.QAbstractSpinBox_SetAlignment(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QSpinBox) i32 {
        return qtc.QAbstractSpinBox_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: QSpinBox, frame: bool) void {
        qtc.QAbstractSpinBox_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn HasFrame(self: QSpinBox) bool {
        return qtc.QAbstractSpinBox_HasFrame(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` on: bool `
    ///
    pub fn SetAccelerated(self: QSpinBox, on: bool) void {
        qtc.QAbstractSpinBox_SetAccelerated(@ptrCast(self.ptr), on);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsAccelerated(self: QSpinBox) bool {
        return qtc.QAbstractSpinBox_IsAccelerated(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` shown: bool `
    ///
    pub fn SetGroupSeparatorShown(self: QSpinBox, shown: bool) void {
        qtc.QAbstractSpinBox_SetGroupSeparatorShown(@ptrCast(self.ptr), shown);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsGroupSeparatorShown(self: QSpinBox) bool {
        return qtc.QAbstractSpinBox_IsGroupSeparatorShown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn InterpretText(self: QSpinBox) void {
        qtc.QAbstractSpinBox_InterpretText(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn StepUp(self: QSpinBox) void {
        qtc.QAbstractSpinBox_StepUp(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn StepDown(self: QSpinBox) void {
        qtc.QAbstractSpinBox_StepDown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn SelectAll(self: QSpinBox) void {
        qtc.QAbstractSpinBox_SelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn EditingFinished(self: QSpinBox) void {
        qtc.QAbstractSpinBox_EditingFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox) callconv(.c) void `
    ///
    pub fn OnEditingFinished(self: QSpinBox, callback: *const fn (QSpinBox) callconv(.c) void) void {
        qtc.QAbstractSpinBox_Connect_EditingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn WinId(self: QSpinBox) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn CreateWinId(self: QSpinBox) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn InternalWinId(self: QSpinBox) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn EffectiveWinId(self: QSpinBox) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Style(self: QSpinBox) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QSpinBox, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsTopLevel(self: QSpinBox) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsWindow(self: QSpinBox) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsModal(self: QSpinBox) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QSpinBox) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QSpinBox, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsEnabled(self: QSpinBox) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QSpinBox, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QSpinBox, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QSpinBox, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QSpinBox, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn FrameGeometry(self: QSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Geometry(self: QSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn NormalGeometry(self: QSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn X(self: QSpinBox) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Y(self: QSpinBox) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Pos(self: QSpinBox) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn FrameSize(self: QSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Size(self: QSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Width(self: QSpinBox) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Height(self: QSpinBox) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Rect(self: QSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ChildrenRect(self: QSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ChildrenRegion(self: QSpinBox) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn MinimumSize(self: QSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn MaximumSize(self: QSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn MinimumWidth(self: QSpinBox) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn MinimumHeight(self: QSpinBox) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn MaximumWidth(self: QSpinBox) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn MaximumHeight(self: QSpinBox) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QSpinBox, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QSpinBox, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QSpinBox, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QSpinBox, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QSpinBox, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QSpinBox, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QSpinBox, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QSpinBox, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn SizeIncrement(self: QSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QSpinBox, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QSpinBox, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn BaseSize(self: QSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QSpinBox, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QSpinBox, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QSpinBox, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QSpinBox, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QSpinBox, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QSpinBox, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QSpinBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QSpinBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QSpinBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QSpinBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QSpinBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QSpinBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QSpinBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QSpinBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QSpinBox, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QSpinBox, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QSpinBox, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QSpinBox, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QSpinBox `
    ///
    pub fn Window(self: QSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn NativeParentWidget(self: QSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn TopLevelWidget(self: QSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Palette(self: QSpinBox) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QSpinBox, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QSpinBox, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QSpinBox) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QSpinBox, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QSpinBox) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Font(self: QSpinBox) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QSpinBox, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn FontMetrics(self: QSpinBox) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn FontInfo(self: QSpinBox) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Cursor(self: QSpinBox) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QSpinBox, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn UnsetCursor(self: QSpinBox) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QSpinBox, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn HasMouseTracking(self: QSpinBox) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn UnderMouse(self: QSpinBox) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QSpinBox, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn HasTabletTracking(self: QSpinBox) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QSpinBox, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QSpinBox, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Mask(self: QSpinBox) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ClearMask(self: QSpinBox) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QSpinBox, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QSpinBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Grab(self: QSpinBox) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn GraphicsEffect(self: QSpinBox) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QSpinBox, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QSpinBox, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QSpinBox, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QSpinBox, windowTitle: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QSpinBox, styleSheet: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QSpinBox, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn WindowIcon(self: QSpinBox) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QSpinBox, windowIconText: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QSpinBox, windowRole: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QSpinBox, filePath: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QSpinBox, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn WindowOpacity(self: QSpinBox) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsWindowModified(self: QSpinBox) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QSpinBox, toolTip: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QSpinBox, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ToolTipDuration(self: QSpinBox) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QSpinBox, statusTip: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QSpinBox, whatsThis: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QSpinBox, name: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QSpinBox, description: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QSpinBox, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QSpinBox) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn UnsetLayoutDirection(self: QSpinBox) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QSpinBox, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Locale(self: QSpinBox) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn UnsetLocale(self: QSpinBox) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsRightToLeft(self: QSpinBox) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsLeftToRight(self: QSpinBox) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn SetFocus(self: QSpinBox) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsActiveWindow(self: QSpinBox) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ActivateWindow(self: QSpinBox) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ClearFocus(self: QSpinBox) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QSpinBox, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QSpinBox) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QSpinBox, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn HasFocus(self: QSpinBox) bool {
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
    /// ` self: QSpinBox `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QSpinBox, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn FocusProxy(self: QSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QSpinBox) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QSpinBox, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn GrabMouse(self: QSpinBox) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ReleaseMouse(self: QSpinBox) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn GrabKeyboard(self: QSpinBox) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ReleaseKeyboard(self: QSpinBox) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QSpinBox, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QSpinBox, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QSpinBox, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QSpinBox, id: i32) void {
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
    /// ` self: QSpinBox `
    ///
    pub fn UpdatesEnabled(self: QSpinBox) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QSpinBox, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn GraphicsProxyWidget(self: QSpinBox) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Update(self: QSpinBox) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Repaint(self: QSpinBox) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QSpinBox, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QSpinBox, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QSpinBox, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Show(self: QSpinBox) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Hide(self: QSpinBox) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ShowMinimized(self: QSpinBox) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ShowMaximized(self: QSpinBox) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ShowFullScreen(self: QSpinBox) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ShowNormal(self: QSpinBox) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Close(self: QSpinBox) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Raise(self: QSpinBox) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Lower(self: QSpinBox) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QSpinBox, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QSpinBox, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QSpinBox, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QSpinBox, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QSpinBox, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qspinbox.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QSpinBox, geometry: []u8) bool {
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
    /// ` self: QSpinBox `
    ///
    pub fn AdjustSize(self: QSpinBox) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsVisible(self: QSpinBox) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QSpinBox, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsHidden(self: QSpinBox) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsMinimized(self: QSpinBox) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsMaximized(self: QSpinBox) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsFullScreen(self: QSpinBox) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QSpinBox) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QSpinBox, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QSpinBox, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn SizePolicy(self: QSpinBox) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QSpinBox, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QSpinBox, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn VisibleRegion(self: QSpinBox) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QSpinBox, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QSpinBox, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ContentsMargins(self: QSpinBox) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ContentsRect(self: QSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Layout(self: QSpinBox) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QSpinBox, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn UpdateGeometry(self: QSpinBox) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QSpinBox, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QSpinBox, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QSpinBox, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QSpinBox, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn FocusWidget(self: QSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn NextInFocusChain(self: QSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn PreviousInFocusChain(self: QSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn AcceptDrops(self: QSpinBox) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QSpinBox, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QSpinBox, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QSpinBox, actions: []QAction) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QSpinBox, before: anytype, actions: []QAction) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QSpinBox, before: anytype, action: anytype) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QSpinBox, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QSpinBox, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qspinbox.Actions: Memory allocation failed");
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
    /// ` self: QSpinBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QSpinBox, text: []const u8) QAction {
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
    /// ` self: QSpinBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QSpinBox, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QSpinBox `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QSpinBox, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QSpinBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QSpinBox, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QSpinBox `
    ///
    pub fn ParentWidget(self: QSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QSpinBox, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QSpinBox) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QSpinBox, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QSpinBox, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QSpinBox) i32 {
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
    /// ` self: QSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QSpinBox, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QSpinBox, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QSpinBox, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QSpinBox, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QSpinBox, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn EnsurePolished(self: QSpinBox) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QSpinBox, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn AutoFillBackground(self: QSpinBox) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QSpinBox, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn BackingStore(self: QSpinBox) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn WindowHandle(self: QSpinBox) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Screen(self: QSpinBox) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QSpinBox, screen: anytype) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QSpinBox, title: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QSpinBox, callback: *const fn (QSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QSpinBox, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QSpinBox, callback: *const fn (QSpinBox, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QSpinBox, iconText: []const u8) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QSpinBox, callback: *const fn (QSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QSpinBox, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QSpinBox, callback: *const fn (QSpinBox, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QSpinBox) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QSpinBox, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QSpinBox, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QSpinBox, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QSpinBox, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QSpinBox, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QSpinBox, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QSpinBox, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QSpinBox, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QSpinBox, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QSpinBox, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QSpinBox, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QSpinBox, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QSpinBox, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QSpinBox, param1: i32, on: bool) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QSpinBox, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsWidgetType(self: QSpinBox) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsWindowType(self: QSpinBox) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn IsQuickItemType(self: QSpinBox) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn SignalsBlocked(self: QSpinBox) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QSpinBox, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Thread(self: QSpinBox) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QSpinBox, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QSpinBox, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QSpinBox, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QSpinBox, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QSpinBox, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QSpinBox, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qspinbox.Children: Memory allocation failed");
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
    /// ` self: QSpinBox `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QSpinBox, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QSpinBox, obj: anytype) void {
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
    /// ` self: QSpinBox `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QSpinBox, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QSpinBox `
    ///
    pub fn Disconnect3(self: QSpinBox) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QSpinBox, receiver: anytype) bool {
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
    /// ` self: QSpinBox `
    ///
    pub fn DumpObjectTree(self: QSpinBox) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn DumpObjectInfo(self: QSpinBox) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QSpinBox, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QSpinBox `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QSpinBox, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QSpinBox, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qspinbox.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qspinbox.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QSpinBox `
    ///
    pub fn BindingStorage(self: QSpinBox) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn BindingStorage2(self: QSpinBox) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Destroyed(self: QSpinBox) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QSpinBox, callback: *const fn (QSpinBox) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Parent(self: QSpinBox) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QSpinBox, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn DeleteLater(self: QSpinBox) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QSpinBox, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QSpinBox, time: i64, timerType: i32) i32 {
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
    /// ` self: QSpinBox `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QSpinBox, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QSpinBox, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QSpinBox, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QSpinBox, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSpinBox `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QSpinBox, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QSpinBox `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QSpinBox, callback: *const fn (QSpinBox, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn PaintingActive(self: QSpinBox) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn WidthMM(self: QSpinBox) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn HeightMM(self: QSpinBox) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn LogicalDpiX(self: QSpinBox) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn LogicalDpiY(self: QSpinBox) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn PhysicalDpiX(self: QSpinBox) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn PhysicalDpiY(self: QSpinBox) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn DevicePixelRatio(self: QSpinBox) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn DevicePixelRatioF(self: QSpinBox) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn ColorCount(self: QSpinBox) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Depth(self: QSpinBox) i32 {
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn SizeHint(self: QSpinBox) QSize {
        return .{ .ptr = qtc.QSpinBox_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn SuperSizeHint(self: QSpinBox) QSize {
        return .{ .ptr = qtc.QSpinBox_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QSpinBox, callback: *const fn () callconv(.c) QSize) void {
        qtc.QSpinBox_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn MinimumSizeHint(self: QSpinBox) QSize {
        return .{ .ptr = qtc.QSpinBox_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperMinimumSizeHint(self: QSpinBox) QSize {
        return .{ .ptr = qtc.QSpinBox_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QSpinBox, callback: *const fn () callconv(.c) QSize) void {
        qtc.QSpinBox_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QSpinBox, param1: i32) QVariant {
        return .{ .ptr = qtc.QSpinBox_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: QSpinBox `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QSpinBox, param1: i32) QVariant {
        return .{ .ptr = qtc.QSpinBox_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QSpinBox, callback: *const fn (QSpinBox, i32) callconv(.c) QVariant) void {
        qtc.QSpinBox_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` steps: i32 `
    ///
    pub fn StepBy(self: QSpinBox, steps: i32) void {
        qtc.QSpinBox_StepBy(@ptrCast(self.ptr), @bitCast(steps));
    }

    /// ### DEPRECATED: Use `SuperStepBy` instead
    ///
    pub const QBaseStepBy = SuperStepBy;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` steps: i32 `
    ///
    pub fn SuperStepBy(self: QSpinBox, steps: i32) void {
        qtc.QSpinBox_SuperStepBy(@ptrCast(self.ptr), @bitCast(steps));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, steps: i32) callconv(.c) void `
    ///
    pub fn OnStepBy(self: QSpinBox, callback: *const fn (QSpinBox, i32) callconv(.c) void) void {
        qtc.QSpinBox_OnStepBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Clear(self: QSpinBox) void {
        qtc.QSpinBox_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn SuperClear(self: QSpinBox) void {
        qtc.QSpinBox_SuperClear(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: QSpinBox, callback: *const fn () callconv(.c) void) void {
        qtc.QSpinBox_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QSpinBox_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QSpinBox_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QSpinBox, callback: *const fn (QSpinBox, QResizeEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QSpinBox_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QSpinBox_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QSpinBox, callback: *const fn (QSpinBox, QKeyEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QSpinBox_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QSpinBox_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QSpinBox, callback: *const fn (QSpinBox, QKeyEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QSpinBox_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QSpinBox_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QSpinBox, callback: *const fn (QSpinBox, QWheelEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QSpinBox_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QSpinBox_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QSpinBox, callback: *const fn (QSpinBox, QFocusEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QSpinBox_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QSpinBox_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QSpinBox, callback: *const fn (QSpinBox, QFocusEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QSpinBox_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QSpinBox_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QSpinBox, callback: *const fn (QSpinBox, QContextMenuEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn ChangeEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSpinBox_ChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperChangeEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSpinBox_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QSpinBox, callback: *const fn (QSpinBox, QEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QSpinBox_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QSpinBox_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QSpinBox, callback: *const fn (QSpinBox, QCloseEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QSpinBox_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QSpinBox_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QSpinBox, callback: *const fn (QSpinBox, QHideEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QSpinBox_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QSpinBox_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QSpinBox, callback: *const fn (QSpinBox, QMouseEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QSpinBox_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QSpinBox_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QSpinBox, callback: *const fn (QSpinBox, QMouseEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QSpinBox_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QSpinBox_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QSpinBox, callback: *const fn (QSpinBox, QMouseEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSpinBox_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QSpinBox_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QSpinBox, callback: *const fn (QSpinBox, QTimerEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QSpinBox_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QSpinBox_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QSpinBox, callback: *const fn (QSpinBox, QPaintEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QSpinBox_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QSpinBox_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QSpinBox, callback: *const fn (QSpinBox, QShowEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` option: QStyleOptionSpinBox `
    ///
    pub fn InitStyleOption(self: QSpinBox, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSpinBox;
        qtc.QSpinBox_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` option: QStyleOptionSpinBox `
    ///
    pub fn SuperInitStyleOption(self: QSpinBox, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSpinBox;
        qtc.QSpinBox_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, option: QStyleOptionSpinBox) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QSpinBox, callback: *const fn (QSpinBox, QStyleOptionSpinBox) callconv(.c) void) void {
        qtc.QSpinBox_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn StepEnabled(self: QSpinBox) i32 {
        return qtc.QSpinBox_StepEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperStepEnabled` instead
    ///
    pub const QBaseStepEnabled = SuperStepEnabled;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn SuperStepEnabled(self: QSpinBox) i32 {
        return qtc.QSpinBox_SuperStepEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnStepEnabled(self: QSpinBox, callback: *const fn () callconv(.c) i32) void {
        qtc.QSpinBox_OnStepEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn DevType(self: QSpinBox) i32 {
        return qtc.QSpinBox_DevType(@ptrCast(self.ptr));
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperDevType(self: QSpinBox) i32 {
        return qtc.QSpinBox_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QSpinBox, callback: *const fn () callconv(.c) i32) void {
        qtc.QSpinBox_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QSpinBox, visible: bool) void {
        qtc.QSpinBox_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QSpinBox `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QSpinBox, visible: bool) void {
        qtc.QSpinBox_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QSpinBox, callback: *const fn (QSpinBox, bool) callconv(.c) void) void {
        qtc.QSpinBox_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QSpinBox, param1: i32) i32 {
        return qtc.QSpinBox_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QSpinBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QSpinBox, param1: i32) i32 {
        return qtc.QSpinBox_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QSpinBox, callback: *const fn (QSpinBox, i32) callconv(.c) i32) void {
        qtc.QSpinBox_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn HasHeightForWidth(self: QSpinBox) bool {
        return qtc.QSpinBox_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperHasHeightForWidth(self: QSpinBox) bool {
        return qtc.QSpinBox_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QSpinBox, callback: *const fn () callconv(.c) bool) void {
        qtc.QSpinBox_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn PaintEngine(self: QSpinBox) QPaintEngine {
        return .{ .ptr = qtc.QSpinBox_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperPaintEngine(self: QSpinBox) QPaintEngine {
        return .{ .ptr = qtc.QSpinBox_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QSpinBox, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QSpinBox_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QSpinBox_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QSpinBox_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QSpinBox, callback: *const fn (QSpinBox, QMouseEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QSpinBox_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QSpinBox_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QSpinBox, callback: *const fn (QSpinBox, QEnterEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSpinBox_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSpinBox_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QSpinBox, callback: *const fn (QSpinBox, QEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QSpinBox_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QSpinBox_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QSpinBox, callback: *const fn (QSpinBox, QMoveEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QSpinBox_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QSpinBox_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QSpinBox, callback: *const fn (QSpinBox, QTabletEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QSpinBox_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QSpinBox_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QSpinBox, callback: *const fn (QSpinBox, QActionEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QSpinBox_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QSpinBox_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QSpinBox, callback: *const fn (QSpinBox, QDragEnterEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QSpinBox_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QSpinBox_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QSpinBox, callback: *const fn (QSpinBox, QDragMoveEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QSpinBox_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QSpinBox_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QSpinBox, callback: *const fn (QSpinBox, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QSpinBox_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QSpinBox_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QSpinBox, callback: *const fn (QSpinBox, QDropEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QSpinBox, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QSpinBox_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QSpinBox `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QSpinBox, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QSpinBox_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QSpinBox, callback: *const fn (QSpinBox, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QSpinBox_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QSpinBox, param1: i32) i32 {
        return qtc.QSpinBox_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QSpinBox `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QSpinBox, param1: i32) i32 {
        return qtc.QSpinBox_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QSpinBox, callback: *const fn (QSpinBox, i32) callconv(.c) i32) void {
        qtc.QSpinBox_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QSpinBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QSpinBox_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QSpinBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QSpinBox_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QSpinBox, callback: *const fn (QSpinBox, QPainter) callconv(.c) void) void {
        qtc.QSpinBox_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QSpinBox, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QSpinBox_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QSpinBox `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QSpinBox, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QSpinBox_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QSpinBox, callback: *const fn (QSpinBox, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QSpinBox_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn SharedPainter(self: QSpinBox) QPainter {
        return .{ .ptr = qtc.QSpinBox_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperSharedPainter(self: QSpinBox) QPainter {
        return .{ .ptr = qtc.QSpinBox_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QSpinBox, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QSpinBox_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QSpinBox_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QSpinBox_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QSpinBox, callback: *const fn (QSpinBox, QInputMethodEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QSpinBox, next: bool) bool {
        return qtc.QSpinBox_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QSpinBox `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QSpinBox, next: bool) bool {
        return qtc.QSpinBox_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QSpinBox, callback: *const fn (QSpinBox, bool) callconv(.c) bool) void {
        qtc.QSpinBox_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QSpinBox, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSpinBox_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QSpinBox, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QSpinBox_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QSpinBox, callback: *const fn (QSpinBox, QObject, QEvent) callconv(.c) bool) void {
        qtc.QSpinBox_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSpinBox_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QSpinBox_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QSpinBox, callback: *const fn (QSpinBox, QChildEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSpinBox_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QSpinBox_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QSpinBox, callback: *const fn (QSpinBox, QEvent) callconv(.c) void) void {
        qtc.QSpinBox_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QSpinBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSpinBox_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QSpinBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSpinBox_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QSpinBox, callback: *const fn (QSpinBox, QMetaMethod) callconv(.c) void) void {
        qtc.QSpinBox_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QSpinBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSpinBox_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QSpinBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QSpinBox_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QSpinBox, callback: *const fn (QSpinBox, QMetaMethod) callconv(.c) void) void {
        qtc.QSpinBox_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn LineEdit(self: QSpinBox) QLineEdit {
        return .{ .ptr = qtc.QSpinBox_LineEdit(@ptrCast(self.ptr)) };
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperLineEdit(self: QSpinBox) QLineEdit {
        return .{ .ptr = qtc.QSpinBox_SuperLineEdit(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QLineEdit `
    ///
    pub fn OnLineEdit(self: QSpinBox, callback: *const fn () callconv(.c) QLineEdit) void {
        qtc.QSpinBox_OnLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SetLineEdit(self: QSpinBox, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.QSpinBox_SetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SuperSetLineEdit(self: QSpinBox, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.QSpinBox_SuperSetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, edit: QLineEdit) callconv(.c) void `
    ///
    pub fn OnSetLineEdit(self: QSpinBox, callback: *const fn (QSpinBox, QLineEdit) callconv(.c) void) void {
        qtc.QSpinBox_OnSetLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn UpdateMicroFocus(self: QSpinBox) void {
        qtc.QSpinBox_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperUpdateMicroFocus(self: QSpinBox) void {
        qtc.QSpinBox_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QSpinBox, callback: *const fn () callconv(.c) void) void {
        qtc.QSpinBox_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Create(self: QSpinBox) void {
        qtc.QSpinBox_Create(@ptrCast(self.ptr));
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperCreate(self: QSpinBox) void {
        qtc.QSpinBox_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QSpinBox, callback: *const fn () callconv(.c) void) void {
        qtc.QSpinBox_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Destroy(self: QSpinBox) void {
        qtc.QSpinBox_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperDestroy(self: QSpinBox) void {
        qtc.QSpinBox_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QSpinBox, callback: *const fn () callconv(.c) void) void {
        qtc.QSpinBox_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn FocusNextChild(self: QSpinBox) bool {
        return qtc.QSpinBox_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperFocusNextChild(self: QSpinBox) bool {
        return qtc.QSpinBox_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QSpinBox, callback: *const fn () callconv(.c) bool) void {
        qtc.QSpinBox_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn FocusPreviousChild(self: QSpinBox) bool {
        return qtc.QSpinBox_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperFocusPreviousChild(self: QSpinBox) bool {
        return qtc.QSpinBox_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QSpinBox, callback: *const fn () callconv(.c) bool) void {
        qtc.QSpinBox_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Sender(self: QSpinBox) QObject {
        return .{ .ptr = qtc.QSpinBox_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperSender(self: QSpinBox) QObject {
        return .{ .ptr = qtc.QSpinBox_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QSpinBox, callback: *const fn () callconv(.c) QObject) void {
        qtc.QSpinBox_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    pub fn SenderSignalIndex(self: QSpinBox) i32 {
        return qtc.QSpinBox_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QSpinBox `
    ///
    pub fn SuperSenderSignalIndex(self: QSpinBox) i32 {
        return qtc.QSpinBox_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QSpinBox, callback: *const fn () callconv(.c) i32) void {
        qtc.QSpinBox_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QSpinBox, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSpinBox_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QSpinBox, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QSpinBox_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QSpinBox, callback: *const fn (QSpinBox, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSpinBox_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QSpinBox, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSpinBox_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QSpinBox, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QSpinBox_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QSpinBox, callback: *const fn (QSpinBox, QMetaMethod) callconv(.c) bool) void {
        qtc.QSpinBox_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QSpinBox `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QSpinBox, metricA: i32, metricB: i32) f64 {
        return qtc.QSpinBox_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QSpinBox `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QSpinBox, metricA: i32, metricB: i32) f64 {
        return qtc.QSpinBox_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox`
    ///
    /// ` callback: *const fn (self: QSpinBox, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QSpinBox, callback: *const fn (QSpinBox, i32, i32) callconv(.c) f64) void {
        qtc.QSpinBox_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QSpinBox `
    ///
    /// ` callback: *const fn (self: QSpinBox, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QSpinBox, callback: *const fn (QSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#dtor.QSpinBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QSpinBox `
    ///
    pub fn Delete(self: QSpinBox) void {
        qtc.QSpinBox_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html)
pub const QDoubleSpinBox = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDoubleSpinBox,

    pub const _is_QDoubleSpinBox = {};
    pub const _is_QAbstractSpinBox = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QDoubleSpinBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QDoubleSpinBox {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QDoubleSpinBox_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QDoubleSpinBox object.
    ///
    pub fn New2() QDoubleSpinBox {
        return .{ .ptr = qtc.QDoubleSpinBox_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn MetaObject(self: QDoubleSpinBox) QMetaObject {
        return .{ .ptr = qtc.QDoubleSpinBox_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QDoubleSpinBox, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QDoubleSpinBox_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperMetaObject(self: QDoubleSpinBox) QMetaObject {
        return .{ .ptr = qtc.QDoubleSpinBox_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QDoubleSpinBox, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDoubleSpinBox_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QDoubleSpinBox_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QDoubleSpinBox, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QDoubleSpinBox_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QDoubleSpinBox, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDoubleSpinBox_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QDoubleSpinBox_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QDoubleSpinBox, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QDoubleSpinBox_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Value(self: QDoubleSpinBox) f64 {
        return qtc.QDoubleSpinBox_Value(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDoubleSpinBox_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn SetPrefix(self: QDoubleSpinBox, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QDoubleSpinBox_SetPrefix(@ptrCast(self.ptr), prefix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#suffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Suffix(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDoubleSpinBox_Suffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.Suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` suffix: []const u8 `
    ///
    pub fn SetSuffix(self: QDoubleSpinBox, suffix: []const u8) void {
        const suffix_str = qtc.libqt_string{
            .len = suffix.len,
            .data = suffix.ptr,
        };
        qtc.QDoubleSpinBox_SetSuffix(@ptrCast(self.ptr), suffix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#cleanText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CleanText(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QDoubleSpinBox_CleanText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.CleanText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#singleStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SingleStep(self: QDoubleSpinBox) f64 {
        return qtc.QDoubleSpinBox_SingleStep(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setSingleStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` val: f64 `
    ///
    pub fn SetSingleStep(self: QDoubleSpinBox, val: f64) void {
        qtc.QDoubleSpinBox_SetSingleStep(@ptrCast(self.ptr), @bitCast(val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#minimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Minimum(self: QDoubleSpinBox) f64 {
        return qtc.QDoubleSpinBox_Minimum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setMinimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` min: f64 `
    ///
    pub fn SetMinimum(self: QDoubleSpinBox, min: f64) void {
        qtc.QDoubleSpinBox_SetMinimum(@ptrCast(self.ptr), @bitCast(min));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#maximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Maximum(self: QDoubleSpinBox) f64 {
        return qtc.QDoubleSpinBox_Maximum(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` max: f64 `
    ///
    pub fn SetMaximum(self: QDoubleSpinBox, max: f64) void {
        qtc.QDoubleSpinBox_SetMaximum(@ptrCast(self.ptr), @bitCast(max));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` min: f64 `
    ///
    /// ` max: f64 `
    ///
    pub fn SetRange(self: QDoubleSpinBox, min: f64, max: f64) void {
        qtc.QDoubleSpinBox_SetRange(@ptrCast(self.ptr), @bitCast(min), @bitCast(max));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#stepType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.StepType `
    ///
    pub fn StepType(self: QDoubleSpinBox) i32 {
        return qtc.QDoubleSpinBox_StepType(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setStepType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` stepType: qabstractspinbox_enums.StepType `
    ///
    pub fn SetStepType(self: QDoubleSpinBox, stepType: i32) void {
        qtc.QDoubleSpinBox_SetStepType(@ptrCast(self.ptr), @bitCast(stepType));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#decimals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Decimals(self: QDoubleSpinBox) i32 {
        return qtc.QDoubleSpinBox_Decimals(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setDecimals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` prec: i32 `
    ///
    pub fn SetDecimals(self: QDoubleSpinBox, prec: i32) void {
        qtc.QDoubleSpinBox_SetDecimals(@ptrCast(self.ptr), @bitCast(prec));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#validate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` input: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    /// ## Returns:
    ///
    /// ` qvalidator_enums.State `
    ///
    pub fn Validate(self: QDoubleSpinBox, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return qtc.QDoubleSpinBox_Validate(@ptrCast(self.ptr), input_str, @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#validate)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, input: [*:0]const u8, pos: *i32) callconv(.c) i32 `
    ///
    pub fn OnValidate(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QDoubleSpinBox_OnValidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperValidate` instead
    ///
    pub const QBaseValidate = SuperValidate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#validate)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` input: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    /// ## Returns:
    ///
    /// ` qvalidator_enums.State `
    ///
    pub fn SuperValidate(self: QDoubleSpinBox, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return qtc.QDoubleSpinBox_SuperValidate(@ptrCast(self.ptr), input_str, @ptrCast(pos));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#valueFromText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ValueFromText(self: QDoubleSpinBox, text: []const u8) f64 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QDoubleSpinBox_ValueFromText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#valueFromText)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, text: [*:0]const u8) callconv(.c) f64 `
    ///
    pub fn OnValueFromText(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, [*:0]const u8) callconv(.c) f64) void {
        qtc.QDoubleSpinBox_OnValueFromText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperValueFromText` instead
    ///
    pub const QBaseValueFromText = SuperValueFromText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#valueFromText)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperValueFromText(self: QDoubleSpinBox, text: []const u8) f64 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QDoubleSpinBox_SuperValueFromText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#textFromValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` val: f64 `
    ///
    pub fn TextFromValue(self: QDoubleSpinBox, allocator: std.mem.Allocator, val: f64) []const u8 {
        var _str = qtc.QDoubleSpinBox_TextFromValue(@ptrCast(self.ptr), @bitCast(val));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.TextFromValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#textFromValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, val: f64) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnTextFromValue(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, f64) callconv(.c) [*:0]const u8) void {
        qtc.QDoubleSpinBox_OnTextFromValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTextFromValue` instead
    ///
    pub const QBaseTextFromValue = SuperTextFromValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#textFromValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` val: f64 `
    ///
    pub fn SuperTextFromValue(self: QDoubleSpinBox, allocator: std.mem.Allocator, val: f64) []const u8 {
        var _str = qtc.QDoubleSpinBox_SuperTextFromValue(@ptrCast(self.ptr), @bitCast(val));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.TextFromValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#fixup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` str: []const u8 `
    ///
    pub fn Fixup(self: QDoubleSpinBox, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.QDoubleSpinBox_Fixup(@ptrCast(self.ptr), str_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#fixup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, str: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFixup(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnFixup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFixup` instead
    ///
    pub const QBaseFixup = SuperFixup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#fixup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` str: []const u8 `
    ///
    pub fn SuperFixup(self: QDoubleSpinBox, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.QDoubleSpinBox_SuperFixup(@ptrCast(self.ptr), str_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` val: f64 `
    ///
    pub fn SetValue(self: QDoubleSpinBox, val: f64) void {
        qtc.QDoubleSpinBox_SetValue(@ptrCast(self.ptr), @bitCast(val));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#valueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: f64 `
    ///
    pub fn ValueChanged(self: QDoubleSpinBox, param1: f64) void {
        qtc.QDoubleSpinBox_ValueChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#valueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, param1: f64) callconv(.c) void `
    ///
    pub fn OnValueChanged(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, f64) callconv(.c) void) void {
        qtc.QDoubleSpinBox_Connect_ValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextChanged(self: QDoubleSpinBox, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QDoubleSpinBox_TextChanged(@ptrCast(self.ptr), param1_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QDoubleSpinBox_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn ButtonSymbols(self: QDoubleSpinBox) i32 {
        return qtc.QAbstractSpinBox_ButtonSymbols(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` bs: qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn SetButtonSymbols(self: QDoubleSpinBox, bs: i32) void {
        qtc.QAbstractSpinBox_SetButtonSymbols(@ptrCast(self.ptr), @bitCast(bs));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` cm: qabstractspinbox_enums.CorrectionMode `
    ///
    pub fn SetCorrectionMode(self: QDoubleSpinBox, cm: i32) void {
        qtc.QAbstractSpinBox_SetCorrectionMode(@ptrCast(self.ptr), @bitCast(cm));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.CorrectionMode `
    ///
    pub fn CorrectionMode(self: QDoubleSpinBox) i32 {
        return qtc.QAbstractSpinBox_CorrectionMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn HasAcceptableInput(self: QDoubleSpinBox) bool {
        return qtc.QAbstractSpinBox_HasAcceptableInput(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSpinBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SpecialValueText(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSpinBox_SpecialValueText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.SpecialValueText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` txt: []const u8 `
    ///
    pub fn SetSpecialValueText(self: QDoubleSpinBox, txt: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Wrapping(self: QDoubleSpinBox) bool {
        return qtc.QAbstractSpinBox_Wrapping(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` w: bool `
    ///
    pub fn SetWrapping(self: QDoubleSpinBox, w: bool) void {
        qtc.QAbstractSpinBox_SetWrapping(@ptrCast(self.ptr), w);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` r: bool `
    ///
    pub fn SetReadOnly(self: QDoubleSpinBox, r: bool) void {
        qtc.QAbstractSpinBox_SetReadOnly(@ptrCast(self.ptr), r);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsReadOnly(self: QDoubleSpinBox) bool {
        return qtc.QAbstractSpinBox_IsReadOnly(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` kt: bool `
    ///
    pub fn SetKeyboardTracking(self: QDoubleSpinBox, kt: bool) void {
        qtc.QAbstractSpinBox_SetKeyboardTracking(@ptrCast(self.ptr), kt);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn KeyboardTracking(self: QDoubleSpinBox) bool {
        return qtc.QAbstractSpinBox_KeyboardTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` flag: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: QDoubleSpinBox, flag: i32) void {
        qtc.QAbstractSpinBox_SetAlignment(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: QDoubleSpinBox) i32 {
        return qtc.QAbstractSpinBox_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: QDoubleSpinBox, frame: bool) void {
        qtc.QAbstractSpinBox_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn HasFrame(self: QDoubleSpinBox) bool {
        return qtc.QAbstractSpinBox_HasFrame(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` on: bool `
    ///
    pub fn SetAccelerated(self: QDoubleSpinBox, on: bool) void {
        qtc.QAbstractSpinBox_SetAccelerated(@ptrCast(self.ptr), on);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsAccelerated(self: QDoubleSpinBox) bool {
        return qtc.QAbstractSpinBox_IsAccelerated(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` shown: bool `
    ///
    pub fn SetGroupSeparatorShown(self: QDoubleSpinBox, shown: bool) void {
        qtc.QAbstractSpinBox_SetGroupSeparatorShown(@ptrCast(self.ptr), shown);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsGroupSeparatorShown(self: QDoubleSpinBox) bool {
        return qtc.QAbstractSpinBox_IsGroupSeparatorShown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn InterpretText(self: QDoubleSpinBox) void {
        qtc.QAbstractSpinBox_InterpretText(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn StepUp(self: QDoubleSpinBox) void {
        qtc.QAbstractSpinBox_StepUp(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn StepDown(self: QDoubleSpinBox) void {
        qtc.QAbstractSpinBox_StepDown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SelectAll(self: QDoubleSpinBox) void {
        qtc.QAbstractSpinBox_SelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn EditingFinished(self: QDoubleSpinBox) void {
        qtc.QAbstractSpinBox_EditingFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox) callconv(.c) void `
    ///
    pub fn OnEditingFinished(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox) callconv(.c) void) void {
        qtc.QAbstractSpinBox_Connect_EditingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn WinId(self: QDoubleSpinBox) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn CreateWinId(self: QDoubleSpinBox) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn InternalWinId(self: QDoubleSpinBox) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn EffectiveWinId(self: QDoubleSpinBox) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Style(self: QDoubleSpinBox) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QDoubleSpinBox, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsTopLevel(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsWindow(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsModal(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QDoubleSpinBox, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsEnabled(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QDoubleSpinBox, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QDoubleSpinBox, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QDoubleSpinBox, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QDoubleSpinBox, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn FrameGeometry(self: QDoubleSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Geometry(self: QDoubleSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn NormalGeometry(self: QDoubleSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn X(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Y(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Pos(self: QDoubleSpinBox) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn FrameSize(self: QDoubleSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Size(self: QDoubleSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Width(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Height(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Rect(self: QDoubleSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ChildrenRect(self: QDoubleSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ChildrenRegion(self: QDoubleSpinBox) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn MinimumSize(self: QDoubleSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn MaximumSize(self: QDoubleSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn MinimumWidth(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn MinimumHeight(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn MaximumWidth(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn MaximumHeight(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QDoubleSpinBox, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QDoubleSpinBox, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QDoubleSpinBox, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QDoubleSpinBox, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QDoubleSpinBox, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QDoubleSpinBox, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QDoubleSpinBox, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QDoubleSpinBox, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SizeIncrement(self: QDoubleSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QDoubleSpinBox, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QDoubleSpinBox, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn BaseSize(self: QDoubleSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QDoubleSpinBox, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QDoubleSpinBox, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QDoubleSpinBox, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QDoubleSpinBox, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QDoubleSpinBox, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QDoubleSpinBox, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QDoubleSpinBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QDoubleSpinBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QDoubleSpinBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QDoubleSpinBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QDoubleSpinBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QDoubleSpinBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QDoubleSpinBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QDoubleSpinBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QDoubleSpinBox, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QDoubleSpinBox, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QDoubleSpinBox, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QDoubleSpinBox, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Window(self: QDoubleSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn NativeParentWidget(self: QDoubleSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn TopLevelWidget(self: QDoubleSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Palette(self: QDoubleSpinBox) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QDoubleSpinBox, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QDoubleSpinBox, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QDoubleSpinBox, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Font(self: QDoubleSpinBox) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QDoubleSpinBox, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn FontMetrics(self: QDoubleSpinBox) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn FontInfo(self: QDoubleSpinBox) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Cursor(self: QDoubleSpinBox) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QDoubleSpinBox, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn UnsetCursor(self: QDoubleSpinBox) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QDoubleSpinBox, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn HasMouseTracking(self: QDoubleSpinBox) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn UnderMouse(self: QDoubleSpinBox) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QDoubleSpinBox, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn HasTabletTracking(self: QDoubleSpinBox) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QDoubleSpinBox, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QDoubleSpinBox, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Mask(self: QDoubleSpinBox) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ClearMask(self: QDoubleSpinBox) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QDoubleSpinBox, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QDoubleSpinBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Grab(self: QDoubleSpinBox) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn GraphicsEffect(self: QDoubleSpinBox) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QDoubleSpinBox, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QDoubleSpinBox, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QDoubleSpinBox, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QDoubleSpinBox, windowTitle: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QDoubleSpinBox, styleSheet: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QDoubleSpinBox, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn WindowIcon(self: QDoubleSpinBox) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QDoubleSpinBox, windowIconText: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QDoubleSpinBox, windowRole: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QDoubleSpinBox, filePath: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QDoubleSpinBox, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn WindowOpacity(self: QDoubleSpinBox) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsWindowModified(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QDoubleSpinBox, toolTip: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QDoubleSpinBox, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ToolTipDuration(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QDoubleSpinBox, statusTip: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QDoubleSpinBox, whatsThis: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QDoubleSpinBox, name: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QDoubleSpinBox, description: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QDoubleSpinBox, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn UnsetLayoutDirection(self: QDoubleSpinBox) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QDoubleSpinBox, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Locale(self: QDoubleSpinBox) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn UnsetLocale(self: QDoubleSpinBox) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsRightToLeft(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsLeftToRight(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SetFocus(self: QDoubleSpinBox) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsActiveWindow(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ActivateWindow(self: QDoubleSpinBox) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ClearFocus(self: QDoubleSpinBox) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QDoubleSpinBox, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QDoubleSpinBox, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn HasFocus(self: QDoubleSpinBox) bool {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QDoubleSpinBox, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn FocusProxy(self: QDoubleSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QDoubleSpinBox, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn GrabMouse(self: QDoubleSpinBox) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QDoubleSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ReleaseMouse(self: QDoubleSpinBox) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn GrabKeyboard(self: QDoubleSpinBox) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ReleaseKeyboard(self: QDoubleSpinBox) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QDoubleSpinBox, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QDoubleSpinBox, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QDoubleSpinBox, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QDoubleSpinBox, id: i32) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn UpdatesEnabled(self: QDoubleSpinBox) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QDoubleSpinBox, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn GraphicsProxyWidget(self: QDoubleSpinBox) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Update(self: QDoubleSpinBox) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Repaint(self: QDoubleSpinBox) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QDoubleSpinBox, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QDoubleSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QDoubleSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QDoubleSpinBox, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QDoubleSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QDoubleSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QDoubleSpinBox, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Show(self: QDoubleSpinBox) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Hide(self: QDoubleSpinBox) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ShowMinimized(self: QDoubleSpinBox) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ShowMaximized(self: QDoubleSpinBox) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ShowFullScreen(self: QDoubleSpinBox) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ShowNormal(self: QDoubleSpinBox) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Close(self: QDoubleSpinBox) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Raise(self: QDoubleSpinBox) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Lower(self: QDoubleSpinBox) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QDoubleSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QDoubleSpinBox, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QDoubleSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QDoubleSpinBox, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QDoubleSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QDoubleSpinBox, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QDoubleSpinBox, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QDoubleSpinBox, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdoublespinbox.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QDoubleSpinBox, geometry: []u8) bool {
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn AdjustSize(self: QDoubleSpinBox) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsVisible(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QDoubleSpinBox, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsHidden(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsMinimized(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsMaximized(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsFullScreen(self: QDoubleSpinBox) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QDoubleSpinBox, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QDoubleSpinBox, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SizePolicy(self: QDoubleSpinBox) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QDoubleSpinBox, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QDoubleSpinBox, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn VisibleRegion(self: QDoubleSpinBox) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QDoubleSpinBox, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QDoubleSpinBox, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ContentsMargins(self: QDoubleSpinBox) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ContentsRect(self: QDoubleSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Layout(self: QDoubleSpinBox) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QDoubleSpinBox, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn UpdateGeometry(self: QDoubleSpinBox) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QDoubleSpinBox, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QDoubleSpinBox, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QDoubleSpinBox, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QDoubleSpinBox, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn FocusWidget(self: QDoubleSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn NextInFocusChain(self: QDoubleSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn PreviousInFocusChain(self: QDoubleSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn AcceptDrops(self: QDoubleSpinBox) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QDoubleSpinBox, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QDoubleSpinBox, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QDoubleSpinBox, actions: []QAction) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QDoubleSpinBox, before: anytype, actions: []QAction) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QDoubleSpinBox, before: anytype, action: anytype) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QDoubleSpinBox, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QDoubleSpinBox, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qdoublespinbox.Actions: Memory allocation failed");
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QDoubleSpinBox, text: []const u8) QAction {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QDoubleSpinBox, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QDoubleSpinBox, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QDoubleSpinBox, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ParentWidget(self: QDoubleSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QDoubleSpinBox, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QDoubleSpinBox, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QDoubleSpinBox, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QDoubleSpinBox) i32 {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QDoubleSpinBox, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QDoubleSpinBox, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QDoubleSpinBox, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QDoubleSpinBox, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QDoubleSpinBox, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn EnsurePolished(self: QDoubleSpinBox) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QDoubleSpinBox, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn AutoFillBackground(self: QDoubleSpinBox) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QDoubleSpinBox, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn BackingStore(self: QDoubleSpinBox) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn WindowHandle(self: QDoubleSpinBox) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Screen(self: QDoubleSpinBox) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QDoubleSpinBox, screen: anytype) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QDoubleSpinBox, title: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QDoubleSpinBox, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QDoubleSpinBox, iconText: []const u8) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QDoubleSpinBox, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QDoubleSpinBox) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QDoubleSpinBox, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QDoubleSpinBox, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QDoubleSpinBox, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QDoubleSpinBox, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QDoubleSpinBox, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QDoubleSpinBox, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QDoubleSpinBox, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QDoubleSpinBox, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QDoubleSpinBox, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QDoubleSpinBox, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QDoubleSpinBox, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QDoubleSpinBox, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QDoubleSpinBox, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QDoubleSpinBox, param1: i32, on: bool) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QDoubleSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QDoubleSpinBox, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsWidgetType(self: QDoubleSpinBox) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsWindowType(self: QDoubleSpinBox) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn IsQuickItemType(self: QDoubleSpinBox) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SignalsBlocked(self: QDoubleSpinBox) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QDoubleSpinBox, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Thread(self: QDoubleSpinBox) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QDoubleSpinBox, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QDoubleSpinBox, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QDoubleSpinBox, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QDoubleSpinBox, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QDoubleSpinBox, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QDoubleSpinBox, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qdoublespinbox.Children: Memory allocation failed");
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QDoubleSpinBox, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QDoubleSpinBox, obj: anytype) void {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QDoubleSpinBox, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Disconnect3(self: QDoubleSpinBox) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QDoubleSpinBox, receiver: anytype) bool {
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn DumpObjectTree(self: QDoubleSpinBox) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn DumpObjectInfo(self: QDoubleSpinBox) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QDoubleSpinBox, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QDoubleSpinBox, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QDoubleSpinBox, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qdoublespinbox.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qdoublespinbox.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn BindingStorage(self: QDoubleSpinBox) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn BindingStorage2(self: QDoubleSpinBox) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Destroyed(self: QDoubleSpinBox) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Parent(self: QDoubleSpinBox) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QDoubleSpinBox, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn DeleteLater(self: QDoubleSpinBox) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QDoubleSpinBox, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QDoubleSpinBox, time: i64, timerType: i32) i32 {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QDoubleSpinBox, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QDoubleSpinBox, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QDoubleSpinBox, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QDoubleSpinBox, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QDoubleSpinBox, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QDoubleSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn PaintingActive(self: QDoubleSpinBox) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn WidthMM(self: QDoubleSpinBox) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn HeightMM(self: QDoubleSpinBox) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn LogicalDpiX(self: QDoubleSpinBox) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn LogicalDpiY(self: QDoubleSpinBox) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn PhysicalDpiX(self: QDoubleSpinBox) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn PhysicalDpiY(self: QDoubleSpinBox) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn DevicePixelRatio(self: QDoubleSpinBox) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn DevicePixelRatioF(self: QDoubleSpinBox) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn ColorCount(self: QDoubleSpinBox) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Depth(self: QDoubleSpinBox) i32 {
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SizeHint(self: QDoubleSpinBox) QSize {
        return .{ .ptr = qtc.QDoubleSpinBox_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperSizeHint(self: QDoubleSpinBox) QSize {
        return .{ .ptr = qtc.QDoubleSpinBox_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QDoubleSpinBox, callback: *const fn () callconv(.c) QSize) void {
        qtc.QDoubleSpinBox_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn MinimumSizeHint(self: QDoubleSpinBox) QSize {
        return .{ .ptr = qtc.QDoubleSpinBox_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperMinimumSizeHint(self: QDoubleSpinBox) QSize {
        return .{ .ptr = qtc.QDoubleSpinBox_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QDoubleSpinBox, callback: *const fn () callconv(.c) QSize) void {
        qtc.QDoubleSpinBox_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QDoubleSpinBox, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDoubleSpinBox_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QDoubleSpinBox, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDoubleSpinBox_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QEvent) callconv(.c) bool) void {
        qtc.QDoubleSpinBox_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QDoubleSpinBox, param1: i32) QVariant {
        return .{ .ptr = qtc.QDoubleSpinBox_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QDoubleSpinBox, param1: i32) QVariant {
        return .{ .ptr = qtc.QDoubleSpinBox_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, i32) callconv(.c) QVariant) void {
        qtc.QDoubleSpinBox_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` steps: i32 `
    ///
    pub fn StepBy(self: QDoubleSpinBox, steps: i32) void {
        qtc.QDoubleSpinBox_StepBy(@ptrCast(self.ptr), @bitCast(steps));
    }

    /// ### DEPRECATED: Use `SuperStepBy` instead
    ///
    pub const QBaseStepBy = SuperStepBy;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` steps: i32 `
    ///
    pub fn SuperStepBy(self: QDoubleSpinBox, steps: i32) void {
        qtc.QDoubleSpinBox_SuperStepBy(@ptrCast(self.ptr), @bitCast(steps));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, steps: i32) callconv(.c) void `
    ///
    pub fn OnStepBy(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, i32) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnStepBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Clear(self: QDoubleSpinBox) void {
        qtc.QDoubleSpinBox_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperClear(self: QDoubleSpinBox) void {
        qtc.QDoubleSpinBox_SuperClear(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: QDoubleSpinBox, callback: *const fn () callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QDoubleSpinBox_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QDoubleSpinBox_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QResizeEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QDoubleSpinBox_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QDoubleSpinBox_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QKeyEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QDoubleSpinBox_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QDoubleSpinBox_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QKeyEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QDoubleSpinBox_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QDoubleSpinBox_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QWheelEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QDoubleSpinBox_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QDoubleSpinBox_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QFocusEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QDoubleSpinBox_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QDoubleSpinBox_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QFocusEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QDoubleSpinBox_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.QDoubleSpinBox_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QContextMenuEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn ChangeEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDoubleSpinBox_ChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperChangeEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDoubleSpinBox_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QDoubleSpinBox_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QDoubleSpinBox_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QCloseEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QDoubleSpinBox_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QDoubleSpinBox_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QHideEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDoubleSpinBox_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDoubleSpinBox_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QMouseEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDoubleSpinBox_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDoubleSpinBox_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QMouseEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDoubleSpinBox_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDoubleSpinBox_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QMouseEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDoubleSpinBox_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QDoubleSpinBox_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QTimerEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QDoubleSpinBox_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QDoubleSpinBox_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QPaintEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QDoubleSpinBox_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QDoubleSpinBox_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QShowEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` option: QStyleOptionSpinBox `
    ///
    pub fn InitStyleOption(self: QDoubleSpinBox, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSpinBox;
        qtc.QDoubleSpinBox_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` option: QStyleOptionSpinBox `
    ///
    pub fn SuperInitStyleOption(self: QDoubleSpinBox, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSpinBox;
        qtc.QDoubleSpinBox_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, option: QStyleOptionSpinBox) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QStyleOptionSpinBox) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn StepEnabled(self: QDoubleSpinBox) i32 {
        return qtc.QDoubleSpinBox_StepEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperStepEnabled` instead
    ///
    pub const QBaseStepEnabled = SuperStepEnabled;

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn SuperStepEnabled(self: QDoubleSpinBox) i32 {
        return qtc.QDoubleSpinBox_SuperStepEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnStepEnabled(self: QDoubleSpinBox, callback: *const fn () callconv(.c) i32) void {
        qtc.QDoubleSpinBox_OnStepEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn DevType(self: QDoubleSpinBox) i32 {
        return qtc.QDoubleSpinBox_DevType(@ptrCast(self.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperDevType(self: QDoubleSpinBox) i32 {
        return qtc.QDoubleSpinBox_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QDoubleSpinBox, callback: *const fn () callconv(.c) i32) void {
        qtc.QDoubleSpinBox_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QDoubleSpinBox, visible: bool) void {
        qtc.QDoubleSpinBox_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QDoubleSpinBox, visible: bool) void {
        qtc.QDoubleSpinBox_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, bool) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QDoubleSpinBox, param1: i32) i32 {
        return qtc.QDoubleSpinBox_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QDoubleSpinBox, param1: i32) i32 {
        return qtc.QDoubleSpinBox_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, i32) callconv(.c) i32) void {
        qtc.QDoubleSpinBox_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn HasHeightForWidth(self: QDoubleSpinBox) bool {
        return qtc.QDoubleSpinBox_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperHasHeightForWidth(self: QDoubleSpinBox) bool {
        return qtc.QDoubleSpinBox_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QDoubleSpinBox, callback: *const fn () callconv(.c) bool) void {
        qtc.QDoubleSpinBox_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn PaintEngine(self: QDoubleSpinBox) QPaintEngine {
        return .{ .ptr = qtc.QDoubleSpinBox_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperPaintEngine(self: QDoubleSpinBox) QPaintEngine {
        return .{ .ptr = qtc.QDoubleSpinBox_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QDoubleSpinBox, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QDoubleSpinBox_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDoubleSpinBox_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QDoubleSpinBox_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QMouseEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QDoubleSpinBox_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QDoubleSpinBox_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QEnterEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDoubleSpinBox_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDoubleSpinBox_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QDoubleSpinBox_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QDoubleSpinBox_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QMoveEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QDoubleSpinBox_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QDoubleSpinBox_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QTabletEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QDoubleSpinBox_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QDoubleSpinBox_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QActionEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QDoubleSpinBox_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QDoubleSpinBox_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QDragEnterEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QDoubleSpinBox_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QDoubleSpinBox_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QDragMoveEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QDoubleSpinBox_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QDoubleSpinBox_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QDoubleSpinBox_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QDoubleSpinBox_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QDropEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QDoubleSpinBox, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QDoubleSpinBox_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QDoubleSpinBox, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QDoubleSpinBox_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QDoubleSpinBox_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QDoubleSpinBox, param1: i32) i32 {
        return qtc.QDoubleSpinBox_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QDoubleSpinBox, param1: i32) i32 {
        return qtc.QDoubleSpinBox_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, i32) callconv(.c) i32) void {
        qtc.QDoubleSpinBox_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QDoubleSpinBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QDoubleSpinBox_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QDoubleSpinBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QDoubleSpinBox_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QPainter) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QDoubleSpinBox, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QDoubleSpinBox_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QDoubleSpinBox, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QDoubleSpinBox_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QDoubleSpinBox_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SharedPainter(self: QDoubleSpinBox) QPainter {
        return .{ .ptr = qtc.QDoubleSpinBox_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperSharedPainter(self: QDoubleSpinBox) QPainter {
        return .{ .ptr = qtc.QDoubleSpinBox_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QDoubleSpinBox, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QDoubleSpinBox_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QDoubleSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QDoubleSpinBox_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QDoubleSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QDoubleSpinBox_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QInputMethodEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QDoubleSpinBox, next: bool) bool {
        return qtc.QDoubleSpinBox_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QDoubleSpinBox, next: bool) bool {
        return qtc.QDoubleSpinBox_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, bool) callconv(.c) bool) void {
        qtc.QDoubleSpinBox_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QDoubleSpinBox, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDoubleSpinBox_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QDoubleSpinBox, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QDoubleSpinBox_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QObject, QEvent) callconv(.c) bool) void {
        qtc.QDoubleSpinBox_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDoubleSpinBox_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QDoubleSpinBox_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QChildEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDoubleSpinBox_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QDoubleSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QDoubleSpinBox_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QEvent) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QDoubleSpinBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDoubleSpinBox_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QDoubleSpinBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDoubleSpinBox_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QMetaMethod) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QDoubleSpinBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDoubleSpinBox_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QDoubleSpinBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QDoubleSpinBox_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QMetaMethod) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn LineEdit(self: QDoubleSpinBox) QLineEdit {
        return .{ .ptr = qtc.QDoubleSpinBox_LineEdit(@ptrCast(self.ptr)) };
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperLineEdit(self: QDoubleSpinBox) QLineEdit {
        return .{ .ptr = qtc.QDoubleSpinBox_SuperLineEdit(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QLineEdit `
    ///
    pub fn OnLineEdit(self: QDoubleSpinBox, callback: *const fn () callconv(.c) QLineEdit) void {
        qtc.QDoubleSpinBox_OnLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SetLineEdit(self: QDoubleSpinBox, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.QDoubleSpinBox_SetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SuperSetLineEdit(self: QDoubleSpinBox, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.QDoubleSpinBox_SuperSetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, edit: QLineEdit) callconv(.c) void `
    ///
    pub fn OnSetLineEdit(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QLineEdit) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnSetLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn UpdateMicroFocus(self: QDoubleSpinBox) void {
        qtc.QDoubleSpinBox_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperUpdateMicroFocus(self: QDoubleSpinBox) void {
        qtc.QDoubleSpinBox_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QDoubleSpinBox, callback: *const fn () callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Create(self: QDoubleSpinBox) void {
        qtc.QDoubleSpinBox_Create(@ptrCast(self.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperCreate(self: QDoubleSpinBox) void {
        qtc.QDoubleSpinBox_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QDoubleSpinBox, callback: *const fn () callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Destroy(self: QDoubleSpinBox) void {
        qtc.QDoubleSpinBox_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperDestroy(self: QDoubleSpinBox) void {
        qtc.QDoubleSpinBox_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QDoubleSpinBox, callback: *const fn () callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn FocusNextChild(self: QDoubleSpinBox) bool {
        return qtc.QDoubleSpinBox_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperFocusNextChild(self: QDoubleSpinBox) bool {
        return qtc.QDoubleSpinBox_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QDoubleSpinBox, callback: *const fn () callconv(.c) bool) void {
        qtc.QDoubleSpinBox_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn FocusPreviousChild(self: QDoubleSpinBox) bool {
        return qtc.QDoubleSpinBox_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperFocusPreviousChild(self: QDoubleSpinBox) bool {
        return qtc.QDoubleSpinBox_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QDoubleSpinBox, callback: *const fn () callconv(.c) bool) void {
        qtc.QDoubleSpinBox_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Sender(self: QDoubleSpinBox) QObject {
        return .{ .ptr = qtc.QDoubleSpinBox_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperSender(self: QDoubleSpinBox) QObject {
        return .{ .ptr = qtc.QDoubleSpinBox_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QDoubleSpinBox, callback: *const fn () callconv(.c) QObject) void {
        qtc.QDoubleSpinBox_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SenderSignalIndex(self: QDoubleSpinBox) i32 {
        return qtc.QDoubleSpinBox_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    pub fn SuperSenderSignalIndex(self: QDoubleSpinBox) i32 {
        return qtc.QDoubleSpinBox_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QDoubleSpinBox, callback: *const fn () callconv(.c) i32) void {
        qtc.QDoubleSpinBox_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QDoubleSpinBox, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDoubleSpinBox_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QDoubleSpinBox, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QDoubleSpinBox_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, [*:0]const u8) callconv(.c) i32) void {
        qtc.QDoubleSpinBox_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QDoubleSpinBox, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDoubleSpinBox_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QDoubleSpinBox, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QDoubleSpinBox_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, QMetaMethod) callconv(.c) bool) void {
        qtc.QDoubleSpinBox_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QDoubleSpinBox, metricA: i32, metricB: i32) f64 {
        return qtc.QDoubleSpinBox_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QDoubleSpinBox `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QDoubleSpinBox, metricA: i32, metricB: i32) f64 {
        return qtc.QDoubleSpinBox_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox`
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, i32, i32) callconv(.c) f64) void {
        qtc.QDoubleSpinBox_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    /// ` callback: *const fn (self: QDoubleSpinBox, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QDoubleSpinBox, callback: *const fn (QDoubleSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdoublespinbox.html#dtor.QDoubleSpinBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QDoubleSpinBox `
    ///
    pub fn Delete(self: QDoubleSpinBox) void {
        qtc.QDoubleSpinBox_Delete(@ptrCast(self.ptr));
    }
};
