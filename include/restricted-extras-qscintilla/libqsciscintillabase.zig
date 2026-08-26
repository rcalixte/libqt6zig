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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QsciScintillaBase object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) QsciScintillaBase {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QsciScintillaBase_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QsciScintillaBase object in C++ memory
    ///
    pub fn new2() QsciScintillaBase {
        return .{ .ptr = qtc.QsciScintillaBase_new2() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn metaObject(self: QsciScintillaBase) QMetaObject {
        return .{ .ptr = qtc.QsciScintillaBase_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QsciScintillaBase, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QsciScintillaBase_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn superMetaObject(self: QsciScintillaBase) QMetaObject {
        return .{ .ptr = qtc.QsciScintillaBase_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QsciScintillaBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciScintillaBase_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QsciScintillaBase_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QsciScintillaBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciScintillaBase_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QsciScintillaBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciScintillaBase_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QsciScintillaBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciScintillaBase_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `pool` instead
    ///
    pub const Pool = pool;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    pub fn pool() QsciScintillaBase {
        return .{ .ptr = qtc.QsciScintillaBase_Pool() };
    }

    /// ### DEPRECATED: Use `replaceHorizontalScrollBar` instead
    ///
    pub const ReplaceHorizontalScrollBar = replaceHorizontalScrollBar;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` scrollBar: QScrollBar `
    ///
    pub fn replaceHorizontalScrollBar(self: QsciScintillaBase, scrollBar: anytype) void {
        comptime _ = @TypeOf(scrollBar)._is_QScrollBar;
        qtc.QsciScintillaBase_ReplaceHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollBar.ptr));
    }

    /// ### DEPRECATED: Use `replaceVerticalScrollBar` instead
    ///
    pub const ReplaceVerticalScrollBar = replaceVerticalScrollBar;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` scrollBar: QScrollBar `
    ///
    pub fn replaceVerticalScrollBar(self: QsciScintillaBase, scrollBar: anytype) void {
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

    /// ### DEPRECATED: Use `commandKey` instead
    ///
    pub const CommandKey = commandKey;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` qt_key: i32 `
    ///
    /// ` modifiers: *i32 `
    ///
    pub fn commandKey(qt_key: i32, modifiers: *i32) i32 {
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
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn SCN_DWELLEND(self: QsciScintillaBase, position: i32, _x: i32, _y: i32) void {
        qtc.QsciScintillaBase_SCN_DWELLEND(@ptrCast(self.ptr), @bitCast(position), @bitCast(_x), @bitCast(_y));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` position: i32 `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn SCN_DWELLSTART(self: QsciScintillaBase, position: i32, _x: i32, _y: i32) void {
        qtc.QsciScintillaBase_SCN_DWELLSTART(@ptrCast(self.ptr), @bitCast(position), @bitCast(_x), @bitCast(_y));
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

    /// ### DEPRECATED: Use `canInsertFromMimeData` instead
    ///
    pub const CanInsertFromMimeData = canInsertFromMimeData;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` source: QMimeData `
    ///
    pub fn canInsertFromMimeData(self: QsciScintillaBase, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.QsciScintillaBase_CanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `onCanInsertFromMimeData` instead
    ///
    pub const OnCanInsertFromMimeData = onCanInsertFromMimeData;

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
    pub fn onCanInsertFromMimeData(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMimeData) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnCanInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCanInsertFromMimeData` instead
    ///
    pub const SuperCanInsertFromMimeData = superCanInsertFromMimeData;

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
    pub fn superCanInsertFromMimeData(self: QsciScintillaBase, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.QsciScintillaBase_SuperCanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `fromMimeData` instead
    ///
    pub const FromMimeData = fromMimeData;

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
    pub fn fromMimeData(self: QsciScintillaBase, allocator: std.mem.Allocator, source: anytype, rectangular: *bool) []u8 {
        comptime _ = @TypeOf(source)._is_QMimeData;
        var _bytearray: qtc.libqt_string = qtc.QsciScintillaBase_FromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr), @ptrCast(rectangular));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciScintillaBase.fromMimeData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onFromMimeData` instead
    ///
    pub const OnFromMimeData = onFromMimeData;

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
    pub fn onFromMimeData(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMimeData, *bool) callconv(.c) qtc.libqt_string) void {
        qtc.QsciScintillaBase_OnFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFromMimeData` instead
    ///
    pub const SuperFromMimeData = superFromMimeData;

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
    pub fn superFromMimeData(self: QsciScintillaBase, allocator: std.mem.Allocator, source: anytype, rectangular: *bool) []u8 {
        comptime _ = @TypeOf(source)._is_QMimeData;
        var _bytearray: qtc.libqt_string = qtc.QsciScintillaBase_SuperFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr), @ptrCast(rectangular));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciScintillaBase.fromMimeData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toMimeData` instead
    ///
    pub const ToMimeData = toMimeData;

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
    pub fn toMimeData(self: QsciScintillaBase, text: []u8, rectangular: bool) QMimeData {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QsciScintillaBase_ToMimeData(@ptrCast(self.ptr), text_str, rectangular) };
    }

    /// ### DEPRECATED: Use `onToMimeData` instead
    ///
    pub const OnToMimeData = onToMimeData;

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
    pub fn onToMimeData(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, qtc.libqt_string, bool) callconv(.c) QMimeData) void {
        qtc.QsciScintillaBase_OnToMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superToMimeData` instead
    ///
    pub const SuperToMimeData = superToMimeData;

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
    pub fn superToMimeData(self: QsciScintillaBase, text: []u8, rectangular: bool) QMimeData {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QsciScintillaBase_SuperToMimeData(@ptrCast(self.ptr), text_str, rectangular) };
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QEvent `
    ///
    pub fn changeEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QsciScintillaBase_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

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
    pub fn onChangeEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

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
    pub fn superChangeEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QsciScintillaBase_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QsciScintillaBase_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

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
    pub fn onContextMenuEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QContextMenuEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

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
    pub fn superContextMenuEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QsciScintillaBase_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.QsciScintillaBase_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

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
    pub fn onDragEnterEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QDragEnterEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

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
    pub fn superDragEnterEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.QsciScintillaBase_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QsciScintillaBase_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

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
    pub fn onDragLeaveEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

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
    pub fn superDragLeaveEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QsciScintillaBase_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QsciScintillaBase_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

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
    pub fn onDragMoveEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QDragMoveEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

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
    pub fn superDragMoveEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QsciScintillaBase_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn dropEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.QsciScintillaBase_DropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

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
    pub fn onDropEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QDropEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

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
    pub fn superDropEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.QsciScintillaBase_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn focusInEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintillaBase_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

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
    pub fn onFocusInEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QFocusEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

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
    pub fn superFocusInEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintillaBase_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintillaBase_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

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
    pub fn onFocusOutEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QFocusEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

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
    pub fn superFocusOutEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintillaBase_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: QsciScintillaBase, next: bool) bool {
        return qtc.QsciScintillaBase_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

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
    pub fn onFocusNextPrevChild(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, bool) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

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
    pub fn superFocusNextPrevChild(self: QsciScintillaBase, next: bool) bool {
        return qtc.QsciScintillaBase_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QsciScintillaBase_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

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
    pub fn onKeyPressEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QKeyEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

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
    pub fn superKeyPressEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QsciScintillaBase_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QsciScintillaBase_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

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
    pub fn onInputMethodEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QInputMethodEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QsciScintillaBase_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QsciScintillaBase, query: i32) QVariant {
        return .{ .ptr = qtc.QsciScintillaBase_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32) callconv(.c) QVariant) void {
        qtc.QsciScintillaBase_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

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
    pub fn superInputMethodQuery(self: QsciScintillaBase, query: i32) QVariant {
        return .{ .ptr = qtc.QsciScintillaBase_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

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
    pub fn onMouseDoubleClickEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

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
    pub fn superMouseDoubleClickEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

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
    pub fn onMouseMoveEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

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
    pub fn superMouseMoveEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

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
    pub fn onMousePressEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

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
    pub fn superMousePressEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

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
    pub fn onMouseReleaseEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

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
    pub fn superMouseReleaseEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintillaBase_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn paintEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QsciScintillaBase_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

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
    pub fn onPaintEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QPaintEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

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
    pub fn superPaintEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QsciScintillaBase_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn resizeEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QsciScintillaBase_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

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
    pub fn onResizeEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QResizeEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

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
    pub fn superResizeEvent(self: QsciScintillaBase, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QsciScintillaBase_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `scrollContentsBy` instead
    ///
    pub const ScrollContentsBy = scrollContentsBy;

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
    pub fn scrollContentsBy(self: QsciScintillaBase, dx: i32, dy: i32) void {
        qtc.QsciScintillaBase_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onScrollContentsBy` instead
    ///
    pub const OnScrollContentsBy = onScrollContentsBy;

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
    pub fn onScrollContentsBy(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32, i32) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superScrollContentsBy` instead
    ///
    pub const SuperScrollContentsBy = superScrollContentsBy;

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
    pub fn superScrollContentsBy(self: QsciScintillaBase, dx: i32, dy: i32) void {
        qtc.QsciScintillaBase_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `setScrollBars` instead
    ///
    pub const SetScrollBars = setScrollBars;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn setScrollBars(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SetScrollBars(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSetScrollBars` instead
    ///
    pub const OnSetScrollBars = onSetScrollBars;

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
    pub fn onSetScrollBars(self: QsciScintillaBase, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintillaBase_OnSetScrollBars(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetScrollBars` instead
    ///
    pub const SuperSetScrollBars = superSetScrollBars;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn superSetScrollBars(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SuperSetScrollBars(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textAsBytes` instead
    ///
    pub const TextAsBytes = textAsBytes;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    pub fn textAsBytes(self: QsciScintillaBase, allocator: std.mem.Allocator, text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciScintillaBase_TextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciScintillaBase.textAsBytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onTextAsBytes` instead
    ///
    pub const OnTextAsBytes = onTextAsBytes;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, text: [*:0]const u8) callconv(.c) qtc.libqt_string `
    ///
    pub fn onTextAsBytes(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, [*:0]const u8) callconv(.c) qtc.libqt_string) void {
        qtc.QsciScintillaBase_OnTextAsBytes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTextAsBytes` instead
    ///
    pub const SuperTextAsBytes = superTextAsBytes;

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
    /// ` text: []const u8 `
    ///
    pub fn superTextAsBytes(self: QsciScintillaBase, allocator: std.mem.Allocator, text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciScintillaBase_SuperTextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciScintillaBase.textAsBytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `bytesAsText` instead
    ///
    pub const BytesAsText = bytesAsText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` bytes: [:0]const u8 `
    ///
    /// ` _size: i32 `
    ///
    pub fn bytesAsText(self: QsciScintillaBase, allocator: std.mem.Allocator, bytes: [:0]const u8, _size: i32) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciScintillaBase_BytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.bytesAsText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onBytesAsText` instead
    ///
    pub const OnBytesAsText = onBytesAsText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, bytes: [*:0]const u8, size: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBytesAsText(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciScintillaBase_OnBytesAsText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBytesAsText` instead
    ///
    pub const SuperBytesAsText = superBytesAsText;

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
    /// ` bytes: [:0]const u8 `
    ///
    /// ` _size: i32 `
    ///
    pub fn superBytesAsText(self: QsciScintillaBase, allocator: std.mem.Allocator, bytes: [:0]const u8, _size: i32) []const u8 {
        const bytes_Cstring = bytes.ptr;
        var _str = qtc.QsciScintillaBase_SuperBytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.bytesAsText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `contextMenuNeeded` instead
    ///
    pub const ContextMenuNeeded = contextMenuNeeded;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn contextMenuNeeded(self: QsciScintillaBase, _x: i32, _y: i32) bool {
        return qtc.QsciScintillaBase_ContextMenuNeeded(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `onContextMenuNeeded` instead
    ///
    pub const OnContextMenuNeeded = onContextMenuNeeded;

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
    pub fn onContextMenuNeeded(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32, i32) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnContextMenuNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextMenuNeeded` instead
    ///
    pub const SuperContextMenuNeeded = superContextMenuNeeded;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn superContextMenuNeeded(self: QsciScintillaBase, _x: i32, _y: i32) bool {
        return qtc.QsciScintillaBase_SuperContextMenuNeeded(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.tr3: Memory allocation failed");
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

    /// ### DEPRECATED: Use `verticalScrollBarPolicy` instead
    ///
    pub const VerticalScrollBarPolicy = verticalScrollBarPolicy;

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
    pub fn verticalScrollBarPolicy(self: QsciScintillaBase) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalScrollBarPolicy` instead
    ///
    pub const SetVerticalScrollBarPolicy = setVerticalScrollBarPolicy;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` _verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setVerticalScrollBarPolicy(self: QsciScintillaBase, _verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(_verticalScrollBarPolicy));
    }

    /// ### DEPRECATED: Use `verticalScrollBar` instead
    ///
    pub const VerticalScrollBar = verticalScrollBar;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn verticalScrollBar(self: QsciScintillaBase) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setVerticalScrollBar` instead
    ///
    pub const SetVerticalScrollBar = setVerticalScrollBar;

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
    pub fn setVerticalScrollBar(self: QsciScintillaBase, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// ### DEPRECATED: Use `horizontalScrollBarPolicy` instead
    ///
    pub const HorizontalScrollBarPolicy = horizontalScrollBarPolicy;

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
    pub fn horizontalScrollBarPolicy(self: QsciScintillaBase) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalScrollBarPolicy` instead
    ///
    pub const SetHorizontalScrollBarPolicy = setHorizontalScrollBarPolicy;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` _horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setHorizontalScrollBarPolicy(self: QsciScintillaBase, _horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(_horizontalScrollBarPolicy));
    }

    /// ### DEPRECATED: Use `horizontalScrollBar` instead
    ///
    pub const HorizontalScrollBar = horizontalScrollBar;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn horizontalScrollBar(self: QsciScintillaBase) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHorizontalScrollBar` instead
    ///
    pub const SetHorizontalScrollBar = setHorizontalScrollBar;

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
    pub fn setHorizontalScrollBar(self: QsciScintillaBase, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// ### DEPRECATED: Use `cornerWidget` instead
    ///
    pub const CornerWidget = cornerWidget;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn cornerWidget(self: QsciScintillaBase) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCornerWidget` instead
    ///
    pub const SetCornerWidget = setCornerWidget;

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
    pub fn setCornerWidget(self: QsciScintillaBase, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `addScrollBarWidget` instead
    ///
    pub const AddScrollBarWidget = addScrollBarWidget;

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
    pub fn addScrollBarWidget(self: QsciScintillaBase, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `scrollBarWidgets` instead
    ///
    pub const ScrollBarWidgets = scrollBarWidgets;

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
    pub fn scrollBarWidgets(self: QsciScintillaBase, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("QsciScintillaBase.scrollBarWidgets: Memory allocation failed");
        const _data_val: [*]QtC.QWidget = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `viewport` instead
    ///
    pub const Viewport = viewport;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn viewport(self: QsciScintillaBase) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setViewport` instead
    ///
    pub const SetViewport = setViewport;

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
    pub fn setViewport(self: QsciScintillaBase, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `maximumViewportSize` instead
    ///
    pub const MaximumViewportSize = maximumViewportSize;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn maximumViewportSize(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `sizeAdjustPolicy` instead
    ///
    pub const SizeAdjustPolicy = sizeAdjustPolicy;

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
    pub fn sizeAdjustPolicy(self: QsciScintillaBase) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSizeAdjustPolicy` instead
    ///
    pub const SetSizeAdjustPolicy = setSizeAdjustPolicy;

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
    pub fn setSizeAdjustPolicy(self: QsciScintillaBase, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `frameStyle` instead
    ///
    pub const FrameStyle = frameStyle;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn frameStyle(self: QsciScintillaBase) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFrameStyle` instead
    ///
    pub const SetFrameStyle = setFrameStyle;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` _frameStyle: i32 `
    ///
    pub fn setFrameStyle(self: QsciScintillaBase, _frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(_frameStyle));
    }

    /// ### DEPRECATED: Use `frameWidth` instead
    ///
    pub const FrameWidth = frameWidth;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn frameWidth(self: QsciScintillaBase) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `frameShape` instead
    ///
    pub const FrameShape = frameShape;

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
    pub fn frameShape(self: QsciScintillaBase) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFrameShape` instead
    ///
    pub const SetFrameShape = setFrameShape;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` _frameShape: qframe_enums.Shape `
    ///
    pub fn setFrameShape(self: QsciScintillaBase, _frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(_frameShape));
    }

    /// ### DEPRECATED: Use `frameShadow` instead
    ///
    pub const FrameShadow = frameShadow;

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
    pub fn frameShadow(self: QsciScintillaBase) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFrameShadow` instead
    ///
    pub const SetFrameShadow = setFrameShadow;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` _frameShadow: qframe_enums.Shadow `
    ///
    pub fn setFrameShadow(self: QsciScintillaBase, _frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(_frameShadow));
    }

    /// ### DEPRECATED: Use `lineWidth` instead
    ///
    pub const LineWidth = lineWidth;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn lineWidth(self: QsciScintillaBase) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineWidth` instead
    ///
    pub const SetLineWidth = setLineWidth;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: QsciScintillaBase, _lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(_lineWidth));
    }

    /// ### DEPRECATED: Use `midLineWidth` instead
    ///
    pub const MidLineWidth = midLineWidth;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn midLineWidth(self: QsciScintillaBase) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMidLineWidth` instead
    ///
    pub const SetMidLineWidth = setMidLineWidth;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: QsciScintillaBase, _midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(_midLineWidth));
    }

    /// ### DEPRECATED: Use `frameRect` instead
    ///
    pub const FrameRect = frameRect;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn frameRect(self: QsciScintillaBase) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFrameRect` instead
    ///
    pub const SetFrameRect = setFrameRect;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    /// ` _frameRect: QRect `
    ///
    pub fn setFrameRect(self: QsciScintillaBase, _frameRect: anytype) void {
        comptime _ = @TypeOf(_frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(_frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// Upcasts to a QPaintDevice object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn asQPaintDevice(self: QsciScintillaBase) QPaintDevice {
        return .{ .ptr = qtc.QWidget_AsQPaintDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// Downcasts to a QsciScintillaBase object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qpaintdevice: QPaintDevice `
    ///
    pub fn fromQPaintDevice(_qpaintdevice: anytype) QsciScintillaBase {
        comptime _ = @TypeOf(_qpaintdevice)._is_QPaintDevice;
        return .{ .ptr = @ptrCast(qtc.QWidget_FromQPaintDevice(@ptrCast(_qpaintdevice.ptr))) };
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn winId(self: QsciScintillaBase) usize {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn createWinId(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn internalWinId(self: QsciScintillaBase) usize {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn effectiveWinId(self: QsciScintillaBase) usize {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn style(self: QsciScintillaBase) QStyle {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QsciScintillaBase, _style: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isTopLevel(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isWindow(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isModal(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: QsciScintillaBase, _windowModality: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isEnabled(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: QsciScintillaBase, param1: anytype) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QsciScintillaBase, enabled: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: QsciScintillaBase, disabled: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: QsciScintillaBase, windowModified: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn frameGeometry(self: QsciScintillaBase) QRect {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn geometry(self: QsciScintillaBase) QRect {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn normalGeometry(self: QsciScintillaBase) QRect {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn x(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn y(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn pos(self: QsciScintillaBase) QPoint {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn frameSize(self: QsciScintillaBase) QSize {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn size(self: QsciScintillaBase) QSize {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn width(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn height(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn rect(self: QsciScintillaBase) QRect {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn childrenRect(self: QsciScintillaBase) QRect {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn childrenRegion(self: QsciScintillaBase) QRegion {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn minimumSize(self: QsciScintillaBase) QSize {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn maximumSize(self: QsciScintillaBase) QSize {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn minimumWidth(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn minimumHeight(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn maximumWidth(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn maximumHeight(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: QsciScintillaBase, _minimumSize: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: QsciScintillaBase, minw: i32, minh: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: QsciScintillaBase, _maximumSize: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: QsciScintillaBase, maxw: i32, maxh: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: QsciScintillaBase, minw: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: QsciScintillaBase, minh: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: QsciScintillaBase, maxw: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: QsciScintillaBase, maxh: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn sizeIncrement(self: QsciScintillaBase) QSize {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: QsciScintillaBase, _sizeIncrement: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: QsciScintillaBase, w: i32, h: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn baseSize(self: QsciScintillaBase) QSize {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: QsciScintillaBase, _baseSize: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: QsciScintillaBase, basew: i32, baseh: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: QsciScintillaBase, fixedSize: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: QsciScintillaBase, w: i32, h: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: QsciScintillaBase, w: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: QsciScintillaBase, h: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: QsciScintillaBase, param1: anytype) QPointF {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: QsciScintillaBase, param1: anytype) QPoint {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: QsciScintillaBase, param1: anytype) QPointF {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: QsciScintillaBase, param1: anytype) QPoint {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: QsciScintillaBase, param1: anytype) QPointF {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: QsciScintillaBase, param1: anytype) QPoint {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: QsciScintillaBase, param1: anytype) QPointF {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: QsciScintillaBase, param1: anytype) QPoint {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: QsciScintillaBase, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: QsciScintillaBase, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: QsciScintillaBase, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: QsciScintillaBase, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn window(self: QsciScintillaBase) QWidget {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn nativeParentWidget(self: QsciScintillaBase) QWidget {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn topLevelWidget(self: QsciScintillaBase) QWidget {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn palette(self: QsciScintillaBase) QPalette {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QsciScintillaBase, _palette: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: QsciScintillaBase, _backgroundRole: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: QsciScintillaBase, _foregroundRole: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn font(self: QsciScintillaBase) QFont {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QsciScintillaBase, _font: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn fontMetrics(self: QsciScintillaBase) QFontMetrics {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn fontInfo(self: QsciScintillaBase) QFontInfo {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn cursor(self: QsciScintillaBase) QCursor {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QsciScintillaBase, _cursor: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn unsetCursor(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: QsciScintillaBase, enable: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn hasMouseTracking(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn underMouse(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: QsciScintillaBase, enable: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn hasTabletTracking(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: QsciScintillaBase, _mask: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: QsciScintillaBase, _mask: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn mask(self: QsciScintillaBase) QRegion {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn clearMask(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: QsciScintillaBase, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        const target_ = if (@hasDecl(@TypeOf(target), "asQPaintDevice")) target.asQPaintDevice() else target;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target_.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: QsciScintillaBase, painter: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn grab(self: QsciScintillaBase) QPixmap {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn graphicsEffect(self: QsciScintillaBase) QGraphicsEffect {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QsciScintillaBase, effect: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QsciScintillaBase, typeVal: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QsciScintillaBase, typeVal: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: QsciScintillaBase, _windowTitle: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: QsciScintillaBase, _styleSheet: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.styleSheet: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.windowTitle: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(self: QsciScintillaBase, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn windowIcon(self: QsciScintillaBase) QIcon {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: QsciScintillaBase, _windowIconText: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.windowIconText: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: QsciScintillaBase, _windowRole: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.windowRole: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: QsciScintillaBase, filePath: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.windowFilePath: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: QsciScintillaBase, level: f64) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn windowOpacity(self: QsciScintillaBase) f64 {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isWindowModified(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QsciScintillaBase, _toolTip: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.toolTip: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: QsciScintillaBase, msec: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn toolTipDuration(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QsciScintillaBase, _statusTip: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.statusTip: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QsciScintillaBase, _whatsThis: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.whatsThis: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.accessibleName: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: QsciScintillaBase, name: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.accessibleDescription: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: QsciScintillaBase, description: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QsciScintillaBase, direction: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn unsetLayoutDirection(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QsciScintillaBase, _locale: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn locale(self: QsciScintillaBase) QLocale {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn unsetLocale(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isRightToLeft(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isLeftToRight(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn setFocus(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isActiveWindow(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn activateWindow(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn clearFocus(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QsciScintillaBase, reason: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QsciScintillaBase, policy: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn hasFocus(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: QsciScintillaBase, _focusProxy: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn focusProxy(self: QsciScintillaBase) QWidget {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: QsciScintillaBase, policy: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn grabMouse(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: QsciScintillaBase, param1: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn releaseMouse(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn grabKeyboard(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn releaseKeyboard(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: QsciScintillaBase, key: anytype) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: QsciScintillaBase, id: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: QsciScintillaBase, id: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: QsciScintillaBase, id: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn updatesEnabled(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: QsciScintillaBase, enable: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn graphicsProxyWidget(self: QsciScintillaBase) QGraphicsProxyWidget {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn update(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn repaint(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: QsciScintillaBase, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: QsciScintillaBase, param1: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: QsciScintillaBase, param1: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: QsciScintillaBase, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: QsciScintillaBase, param1: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: QsciScintillaBase, param1: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: QsciScintillaBase, hidden: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn show(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn hide(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn showMinimized(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn showMaximized(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn showFullScreen(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn showNormal(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn close(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn raise(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn lower(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: QsciScintillaBase, param1: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: QsciScintillaBase, _x: i32, _y: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: QsciScintillaBase, param1: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: QsciScintillaBase, w: i32, h: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: QsciScintillaBase, param1: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: QsciScintillaBase, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: QsciScintillaBase, _geometry: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: QsciScintillaBase, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciScintillaBase.saveGeometry: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: QsciScintillaBase, _geometry: []u8) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn adjustSize(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isVisible(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: QsciScintillaBase, param1: anytype) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isHidden(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isMinimized(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isMaximized(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isFullScreen(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: QsciScintillaBase, state: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: QsciScintillaBase, state: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn sizePolicy(self: QsciScintillaBase) QSizePolicy {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QsciScintillaBase, _sizePolicy: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QsciScintillaBase, horizontal: i32, vertical: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn visibleRegion(self: QsciScintillaBase) QRegion {
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
    pub fn setContentsMargins(self: QsciScintillaBase, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QsciScintillaBase, margins: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn contentsMargins(self: QsciScintillaBase) QMargins {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn contentsRect(self: QsciScintillaBase) QRect {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn layout(self: QsciScintillaBase) QLayout {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: QsciScintillaBase, _layout: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn updateGeometry(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: QsciScintillaBase, _parent: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: QsciScintillaBase, _parent: anytype, f: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: QsciScintillaBase, dx: i32, dy: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: QsciScintillaBase, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn focusWidget(self: QsciScintillaBase) QWidget {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn nextInFocusChain(self: QsciScintillaBase) QWidget {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn previousInFocusChain(self: QsciScintillaBase) QWidget {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn acceptDrops(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QsciScintillaBase, on: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: QsciScintillaBase, action: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QsciScintillaBase, _actions: []QAction) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QsciScintillaBase, before: anytype, _actions: []QAction) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: QsciScintillaBase, before: anytype, action: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: QsciScintillaBase, action: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: QsciScintillaBase, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QsciScintillaBase.actions: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction2(self: QsciScintillaBase, text: []const u8) QAction {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction3(self: QsciScintillaBase, icon: anytype, text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction3(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str) };
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: QsciScintillaBase, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: QsciScintillaBase, icon: anytype, text: []const u8, shortcut: anytype) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction5(@ptrCast(self.ptr), @ptrCast(icon.ptr), text_str, @ptrCast(shortcut.ptr)) };
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn parentWidget(self: QsciScintillaBase) QWidget {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: QsciScintillaBase, typeVal: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: QsciScintillaBase, param1: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: QsciScintillaBase, typeVal: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: QsciScintillaBase, _x: i32, _y: i32) QWidget {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: QsciScintillaBase, p: anytype) QWidget {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: QsciScintillaBase, p: anytype) QWidget {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: QsciScintillaBase, param1: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: QsciScintillaBase, param1: i32) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn ensurePolished(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: QsciScintillaBase, child: anytype) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn autoFillBackground(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: QsciScintillaBase, enabled: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn backingStore(self: QsciScintillaBase) QBackingStore {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn windowHandle(self: QsciScintillaBase) QWindow {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn screen(self: QsciScintillaBase) QScreen {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QsciScintillaBase, _screen: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QsciScintillaBase, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` icon: QIcon `
    ///
    pub fn windowIconChanged(self: QsciScintillaBase, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QIcon) callconv(.c) void) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: QsciScintillaBase, iconText: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: QsciScintillaBase, _pos: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QPoint) callconv(.c) void) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QsciScintillaBase) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QsciScintillaBase, hints: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: QsciScintillaBase, target: anytype, targetOffset: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        const target_ = if (@hasDecl(@TypeOf(target), "asQPaintDevice")) target.asQPaintDevice() else target;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        qtc.QWidget_Render22(@ptrCast(self.ptr), @ptrCast(target_.ptr), @ptrCast(targetOffset.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: QsciScintillaBase, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        const target_ = if (@hasDecl(@TypeOf(target), "asQPaintDevice")) target.asQPaintDevice() else target;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render3(@ptrCast(self.ptr), @ptrCast(target_.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr));
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
    pub fn render4(self: QsciScintillaBase, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        const target_ = if (@hasDecl(@TypeOf(target), "asQPaintDevice")) target.asQPaintDevice() else target;
        comptime _ = @TypeOf(targetOffset)._is_QPoint;
        comptime _ = @TypeOf(sourceRegion)._is_QRegion;
        qtc.QWidget_Render4(@ptrCast(self.ptr), @ptrCast(target_.ptr), @ptrCast(targetOffset.ptr), @ptrCast(sourceRegion.ptr), @bitCast(renderFlags));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: QsciScintillaBase, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: QsciScintillaBase, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn render42(self: QsciScintillaBase, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: QsciScintillaBase, rectangle: anytype) QPixmap {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QsciScintillaBase, typeVal: i32, flags: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: QsciScintillaBase, key: anytype, context: i32) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: QsciScintillaBase, id: i32, enable: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: QsciScintillaBase, id: i32, enable: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: QsciScintillaBase, param1: i32, on: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: QsciScintillaBase, param1: i32, on: bool) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QsciScintillaBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintillaBase.objectName: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QsciScintillaBase, name: []const u8) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isWidgetType(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isWindowType(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn isQuickItemType(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn signalsBlocked(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QsciScintillaBase, b: bool) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn thread(self: QsciScintillaBase) QThread {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QsciScintillaBase, _thread: anytype) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QsciScintillaBase, interval: i32) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QsciScintillaBase, time: i64) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QsciScintillaBase, id: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QsciScintillaBase, id: i32) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QsciScintillaBase, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QsciScintillaBase.children: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QsciScintillaBase, filterObj: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QsciScintillaBase, obj: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QsciScintillaBase, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn disconnect3(self: QsciScintillaBase) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QsciScintillaBase, receiver: anytype) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn dumpObjectTree(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn dumpObjectInfo(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QsciScintillaBase, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QsciScintillaBase, name: [:0]const u8) QVariant {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QsciScintillaBase, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QsciScintillaBase.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciScintillaBase.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn bindingStorage(self: QsciScintillaBase) QBindingStorage {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn bindingStorage2(self: QsciScintillaBase) QBindingStorage {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn destroyed(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase) callconv(.c) void) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn parent(self: QsciScintillaBase) QObject {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QsciScintillaBase, classname: [:0]const u8) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn deleteLater(self: QsciScintillaBase) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QsciScintillaBase, interval: i32, timerType: i32) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QsciScintillaBase, time: i64, timerType: i32) i32 {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QsciScintillaBase, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QsciScintillaBase, signal: [:0]const u8) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QsciScintillaBase, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QsciScintillaBase, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QsciScintillaBase, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QsciScintillaBase, param1: anytype) void {
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QObject) callconv(.c) void) void {
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn paintingActive(self: QsciScintillaBase) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn widthMM(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn heightMM(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn logicalDpiX(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn logicalDpiY(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn physicalDpiX(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn physicalDpiY(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn devicePixelRatio(self: QsciScintillaBase) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn devicePixelRatioF(self: QsciScintillaBase) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn colorCount(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.asQPaintDevice().ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn depth(self: QsciScintillaBase) i32 {
        return qtc.QPaintDevice_Depth(@ptrCast(self.asQPaintDevice().ptr));
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

    /// ### DEPRECATED: Use `minimumSizeHint` instead
    ///
    pub const MinimumSizeHint = minimumSizeHint;

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
    pub fn minimumSizeHint(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QsciScintillaBase_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMinimumSizeHint` instead
    ///
    pub const SuperMinimumSizeHint = superMinimumSizeHint;

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
    pub fn superMinimumSizeHint(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QsciScintillaBase_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSizeHint` instead
    ///
    pub const OnMinimumSizeHint = onMinimumSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: QsciScintillaBase, callback: *const fn () callconv(.c) QSize) void {
        qtc.QsciScintillaBase_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

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
    pub fn sizeHint(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QsciScintillaBase_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

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
    pub fn superSizeHint(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QsciScintillaBase_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QsciScintillaBase, callback: *const fn () callconv(.c) QSize) void {
        qtc.QsciScintillaBase_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setupViewport` instead
    ///
    pub const SetupViewport = setupViewport;

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
    /// ` _viewport: QWidget `
    ///
    pub fn setupViewport(self: QsciScintillaBase, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QsciScintillaBase_SetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
    }

    /// ### DEPRECATED: Use `superSetupViewport` instead
    ///
    pub const SuperSetupViewport = superSetupViewport;

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
    /// ` _viewport: QWidget `
    ///
    pub fn superSetupViewport(self: QsciScintillaBase, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QsciScintillaBase_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
    }

    /// ### DEPRECATED: Use `onSetupViewport` instead
    ///
    pub const OnSetupViewport = onSetupViewport;

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
    pub fn onSetupViewport(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QWidget) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    pub fn eventFilter(self: QsciScintillaBase, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QsciScintillaBase_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    pub fn superEventFilter(self: QsciScintillaBase, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QsciScintillaBase_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QObject, QEvent) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    pub fn event(self: QsciScintillaBase, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QsciScintillaBase_Event(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    pub fn superEvent(self: QsciScintillaBase, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QsciScintillaBase_SuperEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QEvent) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewportEvent` instead
    ///
    pub const ViewportEvent = viewportEvent;

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
    pub fn viewportEvent(self: QsciScintillaBase, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QsciScintillaBase_ViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superViewportEvent` instead
    ///
    pub const SuperViewportEvent = superViewportEvent;

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
    pub fn superViewportEvent(self: QsciScintillaBase, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QsciScintillaBase_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onViewportEvent` instead
    ///
    pub const OnViewportEvent = onViewportEvent;

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
    pub fn onViewportEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QEvent) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

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
    pub fn wheelEvent(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QsciScintillaBase_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

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
    pub fn superWheelEvent(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QsciScintillaBase_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

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
    pub fn onWheelEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QWheelEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewportSizeHint` instead
    ///
    pub const ViewportSizeHint = viewportSizeHint;

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
    pub fn viewportSizeHint(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QsciScintillaBase_ViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superViewportSizeHint` instead
    ///
    pub const SuperViewportSizeHint = superViewportSizeHint;

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
    pub fn superViewportSizeHint(self: QsciScintillaBase) QSize {
        return .{ .ptr = qtc.QsciScintillaBase_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onViewportSizeHint` instead
    ///
    pub const OnViewportSizeHint = onViewportSizeHint;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportSizeHint(self: QsciScintillaBase, callback: *const fn () callconv(.c) QSize) void {
        qtc.QsciScintillaBase_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initStyleOption` instead
    ///
    pub const InitStyleOption = initStyleOption;

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
    pub fn initStyleOption(self: QsciScintillaBase, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QsciScintillaBase_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `superInitStyleOption` instead
    ///
    pub const SuperInitStyleOption = superInitStyleOption;

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
    pub fn superInitStyleOption(self: QsciScintillaBase, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QsciScintillaBase_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `onInitStyleOption` instead
    ///
    pub const OnInitStyleOption = onInitStyleOption;

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
    pub fn onInitStyleOption(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn devType(self: QsciScintillaBase) i32 {
        return qtc.QsciScintillaBase_DevType(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn superDevType(self: QsciScintillaBase) i32 {
        return qtc.QsciScintillaBase_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QsciScintillaBase, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QsciScintillaBase, visible: bool) void {
        qtc.QsciScintillaBase_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: QsciScintillaBase, visible: bool) void {
        qtc.QsciScintillaBase_SuperSetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, bool) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QsciScintillaBase, param1: i32) i32 {
        return qtc.QsciScintillaBase_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QsciScintillaBase, param1: i32) i32 {
        return qtc.QsciScintillaBase_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32) callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn hasHeightForWidth(self: QsciScintillaBase) bool {
        return qtc.QsciScintillaBase_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn superHasHeightForWidth(self: QsciScintillaBase) bool {
        return qtc.QsciScintillaBase_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QsciScintillaBase, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn paintEngine(self: QsciScintillaBase) QPaintEngine {
        return .{ .ptr = qtc.QsciScintillaBase_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn superPaintEngine(self: QsciScintillaBase) QPaintEngine {
        return .{ .ptr = qtc.QsciScintillaBase_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QsciScintillaBase, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QsciScintillaBase_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QsciScintillaBase_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QsciScintillaBase_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QKeyEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QsciScintillaBase_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QsciScintillaBase_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QEnterEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciScintillaBase_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciScintillaBase_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QsciScintillaBase_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QsciScintillaBase_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMoveEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QsciScintillaBase_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QsciScintillaBase_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QCloseEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QsciScintillaBase_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QsciScintillaBase_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QTabletEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QsciScintillaBase_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QsciScintillaBase_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QActionEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QsciScintillaBase_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QsciScintillaBase_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QShowEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QsciScintillaBase_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QsciScintillaBase_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QHideEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: QsciScintillaBase, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QsciScintillaBase_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: QsciScintillaBase, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QsciScintillaBase_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QsciScintillaBase, param1: i32) i32 {
        return qtc.QsciScintillaBase_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QsciScintillaBase, param1: i32) i32 {
        return qtc.QsciScintillaBase_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32) callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QsciScintillaBase, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QsciScintillaBase_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QsciScintillaBase, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QsciScintillaBase_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QPainter) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QsciScintillaBase, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QsciScintillaBase_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QsciScintillaBase, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QsciScintillaBase_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QsciScintillaBase_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn sharedPainter(self: QsciScintillaBase) QPainter {
        return .{ .ptr = qtc.QsciScintillaBase_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn superSharedPainter(self: QsciScintillaBase) QPainter {
        return .{ .ptr = qtc.QsciScintillaBase_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QsciScintillaBase, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QsciScintillaBase_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciScintillaBase_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciScintillaBase_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QTimerEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciScintillaBase_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciScintillaBase_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QChildEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciScintillaBase_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QsciScintillaBase, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciScintillaBase_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QEvent) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QsciScintillaBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintillaBase_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QsciScintillaBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintillaBase_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMetaMethod) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QsciScintillaBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintillaBase_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QsciScintillaBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintillaBase_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMetaMethod) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setViewportMargins` instead
    ///
    pub const SetViewportMargins = setViewportMargins;

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
    pub fn setViewportMargins(self: QsciScintillaBase, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QsciScintillaBase_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `superSetViewportMargins` instead
    ///
    pub const SuperSetViewportMargins = superSetViewportMargins;

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
    pub fn superSetViewportMargins(self: QsciScintillaBase, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QsciScintillaBase_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// ### DEPRECATED: Use `onSetViewportMargins` instead
    ///
    pub const OnSetViewportMargins = onSetViewportMargins;

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
    pub fn onSetViewportMargins(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewportMargins` instead
    ///
    pub const ViewportMargins = viewportMargins;

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
    pub fn viewportMargins(self: QsciScintillaBase) QMargins {
        return .{ .ptr = qtc.QsciScintillaBase_ViewportMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superViewportMargins` instead
    ///
    pub const SuperViewportMargins = superViewportMargins;

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
    pub fn superViewportMargins(self: QsciScintillaBase) QMargins {
        return .{ .ptr = qtc.QsciScintillaBase_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onViewportMargins` instead
    ///
    pub const OnViewportMargins = onViewportMargins;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportMargins(self: QsciScintillaBase, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QsciScintillaBase_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawFrame` instead
    ///
    pub const DrawFrame = drawFrame;

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
    pub fn drawFrame(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QsciScintillaBase_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superDrawFrame` instead
    ///
    pub const SuperDrawFrame = superDrawFrame;

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
    pub fn superDrawFrame(self: QsciScintillaBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QsciScintillaBase_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onDrawFrame` instead
    ///
    pub const OnDrawFrame = onDrawFrame;

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
    pub fn onDrawFrame(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QPainter) callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn updateMicroFocus(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn superUpdateMicroFocus(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: QsciScintillaBase, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintillaBase_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn create(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_Create(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn superCreate(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: QsciScintillaBase, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintillaBase_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn destroy(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn superDestroy(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: QsciScintillaBase, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintillaBase_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn focusNextChild(self: QsciScintillaBase) bool {
        return qtc.QsciScintillaBase_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn superFocusNextChild(self: QsciScintillaBase) bool {
        return qtc.QsciScintillaBase_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: QsciScintillaBase, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn focusPreviousChild(self: QsciScintillaBase) bool {
        return qtc.QsciScintillaBase_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn superFocusPreviousChild(self: QsciScintillaBase) bool {
        return qtc.QsciScintillaBase_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: QsciScintillaBase, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn sender(self: QsciScintillaBase) QObject {
        return .{ .ptr = qtc.QsciScintillaBase_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn superSender(self: QsciScintillaBase) QObject {
        return .{ .ptr = qtc.QsciScintillaBase_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QsciScintillaBase, callback: *const fn () callconv(.c) QObject) void {
        qtc.QsciScintillaBase_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn senderSignalIndex(self: QsciScintillaBase) i32 {
        return qtc.QsciScintillaBase_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    pub fn superSenderSignalIndex(self: QsciScintillaBase) i32 {
        return qtc.QsciScintillaBase_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QsciScintillaBase, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QsciScintillaBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciScintillaBase_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QsciScintillaBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciScintillaBase_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, [*:0]const u8) callconv(.c) i32) void {
        qtc.QsciScintillaBase_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QsciScintillaBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciScintillaBase_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QsciScintillaBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciScintillaBase_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, QMetaMethod) callconv(.c) bool) void {
        qtc.QsciScintillaBase_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QsciScintillaBase, metricA: i32, metricB: i32) f64 {
        return qtc.QsciScintillaBase_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QsciScintillaBase, metricA: i32, metricB: i32) f64 {
        return qtc.QsciScintillaBase_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QsciScintillaBase`
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, i32, i32) callconv(.c) f64) void {
        qtc.QsciScintillaBase_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintillaBase `
    ///
    /// ` callback: *const fn (self: QsciScintillaBase, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QsciScintillaBase, callback: *const fn (QsciScintillaBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciScintillaBase `
    ///
    pub fn delete(self: QsciScintillaBase) void {
        qtc.QsciScintillaBase_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const QsciScintillaBase = enum {
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
