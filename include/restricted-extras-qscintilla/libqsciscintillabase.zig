const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
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
const QImage = @import("libqt6").QImage;
const QInputMethodEvent = @import("libqt6").QInputMethodEvent;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMimeData = @import("libqt6").QMimeData;
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
const QScrollBar = @import("libqt6").QScrollBar;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QStyleOptionFrame = @import("libqt6").QStyleOptionFrame;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qabstractscrollarea_enums = @import("../libqabstractscrollarea.zig").enums;
const qframe_enums = @import("../libqframe.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
pub const QsciScintillaBase = extern struct {
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QsciScintillaBase,

    pub const _is_QsciScintillaBase = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QsciScintillaBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QsciScintillaBase {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QsciScintillaBase_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QsciScintillaBase object.
    ///
    pub fn New2() QsciScintillaBase {
        return .{ .ptr = qtc.QsciScintillaBase_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn MetaObject(self: QsciScintillaBase) QMetaObject {
        return .{ .ptr = qtc.QsciScintillaBase_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QsciScintillaBase, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QsciScintillaBase_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperMetaObject(self: QsciScintillaBase) QMetaObject {
        return .{ .ptr = qtc.QsciScintillaBase_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QsciScintillaBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciScintillaBase_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QsciScintillaBase_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QsciScintillaBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciScintillaBase_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QsciScintillaBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciScintillaBase_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QsciScintillaBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciScintillaBase_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    pub fn Pool() QsciScintillaBase {
        return .{ .ptr = qtc.QsciScintillaBase_Pool() };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` scrollBar: QScrollBar `
    ///
    pub fn ReplaceHorizontalScrollBar(self: QsciScintillaBase, scrollBar: anytype) void {
        comptime _ = @TypeOf(scrollBar)._is_QScrollBar;
        qtc.QsciScintillaBase_ReplaceHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollBar.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` scrollBar: QScrollBar `
    ///
    pub fn ReplaceVerticalScrollBar(self: QsciScintillaBase, scrollBar: anytype) void {
        comptime _ = @TypeOf(scrollBar)._is_QScrollBar;
        qtc.QsciScintillaBase_ReplaceVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollBar.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    pub fn SendScintilla(self: QsciScintillaBase, msg: u32) isize {
        return qtc.QsciScintillaBase_SendScintilla(@ptrCast(self.ptr), @bitCast(msg));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` lParam: ?*anyopaque `
    ///
    pub fn SendScintilla2(self: QsciScintillaBase, msg: u32, wParam: usize, lParam: ?*anyopaque) isize {
        return qtc.QsciScintillaBase_SendScintilla2(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), @ptrCast(lParam));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` lParam: [:0]const u8 `
    ///
    pub fn SendScintilla3(self: QsciScintillaBase, msg: u32, wParam: usize, lParam: [:0]const u8) isize {
        const lParam_Cstring = lParam.ptr;
        return qtc.QsciScintillaBase_SendScintilla3(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), lParam_Cstring);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` lParam: [:0]const u8 `
    ///
    pub fn SendScintilla4(self: QsciScintillaBase, msg: u32, lParam: [:0]const u8) isize {
        const lParam_Cstring = lParam.ptr;
        return qtc.QsciScintillaBase_SendScintilla4(@ptrCast(self.ptr), @bitCast(msg), lParam_Cstring);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: [:0]const u8 `
    ///
    /// ` lParam: [:0]const u8 `
    ///
    pub fn SendScintilla5(self: QsciScintillaBase, msg: u32, wParam: [:0]const u8, lParam: [:0]const u8) isize {
        const wParam_Cstring = wParam.ptr;
        const lParam_Cstring = lParam.ptr;
        return qtc.QsciScintillaBase_SendScintilla5(@ptrCast(self.ptr), @bitCast(msg), wParam_Cstring, lParam_Cstring);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: isize `
    ///
    pub fn SendScintilla6(self: QsciScintillaBase, msg: u32, wParam: isize) isize {
        return qtc.QsciScintillaBase_SendScintilla6(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: i32 `
    ///
    pub fn SendScintilla7(self: QsciScintillaBase, msg: u32, wParam: i32) isize {
        return qtc.QsciScintillaBase_SendScintilla7(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` cpMin: isize `
    ///
    /// ` cpMax: isize `
    ///
    /// ` lpstrText: [:0]u8 `
    ///
    pub fn SendScintilla8(self: QsciScintillaBase, msg: u32, cpMin: isize, cpMax: isize, lpstrText: [:0]u8) isize {
        const lpstrText_Cstring = lpstrText.ptr;
        return qtc.QsciScintillaBase_SendScintilla8(@ptrCast(self.ptr), @bitCast(msg), @bitCast(cpMin), @bitCast(cpMax), lpstrText_Cstring);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` col: QColor `
    ///
    pub fn SendScintilla9(self: QsciScintillaBase, msg: u32, wParam: usize, col: anytype) isize {
        comptime _ = @TypeOf(col)._is_QColor;
        return qtc.QsciScintillaBase_SendScintilla9(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` col: QColor `
    ///
    pub fn SendScintilla10(self: QsciScintillaBase, msg: u32, col: anytype) isize {
        comptime _ = @TypeOf(col)._is_QColor;
        return qtc.QsciScintillaBase_SendScintilla10(@ptrCast(self.ptr), @bitCast(msg), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` hdc: QPainter `
    ///
    /// ` rc: QRect `
    ///
    /// ` cpMin: isize `
    ///
    /// ` cpMax: isize `
    ///
    pub fn SendScintilla11(self: QsciScintillaBase, msg: u32, wParam: usize, hdc: anytype, rc: anytype, cpMin: isize, cpMax: isize) isize {
        comptime _ = @TypeOf(hdc)._is_QPainter;
        comptime _ = @TypeOf(rc)._is_QRect;
        return qtc.QsciScintillaBase_SendScintilla11(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), @ptrCast(hdc.ptr), @ptrCast(rc.ptr), @bitCast(cpMin), @bitCast(cpMax));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` lParam: QPixmap `
    ///
    pub fn SendScintilla12(self: QsciScintillaBase, msg: u32, wParam: usize, lParam: anytype) isize {
        comptime _ = @TypeOf(lParam)._is_QPixmap;
        return qtc.QsciScintillaBase_SendScintilla12(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), @ptrCast(lParam.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` lParam: QImage `
    ///
    pub fn SendScintilla13(self: QsciScintillaBase, msg: u32, wParam: usize, lParam: anytype) isize {
        comptime _ = @TypeOf(lParam)._is_QImage;
        return qtc.QsciScintillaBase_SendScintilla13(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), @ptrCast(lParam.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    pub fn SendScintillaPtrResult(self: QsciScintillaBase, msg: u32) ?*anyopaque {
        return qtc.QsciScintillaBase_SendScintillaPtrResult(@ptrCast(self.ptr), @bitCast(msg));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` qt_key: i32 `
    ///
    /// ` modifiers: *i32 `
    ///
    pub fn CommandKey(qt_key: i32, modifiers: *i32) i32 {
        return qtc.QsciScintillaBase_CommandKey(@bitCast(qt_key), @ptrCast(modifiers));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` yes: bool `
    ///
    pub fn QSCN_SELCHANGED(self: QsciScintillaBase, yes: bool) void {
        qtc.QsciScintillaBase_QSCN_SELCHANGED(@ptrCast(self.ptr), yes);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SCN_AUTOCCANCELLED(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SCN_AUTOCCANCELLED(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SCN_AUTOCCHARDELETED(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SCN_AUTOCCHARDELETED(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` position: i32 `
    ///
    /// ` ch: i32 `
    ///
    /// ` method: i32 `
    ///
    pub fn SCN_AUTOCCOMPLETED(self: QsciScintillaBase, selection: [:0]const u8, position: i32, ch: i32, method: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCCOMPLETED(@ptrCast(self.ptr), selection_Cstring, @bitCast(position), @bitCast(ch), @bitCast(method));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` position: i32 `
    ///
    /// ` ch: i32 `
    ///
    /// ` method: i32 `
    ///
    pub fn SCN_AUTOCSELECTION(self: QsciScintillaBase, selection: [:0]const u8, position: i32, ch: i32, method: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCSELECTION(@ptrCast(self.ptr), selection_Cstring, @bitCast(position), @bitCast(ch), @bitCast(method));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` position: i32 `
    ///
    pub fn SCN_AUTOCSELECTION2(self: QsciScintillaBase, selection: [:0]const u8, position: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCSELECTION2(@ptrCast(self.ptr), selection_Cstring, @bitCast(position));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` id: i32 `
    ///
    /// ` position: i32 `
    ///
    pub fn SCN_AUTOCSELECTIONCHANGE(self: QsciScintillaBase, selection: [:0]const u8, id: i32, position: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(@ptrCast(self.ptr), selection_Cstring, @bitCast(id), @bitCast(position));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SCEN_CHANGE(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SCEN_CHANGE(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` direction: i32 `
    ///
    pub fn SCN_CALLTIPCLICK(self: QsciScintillaBase, direction: i32) void {
        qtc.QsciScintillaBase_SCN_CALLTIPCLICK(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` charadded: i32 `
    ///
    pub fn SCN_CHARADDED(self: QsciScintillaBase, charadded: i32) void {
        qtc.QsciScintillaBase_SCN_CHARADDED(@ptrCast(self.ptr), @bitCast(charadded));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` position: i32 `
    ///
    /// ` line: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn SCN_DOUBLECLICK(self: QsciScintillaBase, position: i32, line: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_DOUBLECLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(line), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` position: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SCN_DWELLEND(self: QsciScintillaBase, position: i32, x: i32, y: i32) void {
        qtc.QsciScintillaBase_SCN_DWELLEND(@ptrCast(self.ptr), @bitCast(position), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` position: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SCN_DWELLSTART(self: QsciScintillaBase, position: i32, x: i32, y: i32) void {
        qtc.QsciScintillaBase_SCN_DWELLSTART(@ptrCast(self.ptr), @bitCast(position), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SCN_FOCUSIN(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SCN_FOCUSIN(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SCN_FOCUSOUT(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SCN_FOCUSOUT(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn SCN_HOTSPOTCLICK(self: QsciScintillaBase, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_HOTSPOTCLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn SCN_HOTSPOTDOUBLECLICK(self: QsciScintillaBase, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn SCN_HOTSPOTRELEASECLICK(self: QsciScintillaBase, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn SCN_INDICATORCLICK(self: QsciScintillaBase, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_INDICATORCLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn SCN_INDICATORRELEASE(self: QsciScintillaBase, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_INDICATORRELEASE(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: u32 `
    ///
    /// ` param2: usize `
    ///
    /// ` param3: ?*anyopaque `
    ///
    pub fn SCN_MACRORECORD(self: QsciScintillaBase, param1: u32, param2: usize, param3: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_MACRORECORD(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    /// ` margin: i32 `
    ///
    pub fn SCN_MARGINCLICK(self: QsciScintillaBase, position: i32, modifiers: i32, margin: i32) void {
        qtc.QsciScintillaBase_SCN_MARGINCLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers), @bitCast(margin));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    /// ` margin: i32 `
    ///
    pub fn SCN_MARGINRIGHTCLICK(self: QsciScintillaBase, position: i32, modifiers: i32, margin: i32) void {
        qtc.QsciScintillaBase_SCN_MARGINRIGHTCLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers), @bitCast(margin));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: [:0]const u8 `
    ///
    /// ` param4: i32 `
    ///
    /// ` param5: i32 `
    ///
    /// ` param6: i32 `
    ///
    /// ` param7: i32 `
    ///
    /// ` param8: i32 `
    ///
    /// ` param9: i32 `
    ///
    /// ` param10: i32 `
    ///
    pub fn SCN_MODIFIED(self: QsciScintillaBase, param1: i32, param2: i32, param3: [:0]const u8, param4: i32, param5: i32, param6: i32, param7: i32, param8: i32, param9: i32, param10: i32) void {
        const param3_Cstring = param3.ptr;
        qtc.QsciScintillaBase_SCN_MODIFIED(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), param3_Cstring, @bitCast(param4), @bitCast(param5), @bitCast(param6), @bitCast(param7), @bitCast(param8), @bitCast(param9), @bitCast(param10));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SCN_MODIFYATTEMPTRO(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SCN_MODIFYATTEMPTRO(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: i32 `
    ///
    pub fn SCN_NEEDSHOWN(self: QsciScintillaBase, param1: i32, param2: i32) void {
        qtc.QsciScintillaBase_SCN_NEEDSHOWN(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SCN_PAINTED(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SCN_PAINTED(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SCN_SAVEPOINTLEFT(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SCN_SAVEPOINTLEFT(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SCN_SAVEPOINTREACHED(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SCN_SAVEPOINTREACHED(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` position: i32 `
    ///
    pub fn SCN_STYLENEEDED(self: QsciScintillaBase, position: i32) void {
        qtc.QsciScintillaBase_SCN_STYLENEEDED(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` url: QUrl `
    ///
    pub fn SCN_URIDROPPED(self: QsciScintillaBase, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QsciScintillaBase_SCN_URIDROPPED(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` updated: i32 `
    ///
    pub fn SCN_UPDATEUI(self: QsciScintillaBase, updated: i32) void {
        qtc.QsciScintillaBase_SCN_UPDATEUI(@ptrCast(self.ptr), @bitCast(updated));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` id: i32 `
    ///
    /// ` ch: i32 `
    ///
    /// ` method: i32 `
    ///
    /// ` position: i32 `
    ///
    pub fn SCN_USERLISTSELECTION(self: QsciScintillaBase, selection: [:0]const u8, id: i32, ch: i32, method: i32, position: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_USERLISTSELECTION(@ptrCast(self.ptr), selection_Cstring, @bitCast(id), @bitCast(ch), @bitCast(method), @bitCast(position));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` id: i32 `
    ///
    /// ` ch: i32 `
    ///
    /// ` method: i32 `
    ///
    pub fn SCN_USERLISTSELECTION2(self: QsciScintillaBase, selection: [:0]const u8, id: i32, ch: i32, method: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_USERLISTSELECTION2(@ptrCast(self.ptr), selection_Cstring, @bitCast(id), @bitCast(ch), @bitCast(method));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` id: i32 `
    ///
    pub fn SCN_USERLISTSELECTION3(self: QsciScintillaBase, selection: [:0]const u8, id: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_USERLISTSELECTION3(@ptrCast(self.ptr), selection_Cstring, @bitCast(id));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SCN_ZOOM(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SCN_ZOOM(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` source: QMimeData `
    ///
    pub fn CanInsertFromMimeData(self: QsciScintillaBase, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.QsciScintillaBase_CanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, source: QMimeData) callconv(.c) bool `
    ///
    pub fn OnCanInsertFromMimeData(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMimeData) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnCanInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCanInsertFromMimeData` instead
    ///
    pub const QBaseCanInsertFromMimeData = SuperCanInsertFromMimeData;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` source: QMimeData `
    ///
    pub fn SuperCanInsertFromMimeData(self: QsciScintillaBase, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.QsciScintillaBase_SuperCanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` source: QMimeData `
    ///
    /// ` rectangular: *bool `
    ///
    pub fn FromMimeData(self: QsciScintillaBase, allocator: std.mem.Allocator, source: anytype, rectangular: *bool) []u8 {
        comptime _ = @TypeOf(source)._is_QMimeData;
        var _bytearray: qtc.libqt_string = qtc.QsciScintillaBase_FromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr), @ptrCast(rectangular));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintillabase.FromMimeData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, source: QMimeData, rectangular: *bool) callconv(.c) qtc.libqt_string `
    ///
    pub fn OnFromMimeData(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMimeData, *bool) callconv(.c) qtc.libqt_string) void {
        qtc.QsciScintillaBase_OnFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFromMimeData` instead
    ///
    pub const QBaseFromMimeData = SuperFromMimeData;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` source: QMimeData `
    ///
    /// ` rectangular: *bool `
    ///
    pub fn SuperFromMimeData(self: QsciScintillaBase, allocator: std.mem.Allocator, source: anytype, rectangular: *bool) []u8 {
        comptime _ = @TypeOf(source)._is_QMimeData;
        var _bytearray: qtc.libqt_string = qtc.QsciScintillaBase_SuperFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr), @ptrCast(rectangular));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintillabase.FromMimeData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` text: []u8 `
    ///
    /// ` rectangular: bool `
    ///
    pub fn ToMimeData(self: QsciScintillaBase, text: []u8, rectangular: bool) QMimeData {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QsciScintillaBase_ToMimeData(@ptrCast(self.ptr), text_str, rectangular) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, text: qtc.libqt_string, rectangular: bool) callconv(.c) QMimeData `
    ///
    pub fn OnToMimeData(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, qtc.libqt_string, bool) callconv(.c) QMimeData) void {
        qtc.QsciScintillaBase_OnToMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperToMimeData` instead
    ///
    pub const QBaseToMimeData = SuperToMimeData;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` text: []u8 `
    ///
    /// ` rectangular: bool `
    ///
    pub fn SuperToMimeData(self: QsciScintillaBase, text: []u8, rectangular: bool) QMimeData {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QsciScintillaBase_SuperToMimeData(@ptrCast(self.ptr), text_str, rectangular) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QEvent `
    ///
    pub fn ChangeEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QsciScintillaBase_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperChangeEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QsciScintillaBase_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QsciScintillaBase_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QContextMenuEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QsciScintillaBase_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.QsciScintillaBase_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QDragEnterEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.QsciScintillaBase_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QsciScintillaBase_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QsciScintillaBase_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QsciScintillaBase_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QDragMoveEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QsciScintillaBase_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn DropEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.QsciScintillaBase_DropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QDropEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.QsciScintillaBase_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintillaBase_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QFocusEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintillaBase_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintillaBase_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QFocusEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintillaBase_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QsciScintillaBase, next: bool) bool {
        return qtc.QsciScintillaBase_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, bool) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QsciScintillaBase, next: bool) bool {
        return qtc.QsciScintillaBase_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QsciScintillaBase_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QKeyEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QsciScintillaBase_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QsciScintillaBase_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QInputMethodEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QsciScintillaBase_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QsciScintillaBase, query: i32) QVariant {
        return .{ .ptr = qtc.QsciScintillaBase_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32) callconv(.c) QVariant) void {
        qtc.QsciScintillaBase_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QsciScintillaBase, query: i32) QVariant {
        return .{ .ptr = qtc.QsciScintillaBase_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn PaintEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QsciScintillaBase_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QPaintEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QsciScintillaBase_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QsciScintillaBase_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, e: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QResizeEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QsciScintillaBase_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: QsciScintillaBase, dx: i32, dy: i32) void {
        qtc.QsciScintillaBase_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32, i32) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: QsciScintillaBase, dx: i32, dy: i32) void {
        qtc.QsciScintillaBase_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SetScrollBars(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SetScrollBars(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSetScrollBars(self: QsciScintillaBase, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintillaBase_OnSetScrollBars(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetScrollBars` instead
    ///
    pub const QBaseSetScrollBars = SuperSetScrollBars;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperSetScrollBars(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SuperSetScrollBars(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ContextMenuNeeded(self: QsciScintillaBase, x: i32, y: i32) bool {
        return qtc.QsciScintillaBase_ContextMenuNeeded(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, x: i32, y: i32) callconv(.c) bool `
    ///
    pub fn OnContextMenuNeeded(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32, i32) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnContextMenuNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextMenuNeeded` instead
    ///
    pub const QBaseContextMenuNeeded = SuperContextMenuNeeded;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SuperContextMenuNeeded(self: QsciScintillaBase, x: i32, y: i32) bool {
        return qtc.QsciScintillaBase_SuperContextMenuNeeded(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    pub fn SendScintilla22(self: QsciScintillaBase, msg: u32, wParam: usize) isize {
        return qtc.QsciScintillaBase_SendScintilla22(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` lParam: isize `
    ///
    pub fn SendScintilla32(self: QsciScintillaBase, msg: u32, wParam: usize, lParam: isize) isize {
        return qtc.QsciScintillaBase_SendScintilla32(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), @bitCast(lParam));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: QsciScintillaBase) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: QsciScintillaBase, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn VerticalScrollBar(self: QsciScintillaBase) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: QsciScintillaBase, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: QsciScintillaBase) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: QsciScintillaBase, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn HorizontalScrollBar(self: QsciScintillaBase) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: QsciScintillaBase, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn CornerWidget(self: QsciScintillaBase) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCornerWidget(self: QsciScintillaBase, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: QsciScintillaBase, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ScrollBarWidgets(self: QsciScintillaBase, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qsciscintillabase.ScrollBarWidgets: Memory allocation failed");
        const _data: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Viewport(self: QsciScintillaBase) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetViewport(self: QsciScintillaBase, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn MaximumViewportSize(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: QsciScintillaBase) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: QsciScintillaBase, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn FrameStyle(self: QsciScintillaBase) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: QsciScintillaBase, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn FrameWidth(self: QsciScintillaBase) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: QsciScintillaBase) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: QsciScintillaBase, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: QsciScintillaBase) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: QsciScintillaBase, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn LineWidth(self: QsciScintillaBase) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: QsciScintillaBase, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn MidLineWidth(self: QsciScintillaBase) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: QsciScintillaBase, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn FrameRect(self: QsciScintillaBase) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` frameRect: QRect `
    ///
    pub fn SetFrameRect(self: QsciScintillaBase, frameRect: anytype) void {
        comptime _ = @TypeOf(frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn WinId(self: QsciScintillaBase) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn CreateWinId(self: QsciScintillaBase) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn InternalWinId(self: QsciScintillaBase) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn EffectiveWinId(self: QsciScintillaBase) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Style(self: QsciScintillaBase) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QsciScintillaBase, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsTopLevel(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsWindow(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsModal(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QsciScintillaBase) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QsciScintillaBase, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsEnabled(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QsciScintillaBase, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QsciScintillaBase, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QsciScintillaBase, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QsciScintillaBase, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn FrameGeometry(self: QsciScintillaBase) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Geometry(self: QsciScintillaBase) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn NormalGeometry(self: QsciScintillaBase) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn X(self: QsciScintillaBase) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Y(self: QsciScintillaBase) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Pos(self: QsciScintillaBase) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn FrameSize(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Size(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Width(self: QsciScintillaBase) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Height(self: QsciScintillaBase) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Rect(self: QsciScintillaBase) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ChildrenRect(self: QsciScintillaBase) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ChildrenRegion(self: QsciScintillaBase) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn MinimumSize(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn MaximumSize(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn MinimumWidth(self: QsciScintillaBase) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn MinimumHeight(self: QsciScintillaBase) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn MaximumWidth(self: QsciScintillaBase) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn MaximumHeight(self: QsciScintillaBase) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QsciScintillaBase, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QsciScintillaBase, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QsciScintillaBase, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QsciScintillaBase, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QsciScintillaBase, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QsciScintillaBase, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QsciScintillaBase, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QsciScintillaBase, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SizeIncrement(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QsciScintillaBase, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QsciScintillaBase, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn BaseSize(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QsciScintillaBase, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QsciScintillaBase, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QsciScintillaBase, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QsciScintillaBase, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QsciScintillaBase, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QsciScintillaBase, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QsciScintillaBase, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QsciScintillaBase, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QsciScintillaBase, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QsciScintillaBase, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QsciScintillaBase, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QsciScintillaBase, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QsciScintillaBase, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QsciScintillaBase, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QsciScintillaBase, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QsciScintillaBase, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QsciScintillaBase, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QsciScintillaBase, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn Window(self: QsciScintillaBase) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn NativeParentWidget(self: QsciScintillaBase) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn TopLevelWidget(self: QsciScintillaBase) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Palette(self: QsciScintillaBase) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QsciScintillaBase, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QsciScintillaBase, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QsciScintillaBase) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QsciScintillaBase, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QsciScintillaBase) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Font(self: QsciScintillaBase) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QsciScintillaBase, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn FontMetrics(self: QsciScintillaBase) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn FontInfo(self: QsciScintillaBase) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Cursor(self: QsciScintillaBase) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QsciScintillaBase, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn UnsetCursor(self: QsciScintillaBase) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QsciScintillaBase, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn HasMouseTracking(self: QsciScintillaBase) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn UnderMouse(self: QsciScintillaBase) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QsciScintillaBase, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn HasTabletTracking(self: QsciScintillaBase) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QsciScintillaBase, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QsciScintillaBase, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Mask(self: QsciScintillaBase) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ClearMask(self: QsciScintillaBase) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QsciScintillaBase, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QsciScintillaBase, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Grab(self: QsciScintillaBase) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn GraphicsEffect(self: QsciScintillaBase) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QsciScintillaBase, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QsciScintillaBase, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QsciScintillaBase, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QsciScintillaBase, windowTitle: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QsciScintillaBase, styleSheet: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QsciScintillaBase, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn WindowIcon(self: QsciScintillaBase) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QsciScintillaBase, windowIconText: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QsciScintillaBase, windowRole: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QsciScintillaBase, filePath: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QsciScintillaBase, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn WindowOpacity(self: QsciScintillaBase) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsWindowModified(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QsciScintillaBase, toolTip: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QsciScintillaBase, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ToolTipDuration(self: QsciScintillaBase) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QsciScintillaBase, statusTip: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QsciScintillaBase, whatsThis: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QsciScintillaBase, name: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QsciScintillaBase, description: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QsciScintillaBase, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QsciScintillaBase) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn UnsetLayoutDirection(self: QsciScintillaBase) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QsciScintillaBase, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Locale(self: QsciScintillaBase) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn UnsetLocale(self: QsciScintillaBase) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsRightToLeft(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsLeftToRight(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SetFocus(self: QsciScintillaBase) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsActiveWindow(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ActivateWindow(self: QsciScintillaBase) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ClearFocus(self: QsciScintillaBase) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QsciScintillaBase, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QsciScintillaBase) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QsciScintillaBase, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn HasFocus(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QsciScintillaBase, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn FocusProxy(self: QsciScintillaBase) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QsciScintillaBase) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QsciScintillaBase, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn GrabMouse(self: QsciScintillaBase) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ReleaseMouse(self: QsciScintillaBase) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn GrabKeyboard(self: QsciScintillaBase) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ReleaseKeyboard(self: QsciScintillaBase) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QsciScintillaBase, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QsciScintillaBase, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QsciScintillaBase, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QsciScintillaBase, id: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn UpdatesEnabled(self: QsciScintillaBase) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QsciScintillaBase, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn GraphicsProxyWidget(self: QsciScintillaBase) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Update(self: QsciScintillaBase) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Repaint(self: QsciScintillaBase) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QsciScintillaBase, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QsciScintillaBase, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QsciScintillaBase, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Show(self: QsciScintillaBase) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Hide(self: QsciScintillaBase) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ShowMinimized(self: QsciScintillaBase) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ShowMaximized(self: QsciScintillaBase) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ShowFullScreen(self: QsciScintillaBase) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ShowNormal(self: QsciScintillaBase) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Close(self: QsciScintillaBase) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Raise(self: QsciScintillaBase) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Lower(self: QsciScintillaBase) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QsciScintillaBase, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QsciScintillaBase, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QsciScintillaBase, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QsciScintillaBase, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QsciScintillaBase, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintillabase.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QsciScintillaBase, geometry: []u8) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn AdjustSize(self: QsciScintillaBase) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsVisible(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QsciScintillaBase, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsHidden(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsMinimized(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsMaximized(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsFullScreen(self: QsciScintillaBase) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QsciScintillaBase) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QsciScintillaBase, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QsciScintillaBase, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SizePolicy(self: QsciScintillaBase) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QsciScintillaBase, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QsciScintillaBase, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn VisibleRegion(self: QsciScintillaBase) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QsciScintillaBase, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QsciScintillaBase, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ContentsMargins(self: QsciScintillaBase) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ContentsRect(self: QsciScintillaBase) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Layout(self: QsciScintillaBase) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QsciScintillaBase, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn UpdateGeometry(self: QsciScintillaBase) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QsciScintillaBase, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QsciScintillaBase, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QsciScintillaBase, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QsciScintillaBase, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn FocusWidget(self: QsciScintillaBase) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn NextInFocusChain(self: QsciScintillaBase) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn PreviousInFocusChain(self: QsciScintillaBase) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn AcceptDrops(self: QsciScintillaBase) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QsciScintillaBase, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QsciScintillaBase, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QsciScintillaBase, actions: []QAction) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QsciScintillaBase, before: anytype, actions: []QAction) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QsciScintillaBase, before: anytype, action: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QsciScintillaBase, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QsciScintillaBase, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qsciscintillabase.Actions: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QsciScintillaBase, text: []const u8) QAction {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QsciScintillaBase, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QsciScintillaBase, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QsciScintillaBase, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn ParentWidget(self: QsciScintillaBase) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QsciScintillaBase, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QsciScintillaBase) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QsciScintillaBase, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QsciScintillaBase, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QsciScintillaBase, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QsciScintillaBase, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QsciScintillaBase, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QsciScintillaBase, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QsciScintillaBase, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn EnsurePolished(self: QsciScintillaBase) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QsciScintillaBase, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn AutoFillBackground(self: QsciScintillaBase) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QsciScintillaBase, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn BackingStore(self: QsciScintillaBase) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn WindowHandle(self: QsciScintillaBase) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Screen(self: QsciScintillaBase) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QsciScintillaBase, screen: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QsciScintillaBase, title: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QsciScintillaBase, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QsciScintillaBase, iconText: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QsciScintillaBase, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QsciScintillaBase) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QsciScintillaBase, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QsciScintillaBase, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QsciScintillaBase, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QsciScintillaBase, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QsciScintillaBase, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QsciScintillaBase, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QsciScintillaBase, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QsciScintillaBase, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QsciScintillaBase, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QsciScintillaBase, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QsciScintillaBase, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QsciScintillaBase, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QsciScintillaBase, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QsciScintillaBase, param1: i32, on: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintillabase.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QsciScintillaBase, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsWidgetType(self: QsciScintillaBase) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsWindowType(self: QsciScintillaBase) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn IsQuickItemType(self: QsciScintillaBase) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SignalsBlocked(self: QsciScintillaBase) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QsciScintillaBase, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Thread(self: QsciScintillaBase) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QsciScintillaBase, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QsciScintillaBase, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QsciScintillaBase, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QsciScintillaBase, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QsciScintillaBase, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QsciScintillaBase, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsciscintillabase.Children: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QsciScintillaBase, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QsciScintillaBase, obj: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QsciScintillaBase, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn Disconnect3(self: QsciScintillaBase) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QsciScintillaBase, receiver: anytype) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn DumpObjectTree(self: QsciScintillaBase) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn DumpObjectInfo(self: QsciScintillaBase) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QsciScintillaBase, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QsciScintillaBase, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QsciScintillaBase, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsciscintillabase.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsciscintillabase.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn BindingStorage(self: QsciScintillaBase) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn BindingStorage2(self: QsciScintillaBase) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Destroyed(self: QsciScintillaBase) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Parent(self: QsciScintillaBase) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QsciScintillaBase, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn DeleteLater(self: QsciScintillaBase) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QsciScintillaBase, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QsciScintillaBase, time: i64, timerType: i32) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QsciScintillaBase, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QsciScintillaBase, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QsciScintillaBase, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QsciScintillaBase, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QsciScintillaBase, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn PaintingActive(self: QsciScintillaBase) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn WidthMM(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn HeightMM(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn LogicalDpiX(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn LogicalDpiY(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn PhysicalDpiX(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn PhysicalDpiY(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn DevicePixelRatio(self: QsciScintillaBase) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn DevicePixelRatioF(self: QsciScintillaBase) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ColorCount(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Depth(self: QsciScintillaBase) i32 {
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

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn MinimumSizeHint(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QsciScintillaBase_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperMinimumSizeHint(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QsciScintillaBase_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QsciScintillaBase, callback: *const fn () callconv(.c) QSize) void {
        qtc.QsciScintillaBase_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SizeHint(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QsciScintillaBase_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperSizeHint(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QsciScintillaBase_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QsciScintillaBase, callback: *const fn () callconv(.c) QSize) void {
        qtc.QsciScintillaBase_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SetupViewport(self: QsciScintillaBase, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.QsciScintillaBase_SetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetupViewport` instead
    ///
    pub const QBaseSetupViewport = SuperSetupViewport;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SuperSetupViewport(self: QsciScintillaBase, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.QsciScintillaBase_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, viewport: QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QWidget) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn EventFilter(self: QsciScintillaBase, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QsciScintillaBase_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperEventFilter(self: QsciScintillaBase, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QsciScintillaBase_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QObject, QEvent) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QEvent `
    ///
    pub fn Event(self: QsciScintillaBase, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QsciScintillaBase_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperEvent(self: QsciScintillaBase, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QsciScintillaBase_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QEvent) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ViewportEvent(self: QsciScintillaBase, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QsciScintillaBase_ViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperViewportEvent` instead
    ///
    pub const QBaseViewportEvent = SuperViewportEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperViewportEvent(self: QsciScintillaBase, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QsciScintillaBase_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QEvent) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn WheelEvent(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QsciScintillaBase_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QsciScintillaBase_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QWheelEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ViewportSizeHint(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QsciScintillaBase_ViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperViewportSizeHint` instead
    ///
    pub const QBaseViewportSizeHint = SuperViewportSizeHint;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperViewportSizeHint(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QsciScintillaBase_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnViewportSizeHint(self: QsciScintillaBase, callback: *const fn () callconv(.c) QSize) void {
        qtc.QsciScintillaBase_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: QsciScintillaBase, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QsciScintillaBase_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: QsciScintillaBase, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QsciScintillaBase_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn DevType(self: QsciScintillaBase) i32 {
        return qtc.QsciScintillaBase_DevType(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperDevType(self: QsciScintillaBase) i32 {
        return qtc.QsciScintillaBase_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QsciScintillaBase, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QsciScintillaBase, visible: bool) void {
        qtc.QsciScintillaBase_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QsciScintillaBase, visible: bool) void {
        qtc.QsciScintillaBase_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, bool) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QsciScintillaBase, param1: i32) i32 {
        return qtc.QsciScintillaBase_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QsciScintillaBase, param1: i32) i32 {
        return qtc.QsciScintillaBase_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32) callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn HasHeightForWidth(self: QsciScintillaBase) bool {
        return qtc.QsciScintillaBase_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperHasHeightForWidth(self: QsciScintillaBase) bool {
        return qtc.QsciScintillaBase_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QsciScintillaBase, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn PaintEngine(self: QsciScintillaBase) QPaintEngine {
        return .{ .ptr = qtc.QsciScintillaBase_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperPaintEngine(self: QsciScintillaBase) QPaintEngine {
        return .{ .ptr = qtc.QsciScintillaBase_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QsciScintillaBase, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QsciScintillaBase_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QsciScintillaBase_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QsciScintillaBase_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QKeyEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QsciScintillaBase_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QsciScintillaBase_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QEnterEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QsciScintillaBase_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QsciScintillaBase_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QsciScintillaBase_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QsciScintillaBase_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMoveEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QsciScintillaBase_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QsciScintillaBase_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QCloseEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QsciScintillaBase_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QsciScintillaBase_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QTabletEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QsciScintillaBase_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QsciScintillaBase_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QActionEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QsciScintillaBase_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QsciScintillaBase_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QShowEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QsciScintillaBase_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QsciScintillaBase_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QHideEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QsciScintillaBase, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QsciScintillaBase_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QsciScintillaBase, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QsciScintillaBase_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QsciScintillaBase, param1: i32) i32 {
        return qtc.QsciScintillaBase_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QsciScintillaBase, param1: i32) i32 {
        return qtc.QsciScintillaBase_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32) callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QsciScintillaBase, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QsciScintillaBase_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QsciScintillaBase, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QsciScintillaBase_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QPainter) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QsciScintillaBase, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QsciScintillaBase_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QsciScintillaBase, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QsciScintillaBase_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QsciScintillaBase_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SharedPainter(self: QsciScintillaBase) QPainter {
        return .{ .ptr = qtc.QsciScintillaBase_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperSharedPainter(self: QsciScintillaBase) QPainter {
        return .{ .ptr = qtc.QsciScintillaBase_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QsciScintillaBase, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QsciScintillaBase_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QsciScintillaBase_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QsciScintillaBase_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QTimerEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QsciScintillaBase_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QsciScintillaBase_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QChildEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QsciScintillaBase_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QsciScintillaBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QsciScintillaBase_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QsciScintillaBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintillaBase_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QsciScintillaBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintillaBase_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMetaMethod) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QsciScintillaBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintillaBase_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QsciScintillaBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintillaBase_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMetaMethod) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: QsciScintillaBase, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QsciScintillaBase_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `SuperSetViewportMargins` instead
    ///
    pub const QBaseSetViewportMargins = SuperSetViewportMargins;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: QsciScintillaBase, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QsciScintillaBase_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn ViewportMargins(self: QsciScintillaBase) QMargins {
        return .{ .ptr = qtc.QsciScintillaBase_ViewportMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperViewportMargins` instead
    ///
    pub const QBaseViewportMargins = SuperViewportMargins;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperViewportMargins(self: QsciScintillaBase) QMargins {
        return .{ .ptr = qtc.QsciScintillaBase_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    pub fn OnViewportMargins(self: QsciScintillaBase, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QsciScintillaBase_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPainter `
    ///
    pub fn DrawFrame(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QsciScintillaBase_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawFrame` instead
    ///
    pub const QBaseDrawFrame = SuperDrawFrame;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPainter `
    ///
    pub fn SuperDrawFrame(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QsciScintillaBase_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QPainter) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn UpdateMicroFocus(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperUpdateMicroFocus(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QsciScintillaBase, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintillaBase_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Create(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_Create(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperCreate(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QsciScintillaBase, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintillaBase_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Destroy(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperDestroy(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QsciScintillaBase, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn FocusNextChild(self: QsciScintillaBase) bool {
        return qtc.QsciScintillaBase_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperFocusNextChild(self: QsciScintillaBase) bool {
        return qtc.QsciScintillaBase_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QsciScintillaBase, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn FocusPreviousChild(self: QsciScintillaBase) bool {
        return qtc.QsciScintillaBase_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperFocusPreviousChild(self: QsciScintillaBase) bool {
        return qtc.QsciScintillaBase_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QsciScintillaBase, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Sender(self: QsciScintillaBase) QObject {
        return .{ .ptr = qtc.QsciScintillaBase_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperSender(self: QsciScintillaBase) QObject {
        return .{ .ptr = qtc.QsciScintillaBase_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QsciScintillaBase, callback: *const fn () callconv(.c) QObject) void {
        qtc.QsciScintillaBase_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn SenderSignalIndex(self: QsciScintillaBase) i32 {
        return qtc.QsciScintillaBase_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn SuperSenderSignalIndex(self: QsciScintillaBase) i32 {
        return qtc.QsciScintillaBase_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QsciScintillaBase, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QsciScintillaBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciScintillaBase_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QsciScintillaBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciScintillaBase_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, [*:0]const u8) callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QsciScintillaBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciScintillaBase_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QsciScintillaBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciScintillaBase_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMetaMethod) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QsciScintillaBase, metricA: i32, metricB: i32) f64 {
        return qtc.QsciScintillaBase_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QsciScintillaBase, metricA: i32, metricB: i32) f64 {
        return qtc.QsciScintillaBase_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32, i32) callconv(.c) f64) void {
        qtc.QsciScintillaBase_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn Delete(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const QsciScintillaBase = enum(i32) {
        pub const SCI_START: i32 = 2000;
        pub const SCI_OPTIONAL_START: i32 = 3000;
        pub const SCI_LEXER_START: i32 = 4000;
        pub const SCI_ADDTEXT: i32 = 2001;
        pub const SCI_ADDSTYLEDTEXT: i32 = 2002;
        pub const SCI_INSERTTEXT: i32 = 2003;
        pub const SCI_CLEARALL: i32 = 2004;
        pub const SCI_CLEARDOCUMENTSTYLE: i32 = 2005;
        pub const SCI_GETLENGTH: i32 = 2006;
        pub const SCI_GETCHARAT: i32 = 2007;
        pub const SCI_GETCURRENTPOS: i32 = 2008;
        pub const SCI_GETANCHOR: i32 = 2009;
        pub const SCI_GETSTYLEAT: i32 = 2010;
        pub const SCI_REDO: i32 = 2011;
        pub const SCI_SETUNDOCOLLECTION: i32 = 2012;
        pub const SCI_SELECTALL: i32 = 2013;
        pub const SCI_SETSAVEPOINT: i32 = 2014;
        pub const SCI_GETSTYLEDTEXT: i32 = 2015;
        pub const SCI_CANREDO: i32 = 2016;
        pub const SCI_MARKERLINEFROMHANDLE: i32 = 2017;
        pub const SCI_MARKERDELETEHANDLE: i32 = 2018;
        pub const SCI_GETUNDOCOLLECTION: i32 = 2019;
        pub const SCI_GETVIEWWS: i32 = 2020;
        pub const SCI_SETVIEWWS: i32 = 2021;
        pub const SCI_POSITIONFROMPOINT: i32 = 2022;
        pub const SCI_POSITIONFROMPOINTCLOSE: i32 = 2023;
        pub const SCI_GOTOLINE: i32 = 2024;
        pub const SCI_GOTOPOS: i32 = 2025;
        pub const SCI_SETANCHOR: i32 = 2026;
        pub const SCI_GETCURLINE: i32 = 2027;
        pub const SCI_GETENDSTYLED: i32 = 2028;
        pub const SCI_CONVERTEOLS: i32 = 2029;
        pub const SCI_GETEOLMODE: i32 = 2030;
        pub const SCI_SETEOLMODE: i32 = 2031;
        pub const SCI_STARTSTYLING: i32 = 2032;
        pub const SCI_SETSTYLING: i32 = 2033;
        pub const SCI_GETBUFFEREDDRAW: i32 = 2034;
        pub const SCI_SETBUFFEREDDRAW: i32 = 2035;
        pub const SCI_SETTABWIDTH: i32 = 2036;
        pub const SCI_GETTABWIDTH: i32 = 2121;
        pub const SCI_SETCODEPAGE: i32 = 2037;
        pub const SCI_MARKERDEFINE: i32 = 2040;
        pub const SCI_MARKERSETFORE: i32 = 2041;
        pub const SCI_MARKERSETBACK: i32 = 2042;
        pub const SCI_MARKERADD: i32 = 2043;
        pub const SCI_MARKERDELETE: i32 = 2044;
        pub const SCI_MARKERDELETEALL: i32 = 2045;
        pub const SCI_MARKERGET: i32 = 2046;
        pub const SCI_MARKERNEXT: i32 = 2047;
        pub const SCI_MARKERPREVIOUS: i32 = 2048;
        pub const SCI_MARKERDEFINEPIXMAP: i32 = 2049;
        pub const SCI_SETMARGINTYPEN: i32 = 2240;
        pub const SCI_GETMARGINTYPEN: i32 = 2241;
        pub const SCI_SETMARGINWIDTHN: i32 = 2242;
        pub const SCI_GETMARGINWIDTHN: i32 = 2243;
        pub const SCI_SETMARGINMASKN: i32 = 2244;
        pub const SCI_GETMARGINMASKN: i32 = 2245;
        pub const SCI_SETMARGINSENSITIVEN: i32 = 2246;
        pub const SCI_GETMARGINSENSITIVEN: i32 = 2247;
        pub const SCI_SETMARGINCURSORN: i32 = 2248;
        pub const SCI_GETMARGINCURSORN: i32 = 2249;
        pub const SCI_STYLECLEARALL: i32 = 2050;
        pub const SCI_STYLESETFORE: i32 = 2051;
        pub const SCI_STYLESETBACK: i32 = 2052;
        pub const SCI_STYLESETBOLD: i32 = 2053;
        pub const SCI_STYLESETITALIC: i32 = 2054;
        pub const SCI_STYLESETSIZE: i32 = 2055;
        pub const SCI_STYLESETFONT: i32 = 2056;
        pub const SCI_STYLESETEOLFILLED: i32 = 2057;
        pub const SCI_STYLERESETDEFAULT: i32 = 2058;
        pub const SCI_STYLESETUNDERLINE: i32 = 2059;
        pub const SCI_STYLESETCASE: i32 = 2060;
        pub const SCI_STYLESETSIZEFRACTIONAL: i32 = 2061;
        pub const SCI_STYLEGETSIZEFRACTIONAL: i32 = 2062;
        pub const SCI_STYLESETWEIGHT: i32 = 2063;
        pub const SCI_STYLEGETWEIGHT: i32 = 2064;
        pub const SCI_STYLESETCHARACTERSET: i32 = 2066;
        pub const SCI_SETSELFORE: i32 = 2067;
        pub const SCI_SETSELBACK: i32 = 2068;
        pub const SCI_SETCARETFORE: i32 = 2069;
        pub const SCI_ASSIGNCMDKEY: i32 = 2070;
        pub const SCI_CLEARCMDKEY: i32 = 2071;
        pub const SCI_CLEARALLCMDKEYS: i32 = 2072;
        pub const SCI_SETSTYLINGEX: i32 = 2073;
        pub const SCI_STYLESETVISIBLE: i32 = 2074;
        pub const SCI_GETCARETPERIOD: i32 = 2075;
        pub const SCI_SETCARETPERIOD: i32 = 2076;
        pub const SCI_SETWORDCHARS: i32 = 2077;
        pub const SCI_BEGINUNDOACTION: i32 = 2078;
        pub const SCI_ENDUNDOACTION: i32 = 2079;
        pub const SCI_INDICSETSTYLE: i32 = 2080;
        pub const SCI_INDICGETSTYLE: i32 = 2081;
        pub const SCI_INDICSETFORE: i32 = 2082;
        pub const SCI_INDICGETFORE: i32 = 2083;
        pub const SCI_SETWHITESPACEFORE: i32 = 2084;
        pub const SCI_SETWHITESPACEBACK: i32 = 2085;
        pub const SCI_SETWHITESPACESIZE: i32 = 2086;
        pub const SCI_GETWHITESPACESIZE: i32 = 2087;
        pub const SCI_SETSTYLEBITS: i32 = 2090;
        pub const SCI_GETSTYLEBITS: i32 = 2091;
        pub const SCI_SETLINESTATE: i32 = 2092;
        pub const SCI_GETLINESTATE: i32 = 2093;
        pub const SCI_GETMAXLINESTATE: i32 = 2094;
        pub const SCI_GETCARETLINEVISIBLE: i32 = 2095;
        pub const SCI_SETCARETLINEVISIBLE: i32 = 2096;
        pub const SCI_GETCARETLINEBACK: i32 = 2097;
        pub const SCI_SETCARETLINEBACK: i32 = 2098;
        pub const SCI_STYLESETCHANGEABLE: i32 = 2099;
        pub const SCI_AUTOCSHOW: i32 = 2100;
        pub const SCI_AUTOCCANCEL: i32 = 2101;
        pub const SCI_AUTOCACTIVE: i32 = 2102;
        pub const SCI_AUTOCPOSSTART: i32 = 2103;
        pub const SCI_AUTOCCOMPLETE: i32 = 2104;
        pub const SCI_AUTOCSTOPS: i32 = 2105;
        pub const SCI_AUTOCSETSEPARATOR: i32 = 2106;
        pub const SCI_AUTOCGETSEPARATOR: i32 = 2107;
        pub const SCI_AUTOCSELECT: i32 = 2108;
        pub const SCI_AUTOCSETCANCELATSTART: i32 = 2110;
        pub const SCI_AUTOCGETCANCELATSTART: i32 = 2111;
        pub const SCI_AUTOCSETFILLUPS: i32 = 2112;
        pub const SCI_AUTOCSETCHOOSESINGLE: i32 = 2113;
        pub const SCI_AUTOCGETCHOOSESINGLE: i32 = 2114;
        pub const SCI_AUTOCSETIGNORECASE: i32 = 2115;
        pub const SCI_AUTOCGETIGNORECASE: i32 = 2116;
        pub const SCI_USERLISTSHOW: i32 = 2117;
        pub const SCI_AUTOCSETAUTOHIDE: i32 = 2118;
        pub const SCI_AUTOCGETAUTOHIDE: i32 = 2119;
        pub const SCI_AUTOCSETDROPRESTOFWORD: i32 = 2270;
        pub const SCI_AUTOCGETDROPRESTOFWORD: i32 = 2271;
        pub const SCI_SETINDENT: i32 = 2122;
        pub const SCI_GETINDENT: i32 = 2123;
        pub const SCI_SETUSETABS: i32 = 2124;
        pub const SCI_GETUSETABS: i32 = 2125;
        pub const SCI_SETLINEINDENTATION: i32 = 2126;
        pub const SCI_GETLINEINDENTATION: i32 = 2127;
        pub const SCI_GETLINEINDENTPOSITION: i32 = 2128;
        pub const SCI_GETCOLUMN: i32 = 2129;
        pub const SCI_SETHSCROLLBAR: i32 = 2130;
        pub const SCI_GETHSCROLLBAR: i32 = 2131;
        pub const SCI_SETINDENTATIONGUIDES: i32 = 2132;
        pub const SCI_GETINDENTATIONGUIDES: i32 = 2133;
        pub const SCI_SETHIGHLIGHTGUIDE: i32 = 2134;
        pub const SCI_GETHIGHLIGHTGUIDE: i32 = 2135;
        pub const SCI_GETLINEENDPOSITION: i32 = 2136;
        pub const SCI_GETCODEPAGE: i32 = 2137;
        pub const SCI_GETCARETFORE: i32 = 2138;
        pub const SCI_GETREADONLY: i32 = 2140;
        pub const SCI_SETCURRENTPOS: i32 = 2141;
        pub const SCI_SETSELECTIONSTART: i32 = 2142;
        pub const SCI_GETSELECTIONSTART: i32 = 2143;
        pub const SCI_SETSELECTIONEND: i32 = 2144;
        pub const SCI_GETSELECTIONEND: i32 = 2145;
        pub const SCI_SETPRINTMAGNIFICATION: i32 = 2146;
        pub const SCI_GETPRINTMAGNIFICATION: i32 = 2147;
        pub const SCI_SETPRINTCOLOURMODE: i32 = 2148;
        pub const SCI_GETPRINTCOLOURMODE: i32 = 2149;
        pub const SCI_FINDTEXT: i32 = 2150;
        pub const SCI_FORMATRANGE: i32 = 2151;
        pub const SCI_GETFIRSTVISIBLELINE: i32 = 2152;
        pub const SCI_GETLINE: i32 = 2153;
        pub const SCI_GETLINECOUNT: i32 = 2154;
        pub const SCI_SETMARGINLEFT: i32 = 2155;
        pub const SCI_GETMARGINLEFT: i32 = 2156;
        pub const SCI_SETMARGINRIGHT: i32 = 2157;
        pub const SCI_GETMARGINRIGHT: i32 = 2158;
        pub const SCI_GETMODIFY: i32 = 2159;
        pub const SCI_SETSEL: i32 = 2160;
        pub const SCI_GETSELTEXT: i32 = 2161;
        pub const SCI_GETTEXTRANGE: i32 = 2162;
        pub const SCI_HIDESELECTION: i32 = 2163;
        pub const SCI_POINTXFROMPOSITION: i32 = 2164;
        pub const SCI_POINTYFROMPOSITION: i32 = 2165;
        pub const SCI_LINEFROMPOSITION: i32 = 2166;
        pub const SCI_POSITIONFROMLINE: i32 = 2167;
        pub const SCI_LINESCROLL: i32 = 2168;
        pub const SCI_SCROLLCARET: i32 = 2169;
        pub const SCI_REPLACESEL: i32 = 2170;
        pub const SCI_SETREADONLY: i32 = 2171;
        pub const SCI_NULL: i32 = 2172;
        pub const SCI_CANPASTE: i32 = 2173;
        pub const SCI_CANUNDO: i32 = 2174;
        pub const SCI_EMPTYUNDOBUFFER: i32 = 2175;
        pub const SCI_UNDO: i32 = 2176;
        pub const SCI_CUT: i32 = 2177;
        pub const SCI_COPY: i32 = 2178;
        pub const SCI_PASTE: i32 = 2179;
        pub const SCI_CLEAR: i32 = 2180;
        pub const SCI_SETTEXT: i32 = 2181;
        pub const SCI_GETTEXT: i32 = 2182;
        pub const SCI_GETTEXTLENGTH: i32 = 2183;
        pub const SCI_GETDIRECTFUNCTION: i32 = 2184;
        pub const SCI_GETDIRECTPOINTER: i32 = 2185;
        pub const SCI_SETOVERTYPE: i32 = 2186;
        pub const SCI_GETOVERTYPE: i32 = 2187;
        pub const SCI_SETCARETWIDTH: i32 = 2188;
        pub const SCI_GETCARETWIDTH: i32 = 2189;
        pub const SCI_SETTARGETSTART: i32 = 2190;
        pub const SCI_GETTARGETSTART: i32 = 2191;
        pub const SCI_SETTARGETEND: i32 = 2192;
        pub const SCI_GETTARGETEND: i32 = 2193;
        pub const SCI_REPLACETARGET: i32 = 2194;
        pub const SCI_REPLACETARGETRE: i32 = 2195;
        pub const SCI_SEARCHINTARGET: i32 = 2197;
        pub const SCI_SETSEARCHFLAGS: i32 = 2198;
        pub const SCI_GETSEARCHFLAGS: i32 = 2199;
        pub const SCI_CALLTIPSHOW: i32 = 2200;
        pub const SCI_CALLTIPCANCEL: i32 = 2201;
        pub const SCI_CALLTIPACTIVE: i32 = 2202;
        pub const SCI_CALLTIPPOSSTART: i32 = 2203;
        pub const SCI_CALLTIPSETHLT: i32 = 2204;
        pub const SCI_CALLTIPSETBACK: i32 = 2205;
        pub const SCI_CALLTIPSETFORE: i32 = 2206;
        pub const SCI_CALLTIPSETFOREHLT: i32 = 2207;
        pub const SCI_AUTOCSETMAXWIDTH: i32 = 2208;
        pub const SCI_AUTOCGETMAXWIDTH: i32 = 2209;
        pub const SCI_AUTOCSETMAXHEIGHT: i32 = 2210;
        pub const SCI_AUTOCGETMAXHEIGHT: i32 = 2211;
        pub const SCI_CALLTIPUSESTYLE: i32 = 2212;
        pub const SCI_CALLTIPSETPOSITION: i32 = 2213;
        pub const SCI_CALLTIPSETPOSSTART: i32 = 2214;
        pub const SCI_VISIBLEFROMDOCLINE: i32 = 2220;
        pub const SCI_DOCLINEFROMVISIBLE: i32 = 2221;
        pub const SCI_SETFOLDLEVEL: i32 = 2222;
        pub const SCI_GETFOLDLEVEL: i32 = 2223;
        pub const SCI_GETLASTCHILD: i32 = 2224;
        pub const SCI_GETFOLDPARENT: i32 = 2225;
        pub const SCI_SHOWLINES: i32 = 2226;
        pub const SCI_HIDELINES: i32 = 2227;
        pub const SCI_GETLINEVISIBLE: i32 = 2228;
        pub const SCI_SETFOLDEXPANDED: i32 = 2229;
        pub const SCI_GETFOLDEXPANDED: i32 = 2230;
        pub const SCI_TOGGLEFOLD: i32 = 2231;
        pub const SCI_ENSUREVISIBLE: i32 = 2232;
        pub const SCI_SETFOLDFLAGS: i32 = 2233;
        pub const SCI_ENSUREVISIBLEENFORCEPOLICY: i32 = 2234;
        pub const SCI_WRAPCOUNT: i32 = 2235;
        pub const SCI_GETALLLINESVISIBLE: i32 = 2236;
        pub const SCI_FOLDLINE: i32 = 2237;
        pub const SCI_FOLDCHILDREN: i32 = 2238;
        pub const SCI_EXPANDCHILDREN: i32 = 2239;
        pub const SCI_SETMARGINBACKN: i32 = 2250;
        pub const SCI_GETMARGINBACKN: i32 = 2251;
        pub const SCI_SETMARGINS: i32 = 2252;
        pub const SCI_GETMARGINS: i32 = 2253;
        pub const SCI_SETTABINDENTS: i32 = 2260;
        pub const SCI_GETTABINDENTS: i32 = 2261;
        pub const SCI_SETBACKSPACEUNINDENTS: i32 = 2262;
        pub const SCI_GETBACKSPACEUNINDENTS: i32 = 2263;
        pub const SCI_SETMOUSEDWELLTIME: i32 = 2264;
        pub const SCI_GETMOUSEDWELLTIME: i32 = 2265;
        pub const SCI_WORDSTARTPOSITION: i32 = 2266;
        pub const SCI_WORDENDPOSITION: i32 = 2267;
        pub const SCI_SETWRAPMODE: i32 = 2268;
        pub const SCI_GETWRAPMODE: i32 = 2269;
        pub const SCI_SETLAYOUTCACHE: i32 = 2272;
        pub const SCI_GETLAYOUTCACHE: i32 = 2273;
        pub const SCI_SETSCROLLWIDTH: i32 = 2274;
        pub const SCI_GETSCROLLWIDTH: i32 = 2275;
        pub const SCI_TEXTWIDTH: i32 = 2276;
        pub const SCI_SETENDATLASTLINE: i32 = 2277;
        pub const SCI_GETENDATLASTLINE: i32 = 2278;
        pub const SCI_TEXTHEIGHT: i32 = 2279;
        pub const SCI_SETVSCROLLBAR: i32 = 2280;
        pub const SCI_GETVSCROLLBAR: i32 = 2281;
        pub const SCI_APPENDTEXT: i32 = 2282;
        pub const SCI_GETTWOPHASEDRAW: i32 = 2283;
        pub const SCI_SETTWOPHASEDRAW: i32 = 2284;
        pub const SCI_AUTOCGETTYPESEPARATOR: i32 = 2285;
        pub const SCI_AUTOCSETTYPESEPARATOR: i32 = 2286;
        pub const SCI_TARGETFROMSELECTION: i32 = 2287;
        pub const SCI_LINESJOIN: i32 = 2288;
        pub const SCI_LINESSPLIT: i32 = 2289;
        pub const SCI_SETFOLDMARGINCOLOUR: i32 = 2290;
        pub const SCI_SETFOLDMARGINHICOLOUR: i32 = 2291;
        pub const SCI_MARKERSETBACKSELECTED: i32 = 2292;
        pub const SCI_MARKERENABLEHIGHLIGHT: i32 = 2293;
        pub const SCI_LINEDOWN: i32 = 2300;
        pub const SCI_LINEDOWNEXTEND: i32 = 2301;
        pub const SCI_LINEUP: i32 = 2302;
        pub const SCI_LINEUPEXTEND: i32 = 2303;
        pub const SCI_CHARLEFT: i32 = 2304;
        pub const SCI_CHARLEFTEXTEND: i32 = 2305;
        pub const SCI_CHARRIGHT: i32 = 2306;
        pub const SCI_CHARRIGHTEXTEND: i32 = 2307;
        pub const SCI_WORDLEFT: i32 = 2308;
        pub const SCI_WORDLEFTEXTEND: i32 = 2309;
        pub const SCI_WORDRIGHT: i32 = 2310;
        pub const SCI_WORDRIGHTEXTEND: i32 = 2311;
        pub const SCI_HOME: i32 = 2312;
        pub const SCI_HOMEEXTEND: i32 = 2313;
        pub const SCI_LINEEND: i32 = 2314;
        pub const SCI_LINEENDEXTEND: i32 = 2315;
        pub const SCI_DOCUMENTSTART: i32 = 2316;
        pub const SCI_DOCUMENTSTARTEXTEND: i32 = 2317;
        pub const SCI_DOCUMENTEND: i32 = 2318;
        pub const SCI_DOCUMENTENDEXTEND: i32 = 2319;
        pub const SCI_PAGEUP: i32 = 2320;
        pub const SCI_PAGEUPEXTEND: i32 = 2321;
        pub const SCI_PAGEDOWN: i32 = 2322;
        pub const SCI_PAGEDOWNEXTEND: i32 = 2323;
        pub const SCI_EDITTOGGLEOVERTYPE: i32 = 2324;
        pub const SCI_CANCEL: i32 = 2325;
        pub const SCI_DELETEBACK: i32 = 2326;
        pub const SCI_TAB: i32 = 2327;
        pub const SCI_BACKTAB: i32 = 2328;
        pub const SCI_NEWLINE: i32 = 2329;
        pub const SCI_FORMFEED: i32 = 2330;
        pub const SCI_VCHOME: i32 = 2331;
        pub const SCI_VCHOMEEXTEND: i32 = 2332;
        pub const SCI_ZOOMIN: i32 = 2333;
        pub const SCI_ZOOMOUT: i32 = 2334;
        pub const SCI_DELWORDLEFT: i32 = 2335;
        pub const SCI_DELWORDRIGHT: i32 = 2336;
        pub const SCI_LINECUT: i32 = 2337;
        pub const SCI_LINEDELETE: i32 = 2338;
        pub const SCI_LINETRANSPOSE: i32 = 2339;
        pub const SCI_LOWERCASE: i32 = 2340;
        pub const SCI_UPPERCASE: i32 = 2341;
        pub const SCI_LINESCROLLDOWN: i32 = 2342;
        pub const SCI_LINESCROLLUP: i32 = 2343;
        pub const SCI_DELETEBACKNOTLINE: i32 = 2344;
        pub const SCI_HOMEDISPLAY: i32 = 2345;
        pub const SCI_HOMEDISPLAYEXTEND: i32 = 2346;
        pub const SCI_LINEENDDISPLAY: i32 = 2347;
        pub const SCI_LINEENDDISPLAYEXTEND: i32 = 2348;
        pub const SCI_MOVECARETINSIDEVIEW: i32 = 2401;
        pub const SCI_LINELENGTH: i32 = 2350;
        pub const SCI_BRACEHIGHLIGHT: i32 = 2351;
        pub const SCI_BRACEBADLIGHT: i32 = 2352;
        pub const SCI_BRACEMATCH: i32 = 2353;
        pub const SCI_LINEREVERSE: i32 = 2354;
        pub const SCI_GETVIEWEOL: i32 = 2355;
        pub const SCI_SETVIEWEOL: i32 = 2356;
        pub const SCI_GETDOCPOINTER: i32 = 2357;
        pub const SCI_SETDOCPOINTER: i32 = 2358;
        pub const SCI_SETMODEVENTMASK: i32 = 2359;
        pub const SCI_GETEDGECOLUMN: i32 = 2360;
        pub const SCI_SETEDGECOLUMN: i32 = 2361;
        pub const SCI_GETEDGEMODE: i32 = 2362;
        pub const SCI_SETEDGEMODE: i32 = 2363;
        pub const SCI_GETEDGECOLOUR: i32 = 2364;
        pub const SCI_SETEDGECOLOUR: i32 = 2365;
        pub const SCI_SEARCHANCHOR: i32 = 2366;
        pub const SCI_SEARCHNEXT: i32 = 2367;
        pub const SCI_SEARCHPREV: i32 = 2368;
        pub const SCI_LINESONSCREEN: i32 = 2370;
        pub const SCI_USEPOPUP: i32 = 2371;
        pub const SCI_SELECTIONISRECTANGLE: i32 = 2372;
        pub const SCI_SETZOOM: i32 = 2373;
        pub const SCI_GETZOOM: i32 = 2374;
        pub const SCI_CREATEDOCUMENT: i32 = 2375;
        pub const SCI_ADDREFDOCUMENT: i32 = 2376;
        pub const SCI_RELEASEDOCUMENT: i32 = 2377;
        pub const SCI_GETMODEVENTMASK: i32 = 2378;
        pub const SCI_SETFOCUS: i32 = 2380;
        pub const SCI_GETFOCUS: i32 = 2381;
        pub const SCI_SETSTATUS: i32 = 2382;
        pub const SCI_GETSTATUS: i32 = 2383;
        pub const SCI_SETMOUSEDOWNCAPTURES: i32 = 2384;
        pub const SCI_GETMOUSEDOWNCAPTURES: i32 = 2385;
        pub const SCI_SETCURSOR: i32 = 2386;
        pub const SCI_GETCURSOR: i32 = 2387;
        pub const SCI_SETCONTROLCHARSYMBOL: i32 = 2388;
        pub const SCI_GETCONTROLCHARSYMBOL: i32 = 2389;
        pub const SCI_WORDPARTLEFT: i32 = 2390;
        pub const SCI_WORDPARTLEFTEXTEND: i32 = 2391;
        pub const SCI_WORDPARTRIGHT: i32 = 2392;
        pub const SCI_WORDPARTRIGHTEXTEND: i32 = 2393;
        pub const SCI_SETVISIBLEPOLICY: i32 = 2394;
        pub const SCI_DELLINELEFT: i32 = 2395;
        pub const SCI_DELLINERIGHT: i32 = 2396;
        pub const SCI_SETXOFFSET: i32 = 2397;
        pub const SCI_GETXOFFSET: i32 = 2398;
        pub const SCI_CHOOSECARETX: i32 = 2399;
        pub const SCI_GRABFOCUS: i32 = 2400;
        pub const SCI_SETXCARETPOLICY: i32 = 2402;
        pub const SCI_SETYCARETPOLICY: i32 = 2403;
        pub const SCI_LINEDUPLICATE: i32 = 2404;
        pub const SCI_REGISTERIMAGE: i32 = 2405;
        pub const SCI_SETPRINTWRAPMODE: i32 = 2406;
        pub const SCI_GETPRINTWRAPMODE: i32 = 2407;
        pub const SCI_CLEARREGISTEREDIMAGES: i32 = 2408;
        pub const SCI_STYLESETHOTSPOT: i32 = 2409;
        pub const SCI_SETHOTSPOTACTIVEFORE: i32 = 2410;
        pub const SCI_SETHOTSPOTACTIVEBACK: i32 = 2411;
        pub const SCI_SETHOTSPOTACTIVEUNDERLINE: i32 = 2412;
        pub const SCI_PARADOWN: i32 = 2413;
        pub const SCI_PARADOWNEXTEND: i32 = 2414;
        pub const SCI_PARAUP: i32 = 2415;
        pub const SCI_PARAUPEXTEND: i32 = 2416;
        pub const SCI_POSITIONBEFORE: i32 = 2417;
        pub const SCI_POSITIONAFTER: i32 = 2418;
        pub const SCI_COPYRANGE: i32 = 2419;
        pub const SCI_COPYTEXT: i32 = 2420;
        pub const SCI_SETHOTSPOTSINGLELINE: i32 = 2421;
        pub const SCI_SETSELECTIONMODE: i32 = 2422;
        pub const SCI_GETSELECTIONMODE: i32 = 2423;
        pub const SCI_GETLINESELSTARTPOSITION: i32 = 2424;
        pub const SCI_GETLINESELENDPOSITION: i32 = 2425;
        pub const SCI_LINEDOWNRECTEXTEND: i32 = 2426;
        pub const SCI_LINEUPRECTEXTEND: i32 = 2427;
        pub const SCI_CHARLEFTRECTEXTEND: i32 = 2428;
        pub const SCI_CHARRIGHTRECTEXTEND: i32 = 2429;
        pub const SCI_HOMERECTEXTEND: i32 = 2430;
        pub const SCI_VCHOMERECTEXTEND: i32 = 2431;
        pub const SCI_LINEENDRECTEXTEND: i32 = 2432;
        pub const SCI_PAGEUPRECTEXTEND: i32 = 2433;
        pub const SCI_PAGEDOWNRECTEXTEND: i32 = 2434;
        pub const SCI_STUTTEREDPAGEUP: i32 = 2435;
        pub const SCI_STUTTEREDPAGEUPEXTEND: i32 = 2436;
        pub const SCI_STUTTEREDPAGEDOWN: i32 = 2437;
        pub const SCI_STUTTEREDPAGEDOWNEXTEND: i32 = 2438;
        pub const SCI_WORDLEFTEND: i32 = 2439;
        pub const SCI_WORDLEFTENDEXTEND: i32 = 2440;
        pub const SCI_WORDRIGHTEND: i32 = 2441;
        pub const SCI_WORDRIGHTENDEXTEND: i32 = 2442;
        pub const SCI_SETWHITESPACECHARS: i32 = 2443;
        pub const SCI_SETCHARSDEFAULT: i32 = 2444;
        pub const SCI_AUTOCGETCURRENT: i32 = 2445;
        pub const SCI_ALLOCATE: i32 = 2446;
        pub const SCI_HOMEWRAP: i32 = 2349;
        pub const SCI_HOMEWRAPEXTEND: i32 = 2450;
        pub const SCI_LINEENDWRAP: i32 = 2451;
        pub const SCI_LINEENDWRAPEXTEND: i32 = 2452;
        pub const SCI_VCHOMEWRAP: i32 = 2453;
        pub const SCI_VCHOMEWRAPEXTEND: i32 = 2454;
        pub const SCI_LINECOPY: i32 = 2455;
        pub const SCI_FINDCOLUMN: i32 = 2456;
        pub const SCI_GETCARETSTICKY: i32 = 2457;
        pub const SCI_SETCARETSTICKY: i32 = 2458;
        pub const SCI_TOGGLECARETSTICKY: i32 = 2459;
        pub const SCI_SETWRAPVISUALFLAGS: i32 = 2460;
        pub const SCI_GETWRAPVISUALFLAGS: i32 = 2461;
        pub const SCI_SETWRAPVISUALFLAGSLOCATION: i32 = 2462;
        pub const SCI_GETWRAPVISUALFLAGSLOCATION: i32 = 2463;
        pub const SCI_SETWRAPSTARTINDENT: i32 = 2464;
        pub const SCI_GETWRAPSTARTINDENT: i32 = 2465;
        pub const SCI_MARKERADDSET: i32 = 2466;
        pub const SCI_SETPASTECONVERTENDINGS: i32 = 2467;
        pub const SCI_GETPASTECONVERTENDINGS: i32 = 2468;
        pub const SCI_SELECTIONDUPLICATE: i32 = 2469;
        pub const SCI_SETCARETLINEBACKALPHA: i32 = 2470;
        pub const SCI_GETCARETLINEBACKALPHA: i32 = 2471;
        pub const SCI_SETWRAPINDENTMODE: i32 = 2472;
        pub const SCI_GETWRAPINDENTMODE: i32 = 2473;
        pub const SCI_MARKERSETALPHA: i32 = 2476;
        pub const SCI_GETSELALPHA: i32 = 2477;
        pub const SCI_SETSELALPHA: i32 = 2478;
        pub const SCI_GETSELEOLFILLED: i32 = 2479;
        pub const SCI_SETSELEOLFILLED: i32 = 2480;
        pub const SCI_STYLEGETFORE: i32 = 2481;
        pub const SCI_STYLEGETBACK: i32 = 2482;
        pub const SCI_STYLEGETBOLD: i32 = 2483;
        pub const SCI_STYLEGETITALIC: i32 = 2484;
        pub const SCI_STYLEGETSIZE: i32 = 2485;
        pub const SCI_STYLEGETFONT: i32 = 2486;
        pub const SCI_STYLEGETEOLFILLED: i32 = 2487;
        pub const SCI_STYLEGETUNDERLINE: i32 = 2488;
        pub const SCI_STYLEGETCASE: i32 = 2489;
        pub const SCI_STYLEGETCHARACTERSET: i32 = 2490;
        pub const SCI_STYLEGETVISIBLE: i32 = 2491;
        pub const SCI_STYLEGETCHANGEABLE: i32 = 2492;
        pub const SCI_STYLEGETHOTSPOT: i32 = 2493;
        pub const SCI_GETHOTSPOTACTIVEFORE: i32 = 2494;
        pub const SCI_GETHOTSPOTACTIVEBACK: i32 = 2495;
        pub const SCI_GETHOTSPOTACTIVEUNDERLINE: i32 = 2496;
        pub const SCI_GETHOTSPOTSINGLELINE: i32 = 2497;
        pub const SCI_BRACEHIGHLIGHTINDICATOR: i32 = 2498;
        pub const SCI_BRACEBADLIGHTINDICATOR: i32 = 2499;
        pub const SCI_SETINDICATORCURRENT: i32 = 2500;
        pub const SCI_GETINDICATORCURRENT: i32 = 2501;
        pub const SCI_SETINDICATORVALUE: i32 = 2502;
        pub const SCI_GETINDICATORVALUE: i32 = 2503;
        pub const SCI_INDICATORFILLRANGE: i32 = 2504;
        pub const SCI_INDICATORCLEARRANGE: i32 = 2505;
        pub const SCI_INDICATORALLONFOR: i32 = 2506;
        pub const SCI_INDICATORVALUEAT: i32 = 2507;
        pub const SCI_INDICATORSTART: i32 = 2508;
        pub const SCI_INDICATOREND: i32 = 2509;
        pub const SCI_INDICSETUNDER: i32 = 2510;
        pub const SCI_INDICGETUNDER: i32 = 2511;
        pub const SCI_SETCARETSTYLE: i32 = 2512;
        pub const SCI_GETCARETSTYLE: i32 = 2513;
        pub const SCI_SETPOSITIONCACHE: i32 = 2514;
        pub const SCI_GETPOSITIONCACHE: i32 = 2515;
        pub const SCI_SETSCROLLWIDTHTRACKING: i32 = 2516;
        pub const SCI_GETSCROLLWIDTHTRACKING: i32 = 2517;
        pub const SCI_DELWORDRIGHTEND: i32 = 2518;
        pub const SCI_COPYALLOWLINE: i32 = 2519;
        pub const SCI_GETCHARACTERPOINTER: i32 = 2520;
        pub const SCI_INDICSETALPHA: i32 = 2523;
        pub const SCI_INDICGETALPHA: i32 = 2524;
        pub const SCI_SETEXTRAASCENT: i32 = 2525;
        pub const SCI_GETEXTRAASCENT: i32 = 2526;
        pub const SCI_SETEXTRADESCENT: i32 = 2527;
        pub const SCI_GETEXTRADESCENT: i32 = 2528;
        pub const SCI_MARKERSYMBOLDEFINED: i32 = 2529;
        pub const SCI_MARGINSETTEXT: i32 = 2530;
        pub const SCI_MARGINGETTEXT: i32 = 2531;
        pub const SCI_MARGINSETSTYLE: i32 = 2532;
        pub const SCI_MARGINGETSTYLE: i32 = 2533;
        pub const SCI_MARGINSETSTYLES: i32 = 2534;
        pub const SCI_MARGINGETSTYLES: i32 = 2535;
        pub const SCI_MARGINTEXTCLEARALL: i32 = 2536;
        pub const SCI_MARGINSETSTYLEOFFSET: i32 = 2537;
        pub const SCI_MARGINGETSTYLEOFFSET: i32 = 2538;
        pub const SCI_SETMARGINOPTIONS: i32 = 2539;
        pub const SCI_ANNOTATIONSETTEXT: i32 = 2540;
        pub const SCI_ANNOTATIONGETTEXT: i32 = 2541;
        pub const SCI_ANNOTATIONSETSTYLE: i32 = 2542;
        pub const SCI_ANNOTATIONGETSTYLE: i32 = 2543;
        pub const SCI_ANNOTATIONSETSTYLES: i32 = 2544;
        pub const SCI_ANNOTATIONGETSTYLES: i32 = 2545;
        pub const SCI_ANNOTATIONGETLINES: i32 = 2546;
        pub const SCI_ANNOTATIONCLEARALL: i32 = 2547;
        pub const SCI_ANNOTATIONSETVISIBLE: i32 = 2548;
        pub const SCI_ANNOTATIONGETVISIBLE: i32 = 2549;
        pub const SCI_ANNOTATIONSETSTYLEOFFSET: i32 = 2550;
        pub const SCI_ANNOTATIONGETSTYLEOFFSET: i32 = 2551;
        pub const SCI_RELEASEALLEXTENDEDSTYLES: i32 = 2552;
        pub const SCI_ALLOCATEEXTENDEDSTYLES: i32 = 2553;
        pub const SCI_SETEMPTYSELECTION: i32 = 2556;
        pub const SCI_GETMARGINOPTIONS: i32 = 2557;
        pub const SCI_INDICSETOUTLINEALPHA: i32 = 2558;
        pub const SCI_INDICGETOUTLINEALPHA: i32 = 2559;
        pub const SCI_ADDUNDOACTION: i32 = 2560;
        pub const SCI_CHARPOSITIONFROMPOINT: i32 = 2561;
        pub const SCI_CHARPOSITIONFROMPOINTCLOSE: i32 = 2562;
        pub const SCI_SETMULTIPLESELECTION: i32 = 2563;
        pub const SCI_GETMULTIPLESELECTION: i32 = 2564;
        pub const SCI_SETADDITIONALSELECTIONTYPING: i32 = 2565;
        pub const SCI_GETADDITIONALSELECTIONTYPING: i32 = 2566;
        pub const SCI_SETADDITIONALCARETSBLINK: i32 = 2567;
        pub const SCI_GETADDITIONALCARETSBLINK: i32 = 2568;
        pub const SCI_SCROLLRANGE: i32 = 2569;
        pub const SCI_GETSELECTIONS: i32 = 2570;
        pub const SCI_CLEARSELECTIONS: i32 = 2571;
        pub const SCI_SETSELECTION: i32 = 2572;
        pub const SCI_ADDSELECTION: i32 = 2573;
        pub const SCI_SETMAINSELECTION: i32 = 2574;
        pub const SCI_GETMAINSELECTION: i32 = 2575;
        pub const SCI_SETSELECTIONNCARET: i32 = 2576;
        pub const SCI_GETSELECTIONNCARET: i32 = 2577;
        pub const SCI_SETSELECTIONNANCHOR: i32 = 2578;
        pub const SCI_GETSELECTIONNANCHOR: i32 = 2579;
        pub const SCI_SETSELECTIONNCARETVIRTUALSPACE: i32 = 2580;
        pub const SCI_GETSELECTIONNCARETVIRTUALSPACE: i32 = 2581;
        pub const SCI_SETSELECTIONNANCHORVIRTUALSPACE: i32 = 2582;
        pub const SCI_GETSELECTIONNANCHORVIRTUALSPACE: i32 = 2583;
        pub const SCI_SETSELECTIONNSTART: i32 = 2584;
        pub const SCI_GETSELECTIONNSTART: i32 = 2585;
        pub const SCI_SETSELECTIONNEND: i32 = 2586;
        pub const SCI_GETSELECTIONNEND: i32 = 2587;
        pub const SCI_SETRECTANGULARSELECTIONCARET: i32 = 2588;
        pub const SCI_GETRECTANGULARSELECTIONCARET: i32 = 2589;
        pub const SCI_SETRECTANGULARSELECTIONANCHOR: i32 = 2590;
        pub const SCI_GETRECTANGULARSELECTIONANCHOR: i32 = 2591;
        pub const SCI_SETRECTANGULARSELECTIONCARETVIRTUALSPACE: i32 = 2592;
        pub const SCI_GETRECTANGULARSELECTIONCARETVIRTUALSPACE: i32 = 2593;
        pub const SCI_SETRECTANGULARSELECTIONANCHORVIRTUALSPACE: i32 = 2594;
        pub const SCI_GETRECTANGULARSELECTIONANCHORVIRTUALSPACE: i32 = 2595;
        pub const SCI_SETVIRTUALSPACEOPTIONS: i32 = 2596;
        pub const SCI_GETVIRTUALSPACEOPTIONS: i32 = 2597;
        pub const SCI_SETRECTANGULARSELECTIONMODIFIER: i32 = 2598;
        pub const SCI_GETRECTANGULARSELECTIONMODIFIER: i32 = 2599;
        pub const SCI_SETADDITIONALSELFORE: i32 = 2600;
        pub const SCI_SETADDITIONALSELBACK: i32 = 2601;
        pub const SCI_SETADDITIONALSELALPHA: i32 = 2602;
        pub const SCI_GETADDITIONALSELALPHA: i32 = 2603;
        pub const SCI_SETADDITIONALCARETFORE: i32 = 2604;
        pub const SCI_GETADDITIONALCARETFORE: i32 = 2605;
        pub const SCI_ROTATESELECTION: i32 = 2606;
        pub const SCI_SWAPMAINANCHORCARET: i32 = 2607;
        pub const SCI_SETADDITIONALCARETSVISIBLE: i32 = 2608;
        pub const SCI_GETADDITIONALCARETSVISIBLE: i32 = 2609;
        pub const SCI_AUTOCGETCURRENTTEXT: i32 = 2610;
        pub const SCI_SETFONTQUALITY: i32 = 2611;
        pub const SCI_GETFONTQUALITY: i32 = 2612;
        pub const SCI_SETFIRSTVISIBLELINE: i32 = 2613;
        pub const SCI_SETMULTIPASTE: i32 = 2614;
        pub const SCI_GETMULTIPASTE: i32 = 2615;
        pub const SCI_GETTAG: i32 = 2616;
        pub const SCI_CHANGELEXERSTATE: i32 = 2617;
        pub const SCI_CONTRACTEDFOLDNEXT: i32 = 2618;
        pub const SCI_VERTICALCENTRECARET: i32 = 2619;
        pub const SCI_MOVESELECTEDLINESUP: i32 = 2620;
        pub const SCI_MOVESELECTEDLINESDOWN: i32 = 2621;
        pub const SCI_SETIDENTIFIER: i32 = 2622;
        pub const SCI_GETIDENTIFIER: i32 = 2623;
        pub const SCI_RGBAIMAGESETWIDTH: i32 = 2624;
        pub const SCI_RGBAIMAGESETHEIGHT: i32 = 2625;
        pub const SCI_MARKERDEFINERGBAIMAGE: i32 = 2626;
        pub const SCI_REGISTERRGBAIMAGE: i32 = 2627;
        pub const SCI_SCROLLTOSTART: i32 = 2628;
        pub const SCI_SCROLLTOEND: i32 = 2629;
        pub const SCI_SETTECHNOLOGY: i32 = 2630;
        pub const SCI_GETTECHNOLOGY: i32 = 2631;
        pub const SCI_CREATELOADER: i32 = 2632;
        pub const SCI_COUNTCHARACTERS: i32 = 2633;
        pub const SCI_AUTOCSETCASEINSENSITIVEBEHAVIOUR: i32 = 2634;
        pub const SCI_AUTOCGETCASEINSENSITIVEBEHAVIOUR: i32 = 2635;
        pub const SCI_AUTOCSETMULTI: i32 = 2636;
        pub const SCI_AUTOCGETMULTI: i32 = 2637;
        pub const SCI_FINDINDICATORSHOW: i32 = 2640;
        pub const SCI_FINDINDICATORFLASH: i32 = 2641;
        pub const SCI_FINDINDICATORHIDE: i32 = 2642;
        pub const SCI_GETRANGEPOINTER: i32 = 2643;
        pub const SCI_GETGAPPOSITION: i32 = 2644;
        pub const SCI_DELETERANGE: i32 = 2645;
        pub const SCI_GETWORDCHARS: i32 = 2646;
        pub const SCI_GETWHITESPACECHARS: i32 = 2647;
        pub const SCI_SETPUNCTUATIONCHARS: i32 = 2648;
        pub const SCI_GETPUNCTUATIONCHARS: i32 = 2649;
        pub const SCI_GETSELECTIONEMPTY: i32 = 2650;
        pub const SCI_RGBAIMAGESETSCALE: i32 = 2651;
        pub const SCI_VCHOMEDISPLAY: i32 = 2652;
        pub const SCI_VCHOMEDISPLAYEXTEND: i32 = 2653;
        pub const SCI_GETCARETLINEVISIBLEALWAYS: i32 = 2654;
        pub const SCI_SETCARETLINEVISIBLEALWAYS: i32 = 2655;
        pub const SCI_SETLINEENDTYPESALLOWED: i32 = 2656;
        pub const SCI_GETLINEENDTYPESALLOWED: i32 = 2657;
        pub const SCI_GETLINEENDTYPESACTIVE: i32 = 2658;
        pub const SCI_AUTOCSETORDER: i32 = 2660;
        pub const SCI_AUTOCGETORDER: i32 = 2661;
        pub const SCI_FOLDALL: i32 = 2662;
        pub const SCI_SETAUTOMATICFOLD: i32 = 2663;
        pub const SCI_GETAUTOMATICFOLD: i32 = 2664;
        pub const SCI_SETREPRESENTATION: i32 = 2665;
        pub const SCI_GETREPRESENTATION: i32 = 2666;
        pub const SCI_CLEARREPRESENTATION: i32 = 2667;
        pub const SCI_SETMOUSESELECTIONRECTANGULARSWITCH: i32 = 2668;
        pub const SCI_GETMOUSESELECTIONRECTANGULARSWITCH: i32 = 2669;
        pub const SCI_POSITIONRELATIVE: i32 = 2670;
        pub const SCI_DROPSELECTIONN: i32 = 2671;
        pub const SCI_CHANGEINSERTION: i32 = 2672;
        pub const SCI_GETPHASESDRAW: i32 = 2673;
        pub const SCI_SETPHASESDRAW: i32 = 2674;
        pub const SCI_CLEARTABSTOPS: i32 = 2675;
        pub const SCI_ADDTABSTOP: i32 = 2676;
        pub const SCI_GETNEXTTABSTOP: i32 = 2677;
        pub const SCI_GETIMEINTERACTION: i32 = 2678;
        pub const SCI_SETIMEINTERACTION: i32 = 2679;
        pub const SCI_INDICSETHOVERSTYLE: i32 = 2680;
        pub const SCI_INDICGETHOVERSTYLE: i32 = 2681;
        pub const SCI_INDICSETHOVERFORE: i32 = 2682;
        pub const SCI_INDICGETHOVERFORE: i32 = 2683;
        pub const SCI_INDICSETFLAGS: i32 = 2684;
        pub const SCI_INDICGETFLAGS: i32 = 2685;
        pub const SCI_SETTARGETRANGE: i32 = 2686;
        pub const SCI_GETTARGETTEXT: i32 = 2687;
        pub const SCI_MULTIPLESELECTADDNEXT: i32 = 2688;
        pub const SCI_MULTIPLESELECTADDEACH: i32 = 2689;
        pub const SCI_TARGETWHOLEDOCUMENT: i32 = 2690;
        pub const SCI_ISRANGEWORD: i32 = 2691;
        pub const SCI_SETIDLESTYLING: i32 = 2692;
        pub const SCI_GETIDLESTYLING: i32 = 2693;
        pub const SCI_MULTIEDGEADDLINE: i32 = 2694;
        pub const SCI_MULTIEDGECLEARALL: i32 = 2695;
        pub const SCI_SETMOUSEWHEELCAPTURES: i32 = 2696;
        pub const SCI_GETMOUSEWHEELCAPTURES: i32 = 2697;
        pub const SCI_GETTABDRAWMODE: i32 = 2698;
        pub const SCI_SETTABDRAWMODE: i32 = 2699;
        pub const SCI_TOGGLEFOLDSHOWTEXT: i32 = 2700;
        pub const SCI_FOLDDISPLAYTEXTSETSTYLE: i32 = 2701;
        pub const SCI_SETACCESSIBILITY: i32 = 2702;
        pub const SCI_GETACCESSIBILITY: i32 = 2703;
        pub const SCI_GETCARETLINEFRAME: i32 = 2704;
        pub const SCI_SETCARETLINEFRAME: i32 = 2705;
        pub const SCI_STARTRECORD: i32 = 3001;
        pub const SCI_STOPRECORD: i32 = 3002;
        pub const SCI_SETLEXER: i32 = 4001;
        pub const SCI_GETLEXER: i32 = 4002;
        pub const SCI_COLOURISE: i32 = 4003;
        pub const SCI_SETPROPERTY: i32 = 4004;
        pub const SCI_SETKEYWORDS: i32 = 4005;
        pub const SCI_SETLEXERLANGUAGE: i32 = 4006;
        pub const SCI_LOADLEXERLIBRARY: i32 = 4007;
        pub const SCI_GETPROPERTY: i32 = 4008;
        pub const SCI_GETPROPERTYEXPANDED: i32 = 4009;
        pub const SCI_GETPROPERTYINT: i32 = 4010;
        pub const SCI_GETSTYLEBITSNEEDED: i32 = 4011;
        pub const SCI_GETLEXERLANGUAGE: i32 = 4012;
        pub const SCI_PRIVATELEXERCALL: i32 = 4013;
        pub const SCI_PROPERTYNAMES: i32 = 4014;
        pub const SCI_PROPERTYTYPE: i32 = 4015;
        pub const SCI_DESCRIBEPROPERTY: i32 = 4016;
        pub const SCI_DESCRIBEKEYWORDSETS: i32 = 4017;
        pub const SCI_GETLINEENDTYPESSUPPORTED: i32 = 4018;
        pub const SCI_ALLOCATESUBSTYLES: i32 = 4020;
        pub const SCI_GETSUBSTYLESSTART: i32 = 4021;
        pub const SCI_GETSUBSTYLESLENGTH: i32 = 4022;
        pub const SCI_GETSTYLEFROMSUBSTYLE: i32 = 4027;
        pub const SCI_GETPRIMARYSTYLEFROMSTYLE: i32 = 4028;
        pub const SCI_FREESUBSTYLES: i32 = 4023;
        pub const SCI_SETIDENTIFIERS: i32 = 4024;
        pub const SCI_DISTANCETOSECONDARYSTYLES: i32 = 4025;
        pub const SCI_GETSUBSTYLEBASES: i32 = 4026;
        pub const SCI_GETLINECHARACTERINDEX: i32 = 2710;
        pub const SCI_ALLOCATELINECHARACTERINDEX: i32 = 2711;
        pub const SCI_RELEASELINECHARACTERINDEX: i32 = 2712;
        pub const SCI_LINEFROMINDEXPOSITION: i32 = 2713;
        pub const SCI_INDEXPOSITIONFROMLINE: i32 = 2714;
        pub const SCI_COUNTCODEUNITS: i32 = 2715;
        pub const SCI_POSITIONRELATIVECODEUNITS: i32 = 2716;
        pub const SCI_GETNAMEDSTYLES: i32 = 4029;
        pub const SCI_NAMEOFSTYLE: i32 = 4030;
        pub const SCI_TAGSOFSTYLE: i32 = 4031;
        pub const SCI_DESCRIPTIONOFSTYLE: i32 = 4032;
        pub const SCI_GETMOVEEXTENDSSELECTION: i32 = 2706;
        pub const SCI_SETCOMMANDEVENTS: i32 = 2717;
        pub const SCI_GETCOMMANDEVENTS: i32 = 2718;
        pub const SCI_GETDOCUMENTOPTIONS: i32 = 2379;
        pub const SC_AC_FILLUP: i32 = 1;
        pub const SC_AC_DOUBLECLICK: i32 = 2;
        pub const SC_AC_TAB: i32 = 3;
        pub const SC_AC_NEWLINE: i32 = 4;
        pub const SC_AC_COMMAND: i32 = 5;
        pub const SC_ALPHA_TRANSPARENT: i32 = 0;
        pub const SC_ALPHA_OPAQUE: i32 = 255;
        pub const SC_ALPHA_NOALPHA: i32 = 256;
        pub const SC_CARETSTICKY_OFF: i32 = 0;
        pub const SC_CARETSTICKY_ON: i32 = 1;
        pub const SC_CARETSTICKY_WHITESPACE: i32 = 2;
        pub const SC_DOCUMENTOPTION_DEFAULT: i32 = 0;
        pub const SC_DOCUMENTOPTION_STYLES_NONE: i32 = 1;
        pub const SC_DOCUMENTOPTION_TEXT_LARGE: i32 = 256;
        pub const SC_EFF_QUALITY_MASK: i32 = 15;
        pub const SC_EFF_QUALITY_DEFAULT: i32 = 0;
        pub const SC_EFF_QUALITY_NON_ANTIALIASED: i32 = 1;
        pub const SC_EFF_QUALITY_ANTIALIASED: i32 = 2;
        pub const SC_EFF_QUALITY_LCD_OPTIMIZED: i32 = 3;
        pub const SC_IDLESTYLING_NONE: i32 = 0;
        pub const SC_IDLESTYLING_TOVISIBLE: i32 = 1;
        pub const SC_IDLESTYLING_AFTERVISIBLE: i32 = 2;
        pub const SC_IDLESTYLING_ALL: i32 = 3;
        pub const SC_IME_WINDOWED: i32 = 0;
        pub const SC_IME_INLINE: i32 = 1;
        pub const SC_LINECHARACTERINDEX_NONE: i32 = 0;
        pub const SC_LINECHARACTERINDEX_UTF32: i32 = 1;
        pub const SC_LINECHARACTERINDEX_UTF16: i32 = 2;
        pub const SC_MARGINOPTION_NONE: i32 = 0;
        pub const SC_MARGINOPTION_SUBLINESELECT: i32 = 1;
        pub const SC_MULTIAUTOC_ONCE: i32 = 0;
        pub const SC_MULTIAUTOC_EACH: i32 = 1;
        pub const SC_MULTIPASTE_ONCE: i32 = 0;
        pub const SC_MULTIPASTE_EACH: i32 = 1;
        pub const SC_POPUP_NEVER: i32 = 0;
        pub const SC_POPUP_ALL: i32 = 1;
        pub const SC_POPUP_TEXT: i32 = 2;
        pub const SC_SEL_STREAM: i32 = 0;
        pub const SC_SEL_RECTANGLE: i32 = 1;
        pub const SC_SEL_LINES: i32 = 2;
        pub const SC_SEL_THIN: i32 = 3;
        pub const SC_STATUS_OK: i32 = 0;
        pub const SC_STATUS_FAILURE: i32 = 1;
        pub const SC_STATUS_BADALLOC: i32 = 2;
        pub const SC_STATUS_WARN_START: i32 = 1000;
        pub const SC_STATUS_WARNREGEX: i32 = 1001;
        pub const SC_TYPE_BOOLEAN: i32 = 0;
        pub const SC_TYPE_INTEGER: i32 = 1;
        pub const SC_TYPE_STRING: i32 = 2;
        pub const SC_UPDATE_CONTENT: i32 = 1;
        pub const SC_UPDATE_SELECTION: i32 = 2;
        pub const SC_UPDATE_V_SCROLL: i32 = 4;
        pub const SC_UPDATE_H_SCROLL: i32 = 8;
        pub const SC_WRAPVISUALFLAG_NONE: i32 = 0;
        pub const SC_WRAPVISUALFLAG_END: i32 = 1;
        pub const SC_WRAPVISUALFLAG_START: i32 = 2;
        pub const SC_WRAPVISUALFLAG_MARGIN: i32 = 4;
        pub const SC_WRAPVISUALFLAGLOC_DEFAULT: i32 = 0;
        pub const SC_WRAPVISUALFLAGLOC_END_BY_TEXT: i32 = 1;
        pub const SC_WRAPVISUALFLAGLOC_START_BY_TEXT: i32 = 2;
        pub const SCTD_LONGARROW: i32 = 0;
        pub const SCTD_STRIKEOUT: i32 = 1;
        pub const SCVS_NONE: i32 = 0;
        pub const SCVS_RECTANGULARSELECTION: i32 = 1;
        pub const SCVS_USERACCESSIBLE: i32 = 2;
        pub const SCVS_NOWRAPLINESTART: i32 = 4;
        pub const SCWS_INVISIBLE: i32 = 0;
        pub const SCWS_VISIBLEALWAYS: i32 = 1;
        pub const SCWS_VISIBLEAFTERINDENT: i32 = 2;
        pub const SCWS_VISIBLEONLYININDENT: i32 = 3;
        pub const SC_EOL_CRLF: i32 = 0;
        pub const SC_EOL_CR: i32 = 1;
        pub const SC_EOL_LF: i32 = 2;
        pub const SC_CP_DBCS: i32 = 1;
        pub const SC_CP_UTF8: i32 = 65001;
        pub const SC_MARK_CIRCLE: i32 = 0;
        pub const SC_MARK_ROUNDRECT: i32 = 1;
        pub const SC_MARK_ARROW: i32 = 2;
        pub const SC_MARK_SMALLRECT: i32 = 3;
        pub const SC_MARK_SHORTARROW: i32 = 4;
        pub const SC_MARK_EMPTY: i32 = 5;
        pub const SC_MARK_ARROWDOWN: i32 = 6;
        pub const SC_MARK_MINUS: i32 = 7;
        pub const SC_MARK_PLUS: i32 = 8;
        pub const SC_MARK_VLINE: i32 = 9;
        pub const SC_MARK_LCORNER: i32 = 10;
        pub const SC_MARK_TCORNER: i32 = 11;
        pub const SC_MARK_BOXPLUS: i32 = 12;
        pub const SC_MARK_BOXPLUSCONNECTED: i32 = 13;
        pub const SC_MARK_BOXMINUS: i32 = 14;
        pub const SC_MARK_BOXMINUSCONNECTED: i32 = 15;
        pub const SC_MARK_LCORNERCURVE: i32 = 16;
        pub const SC_MARK_TCORNERCURVE: i32 = 17;
        pub const SC_MARK_CIRCLEPLUS: i32 = 18;
        pub const SC_MARK_CIRCLEPLUSCONNECTED: i32 = 19;
        pub const SC_MARK_CIRCLEMINUS: i32 = 20;
        pub const SC_MARK_CIRCLEMINUSCONNECTED: i32 = 21;
        pub const SC_MARK_BACKGROUND: i32 = 22;
        pub const SC_MARK_DOTDOTDOT: i32 = 23;
        pub const SC_MARK_ARROWS: i32 = 24;
        pub const SC_MARK_PIXMAP: i32 = 25;
        pub const SC_MARK_FULLRECT: i32 = 26;
        pub const SC_MARK_LEFTRECT: i32 = 27;
        pub const SC_MARK_AVAILABLE: i32 = 28;
        pub const SC_MARK_UNDERLINE: i32 = 29;
        pub const SC_MARK_RGBAIMAGE: i32 = 30;
        pub const SC_MARK_BOOKMARK: i32 = 31;
        pub const SC_MARK_CHARACTER: i32 = 10000;
        pub const SC_MARKNUM_FOLDEREND: i32 = 25;
        pub const SC_MARKNUM_FOLDEROPENMID: i32 = 26;
        pub const SC_MARKNUM_FOLDERMIDTAIL: i32 = 27;
        pub const SC_MARKNUM_FOLDERTAIL: i32 = 28;
        pub const SC_MARKNUM_FOLDERSUB: i32 = 29;
        pub const SC_MARKNUM_FOLDER: i32 = 30;
        pub const SC_MARKNUM_FOLDEROPEN: i32 = 31;
        pub const SC_MASK_FOLDERS: i32 = -33554432;
        pub const SC_MARGIN_SYMBOL: i32 = 0;
        pub const SC_MARGIN_NUMBER: i32 = 1;
        pub const SC_MARGIN_BACK: i32 = 2;
        pub const SC_MARGIN_FORE: i32 = 3;
        pub const SC_MARGIN_TEXT: i32 = 4;
        pub const SC_MARGIN_RTEXT: i32 = 5;
        pub const SC_MARGIN_COLOUR: i32 = 6;
        pub const STYLE_DEFAULT: i32 = 32;
        pub const STYLE_LINENUMBER: i32 = 33;
        pub const STYLE_BRACELIGHT: i32 = 34;
        pub const STYLE_BRACEBAD: i32 = 35;
        pub const STYLE_CONTROLCHAR: i32 = 36;
        pub const STYLE_INDENTGUIDE: i32 = 37;
        pub const STYLE_CALLTIP: i32 = 38;
        pub const STYLE_FOLDDISPLAYTEXT: i32 = 39;
        pub const STYLE_LASTPREDEFINED: i32 = 39;
        pub const STYLE_MAX: i32 = 255;
        pub const SC_CHARSET_ANSI: i32 = 0;
        pub const SC_CHARSET_DEFAULT: i32 = 1;
        pub const SC_CHARSET_BALTIC: i32 = 186;
        pub const SC_CHARSET_CHINESEBIG5: i32 = 136;
        pub const SC_CHARSET_EASTEUROPE: i32 = 238;
        pub const SC_CHARSET_GB2312: i32 = 134;
        pub const SC_CHARSET_GREEK: i32 = 161;
        pub const SC_CHARSET_HANGUL: i32 = 129;
        pub const SC_CHARSET_MAC: i32 = 77;
        pub const SC_CHARSET_OEM: i32 = 255;
        pub const SC_CHARSET_RUSSIAN: i32 = 204;
        pub const SC_CHARSET_OEM866: i32 = 866;
        pub const SC_CHARSET_CYRILLIC: i32 = 1251;
        pub const SC_CHARSET_SHIFTJIS: i32 = 128;
        pub const SC_CHARSET_SYMBOL: i32 = 2;
        pub const SC_CHARSET_TURKISH: i32 = 162;
        pub const SC_CHARSET_JOHAB: i32 = 130;
        pub const SC_CHARSET_HEBREW: i32 = 177;
        pub const SC_CHARSET_ARABIC: i32 = 178;
        pub const SC_CHARSET_VIETNAMESE: i32 = 163;
        pub const SC_CHARSET_THAI: i32 = 222;
        pub const SC_CHARSET_8859_15: i32 = 1000;
        pub const SC_CASE_MIXED: i32 = 0;
        pub const SC_CASE_UPPER: i32 = 1;
        pub const SC_CASE_LOWER: i32 = 2;
        pub const SC_CASE_CAMEL: i32 = 3;
        pub const SC_IV_NONE: i32 = 0;
        pub const SC_IV_REAL: i32 = 1;
        pub const SC_IV_LOOKFORWARD: i32 = 2;
        pub const SC_IV_LOOKBOTH: i32 = 3;
        pub const INDIC_PLAIN: i32 = 0;
        pub const INDIC_SQUIGGLE: i32 = 1;
        pub const INDIC_TT: i32 = 2;
        pub const INDIC_DIAGONAL: i32 = 3;
        pub const INDIC_STRIKE: i32 = 4;
        pub const INDIC_HIDDEN: i32 = 5;
        pub const INDIC_BOX: i32 = 6;
        pub const INDIC_ROUNDBOX: i32 = 7;
        pub const INDIC_STRAIGHTBOX: i32 = 8;
        pub const INDIC_DASH: i32 = 9;
        pub const INDIC_DOTS: i32 = 10;
        pub const INDIC_SQUIGGLELOW: i32 = 11;
        pub const INDIC_DOTBOX: i32 = 12;
        pub const INDIC_SQUIGGLEPIXMAP: i32 = 13;
        pub const INDIC_COMPOSITIONTHICK: i32 = 14;
        pub const INDIC_COMPOSITIONTHIN: i32 = 15;
        pub const INDIC_FULLBOX: i32 = 16;
        pub const INDIC_TEXTFORE: i32 = 17;
        pub const INDIC_POINT: i32 = 18;
        pub const INDIC_POINTCHARACTER: i32 = 19;
        pub const INDIC_GRADIENT: i32 = 20;
        pub const INDIC_GRADIENTCENTRE: i32 = 21;
        pub const INDIC_IME: i32 = 32;
        pub const INDIC_IME_MAX: i32 = 35;
        pub const INDIC_CONTAINER: i32 = 8;
        pub const INDIC_MAX: i32 = 35;
        pub const INDIC0_MASK: i32 = 32;
        pub const INDIC1_MASK: i32 = 64;
        pub const INDIC2_MASK: i32 = 128;
        pub const INDICS_MASK: i32 = 224;
        pub const SC_INDICVALUEBIT: i32 = 16777216;
        pub const SC_INDICVALUEMASK: i32 = 16777215;
        pub const SC_INDICFLAG_VALUEBEFORE: i32 = 1;
        pub const SC_PRINT_NORMAL: i32 = 0;
        pub const SC_PRINT_INVERTLIGHT: i32 = 1;
        pub const SC_PRINT_BLACKONWHITE: i32 = 2;
        pub const SC_PRINT_COLOURONWHITE: i32 = 3;
        pub const SC_PRINT_COLOURONWHITEDEFAULTBG: i32 = 4;
        pub const SC_PRINT_SCREENCOLOURS: i32 = 5;
        pub const SCFIND_WHOLEWORD: i32 = 2;
        pub const SCFIND_MATCHCASE: i32 = 4;
        pub const SCFIND_WORDSTART: i32 = 1048576;
        pub const SCFIND_REGEXP: i32 = 2097152;
        pub const SCFIND_POSIX: i32 = 4194304;
        pub const SCFIND_CXX11REGEX: i32 = 8388608;
        pub const SC_FOLDDISPLAYTEXT_HIDDEN: i32 = 0;
        pub const SC_FOLDDISPLAYTEXT_STANDARD: i32 = 1;
        pub const SC_FOLDDISPLAYTEXT_BOXED: i32 = 2;
        pub const SC_FOLDLEVELBASE: i32 = 1024;
        pub const SC_FOLDLEVELWHITEFLAG: i32 = 4096;
        pub const SC_FOLDLEVELHEADERFLAG: i32 = 8192;
        pub const SC_FOLDLEVELNUMBERMASK: i32 = 4095;
        pub const SC_FOLDFLAG_LINEBEFORE_EXPANDED: i32 = 2;
        pub const SC_FOLDFLAG_LINEBEFORE_CONTRACTED: i32 = 4;
        pub const SC_FOLDFLAG_LINEAFTER_EXPANDED: i32 = 8;
        pub const SC_FOLDFLAG_LINEAFTER_CONTRACTED: i32 = 16;
        pub const SC_FOLDFLAG_LEVELNUMBERS: i32 = 64;
        pub const SC_FOLDFLAG_LINESTATE: i32 = 128;
        pub const SC_LINE_END_TYPE_DEFAULT: i32 = 0;
        pub const SC_LINE_END_TYPE_UNICODE: i32 = 1;
        pub const SC_TIME_FOREVER: i32 = 10000000;
        pub const SC_WRAP_NONE: i32 = 0;
        pub const SC_WRAP_WORD: i32 = 1;
        pub const SC_WRAP_CHAR: i32 = 2;
        pub const SC_WRAP_WHITESPACE: i32 = 3;
        pub const SC_WRAPINDENT_FIXED: i32 = 0;
        pub const SC_WRAPINDENT_SAME: i32 = 1;
        pub const SC_WRAPINDENT_INDENT: i32 = 2;
        pub const SC_WRAPINDENT_DEEPINDENT: i32 = 3;
        pub const SC_CACHE_NONE: i32 = 0;
        pub const SC_CACHE_CARET: i32 = 1;
        pub const SC_CACHE_PAGE: i32 = 2;
        pub const SC_CACHE_DOCUMENT: i32 = 3;
        pub const SC_PHASES_ONE: i32 = 0;
        pub const SC_PHASES_TWO: i32 = 1;
        pub const SC_PHASES_MULTIPLE: i32 = 2;
        pub const ANNOTATION_HIDDEN: i32 = 0;
        pub const ANNOTATION_STANDARD: i32 = 1;
        pub const ANNOTATION_BOXED: i32 = 2;
        pub const ANNOTATION_INDENTED: i32 = 3;
        pub const EDGE_NONE: i32 = 0;
        pub const EDGE_LINE: i32 = 1;
        pub const EDGE_BACKGROUND: i32 = 2;
        pub const EDGE_MULTILINE: i32 = 3;
        pub const SC_CURSORNORMAL: i32 = -1;
        pub const SC_CURSORARROW: i32 = 2;
        pub const SC_CURSORWAIT: i32 = 4;
        pub const SC_CURSORREVERSEARROW: i32 = 7;
        pub const UNDO_MAY_COALESCE: i32 = 1;
        pub const VISIBLE_SLOP: i32 = 1;
        pub const VISIBLE_STRICT: i32 = 4;
        pub const CARET_SLOP: i32 = 1;
        pub const CARET_STRICT: i32 = 4;
        pub const CARET_JUMPS: i32 = 16;
        pub const CARET_EVEN: i32 = 8;
        pub const CARETSTYLE_INVISIBLE: i32 = 0;
        pub const CARETSTYLE_LINE: i32 = 1;
        pub const CARETSTYLE_BLOCK: i32 = 2;
        pub const SC_MOD_INSERTTEXT: i32 = 1;
        pub const SC_MOD_DELETETEXT: i32 = 2;
        pub const SC_MOD_CHANGESTYLE: i32 = 4;
        pub const SC_MOD_CHANGEFOLD: i32 = 8;
        pub const SC_PERFORMED_USER: i32 = 16;
        pub const SC_PERFORMED_UNDO: i32 = 32;
        pub const SC_PERFORMED_REDO: i32 = 64;
        pub const SC_MULTISTEPUNDOREDO: i32 = 128;
        pub const SC_LASTSTEPINUNDOREDO: i32 = 256;
        pub const SC_MOD_CHANGEMARKER: i32 = 512;
        pub const SC_MOD_BEFOREINSERT: i32 = 1024;
        pub const SC_MOD_BEFOREDELETE: i32 = 2048;
        pub const SC_MULTILINEUNDOREDO: i32 = 4096;
        pub const SC_STARTACTION: i32 = 8192;
        pub const SC_MOD_CHANGEINDICATOR: i32 = 16384;
        pub const SC_MOD_CHANGELINESTATE: i32 = 32768;
        pub const SC_MOD_CHANGEMARGIN: i32 = 65536;
        pub const SC_MOD_CHANGEANNOTATION: i32 = 131072;
        pub const SC_MOD_CONTAINER: i32 = 262144;
        pub const SC_MOD_LEXERSTATE: i32 = 524288;
        pub const SC_MOD_INSERTCHECK: i32 = 1048576;
        pub const SC_MOD_CHANGETABSTOPS: i32 = 2097152;
        pub const SC_MODEVENTMASKALL: i32 = 4194303;
        pub const SCK_DOWN: i32 = 300;
        pub const SCK_UP: i32 = 301;
        pub const SCK_LEFT: i32 = 302;
        pub const SCK_RIGHT: i32 = 303;
        pub const SCK_HOME: i32 = 304;
        pub const SCK_END: i32 = 305;
        pub const SCK_PRIOR: i32 = 306;
        pub const SCK_NEXT: i32 = 307;
        pub const SCK_DELETE: i32 = 308;
        pub const SCK_INSERT: i32 = 309;
        pub const SCK_ESCAPE: i32 = 7;
        pub const SCK_BACK: i32 = 8;
        pub const SCK_TAB: i32 = 9;
        pub const SCK_RETURN: i32 = 13;
        pub const SCK_ADD: i32 = 310;
        pub const SCK_SUBTRACT: i32 = 311;
        pub const SCK_DIVIDE: i32 = 312;
        pub const SCK_WIN: i32 = 313;
        pub const SCK_RWIN: i32 = 314;
        pub const SCK_MENU: i32 = 315;
        pub const SCMOD_NORM: i32 = 0;
        pub const SCMOD_SHIFT: i32 = 1;
        pub const SCMOD_CTRL: i32 = 2;
        pub const SCMOD_ALT: i32 = 4;
        pub const SCMOD_SUPER: i32 = 8;
        pub const SCMOD_META: i32 = 16;
        pub const SCLEX_CONTAINER: i32 = 0;
        pub const SCLEX_NULL: i32 = 1;
        pub const SCLEX_PYTHON: i32 = 2;
        pub const SCLEX_CPP: i32 = 3;
        pub const SCLEX_HTML: i32 = 4;
        pub const SCLEX_XML: i32 = 5;
        pub const SCLEX_PERL: i32 = 6;
        pub const SCLEX_SQL: i32 = 7;
        pub const SCLEX_VB: i32 = 8;
        pub const SCLEX_PROPERTIES: i32 = 9;
        pub const SCLEX_ERRORLIST: i32 = 10;
        pub const SCLEX_MAKEFILE: i32 = 11;
        pub const SCLEX_BATCH: i32 = 12;
        pub const SCLEX_LATEX: i32 = 14;
        pub const SCLEX_LUA: i32 = 15;
        pub const SCLEX_DIFF: i32 = 16;
        pub const SCLEX_CONF: i32 = 17;
        pub const SCLEX_PASCAL: i32 = 18;
        pub const SCLEX_AVE: i32 = 19;
        pub const SCLEX_ADA: i32 = 20;
        pub const SCLEX_LISP: i32 = 21;
        pub const SCLEX_RUBY: i32 = 22;
        pub const SCLEX_EIFFEL: i32 = 23;
        pub const SCLEX_EIFFELKW: i32 = 24;
        pub const SCLEX_TCL: i32 = 25;
        pub const SCLEX_NNCRONTAB: i32 = 26;
        pub const SCLEX_BULLANT: i32 = 27;
        pub const SCLEX_VBSCRIPT: i32 = 28;
        pub const SCLEX_ASP: i32 = 4;
        pub const SCLEX_PHP: i32 = 4;
        pub const SCLEX_BAAN: i32 = 31;
        pub const SCLEX_MATLAB: i32 = 32;
        pub const SCLEX_SCRIPTOL: i32 = 33;
        pub const SCLEX_ASM: i32 = 34;
        pub const SCLEX_CPPNOCASE: i32 = 35;
        pub const SCLEX_FORTRAN: i32 = 36;
        pub const SCLEX_F77: i32 = 37;
        pub const SCLEX_CSS: i32 = 38;
        pub const SCLEX_POV: i32 = 39;
        pub const SCLEX_LOUT: i32 = 40;
        pub const SCLEX_ESCRIPT: i32 = 41;
        pub const SCLEX_PS: i32 = 42;
        pub const SCLEX_NSIS: i32 = 43;
        pub const SCLEX_MMIXAL: i32 = 44;
        pub const SCLEX_CLW: i32 = 45;
        pub const SCLEX_CLWNOCASE: i32 = 46;
        pub const SCLEX_LOT: i32 = 47;
        pub const SCLEX_YAML: i32 = 48;
        pub const SCLEX_TEX: i32 = 49;
        pub const SCLEX_METAPOST: i32 = 50;
        pub const SCLEX_POWERBASIC: i32 = 51;
        pub const SCLEX_FORTH: i32 = 52;
        pub const SCLEX_ERLANG: i32 = 53;
        pub const SCLEX_OCTAVE: i32 = 54;
        pub const SCLEX_MSSQL: i32 = 55;
        pub const SCLEX_VERILOG: i32 = 56;
        pub const SCLEX_KIX: i32 = 57;
        pub const SCLEX_GUI4CLI: i32 = 58;
        pub const SCLEX_SPECMAN: i32 = 59;
        pub const SCLEX_AU3: i32 = 60;
        pub const SCLEX_APDL: i32 = 61;
        pub const SCLEX_BASH: i32 = 62;
        pub const SCLEX_ASN1: i32 = 63;
        pub const SCLEX_VHDL: i32 = 64;
        pub const SCLEX_CAML: i32 = 65;
        pub const SCLEX_BLITZBASIC: i32 = 66;
        pub const SCLEX_PUREBASIC: i32 = 67;
        pub const SCLEX_HASKELL: i32 = 68;
        pub const SCLEX_PHPSCRIPT: i32 = 69;
        pub const SCLEX_TADS3: i32 = 70;
        pub const SCLEX_REBOL: i32 = 71;
        pub const SCLEX_SMALLTALK: i32 = 72;
        pub const SCLEX_FLAGSHIP: i32 = 73;
        pub const SCLEX_CSOUND: i32 = 74;
        pub const SCLEX_FREEBASIC: i32 = 75;
        pub const SCLEX_INNOSETUP: i32 = 76;
        pub const SCLEX_OPAL: i32 = 77;
        pub const SCLEX_SPICE: i32 = 78;
        pub const SCLEX_D: i32 = 79;
        pub const SCLEX_CMAKE: i32 = 80;
        pub const SCLEX_GAP: i32 = 81;
        pub const SCLEX_PLM: i32 = 82;
        pub const SCLEX_PROGRESS: i32 = 83;
        pub const SCLEX_ABAQUS: i32 = 84;
        pub const SCLEX_ASYMPTOTE: i32 = 85;
        pub const SCLEX_R: i32 = 86;
        pub const SCLEX_MAGIK: i32 = 87;
        pub const SCLEX_POWERSHELL: i32 = 88;
        pub const SCLEX_MYSQL: i32 = 89;
        pub const SCLEX_PO: i32 = 90;
        pub const SCLEX_TAL: i32 = 91;
        pub const SCLEX_COBOL: i32 = 92;
        pub const SCLEX_TACL: i32 = 93;
        pub const SCLEX_SORCUS: i32 = 94;
        pub const SCLEX_POWERPRO: i32 = 95;
        pub const SCLEX_NIMROD: i32 = 96;
        pub const SCLEX_SML: i32 = 97;
        pub const SCLEX_MARKDOWN: i32 = 98;
        pub const SCLEX_TXT2TAGS: i32 = 99;
        pub const SCLEX_A68K: i32 = 100;
        pub const SCLEX_MODULA: i32 = 101;
        pub const SCLEX_COFFEESCRIPT: i32 = 102;
        pub const SCLEX_TCMD: i32 = 103;
        pub const SCLEX_AVS: i32 = 104;
        pub const SCLEX_ECL: i32 = 105;
        pub const SCLEX_OSCRIPT: i32 = 106;
        pub const SCLEX_VISUALPROLOG: i32 = 107;
        pub const SCLEX_LITERATEHASKELL: i32 = 108;
        pub const SCLEX_STTXT: i32 = 109;
        pub const SCLEX_KVIRC: i32 = 110;
        pub const SCLEX_RUST: i32 = 111;
        pub const SCLEX_DMAP: i32 = 112;
        pub const SCLEX_AS: i32 = 113;
        pub const SCLEX_DMIS: i32 = 114;
        pub const SCLEX_REGISTRY: i32 = 115;
        pub const SCLEX_BIBTEX: i32 = 116;
        pub const SCLEX_SREC: i32 = 117;
        pub const SCLEX_IHEX: i32 = 118;
        pub const SCLEX_TEHEX: i32 = 119;
        pub const SCLEX_JSON: i32 = 120;
        pub const SCLEX_EDIFACT: i32 = 121;
        pub const SCLEX_INDENT: i32 = 122;
        pub const SCLEX_MAXIMA: i32 = 123;
        pub const SCLEX_STATA: i32 = 124;
        pub const SCLEX_SAS: i32 = 125;
        pub const SC_WEIGHT_NORMAL: i32 = 400;
        pub const SC_WEIGHT_SEMIBOLD: i32 = 600;
        pub const SC_WEIGHT_BOLD: i32 = 700;
        pub const SC_TECHNOLOGY_DEFAULT: i32 = 0;
        pub const SC_TECHNOLOGY_DIRECTWRITE: i32 = 1;
        pub const SC_TECHNOLOGY_DIRECTWRITERETAIN: i32 = 2;
        pub const SC_TECHNOLOGY_DIRECTWRITEDC: i32 = 3;
        pub const SC_CASEINSENSITIVEBEHAVIOUR_RESPECTCASE: i32 = 0;
        pub const SC_CASEINSENSITIVEBEHAVIOUR_IGNORECASE: i32 = 1;
        pub const SC_FONT_SIZE_MULTIPLIER: i32 = 100;
        pub const SC_FOLDACTION_CONTRACT: i32 = 0;
        pub const SC_FOLDACTION_EXPAND: i32 = 1;
        pub const SC_FOLDACTION_TOGGLE: i32 = 2;
        pub const SC_AUTOMATICFOLD_SHOW: i32 = 1;
        pub const SC_AUTOMATICFOLD_CLICK: i32 = 2;
        pub const SC_AUTOMATICFOLD_CHANGE: i32 = 4;
        pub const SC_ORDER_PRESORTED: i32 = 0;
        pub const SC_ORDER_PERFORMSORT: i32 = 1;
        pub const SC_ORDER_CUSTOM: i32 = 2;
    };
};
