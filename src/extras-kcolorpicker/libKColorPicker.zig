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
const QColor = @import("libqt6").QColor;
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

/// ### [Upstream resources](https://github.com/ksnip/kcolorpicker)
pub const kColorPicker__KColorPicker = extern struct {
    /// ### [Upstream resources](https://github.com/ksnip/kcolorpicker)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.kColorPicker__KColorPicker,

    pub const _is_kColorPicker__KColorPicker = {};
    pub const _is_QToolButton = {};
    pub const _is_QAbstractButton = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new kColorPicker::KColorPicker object.
    ///
    pub fn New() kColorPicker__KColorPicker {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_new() };
    }

    /// New2 constructs a new kColorPicker::KColorPicker object.
    ///
    /// ## Parameter(s):
    ///
    /// ` showAlphaChannel: bool `
    ///
    pub fn New2(showAlphaChannel: bool) kColorPicker__KColorPicker {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_new2(showAlphaChannel) };
    }

    /// New3 constructs a new kColorPicker::KColorPicker object.
    ///
    /// ## Parameter(s):
    ///
    /// ` showAlphaChannel: bool `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New3(showAlphaChannel: bool, parent: anytype) kColorPicker__KColorPicker {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.kColorPicker__KColorPicker_new3(showAlphaChannel, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn MetaObject(self: kColorPicker__KColorPicker) QMetaObject {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.kColorPicker__KColorPicker_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperMetaObject(self: kColorPicker__KColorPicker) QMetaObject {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: kColorPicker__KColorPicker, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.kColorPicker__KColorPicker_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.kColorPicker__KColorPicker_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: kColorPicker__KColorPicker, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.kColorPicker__KColorPicker_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: kColorPicker__KColorPicker, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.kColorPicker__KColorPicker_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.kColorPicker__KColorPicker_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: kColorPicker__KColorPicker, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.kColorPicker__KColorPicker_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/ksnip/kcolorpicker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` size: QSize `
    ///
    pub fn SetFixedSize(self: kColorPicker__KColorPicker, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.kColorPicker__KColorPicker_SetFixedSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kcolorpicker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` width: i32 `
    ///
    /// ` height: i32 `
    ///
    pub fn SetFixedSize2(self: kColorPicker__KColorPicker, width: i32, height: i32) void {
        qtc.kColorPicker__KColorPicker_SetFixedSize2(@ptrCast(self.ptr), @bitCast(width), @bitCast(height));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kcolorpicker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Color(self: kColorPicker__KColorPicker) QColor {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://github.com/ksnip/kcolorpicker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ResetColors(self: kColorPicker__KColorPicker) void {
        qtc.kColorPicker__KColorPicker_ResetColors(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kcolorpicker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` color: QColor `
    ///
    pub fn SetColor(self: kColorPicker__KColorPicker, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.kColorPicker__KColorPicker_SetColor(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kcolorpicker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` color: QColor `
    ///
    pub fn ColorChanged(self: kColorPicker__KColorPicker, color: anytype) void {
        comptime _ = @TypeOf(color)._is_QColor;
        qtc.kColorPicker__KColorPicker_ColorChanged(@ptrCast(self.ptr), @ptrCast(color.ptr));
    }

    /// ### [Upstream resources](https://github.com/ksnip/kcolorpicker)
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, color: QColor) callconv(.c) void `
    ///
    pub fn OnColorChanged(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QColor) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_Connect_ColorChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://github.com/ksnip/kcolorpicker)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` showAlphaChannel: bool `
    ///
    pub fn ResetColors1(self: kColorPicker__KColorPicker, showAlphaChannel: bool) void {
        qtc.kColorPicker__KColorPicker_ResetColors1(@ptrCast(self.ptr), showAlphaChannel);
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#toolButtonStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ToolButtonStyle `
    ///
    pub fn ToolButtonStyle(self: kColorPicker__KColorPicker) i32 {
        return qtc.QToolButton_ToolButtonStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#arrowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ArrowType `
    ///
    pub fn ArrowType(self: kColorPicker__KColorPicker) i32 {
        return qtc.QToolButton_ArrowType(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setArrowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` typeVal: qnamespace_enums.ArrowType `
    ///
    pub fn SetArrowType(self: kColorPicker__KColorPicker, typeVal: i32) void {
        qtc.QToolButton_SetArrowType(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` menu: QMenu `
    ///
    pub fn SetMenu(self: kColorPicker__KColorPicker, menu: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        qtc.QToolButton_SetMenu(@ptrCast(self.ptr), @ptrCast(menu.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#menu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Menu(self: kColorPicker__KColorPicker) QMenu {
        return .{ .ptr = qtc.QToolButton_Menu(@ptrCast(self.ptr)) };
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setPopupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` mode: qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn SetPopupMode(self: kColorPicker__KColorPicker, mode: i32) void {
        qtc.QToolButton_SetPopupMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#popupMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` qtoolbutton_enums.ToolButtonPopupMode `
    ///
    pub fn PopupMode(self: kColorPicker__KColorPicker) i32 {
        return qtc.QToolButton_PopupMode(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#defaultAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn DefaultAction(self: kColorPicker__KColorPicker) QAction {
        return .{ .ptr = qtc.QToolButton_DefaultAction(@ptrCast(self.ptr)) };
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setAutoRaise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAutoRaise(self: kColorPicker__KColorPicker, enable: bool) void {
        qtc.QToolButton_SetAutoRaise(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#autoRaise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn AutoRaise(self: kColorPicker__KColorPicker) bool {
        return qtc.QToolButton_AutoRaise(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#showMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ShowMenu(self: kColorPicker__KColorPicker) void {
        qtc.QToolButton_ShowMenu(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setToolButtonStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` style: qnamespace_enums.ToolButtonStyle `
    ///
    pub fn SetToolButtonStyle(self: kColorPicker__KColorPicker, style: i32) void {
        qtc.QToolButton_SetToolButtonStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#setDefaultAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` defaultAction: QAction `
    ///
    pub fn SetDefaultAction(self: kColorPicker__KColorPicker, defaultAction: anytype) void {
        comptime _ = @TypeOf(defaultAction)._is_QAction;
        qtc.QToolButton_SetDefaultAction(@ptrCast(self.ptr), @ptrCast(defaultAction.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#triggered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QAction `
    ///
    pub fn Triggered(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QAction;
        qtc.QToolButton_Triggered(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#triggered)
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: QAction) callconv(.c) void `
    ///
    pub fn OnTriggered(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QAction) callconv(.c) void) void {
        qtc.QToolButton_Connect_Triggered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: kColorPicker__KColorPicker, text: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QAbstractButton_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: kColorPicker__KColorPicker, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QAbstractButton_SetIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Icon(self: kColorPicker__KColorPicker) QIcon {
        return .{ .ptr = qtc.QAbstractButton_Icon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IconSize(self: kColorPicker__KColorPicker) QSize {
        return .{ .ptr = qtc.QAbstractButton_IconSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn SetShortcut(self: kColorPicker__KColorPicker, key: anytype) void {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        qtc.QAbstractButton_SetShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#shortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Shortcut(self: kColorPicker__KColorPicker) QKeySequence {
        return .{ .ptr = qtc.QAbstractButton_Shortcut(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` checkable: bool `
    ///
    pub fn SetCheckable(self: kColorPicker__KColorPicker, checkable: bool) void {
        qtc.QAbstractButton_SetCheckable(@ptrCast(self.ptr), checkable);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isCheckable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsCheckable(self: kColorPicker__KColorPicker) bool {
        return qtc.QAbstractButton_IsCheckable(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsChecked(self: kColorPicker__KColorPicker) bool {
        return qtc.QAbstractButton_IsChecked(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` down: bool `
    ///
    pub fn SetDown(self: kColorPicker__KColorPicker, down: bool) void {
        qtc.QAbstractButton_SetDown(@ptrCast(self.ptr), down);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#isDown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsDown(self: kColorPicker__KColorPicker) bool {
        return qtc.QAbstractButton_IsDown(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` autoRepeat: bool `
    ///
    pub fn SetAutoRepeat(self: kColorPicker__KColorPicker, autoRepeat: bool) void {
        qtc.QAbstractButton_SetAutoRepeat(@ptrCast(self.ptr), autoRepeat);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn AutoRepeat(self: kColorPicker__KColorPicker) bool {
        return qtc.QAbstractButton_AutoRepeat(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` autoRepeatDelay: i32 `
    ///
    pub fn SetAutoRepeatDelay(self: kColorPicker__KColorPicker, autoRepeatDelay: i32) void {
        qtc.QAbstractButton_SetAutoRepeatDelay(@ptrCast(self.ptr), @bitCast(autoRepeatDelay));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn AutoRepeatDelay(self: kColorPicker__KColorPicker) i32 {
        return qtc.QAbstractButton_AutoRepeatDelay(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoRepeatInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` autoRepeatInterval: i32 `
    ///
    pub fn SetAutoRepeatInterval(self: kColorPicker__KColorPicker, autoRepeatInterval: i32) void {
        qtc.QAbstractButton_SetAutoRepeatInterval(@ptrCast(self.ptr), @bitCast(autoRepeatInterval));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoRepeatInterval)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn AutoRepeatInterval(self: kColorPicker__KColorPicker) i32 {
        return qtc.QAbstractButton_AutoRepeatInterval(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setAutoExclusive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` autoExclusive: bool `
    ///
    pub fn SetAutoExclusive(self: kColorPicker__KColorPicker, autoExclusive: bool) void {
        qtc.QAbstractButton_SetAutoExclusive(@ptrCast(self.ptr), autoExclusive);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#autoExclusive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn AutoExclusive(self: kColorPicker__KColorPicker) bool {
        return qtc.QAbstractButton_AutoExclusive(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#group)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Group(self: kColorPicker__KColorPicker) QButtonGroup {
        return .{ .ptr = qtc.QAbstractButton_Group(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` size: QSize `
    ///
    pub fn SetIconSize(self: kColorPicker__KColorPicker, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QAbstractButton_SetIconSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#animateClick)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn AnimateClick(self: kColorPicker__KColorPicker) void {
        qtc.QAbstractButton_AnimateClick(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#click)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Click(self: kColorPicker__KColorPicker) void {
        qtc.QAbstractButton_Click(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Toggle(self: kColorPicker__KColorPicker) void {
        qtc.QAbstractButton_Toggle(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#setChecked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` checked: bool `
    ///
    pub fn SetChecked(self: kColorPicker__KColorPicker, checked: bool) void {
        qtc.QAbstractButton_SetChecked(@ptrCast(self.ptr), checked);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Pressed(self: kColorPicker__KColorPicker) void {
        qtc.QAbstractButton_Pressed(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker) callconv(.c) void `
    ///
    pub fn OnPressed(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Released(self: kColorPicker__KColorPicker) void {
        qtc.QAbstractButton_Released(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#released)
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker) callconv(.c) void `
    ///
    pub fn OnReleased(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Released(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Clicked(self: kColorPicker__KColorPicker) void {
        qtc.QAbstractButton_Clicked(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker) callconv(.c) void `
    ///
    pub fn OnClicked(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` checked: bool `
    ///
    pub fn Toggled(self: kColorPicker__KColorPicker, checked: bool) void {
        qtc.QAbstractButton_Toggled(@ptrCast(self.ptr), checked);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#toggled)
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, checked: bool) callconv(.c) void `
    ///
    pub fn OnToggled(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, bool) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Toggled(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` checked: bool `
    ///
    pub fn Clicked1(self: kColorPicker__KColorPicker, checked: bool) void {
        qtc.QAbstractButton_Clicked1(@ptrCast(self.ptr), checked);
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, checked: bool) callconv(.c) void `
    ///
    pub fn OnClicked1(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, bool) callconv(.c) void) void {
        qtc.QAbstractButton_Connect_Clicked1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn WinId(self: kColorPicker__KColorPicker) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn CreateWinId(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn InternalWinId(self: kColorPicker__KColorPicker) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn EffectiveWinId(self: kColorPicker__KColorPicker) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Style(self: kColorPicker__KColorPicker) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: kColorPicker__KColorPicker, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsTopLevel(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsWindow(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsModal(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: kColorPicker__KColorPicker, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsEnabled(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: kColorPicker__KColorPicker, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: kColorPicker__KColorPicker, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: kColorPicker__KColorPicker, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: kColorPicker__KColorPicker, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn FrameGeometry(self: kColorPicker__KColorPicker) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Geometry(self: kColorPicker__KColorPicker) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn NormalGeometry(self: kColorPicker__KColorPicker) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn X(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Y(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Pos(self: kColorPicker__KColorPicker) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn FrameSize(self: kColorPicker__KColorPicker) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Size(self: kColorPicker__KColorPicker) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Width(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Height(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Rect(self: kColorPicker__KColorPicker) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ChildrenRect(self: kColorPicker__KColorPicker) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ChildrenRegion(self: kColorPicker__KColorPicker) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn MinimumSize(self: kColorPicker__KColorPicker) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn MaximumSize(self: kColorPicker__KColorPicker) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn MinimumWidth(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn MinimumHeight(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn MaximumWidth(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn MaximumHeight(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: kColorPicker__KColorPicker, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: kColorPicker__KColorPicker, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: kColorPicker__KColorPicker, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: kColorPicker__KColorPicker, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: kColorPicker__KColorPicker, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: kColorPicker__KColorPicker, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: kColorPicker__KColorPicker, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: kColorPicker__KColorPicker, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SizeIncrement(self: kColorPicker__KColorPicker) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: kColorPicker__KColorPicker, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: kColorPicker__KColorPicker, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn BaseSize(self: kColorPicker__KColorPicker) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: kColorPicker__KColorPicker, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: kColorPicker__KColorPicker, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: kColorPicker__KColorPicker, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: kColorPicker__KColorPicker, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: kColorPicker__KColorPicker, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: kColorPicker__KColorPicker, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: kColorPicker__KColorPicker, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: kColorPicker__KColorPicker, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: kColorPicker__KColorPicker, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: kColorPicker__KColorPicker, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: kColorPicker__KColorPicker, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: kColorPicker__KColorPicker, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: kColorPicker__KColorPicker, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: kColorPicker__KColorPicker, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: kColorPicker__KColorPicker, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: kColorPicker__KColorPicker, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Window(self: kColorPicker__KColorPicker) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn NativeParentWidget(self: kColorPicker__KColorPicker) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn TopLevelWidget(self: kColorPicker__KColorPicker) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Palette(self: kColorPicker__KColorPicker) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: kColorPicker__KColorPicker, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: kColorPicker__KColorPicker, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: kColorPicker__KColorPicker, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Font(self: kColorPicker__KColorPicker) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: kColorPicker__KColorPicker, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn FontMetrics(self: kColorPicker__KColorPicker) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn FontInfo(self: kColorPicker__KColorPicker) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Cursor(self: kColorPicker__KColorPicker) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: kColorPicker__KColorPicker, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn UnsetCursor(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: kColorPicker__KColorPicker, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn HasMouseTracking(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn UnderMouse(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: kColorPicker__KColorPicker, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn HasTabletTracking(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: kColorPicker__KColorPicker, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: kColorPicker__KColorPicker, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Mask(self: kColorPicker__KColorPicker) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ClearMask(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: kColorPicker__KColorPicker, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: kColorPicker__KColorPicker, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Grab(self: kColorPicker__KColorPicker) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn GraphicsEffect(self: kColorPicker__KColorPicker) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: kColorPicker__KColorPicker, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: kColorPicker__KColorPicker, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: kColorPicker__KColorPicker, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: kColorPicker__KColorPicker, windowTitle: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: kColorPicker__KColorPicker, styleSheet: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: kColorPicker__KColorPicker, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn WindowIcon(self: kColorPicker__KColorPicker) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: kColorPicker__KColorPicker, windowIconText: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: kColorPicker__KColorPicker, windowRole: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: kColorPicker__KColorPicker, filePath: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: kColorPicker__KColorPicker, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn WindowOpacity(self: kColorPicker__KColorPicker) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsWindowModified(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: kColorPicker__KColorPicker, toolTip: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: kColorPicker__KColorPicker, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ToolTipDuration(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: kColorPicker__KColorPicker, statusTip: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: kColorPicker__KColorPicker, whatsThis: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: kColorPicker__KColorPicker, name: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: kColorPicker__KColorPicker, description: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: kColorPicker__KColorPicker, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn UnsetLayoutDirection(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: kColorPicker__KColorPicker, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Locale(self: kColorPicker__KColorPicker) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn UnsetLocale(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsRightToLeft(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsLeftToRight(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SetFocus(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsActiveWindow(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ActivateWindow(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ClearFocus(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: kColorPicker__KColorPicker, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: kColorPicker__KColorPicker, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn HasFocus(self: kColorPicker__KColorPicker) bool {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: kColorPicker__KColorPicker, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn FocusProxy(self: kColorPicker__KColorPicker) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: kColorPicker__KColorPicker, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn GrabMouse(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ReleaseMouse(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn GrabKeyboard(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ReleaseKeyboard(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: kColorPicker__KColorPicker, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: kColorPicker__KColorPicker, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: kColorPicker__KColorPicker, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: kColorPicker__KColorPicker, id: i32) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn UpdatesEnabled(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: kColorPicker__KColorPicker, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn GraphicsProxyWidget(self: kColorPicker__KColorPicker) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Update(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Repaint(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: kColorPicker__KColorPicker, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: kColorPicker__KColorPicker, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: kColorPicker__KColorPicker, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Show(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Hide(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ShowMinimized(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ShowMaximized(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ShowFullScreen(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ShowNormal(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Close(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Raise(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Lower(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: kColorPicker__KColorPicker, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: kColorPicker__KColorPicker, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: kColorPicker__KColorPicker, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: kColorPicker__KColorPicker, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("kcolorpicker__kcolorpicker.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: kColorPicker__KColorPicker, geometry: []u8) bool {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn AdjustSize(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsVisible(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: kColorPicker__KColorPicker, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsHidden(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsMinimized(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsMaximized(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsFullScreen(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: kColorPicker__KColorPicker, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: kColorPicker__KColorPicker, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SizePolicy(self: kColorPicker__KColorPicker) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: kColorPicker__KColorPicker, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: kColorPicker__KColorPicker, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn VisibleRegion(self: kColorPicker__KColorPicker) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: kColorPicker__KColorPicker, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: kColorPicker__KColorPicker, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ContentsMargins(self: kColorPicker__KColorPicker) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ContentsRect(self: kColorPicker__KColorPicker) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Layout(self: kColorPicker__KColorPicker) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: kColorPicker__KColorPicker, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn UpdateGeometry(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: kColorPicker__KColorPicker, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: kColorPicker__KColorPicker, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: kColorPicker__KColorPicker, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: kColorPicker__KColorPicker, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn FocusWidget(self: kColorPicker__KColorPicker) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn NextInFocusChain(self: kColorPicker__KColorPicker) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn PreviousInFocusChain(self: kColorPicker__KColorPicker) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn AcceptDrops(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: kColorPicker__KColorPicker, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: kColorPicker__KColorPicker, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: kColorPicker__KColorPicker, actions: []QAction) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: kColorPicker__KColorPicker, before: anytype, actions: []QAction) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: kColorPicker__KColorPicker, before: anytype, action: anytype) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: kColorPicker__KColorPicker, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("kcolorpicker__kcolorpicker.Actions: Memory allocation failed");
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: kColorPicker__KColorPicker, text: []const u8) QAction {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: kColorPicker__KColorPicker, icon: anytype, text: []const u8) QAction {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: kColorPicker__KColorPicker, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: kColorPicker__KColorPicker, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ParentWidget(self: kColorPicker__KColorPicker) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: kColorPicker__KColorPicker, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: kColorPicker__KColorPicker, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: kColorPicker__KColorPicker, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: kColorPicker__KColorPicker) i32 {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: kColorPicker__KColorPicker, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: kColorPicker__KColorPicker, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: kColorPicker__KColorPicker, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: kColorPicker__KColorPicker, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: kColorPicker__KColorPicker, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn EnsurePolished(self: kColorPicker__KColorPicker) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: kColorPicker__KColorPicker, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn AutoFillBackground(self: kColorPicker__KColorPicker) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: kColorPicker__KColorPicker, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn BackingStore(self: kColorPicker__KColorPicker) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn WindowHandle(self: kColorPicker__KColorPicker) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Screen(self: kColorPicker__KColorPicker) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: kColorPicker__KColorPicker, screen: anytype) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: kColorPicker__KColorPicker, title: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: kColorPicker__KColorPicker, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: kColorPicker__KColorPicker, iconText: []const u8) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: kColorPicker__KColorPicker, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: kColorPicker__KColorPicker) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: kColorPicker__KColorPicker, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: kColorPicker__KColorPicker, target: anytype, targetOffset: anytype) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: kColorPicker__KColorPicker, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: kColorPicker__KColorPicker, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: kColorPicker__KColorPicker, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: kColorPicker__KColorPicker, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: kColorPicker__KColorPicker, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: kColorPicker__KColorPicker, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: kColorPicker__KColorPicker, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: kColorPicker__KColorPicker, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: kColorPicker__KColorPicker, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: kColorPicker__KColorPicker, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: kColorPicker__KColorPicker, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: kColorPicker__KColorPicker, param1: i32, on: bool) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kcolorpicker__kcolorpicker.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: kColorPicker__KColorPicker, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsWidgetType(self: kColorPicker__KColorPicker) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsWindowType(self: kColorPicker__KColorPicker) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn IsQuickItemType(self: kColorPicker__KColorPicker) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SignalsBlocked(self: kColorPicker__KColorPicker) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: kColorPicker__KColorPicker, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Thread(self: kColorPicker__KColorPicker) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: kColorPicker__KColorPicker, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: kColorPicker__KColorPicker, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: kColorPicker__KColorPicker, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: kColorPicker__KColorPicker, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: kColorPicker__KColorPicker, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("kcolorpicker__kcolorpicker.Children: Memory allocation failed");
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: kColorPicker__KColorPicker, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: kColorPicker__KColorPicker, obj: anytype) void {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: kColorPicker__KColorPicker, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Disconnect3(self: kColorPicker__KColorPicker) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: kColorPicker__KColorPicker, receiver: anytype) bool {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn DumpObjectTree(self: kColorPicker__KColorPicker) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn DumpObjectInfo(self: kColorPicker__KColorPicker) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: kColorPicker__KColorPicker, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: kColorPicker__KColorPicker, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: kColorPicker__KColorPicker, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kcolorpicker__kcolorpicker.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kcolorpicker__kcolorpicker.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn BindingStorage(self: kColorPicker__KColorPicker) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn BindingStorage2(self: kColorPicker__KColorPicker) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Destroyed(self: kColorPicker__KColorPicker) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Parent(self: kColorPicker__KColorPicker) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: kColorPicker__KColorPicker, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn DeleteLater(self: kColorPicker__KColorPicker) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: kColorPicker__KColorPicker, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: kColorPicker__KColorPicker, time: i64, timerType: i32) i32 {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: kColorPicker__KColorPicker, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: kColorPicker__KColorPicker, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: kColorPicker__KColorPicker, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: kColorPicker__KColorPicker, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: kColorPicker__KColorPicker, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn PaintingActive(self: kColorPicker__KColorPicker) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn WidthMM(self: kColorPicker__KColorPicker) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn HeightMM(self: kColorPicker__KColorPicker) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn LogicalDpiX(self: kColorPicker__KColorPicker) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn LogicalDpiY(self: kColorPicker__KColorPicker) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn PhysicalDpiX(self: kColorPicker__KColorPicker) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn PhysicalDpiY(self: kColorPicker__KColorPicker) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn DevicePixelRatio(self: kColorPicker__KColorPicker) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn DevicePixelRatioF(self: kColorPicker__KColorPicker) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn ColorCount(self: kColorPicker__KColorPicker) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Depth(self: kColorPicker__KColorPicker) i32 {
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
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SizeHint(self: kColorPicker__KColorPicker) QSize {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperSizeHint(self: kColorPicker__KColorPicker) QSize {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) QSize) void {
        qtc.kColorPicker__KColorPicker_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn MinimumSizeHint(self: kColorPicker__KColorPicker) QSize {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperMinimumSizeHint(self: kColorPicker__KColorPicker) QSize {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) QSize) void {
        qtc.kColorPicker__KColorPicker_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: kColorPicker__KColorPicker, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.kColorPicker__KColorPicker_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: kColorPicker__KColorPicker, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.kColorPicker__KColorPicker_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QEvent) callconv(.c) bool) void {
        qtc.kColorPicker__KColorPicker_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MousePressEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.kColorPicker__KColorPicker_MousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.kColorPicker__KColorPicker_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QMouseEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.kColorPicker__KColorPicker_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.kColorPicker__KColorPicker_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QMouseEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn PaintEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.kColorPicker__KColorPicker_PaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.kColorPicker__KColorPicker_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QPaintEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QActionEvent `
    ///
    pub fn ActionEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QActionEvent;
        qtc.kColorPicker__KColorPicker_ActionEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QActionEvent `
    ///
    pub fn SuperActionEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QActionEvent;
        qtc.kColorPicker__KColorPicker_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QActionEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QEnterEvent `
    ///
    pub fn EnterEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEnterEvent;
        qtc.kColorPicker__KColorPicker_EnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperEnterEvent` instead
    ///
    pub const QBaseEnterEvent = SuperEnterEvent;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#enterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEnterEvent;
        qtc.kColorPicker__KColorPicker_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QEnterEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QEvent `
    ///
    pub fn LeaveEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.kColorPicker__KColorPicker_LeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperLeaveEvent` instead
    ///
    pub const QBaseLeaveEvent = SuperLeaveEvent;

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#leaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperLeaveEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.kColorPicker__KColorPicker_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn TimerEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.kColorPicker__KColorPicker_TimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.kColorPicker__KColorPicker_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QTimerEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.kColorPicker__KColorPicker_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.kColorPicker__KColorPicker_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` pos: QPoint `
    ///
    pub fn HitButton(self: kColorPicker__KColorPicker, pos: anytype) bool {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.kColorPicker__KColorPicker_HitButton(@ptrCast(self.ptr), @ptrCast(pos.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SuperHitButton(self: kColorPicker__KColorPicker, pos: anytype) bool {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.kColorPicker__KColorPicker_SuperHitButton(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#hitButton)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, pos: QPoint) callconv(.c) bool `
    ///
    pub fn OnHitButton(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QPoint) callconv(.c) bool) void {
        qtc.kColorPicker__KColorPicker_OnHitButton(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn CheckStateSet(self: kColorPicker__KColorPicker) void {
        qtc.kColorPicker__KColorPicker_CheckStateSet(@ptrCast(self.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperCheckStateSet(self: kColorPicker__KColorPicker) void {
        qtc.kColorPicker__KColorPicker_SuperCheckStateSet(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#checkStateSet)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCheckStateSet(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnCheckStateSet(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn NextCheckState(self: kColorPicker__KColorPicker) void {
        qtc.kColorPicker__KColorPicker_NextCheckState(@ptrCast(self.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperNextCheckState(self: kColorPicker__KColorPicker) void {
        qtc.kColorPicker__KColorPicker_SuperNextCheckState(@ptrCast(self.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#nextCheckState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnNextCheckState(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnNextCheckState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` option: QStyleOptionToolButton `
    ///
    pub fn InitStyleOption(self: kColorPicker__KColorPicker, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionToolButton;
        qtc.kColorPicker__KColorPicker_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` option: QStyleOptionToolButton `
    ///
    pub fn SuperInitStyleOption(self: kColorPicker__KColorPicker, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionToolButton;
        qtc.kColorPicker__KColorPicker_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QToolButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtoolbutton.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, option: QStyleOptionToolButton) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QStyleOptionToolButton) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: kColorPicker__KColorPicker, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.kColorPicker__KColorPicker_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: kColorPicker__KColorPicker, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.kColorPicker__KColorPicker_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QKeyEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: kColorPicker__KColorPicker, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.kColorPicker__KColorPicker_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: kColorPicker__KColorPicker, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.kColorPicker__KColorPicker_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QKeyEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: kColorPicker__KColorPicker, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.kColorPicker__KColorPicker_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: kColorPicker__KColorPicker, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.kColorPicker__KColorPicker_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QMouseEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusInEvent(self: kColorPicker__KColorPicker, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.kColorPicker__KColorPicker_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: kColorPicker__KColorPicker, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.kColorPicker__KColorPicker_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QFocusEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: kColorPicker__KColorPicker, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.kColorPicker__KColorPicker_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: kColorPicker__KColorPicker, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.kColorPicker__KColorPicker_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QAbstractButton
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractbutton.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QFocusEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn DevType(self: kColorPicker__KColorPicker) i32 {
        return qtc.kColorPicker__KColorPicker_DevType(@ptrCast(self.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperDevType(self: kColorPicker__KColorPicker) i32 {
        return qtc.kColorPicker__KColorPicker_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) i32) void {
        qtc.kColorPicker__KColorPicker_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: kColorPicker__KColorPicker, visible: bool) void {
        qtc.kColorPicker__KColorPicker_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: kColorPicker__KColorPicker, visible: bool) void {
        qtc.kColorPicker__KColorPicker_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, bool) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: kColorPicker__KColorPicker, param1: i32) i32 {
        return qtc.kColorPicker__KColorPicker_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: kColorPicker__KColorPicker, param1: i32) i32 {
        return qtc.kColorPicker__KColorPicker_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, i32) callconv(.c) i32) void {
        qtc.kColorPicker__KColorPicker_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn HasHeightForWidth(self: kColorPicker__KColorPicker) bool {
        return qtc.kColorPicker__KColorPicker_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperHasHeightForWidth(self: kColorPicker__KColorPicker) bool {
        return qtc.kColorPicker__KColorPicker_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) bool) void {
        qtc.kColorPicker__KColorPicker_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn PaintEngine(self: kColorPicker__KColorPicker) QPaintEngine {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperPaintEngine(self: kColorPicker__KColorPicker) QPaintEngine {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.kColorPicker__KColorPicker_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.kColorPicker__KColorPicker_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.kColorPicker__KColorPicker_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QMouseEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.kColorPicker__KColorPicker_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.kColorPicker__KColorPicker_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QWheelEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.kColorPicker__KColorPicker_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.kColorPicker__KColorPicker_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QMoveEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.kColorPicker__KColorPicker_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.kColorPicker__KColorPicker_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QResizeEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.kColorPicker__KColorPicker_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.kColorPicker__KColorPicker_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QCloseEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.kColorPicker__KColorPicker_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.kColorPicker__KColorPicker_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QContextMenuEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.kColorPicker__KColorPicker_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.kColorPicker__KColorPicker_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QTabletEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.kColorPicker__KColorPicker_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.kColorPicker__KColorPicker_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QDragEnterEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.kColorPicker__KColorPicker_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.kColorPicker__KColorPicker_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QDragMoveEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.kColorPicker__KColorPicker_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.kColorPicker__KColorPicker_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QDragLeaveEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.kColorPicker__KColorPicker_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.kColorPicker__KColorPicker_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QDropEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.kColorPicker__KColorPicker_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.kColorPicker__KColorPicker_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QShowEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.kColorPicker__KColorPicker_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.kColorPicker__KColorPicker_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QHideEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: kColorPicker__KColorPicker, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.kColorPicker__KColorPicker_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: kColorPicker__KColorPicker, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.kColorPicker__KColorPicker_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.kColorPicker__KColorPicker_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: kColorPicker__KColorPicker, param1: i32) i32 {
        return qtc.kColorPicker__KColorPicker_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: kColorPicker__KColorPicker, param1: i32) i32 {
        return qtc.kColorPicker__KColorPicker_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, i32) callconv(.c) i32) void {
        qtc.kColorPicker__KColorPicker_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: kColorPicker__KColorPicker, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.kColorPicker__KColorPicker_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: kColorPicker__KColorPicker, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.kColorPicker__KColorPicker_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QPainter) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: kColorPicker__KColorPicker, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.kColorPicker__KColorPicker_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: kColorPicker__KColorPicker, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.kColorPicker__KColorPicker_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QPoint) callconv(.c) QPaintDevice) void {
        qtc.kColorPicker__KColorPicker_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SharedPainter(self: kColorPicker__KColorPicker) QPainter {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperSharedPainter(self: kColorPicker__KColorPicker) QPainter {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) QPainter) void {
        qtc.kColorPicker__KColorPicker_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.kColorPicker__KColorPicker_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: kColorPicker__KColorPicker, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.kColorPicker__KColorPicker_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QInputMethodEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: kColorPicker__KColorPicker, param1: i32) QVariant {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: kColorPicker__KColorPicker, param1: i32) QVariant {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, i32) callconv(.c) QVariant) void {
        qtc.kColorPicker__KColorPicker_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: kColorPicker__KColorPicker, next: bool) bool {
        return qtc.kColorPicker__KColorPicker_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: kColorPicker__KColorPicker, next: bool) bool {
        return qtc.kColorPicker__KColorPicker_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, bool) callconv(.c) bool) void {
        qtc.kColorPicker__KColorPicker_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: kColorPicker__KColorPicker, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.kColorPicker__KColorPicker_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: kColorPicker__KColorPicker, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.kColorPicker__KColorPicker_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QObject, QEvent) callconv(.c) bool) void {
        qtc.kColorPicker__KColorPicker_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.kColorPicker__KColorPicker_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.kColorPicker__KColorPicker_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QChildEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.kColorPicker__KColorPicker_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: kColorPicker__KColorPicker, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.kColorPicker__KColorPicker_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QEvent) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: kColorPicker__KColorPicker, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.kColorPicker__KColorPicker_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: kColorPicker__KColorPicker, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.kColorPicker__KColorPicker_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QMetaMethod) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: kColorPicker__KColorPicker, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.kColorPicker__KColorPicker_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: kColorPicker__KColorPicker, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.kColorPicker__KColorPicker_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QMetaMethod) callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn UpdateMicroFocus(self: kColorPicker__KColorPicker) void {
        qtc.kColorPicker__KColorPicker_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperUpdateMicroFocus(self: kColorPicker__KColorPicker) void {
        qtc.kColorPicker__KColorPicker_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Create(self: kColorPicker__KColorPicker) void {
        qtc.kColorPicker__KColorPicker_Create(@ptrCast(self.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperCreate(self: kColorPicker__KColorPicker) void {
        qtc.kColorPicker__KColorPicker_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Destroy(self: kColorPicker__KColorPicker) void {
        qtc.kColorPicker__KColorPicker_Destroy(@ptrCast(self.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperDestroy(self: kColorPicker__KColorPicker) void {
        qtc.kColorPicker__KColorPicker_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) void) void {
        qtc.kColorPicker__KColorPicker_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn FocusNextChild(self: kColorPicker__KColorPicker) bool {
        return qtc.kColorPicker__KColorPicker_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperFocusNextChild(self: kColorPicker__KColorPicker) bool {
        return qtc.kColorPicker__KColorPicker_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) bool) void {
        qtc.kColorPicker__KColorPicker_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn FocusPreviousChild(self: kColorPicker__KColorPicker) bool {
        return qtc.kColorPicker__KColorPicker_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperFocusPreviousChild(self: kColorPicker__KColorPicker) bool {
        return qtc.kColorPicker__KColorPicker_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) bool) void {
        qtc.kColorPicker__KColorPicker_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Sender(self: kColorPicker__KColorPicker) QObject {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperSender(self: kColorPicker__KColorPicker) QObject {
        return .{ .ptr = qtc.kColorPicker__KColorPicker_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) QObject) void {
        qtc.kColorPicker__KColorPicker_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SenderSignalIndex(self: kColorPicker__KColorPicker) i32 {
        return qtc.kColorPicker__KColorPicker_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn SuperSenderSignalIndex(self: kColorPicker__KColorPicker) i32 {
        return qtc.kColorPicker__KColorPicker_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: kColorPicker__KColorPicker, callback: *const fn () callconv(.c) i32) void {
        qtc.kColorPicker__KColorPicker_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: kColorPicker__KColorPicker, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.kColorPicker__KColorPicker_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: kColorPicker__KColorPicker, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.kColorPicker__KColorPicker_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, [*:0]const u8) callconv(.c) i32) void {
        qtc.kColorPicker__KColorPicker_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: kColorPicker__KColorPicker, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.kColorPicker__KColorPicker_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: kColorPicker__KColorPicker, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.kColorPicker__KColorPicker_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, QMetaMethod) callconv(.c) bool) void {
        qtc.kColorPicker__KColorPicker_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: kColorPicker__KColorPicker, metricA: i32, metricB: i32) f64 {
        return qtc.kColorPicker__KColorPicker_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: kColorPicker__KColorPicker, metricA: i32, metricB: i32) f64 {
        return qtc.kColorPicker__KColorPicker_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker`
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, i32, i32) callconv(.c) f64) void {
        qtc.kColorPicker__KColorPicker_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    /// ` callback: *const fn (self: kColorPicker__KColorPicker, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: kColorPicker__KColorPicker, callback: *const fn (kColorPicker__KColorPicker, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://github.com/ksnip/kcolorpicker)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: kColorPicker__KColorPicker `
    ///
    pub fn Delete(self: kColorPicker__KColorPicker) void {
        qtc.kColorPicker__KColorPicker_Delete(@ptrCast(self.ptr));
    }
};
