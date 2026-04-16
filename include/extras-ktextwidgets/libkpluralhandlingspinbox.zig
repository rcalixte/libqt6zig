const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const KLocalizedString = @import("libqt6").KLocalizedString;
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
const qabstractspinbox_enums = @import("../libqabstractspinbox.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qvalidator_enums = @import("../libqvalidator.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kpluralhandlingspinbox.html)
pub const KPluralHandlingSpinBox = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kpluralhandlingspinbox.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KPluralHandlingSpinBox,

    pub const _is_KPluralHandlingSpinBox = {};
    pub const _is_QSpinBox = {};
    pub const _is_QAbstractSpinBox = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new KPluralHandlingSpinBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KPluralHandlingSpinBox {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KPluralHandlingSpinBox_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KPluralHandlingSpinBox object.
    ///
    pub fn New2() KPluralHandlingSpinBox {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn MetaObject(self: KPluralHandlingSpinBox) QMetaObject {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KPluralHandlingSpinBox_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperMetaObject(self: KPluralHandlingSpinBox) QMetaObject {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KPluralHandlingSpinBox, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KPluralHandlingSpinBox_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KPluralHandlingSpinBox_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KPluralHandlingSpinBox, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KPluralHandlingSpinBox_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KPluralHandlingSpinBox, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KPluralHandlingSpinBox_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KPluralHandlingSpinBox_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KPluralHandlingSpinBox, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KPluralHandlingSpinBox_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kpluralhandlingspinbox.html#setSuffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` suffix: KLocalizedString `
    ///
    pub fn SetSuffix(self: KPluralHandlingSpinBox, suffix: anytype) void {
        comptime _ = @TypeOf(suffix)._is_KLocalizedString;
        qtc.KPluralHandlingSpinBox_SetSuffix(@ptrCast(self.ptr), @ptrCast(suffix.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Value(self: KPluralHandlingSpinBox) i32 {
        return qtc.QSpinBox_Value(@ptrCast(self.ptr));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#prefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Prefix(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSpinBox_Prefix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.Prefix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setPrefix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn SetPrefix(self: KPluralHandlingSpinBox, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QSpinBox_SetPrefix(@ptrCast(self.ptr), prefix_str);
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#suffix)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Suffix(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSpinBox_Suffix(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.Suffix: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#cleanText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn CleanText(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QSpinBox_CleanText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.CleanText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#singleStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SingleStep(self: KPluralHandlingSpinBox) i32 {
        return qtc.QSpinBox_SingleStep(@ptrCast(self.ptr));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setSingleStep)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` val: i32 `
    ///
    pub fn SetSingleStep(self: KPluralHandlingSpinBox, val: i32) void {
        qtc.QSpinBox_SetSingleStep(@ptrCast(self.ptr), @bitCast(val));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#minimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Minimum(self: KPluralHandlingSpinBox) i32 {
        return qtc.QSpinBox_Minimum(@ptrCast(self.ptr));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setMinimum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` min: i32 `
    ///
    pub fn SetMinimum(self: KPluralHandlingSpinBox, min: i32) void {
        qtc.QSpinBox_SetMinimum(@ptrCast(self.ptr), @bitCast(min));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#maximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Maximum(self: KPluralHandlingSpinBox) i32 {
        return qtc.QSpinBox_Maximum(@ptrCast(self.ptr));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setMaximum)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` max: i32 `
    ///
    pub fn SetMaximum(self: KPluralHandlingSpinBox, max: i32) void {
        qtc.QSpinBox_SetMaximum(@ptrCast(self.ptr), @bitCast(max));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setRange)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` min: i32 `
    ///
    /// ` max: i32 `
    ///
    pub fn SetRange(self: KPluralHandlingSpinBox, min: i32, max: i32) void {
        qtc.QSpinBox_SetRange(@ptrCast(self.ptr), @bitCast(min), @bitCast(max));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#stepType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.StepType `
    ///
    pub fn StepType(self: KPluralHandlingSpinBox) i32 {
        return qtc.QSpinBox_StepType(@ptrCast(self.ptr));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setStepType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` stepType: qabstractspinbox_enums.StepType `
    ///
    pub fn SetStepType(self: KPluralHandlingSpinBox, stepType: i32) void {
        qtc.QSpinBox_SetStepType(@ptrCast(self.ptr), @bitCast(stepType));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#displayIntegerBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn DisplayIntegerBase(self: KPluralHandlingSpinBox) i32 {
        return qtc.QSpinBox_DisplayIntegerBase(@ptrCast(self.ptr));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setDisplayIntegerBase)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` base: i32 `
    ///
    pub fn SetDisplayIntegerBase(self: KPluralHandlingSpinBox, base: i32) void {
        qtc.QSpinBox_SetDisplayIntegerBase(@ptrCast(self.ptr), @bitCast(base));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` val: i32 `
    ///
    pub fn SetValue(self: KPluralHandlingSpinBox, val: i32) void {
        qtc.QSpinBox_SetValue(@ptrCast(self.ptr), @bitCast(val));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn ValueChanged(self: KPluralHandlingSpinBox, param1: i32) void {
        qtc.QSpinBox_ValueChanged(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, param1: i32) callconv(.c) void `
    ///
    pub fn OnValueChanged(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, i32) callconv(.c) void) void {
        qtc.QSpinBox_Connect_ValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextChanged(self: KPluralHandlingSpinBox, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QSpinBox_TextChanged(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QSpinBox_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#buttonSymbols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn ButtonSymbols(self: KPluralHandlingSpinBox) i32 {
        return qtc.QAbstractSpinBox_ButtonSymbols(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setButtonSymbols)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` bs: qabstractspinbox_enums.ButtonSymbols `
    ///
    pub fn SetButtonSymbols(self: KPluralHandlingSpinBox, bs: i32) void {
        qtc.QAbstractSpinBox_SetButtonSymbols(@ptrCast(self.ptr), @bitCast(bs));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setCorrectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` cm: qabstractspinbox_enums.CorrectionMode `
    ///
    pub fn SetCorrectionMode(self: KPluralHandlingSpinBox, cm: i32) void {
        qtc.QAbstractSpinBox_SetCorrectionMode(@ptrCast(self.ptr), @bitCast(cm));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#correctionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qabstractspinbox_enums.CorrectionMode `
    ///
    pub fn CorrectionMode(self: KPluralHandlingSpinBox) i32 {
        return qtc.QAbstractSpinBox_CorrectionMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasAcceptableInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn HasAcceptableInput(self: KPluralHandlingSpinBox) bool {
        return qtc.QAbstractSpinBox_HasAcceptableInput(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSpinBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#specialValueText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SpecialValueText(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractSpinBox_SpecialValueText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.SpecialValueText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setSpecialValueText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` txt: []const u8 `
    ///
    pub fn SetSpecialValueText(self: KPluralHandlingSpinBox, txt: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Wrapping(self: KPluralHandlingSpinBox) bool {
        return qtc.QAbstractSpinBox_Wrapping(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setWrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` w: bool `
    ///
    pub fn SetWrapping(self: KPluralHandlingSpinBox, w: bool) void {
        qtc.QAbstractSpinBox_SetWrapping(@ptrCast(self.ptr), w);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` r: bool `
    ///
    pub fn SetReadOnly(self: KPluralHandlingSpinBox, r: bool) void {
        qtc.QAbstractSpinBox_SetReadOnly(@ptrCast(self.ptr), r);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsReadOnly(self: KPluralHandlingSpinBox) bool {
        return qtc.QAbstractSpinBox_IsReadOnly(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setKeyboardTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` kt: bool `
    ///
    pub fn SetKeyboardTracking(self: KPluralHandlingSpinBox, kt: bool) void {
        qtc.QAbstractSpinBox_SetKeyboardTracking(@ptrCast(self.ptr), kt);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyboardTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn KeyboardTracking(self: KPluralHandlingSpinBox) bool {
        return qtc.QAbstractSpinBox_KeyboardTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` flag: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: KPluralHandlingSpinBox, flag: i32) void {
        qtc.QAbstractSpinBox_SetAlignment(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: KPluralHandlingSpinBox) i32 {
        return qtc.QAbstractSpinBox_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: KPluralHandlingSpinBox, frame: bool) void {
        qtc.QAbstractSpinBox_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn HasFrame(self: KPluralHandlingSpinBox) bool {
        return qtc.QAbstractSpinBox_HasFrame(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setAccelerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` on: bool `
    ///
    pub fn SetAccelerated(self: KPluralHandlingSpinBox, on: bool) void {
        qtc.QAbstractSpinBox_SetAccelerated(@ptrCast(self.ptr), on);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isAccelerated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsAccelerated(self: KPluralHandlingSpinBox) bool {
        return qtc.QAbstractSpinBox_IsAccelerated(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setGroupSeparatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` shown: bool `
    ///
    pub fn SetGroupSeparatorShown(self: KPluralHandlingSpinBox, shown: bool) void {
        qtc.QAbstractSpinBox_SetGroupSeparatorShown(@ptrCast(self.ptr), shown);
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#isGroupSeparatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsGroupSeparatorShown(self: KPluralHandlingSpinBox) bool {
        return qtc.QAbstractSpinBox_IsGroupSeparatorShown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#interpretText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn InterpretText(self: KPluralHandlingSpinBox) void {
        qtc.QAbstractSpinBox_InterpretText(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepUp)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn StepUp(self: KPluralHandlingSpinBox) void {
        qtc.QAbstractSpinBox_StepUp(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn StepDown(self: KPluralHandlingSpinBox) void {
        qtc.QAbstractSpinBox_StepDown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SelectAll(self: KPluralHandlingSpinBox) void {
        qtc.QAbstractSpinBox_SelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn EditingFinished(self: KPluralHandlingSpinBox) void {
        qtc.QAbstractSpinBox_EditingFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#editingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox) callconv(.c) void `
    ///
    pub fn OnEditingFinished(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox) callconv(.c) void) void {
        qtc.QAbstractSpinBox_Connect_EditingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn WinId(self: KPluralHandlingSpinBox) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn CreateWinId(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn InternalWinId(self: KPluralHandlingSpinBox) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn EffectiveWinId(self: KPluralHandlingSpinBox) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Style(self: KPluralHandlingSpinBox) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KPluralHandlingSpinBox, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsTopLevel(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsWindow(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsModal(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KPluralHandlingSpinBox, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsEnabled(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KPluralHandlingSpinBox, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KPluralHandlingSpinBox, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KPluralHandlingSpinBox, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KPluralHandlingSpinBox, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn FrameGeometry(self: KPluralHandlingSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Geometry(self: KPluralHandlingSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn NormalGeometry(self: KPluralHandlingSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn X(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Y(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Pos(self: KPluralHandlingSpinBox) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn FrameSize(self: KPluralHandlingSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Size(self: KPluralHandlingSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Width(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Height(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Rect(self: KPluralHandlingSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ChildrenRect(self: KPluralHandlingSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ChildrenRegion(self: KPluralHandlingSpinBox) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn MinimumSize(self: KPluralHandlingSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn MaximumSize(self: KPluralHandlingSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn MinimumWidth(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn MinimumHeight(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn MaximumWidth(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn MaximumHeight(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KPluralHandlingSpinBox, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KPluralHandlingSpinBox, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KPluralHandlingSpinBox, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KPluralHandlingSpinBox, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KPluralHandlingSpinBox, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KPluralHandlingSpinBox, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KPluralHandlingSpinBox, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KPluralHandlingSpinBox, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SizeIncrement(self: KPluralHandlingSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KPluralHandlingSpinBox, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KPluralHandlingSpinBox, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn BaseSize(self: KPluralHandlingSpinBox) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KPluralHandlingSpinBox, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KPluralHandlingSpinBox, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KPluralHandlingSpinBox, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KPluralHandlingSpinBox, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KPluralHandlingSpinBox, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KPluralHandlingSpinBox, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KPluralHandlingSpinBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KPluralHandlingSpinBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KPluralHandlingSpinBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KPluralHandlingSpinBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KPluralHandlingSpinBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KPluralHandlingSpinBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KPluralHandlingSpinBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KPluralHandlingSpinBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KPluralHandlingSpinBox, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KPluralHandlingSpinBox, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KPluralHandlingSpinBox, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KPluralHandlingSpinBox, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Window(self: KPluralHandlingSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn NativeParentWidget(self: KPluralHandlingSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn TopLevelWidget(self: KPluralHandlingSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Palette(self: KPluralHandlingSpinBox) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KPluralHandlingSpinBox, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KPluralHandlingSpinBox, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KPluralHandlingSpinBox, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Font(self: KPluralHandlingSpinBox) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KPluralHandlingSpinBox, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn FontMetrics(self: KPluralHandlingSpinBox) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn FontInfo(self: KPluralHandlingSpinBox) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Cursor(self: KPluralHandlingSpinBox) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KPluralHandlingSpinBox, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn UnsetCursor(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KPluralHandlingSpinBox, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn HasMouseTracking(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn UnderMouse(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KPluralHandlingSpinBox, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn HasTabletTracking(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KPluralHandlingSpinBox, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KPluralHandlingSpinBox, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Mask(self: KPluralHandlingSpinBox) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ClearMask(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KPluralHandlingSpinBox, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KPluralHandlingSpinBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Grab(self: KPluralHandlingSpinBox) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn GraphicsEffect(self: KPluralHandlingSpinBox) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KPluralHandlingSpinBox, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KPluralHandlingSpinBox, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KPluralHandlingSpinBox, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KPluralHandlingSpinBox, windowTitle: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KPluralHandlingSpinBox, styleSheet: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KPluralHandlingSpinBox, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn WindowIcon(self: KPluralHandlingSpinBox) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KPluralHandlingSpinBox, windowIconText: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KPluralHandlingSpinBox, windowRole: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KPluralHandlingSpinBox, filePath: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KPluralHandlingSpinBox, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn WindowOpacity(self: KPluralHandlingSpinBox) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsWindowModified(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KPluralHandlingSpinBox, toolTip: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KPluralHandlingSpinBox, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ToolTipDuration(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KPluralHandlingSpinBox, statusTip: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KPluralHandlingSpinBox, whatsThis: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KPluralHandlingSpinBox, name: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KPluralHandlingSpinBox, description: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KPluralHandlingSpinBox, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn UnsetLayoutDirection(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KPluralHandlingSpinBox, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Locale(self: KPluralHandlingSpinBox) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn UnsetLocale(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsRightToLeft(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsLeftToRight(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SetFocus(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsActiveWindow(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ActivateWindow(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ClearFocus(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KPluralHandlingSpinBox, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KPluralHandlingSpinBox, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn HasFocus(self: KPluralHandlingSpinBox) bool {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KPluralHandlingSpinBox, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn FocusProxy(self: KPluralHandlingSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KPluralHandlingSpinBox, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn GrabMouse(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KPluralHandlingSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ReleaseMouse(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn GrabKeyboard(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ReleaseKeyboard(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KPluralHandlingSpinBox, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KPluralHandlingSpinBox, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KPluralHandlingSpinBox, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KPluralHandlingSpinBox, id: i32) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn UpdatesEnabled(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KPluralHandlingSpinBox, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn GraphicsProxyWidget(self: KPluralHandlingSpinBox) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Update(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Repaint(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KPluralHandlingSpinBox, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KPluralHandlingSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KPluralHandlingSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KPluralHandlingSpinBox, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KPluralHandlingSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KPluralHandlingSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KPluralHandlingSpinBox, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Show(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Hide(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ShowMinimized(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ShowMaximized(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ShowFullScreen(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ShowNormal(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Close(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Raise(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Lower(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KPluralHandlingSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KPluralHandlingSpinBox, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KPluralHandlingSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KPluralHandlingSpinBox, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KPluralHandlingSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KPluralHandlingSpinBox, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KPluralHandlingSpinBox, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kpluralhandlingspinbox.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KPluralHandlingSpinBox, geometry: []u8) bool {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn AdjustSize(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsVisible(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KPluralHandlingSpinBox, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsHidden(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsMinimized(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsMaximized(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsFullScreen(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KPluralHandlingSpinBox, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KPluralHandlingSpinBox, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SizePolicy(self: KPluralHandlingSpinBox) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KPluralHandlingSpinBox, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KPluralHandlingSpinBox, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn VisibleRegion(self: KPluralHandlingSpinBox) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KPluralHandlingSpinBox, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KPluralHandlingSpinBox, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ContentsMargins(self: KPluralHandlingSpinBox) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ContentsRect(self: KPluralHandlingSpinBox) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Layout(self: KPluralHandlingSpinBox) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KPluralHandlingSpinBox, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn UpdateGeometry(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KPluralHandlingSpinBox, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KPluralHandlingSpinBox, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KPluralHandlingSpinBox, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KPluralHandlingSpinBox, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn FocusWidget(self: KPluralHandlingSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn NextInFocusChain(self: KPluralHandlingSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn PreviousInFocusChain(self: KPluralHandlingSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn AcceptDrops(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KPluralHandlingSpinBox, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: KPluralHandlingSpinBox, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KPluralHandlingSpinBox, actions: []QAction) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KPluralHandlingSpinBox, before: anytype, actions: []QAction) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KPluralHandlingSpinBox, before: anytype, action: anytype) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KPluralHandlingSpinBox, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kpluralhandlingspinbox.Actions: Memory allocation failed");
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: KPluralHandlingSpinBox, text: []const u8) QAction {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KPluralHandlingSpinBox, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KPluralHandlingSpinBox, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KPluralHandlingSpinBox, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ParentWidget(self: KPluralHandlingSpinBox) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KPluralHandlingSpinBox, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KPluralHandlingSpinBox, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KPluralHandlingSpinBox, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KPluralHandlingSpinBox) i32 {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KPluralHandlingSpinBox, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KPluralHandlingSpinBox, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KPluralHandlingSpinBox, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KPluralHandlingSpinBox, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KPluralHandlingSpinBox, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn EnsurePolished(self: KPluralHandlingSpinBox) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KPluralHandlingSpinBox, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn AutoFillBackground(self: KPluralHandlingSpinBox) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KPluralHandlingSpinBox, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn BackingStore(self: KPluralHandlingSpinBox) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn WindowHandle(self: KPluralHandlingSpinBox) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Screen(self: KPluralHandlingSpinBox) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KPluralHandlingSpinBox, screen: anytype) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KPluralHandlingSpinBox, title: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KPluralHandlingSpinBox, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KPluralHandlingSpinBox, iconText: []const u8) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KPluralHandlingSpinBox, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KPluralHandlingSpinBox) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KPluralHandlingSpinBox, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KPluralHandlingSpinBox, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KPluralHandlingSpinBox, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KPluralHandlingSpinBox, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KPluralHandlingSpinBox, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KPluralHandlingSpinBox, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KPluralHandlingSpinBox, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KPluralHandlingSpinBox, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KPluralHandlingSpinBox, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KPluralHandlingSpinBox, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KPluralHandlingSpinBox, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KPluralHandlingSpinBox, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KPluralHandlingSpinBox, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KPluralHandlingSpinBox, param1: i32, on: bool) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KPluralHandlingSpinBox, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsWidgetType(self: KPluralHandlingSpinBox) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsWindowType(self: KPluralHandlingSpinBox) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn IsQuickItemType(self: KPluralHandlingSpinBox) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SignalsBlocked(self: KPluralHandlingSpinBox) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KPluralHandlingSpinBox, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Thread(self: KPluralHandlingSpinBox) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KPluralHandlingSpinBox, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KPluralHandlingSpinBox, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KPluralHandlingSpinBox, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KPluralHandlingSpinBox, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KPluralHandlingSpinBox, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kpluralhandlingspinbox.Children: Memory allocation failed");
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KPluralHandlingSpinBox, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KPluralHandlingSpinBox, obj: anytype) void {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KPluralHandlingSpinBox, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Disconnect3(self: KPluralHandlingSpinBox) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KPluralHandlingSpinBox, receiver: anytype) bool {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn DumpObjectTree(self: KPluralHandlingSpinBox) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn DumpObjectInfo(self: KPluralHandlingSpinBox) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KPluralHandlingSpinBox, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KPluralHandlingSpinBox, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kpluralhandlingspinbox.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kpluralhandlingspinbox.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn BindingStorage(self: KPluralHandlingSpinBox) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn BindingStorage2(self: KPluralHandlingSpinBox) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Destroyed(self: KPluralHandlingSpinBox) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Parent(self: KPluralHandlingSpinBox) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KPluralHandlingSpinBox, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn DeleteLater(self: KPluralHandlingSpinBox) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KPluralHandlingSpinBox, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KPluralHandlingSpinBox, time: i64, timerType: i32) i32 {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KPluralHandlingSpinBox, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KPluralHandlingSpinBox, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KPluralHandlingSpinBox, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KPluralHandlingSpinBox, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KPluralHandlingSpinBox, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KPluralHandlingSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn PaintingActive(self: KPluralHandlingSpinBox) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn WidthMM(self: KPluralHandlingSpinBox) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn HeightMM(self: KPluralHandlingSpinBox) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn LogicalDpiX(self: KPluralHandlingSpinBox) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn LogicalDpiY(self: KPluralHandlingSpinBox) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn PhysicalDpiX(self: KPluralHandlingSpinBox) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn PhysicalDpiY(self: KPluralHandlingSpinBox) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn DevicePixelRatio(self: KPluralHandlingSpinBox) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn DevicePixelRatioF(self: KPluralHandlingSpinBox) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn ColorCount(self: KPluralHandlingSpinBox) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Depth(self: KPluralHandlingSpinBox) i32 {
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

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KPluralHandlingSpinBox, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KPluralHandlingSpinBox_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KPluralHandlingSpinBox, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KPluralHandlingSpinBox_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QEvent) callconv(.c) bool) void {
        qtc.KPluralHandlingSpinBox_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` input: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    /// ## Returns:
    ///
    /// ` qvalidator_enums.State `
    ///
    pub fn Validate(self: KPluralHandlingSpinBox, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return qtc.KPluralHandlingSpinBox_Validate(@ptrCast(self.ptr), input_str, @ptrCast(pos));
    }

    /// ### DEPRECATED: Use `SuperValidate` instead
    ///
    pub const QBaseValidate = SuperValidate;

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` input: []const u8 `
    ///
    /// ` pos: *i32 `
    ///
    /// ## Returns:
    ///
    /// ` qvalidator_enums.State `
    ///
    pub fn SuperValidate(self: KPluralHandlingSpinBox, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
            .len = input.len,
            .data = input.ptr,
        };
        return qtc.KPluralHandlingSpinBox_SuperValidate(@ptrCast(self.ptr), input_str, @ptrCast(pos));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#validate)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, input: [*:0]const u8, pos: *i32) callconv(.c) i32 `
    ///
    pub fn OnValidate(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.KPluralHandlingSpinBox_OnValidate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ValueFromText(self: KPluralHandlingSpinBox, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KPluralHandlingSpinBox_ValueFromText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `SuperValueFromText` instead
    ///
    pub const QBaseValueFromText = SuperValueFromText;

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperValueFromText(self: KPluralHandlingSpinBox, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.KPluralHandlingSpinBox_SuperValueFromText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#valueFromText)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, text: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnValueFromText(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, [*:0]const u8) callconv(.c) i32) void {
        qtc.KPluralHandlingSpinBox_OnValueFromText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` val: i32 `
    ///
    pub fn TextFromValue(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator, val: i32) []const u8 {
        var _str = qtc.KPluralHandlingSpinBox_TextFromValue(@ptrCast(self.ptr), @bitCast(val));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.TextFromValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperTextFromValue` instead
    ///
    pub const QBaseTextFromValue = SuperTextFromValue;

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` val: i32 `
    ///
    pub fn SuperTextFromValue(self: KPluralHandlingSpinBox, allocator: std.mem.Allocator, val: i32) []const u8 {
        var _str = qtc.KPluralHandlingSpinBox_SuperTextFromValue(@ptrCast(self.ptr), @bitCast(val));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kpluralhandlingspinbox.TextFromValue: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#textFromValue)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, val: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn OnTextFromValue(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, i32) callconv(.c) [*:0]const u8) void {
        qtc.KPluralHandlingSpinBox_OnTextFromValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` str: []const u8 `
    ///
    pub fn Fixup(self: KPluralHandlingSpinBox, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KPluralHandlingSpinBox_Fixup(@ptrCast(self.ptr), str_str);
    }

    /// ### DEPRECATED: Use `SuperFixup` instead
    ///
    pub const QBaseFixup = SuperFixup;

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` str: []const u8 `
    ///
    pub fn SuperFixup(self: KPluralHandlingSpinBox, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.KPluralHandlingSpinBox_SuperFixup(@ptrCast(self.ptr), str_str);
    }

    /// Inherited from QSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qspinbox.html#fixup)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, str: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnFixup(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnFixup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SizeHint(self: KPluralHandlingSpinBox) QSize {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperSizeHint(self: KPluralHandlingSpinBox) QSize {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) QSize) void {
        qtc.KPluralHandlingSpinBox_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn MinimumSizeHint(self: KPluralHandlingSpinBox) QSize {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperMinimumSizeHint(self: KPluralHandlingSpinBox) QSize {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) QSize) void {
        qtc.KPluralHandlingSpinBox_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KPluralHandlingSpinBox, param1: i32) QVariant {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KPluralHandlingSpinBox, param1: i32) QVariant {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, i32) callconv(.c) QVariant) void {
        qtc.KPluralHandlingSpinBox_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` steps: i32 `
    ///
    pub fn StepBy(self: KPluralHandlingSpinBox, steps: i32) void {
        qtc.KPluralHandlingSpinBox_StepBy(@ptrCast(self.ptr), @bitCast(steps));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` steps: i32 `
    ///
    pub fn SuperStepBy(self: KPluralHandlingSpinBox, steps: i32) void {
        qtc.KPluralHandlingSpinBox_SuperStepBy(@ptrCast(self.ptr), @bitCast(steps));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, steps: i32) callconv(.c) void `
    ///
    pub fn OnStepBy(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, i32) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnStepBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Clear(self: KPluralHandlingSpinBox) void {
        qtc.KPluralHandlingSpinBox_Clear(@ptrCast(self.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperClear(self: KPluralHandlingSpinBox) void {
        qtc.KPluralHandlingSpinBox_SuperClear(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#clear)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KPluralHandlingSpinBox_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KPluralHandlingSpinBox_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QResizeEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KPluralHandlingSpinBox_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KPluralHandlingSpinBox_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QKeyEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KPluralHandlingSpinBox_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.KPluralHandlingSpinBox_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QKeyEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KPluralHandlingSpinBox_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KPluralHandlingSpinBox_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QWheelEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KPluralHandlingSpinBox_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KPluralHandlingSpinBox_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QFocusEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KPluralHandlingSpinBox_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.KPluralHandlingSpinBox_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QFocusEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KPluralHandlingSpinBox_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.KPluralHandlingSpinBox_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QContextMenuEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn ChangeEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KPluralHandlingSpinBox_ChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperChangeEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KPluralHandlingSpinBox_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KPluralHandlingSpinBox_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KPluralHandlingSpinBox_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QCloseEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KPluralHandlingSpinBox_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KPluralHandlingSpinBox_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QHideEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KPluralHandlingSpinBox_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KPluralHandlingSpinBox_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QMouseEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KPluralHandlingSpinBox_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KPluralHandlingSpinBox_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QMouseEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KPluralHandlingSpinBox_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KPluralHandlingSpinBox_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QMouseEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KPluralHandlingSpinBox_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.KPluralHandlingSpinBox_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QTimerEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KPluralHandlingSpinBox_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.KPluralHandlingSpinBox_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QPaintEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KPluralHandlingSpinBox_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KPluralHandlingSpinBox_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QShowEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` option: QStyleOptionSpinBox `
    ///
    pub fn InitStyleOption(self: KPluralHandlingSpinBox, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSpinBox;
        qtc.KPluralHandlingSpinBox_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` option: QStyleOptionSpinBox `
    ///
    pub fn SuperInitStyleOption(self: KPluralHandlingSpinBox, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionSpinBox;
        qtc.KPluralHandlingSpinBox_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, option: QStyleOptionSpinBox) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QStyleOptionSpinBox) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn StepEnabled(self: KPluralHandlingSpinBox) i32 {
        return qtc.KPluralHandlingSpinBox_StepEnabled(@ptrCast(self.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractspinbox_enums.StepEnabledFlag `
    ///
    pub fn SuperStepEnabled(self: KPluralHandlingSpinBox) i32 {
        return qtc.KPluralHandlingSpinBox_SuperStepEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#stepEnabled)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnStepEnabled(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) i32) void {
        qtc.KPluralHandlingSpinBox_OnStepEnabled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn DevType(self: KPluralHandlingSpinBox) i32 {
        return qtc.KPluralHandlingSpinBox_DevType(@ptrCast(self.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperDevType(self: KPluralHandlingSpinBox) i32 {
        return qtc.KPluralHandlingSpinBox_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) i32) void {
        qtc.KPluralHandlingSpinBox_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KPluralHandlingSpinBox, visible: bool) void {
        qtc.KPluralHandlingSpinBox_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KPluralHandlingSpinBox, visible: bool) void {
        qtc.KPluralHandlingSpinBox_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, bool) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KPluralHandlingSpinBox, param1: i32) i32 {
        return qtc.KPluralHandlingSpinBox_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KPluralHandlingSpinBox, param1: i32) i32 {
        return qtc.KPluralHandlingSpinBox_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, i32) callconv(.c) i32) void {
        qtc.KPluralHandlingSpinBox_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn HasHeightForWidth(self: KPluralHandlingSpinBox) bool {
        return qtc.KPluralHandlingSpinBox_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperHasHeightForWidth(self: KPluralHandlingSpinBox) bool {
        return qtc.KPluralHandlingSpinBox_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) bool) void {
        qtc.KPluralHandlingSpinBox_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn PaintEngine(self: KPluralHandlingSpinBox) QPaintEngine {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperPaintEngine(self: KPluralHandlingSpinBox) QPaintEngine {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KPluralHandlingSpinBox_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KPluralHandlingSpinBox_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.KPluralHandlingSpinBox_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QMouseEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KPluralHandlingSpinBox_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KPluralHandlingSpinBox_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QEnterEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KPluralHandlingSpinBox_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KPluralHandlingSpinBox_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KPluralHandlingSpinBox_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KPluralHandlingSpinBox_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QMoveEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KPluralHandlingSpinBox_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KPluralHandlingSpinBox_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QTabletEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KPluralHandlingSpinBox_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KPluralHandlingSpinBox_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QActionEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KPluralHandlingSpinBox_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.KPluralHandlingSpinBox_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QDragEnterEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KPluralHandlingSpinBox_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.KPluralHandlingSpinBox_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QDragMoveEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KPluralHandlingSpinBox_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.KPluralHandlingSpinBox_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KPluralHandlingSpinBox_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.KPluralHandlingSpinBox_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QDropEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KPluralHandlingSpinBox, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KPluralHandlingSpinBox_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KPluralHandlingSpinBox, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KPluralHandlingSpinBox_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KPluralHandlingSpinBox_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KPluralHandlingSpinBox, param1: i32) i32 {
        return qtc.KPluralHandlingSpinBox_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KPluralHandlingSpinBox, param1: i32) i32 {
        return qtc.KPluralHandlingSpinBox_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, i32) callconv(.c) i32) void {
        qtc.KPluralHandlingSpinBox_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KPluralHandlingSpinBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KPluralHandlingSpinBox_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KPluralHandlingSpinBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KPluralHandlingSpinBox_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QPainter) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KPluralHandlingSpinBox, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KPluralHandlingSpinBox_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KPluralHandlingSpinBox, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KPluralHandlingSpinBox_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KPluralHandlingSpinBox_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SharedPainter(self: KPluralHandlingSpinBox) QPainter {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperSharedPainter(self: KPluralHandlingSpinBox) QPainter {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KPluralHandlingSpinBox_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KPluralHandlingSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KPluralHandlingSpinBox_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KPluralHandlingSpinBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KPluralHandlingSpinBox_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QInputMethodEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KPluralHandlingSpinBox, next: bool) bool {
        return qtc.KPluralHandlingSpinBox_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KPluralHandlingSpinBox, next: bool) bool {
        return qtc.KPluralHandlingSpinBox_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, bool) callconv(.c) bool) void {
        qtc.KPluralHandlingSpinBox_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KPluralHandlingSpinBox, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KPluralHandlingSpinBox_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KPluralHandlingSpinBox, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KPluralHandlingSpinBox_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QObject, QEvent) callconv(.c) bool) void {
        qtc.KPluralHandlingSpinBox_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KPluralHandlingSpinBox_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KPluralHandlingSpinBox_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QChildEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KPluralHandlingSpinBox_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KPluralHandlingSpinBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KPluralHandlingSpinBox_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QEvent) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KPluralHandlingSpinBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPluralHandlingSpinBox_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KPluralHandlingSpinBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPluralHandlingSpinBox_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QMetaMethod) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KPluralHandlingSpinBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPluralHandlingSpinBox_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KPluralHandlingSpinBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KPluralHandlingSpinBox_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QMetaMethod) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn LineEdit(self: KPluralHandlingSpinBox) QLineEdit {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_LineEdit(@ptrCast(self.ptr)) };
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperLineEdit(self: KPluralHandlingSpinBox) QLineEdit {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_SuperLineEdit(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#lineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QLineEdit `
    ///
    pub fn OnLineEdit(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) QLineEdit) void {
        qtc.KPluralHandlingSpinBox_OnLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SetLineEdit(self: KPluralHandlingSpinBox, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.KPluralHandlingSpinBox_SetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` edit: QLineEdit `
    ///
    pub fn SuperSetLineEdit(self: KPluralHandlingSpinBox, edit: anytype) void {
        comptime _ = @TypeOf(edit)._is_QLineEdit;
        qtc.KPluralHandlingSpinBox_SuperSetLineEdit(@ptrCast(self.ptr), @ptrCast(edit.ptr));
    }

    /// Inherited from QAbstractSpinBox
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractspinbox.html#setLineEdit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, edit: QLineEdit) callconv(.c) void `
    ///
    pub fn OnSetLineEdit(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QLineEdit) callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnSetLineEdit(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn UpdateMicroFocus(self: KPluralHandlingSpinBox) void {
        qtc.KPluralHandlingSpinBox_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperUpdateMicroFocus(self: KPluralHandlingSpinBox) void {
        qtc.KPluralHandlingSpinBox_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Create(self: KPluralHandlingSpinBox) void {
        qtc.KPluralHandlingSpinBox_Create(@ptrCast(self.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperCreate(self: KPluralHandlingSpinBox) void {
        qtc.KPluralHandlingSpinBox_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Destroy(self: KPluralHandlingSpinBox) void {
        qtc.KPluralHandlingSpinBox_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperDestroy(self: KPluralHandlingSpinBox) void {
        qtc.KPluralHandlingSpinBox_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) void) void {
        qtc.KPluralHandlingSpinBox_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn FocusNextChild(self: KPluralHandlingSpinBox) bool {
        return qtc.KPluralHandlingSpinBox_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperFocusNextChild(self: KPluralHandlingSpinBox) bool {
        return qtc.KPluralHandlingSpinBox_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) bool) void {
        qtc.KPluralHandlingSpinBox_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn FocusPreviousChild(self: KPluralHandlingSpinBox) bool {
        return qtc.KPluralHandlingSpinBox_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperFocusPreviousChild(self: KPluralHandlingSpinBox) bool {
        return qtc.KPluralHandlingSpinBox_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) bool) void {
        qtc.KPluralHandlingSpinBox_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Sender(self: KPluralHandlingSpinBox) QObject {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperSender(self: KPluralHandlingSpinBox) QObject {
        return .{ .ptr = qtc.KPluralHandlingSpinBox_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) QObject) void {
        qtc.KPluralHandlingSpinBox_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SenderSignalIndex(self: KPluralHandlingSpinBox) i32 {
        return qtc.KPluralHandlingSpinBox_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn SuperSenderSignalIndex(self: KPluralHandlingSpinBox) i32 {
        return qtc.KPluralHandlingSpinBox_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KPluralHandlingSpinBox, callback: *const fn () callconv(.c) i32) void {
        qtc.KPluralHandlingSpinBox_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KPluralHandlingSpinBox, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KPluralHandlingSpinBox_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KPluralHandlingSpinBox, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KPluralHandlingSpinBox_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, [*:0]const u8) callconv(.c) i32) void {
        qtc.KPluralHandlingSpinBox_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KPluralHandlingSpinBox, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KPluralHandlingSpinBox_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KPluralHandlingSpinBox, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KPluralHandlingSpinBox_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, QMetaMethod) callconv(.c) bool) void {
        qtc.KPluralHandlingSpinBox_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KPluralHandlingSpinBox, metricA: i32, metricB: i32) f64 {
        return qtc.KPluralHandlingSpinBox_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KPluralHandlingSpinBox, metricA: i32, metricB: i32) f64 {
        return qtc.KPluralHandlingSpinBox_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox`
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, i32, i32) callconv(.c) f64) void {
        qtc.KPluralHandlingSpinBox_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    /// ` callback: *const fn (self: KPluralHandlingSpinBox, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KPluralHandlingSpinBox, callback: *const fn (KPluralHandlingSpinBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kpluralhandlingspinbox.html#dtor.KPluralHandlingSpinBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KPluralHandlingSpinBox `
    ///
    pub fn Delete(self: KPluralHandlingSpinBox) void {
        qtc.KPluralHandlingSpinBox_Delete(@ptrCast(self.ptr));
    }
};
