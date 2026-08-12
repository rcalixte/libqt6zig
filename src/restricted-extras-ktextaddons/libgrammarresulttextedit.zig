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
const QMimeData = @import("libqt6").QMimeData;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QMoveEvent = @import("libqt6").QMoveEvent;
const QObject = @import("libqt6").QObject;
const QPagedPaintDevice = @import("libqt6").QPagedPaintDevice;
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
const QRegularExpression = @import("libqt6").QRegularExpression;
const QResizeEvent = @import("libqt6").QResizeEvent;
const QScreen = @import("libqt6").QScreen;
const QScrollBar = @import("libqt6").QScrollBar;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QStyleOptionFrame = @import("libqt6").QStyleOptionFrame;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QTextCharFormat = @import("libqt6").QTextCharFormat;
const QTextCursor = @import("libqt6").QTextCursor;
const QTextDocument = @import("libqt6").QTextDocument;
const QTextEdit__ExtraSelection = @import("libqt6").QTextEdit__ExtraSelection;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const TextGrammarCheck__GrammarAction = @import("libqt6").TextGrammarCheck__GrammarAction;
const TextGrammarCheck__GrammarError = @import("libqt6").TextGrammarCheck__GrammarError;
const qabstractscrollarea_enums = @import("../libqabstractscrollarea.zig").enums;
const qframe_enums = @import("../libqframe.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qtextcursor_enums = @import("../libqtextcursor.zig").enums;
const qtextdocument_enums = @import("../libqtextdocument.zig").enums;
const qtextedit_enums = @import("../libqtextedit.zig").enums;
const qtextoption_enums = @import("../libqtextoption.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
pub const TextGrammarCheck__GrammarResultTextEdit = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextGrammarCheck__GrammarResultTextEdit,

    pub const _is_TextGrammarCheck__GrammarResultTextEdit = {};
    pub const _is_QTextEdit = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextGrammarCheck::GrammarResultTextEdit object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) TextGrammarCheck__GrammarResultTextEdit {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextGrammarCheck::GrammarResultTextEdit object in C++ memory
    ///
    pub fn new2() TextGrammarCheck__GrammarResultTextEdit {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_new2() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn metaObject(self: TextGrammarCheck__GrammarResultTextEdit) QMetaObject {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superMetaObject(self: TextGrammarCheck__GrammarResultTextEdit) QMetaObject {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: TextGrammarCheck__GrammarResultTextEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: TextGrammarCheck__GrammarResultTextEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: TextGrammarCheck__GrammarResultTextEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: TextGrammarCheck__GrammarResultTextEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `applyGrammarResult` instead
    ///
    pub const ApplyGrammarResult = applyGrammarResult;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` infos: []TextGrammarCheck__GrammarError `
    ///
    pub fn applyGrammarResult(self: TextGrammarCheck__GrammarResultTextEdit, infos: []TextGrammarCheck__GrammarError) void {
        const infos_list = qtc.libqt_list{
            .len = infos.len,
            .data = @ptrCast(infos.ptr),
        };
        qtc.TextGrammarCheck__GrammarResultTextEdit_ApplyGrammarResult(@ptrCast(self.ptr), infos_list);
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QContextMenuEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn onContextMenuEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QContextMenuEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QContextMenuEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QPaintEvent `
    ///
    pub fn paintEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_PaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn onPaintEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QPaintEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QPaintEvent `
    ///
    pub fn superPaintEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` ev: QEvent `
    ///
    pub fn event(self: TextGrammarCheck__GrammarResultTextEdit, ev: anytype) bool {
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_Event(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, ev: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QEvent) callconv(.c) bool) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` ev: QEvent `
    ///
    pub fn superEvent(self: TextGrammarCheck__GrammarResultTextEdit, ev: anytype) bool {
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `replaceText` instead
    ///
    pub const ReplaceText = replaceText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` act: TextGrammarCheck__GrammarAction `
    ///
    pub fn replaceText(self: TextGrammarCheck__GrammarResultTextEdit, act: anytype) void {
        comptime _ = @TypeOf(act)._is_TextGrammarCheck__GrammarAction;
        qtc.TextGrammarCheck__GrammarResultTextEdit_ReplaceText(@ptrCast(self.ptr), @ptrCast(act.ptr));
    }

    /// ### DEPRECATED: Use `onReplaceText` instead
    ///
    pub const OnReplaceText = onReplaceText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, act: TextGrammarCheck__GrammarAction) callconv(.c) void `
    ///
    pub fn onReplaceText(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, TextGrammarCheck__GrammarAction) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_Connect_ReplaceText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `checkAgain` instead
    ///
    pub const CheckAgain = checkAgain;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn checkAgain(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_CheckAgain(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCheckAgain` instead
    ///
    pub const OnCheckAgain = onCheckAgain;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void `
    ///
    pub fn onCheckAgain(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_Connect_CheckAgain(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeChecker` instead
    ///
    pub const CloseChecker = closeChecker;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn closeChecker(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_CloseChecker(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCloseChecker` instead
    ///
    pub const OnCloseChecker = onCloseChecker;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void `
    ///
    pub fn onCloseChecker(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_Connect_CloseChecker(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `configure` instead
    ///
    pub const Configure = configure;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn configure(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_Configure(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onConfigure` instead
    ///
    pub const OnConfigure = onConfigure;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void `
    ///
    pub fn onConfigure(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_Connect_Configure(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDocument` instead
    ///
    pub const SetDocument = setDocument;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _document: QTextDocument `
    ///
    pub fn setDocument(self: TextGrammarCheck__GrammarResultTextEdit, _document: anytype) void {
        comptime _ = @TypeOf(_document)._is_QTextDocument;
        qtc.QTextEdit_SetDocument(@ptrCast(self.ptr), @ptrCast(_document.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn document(self: TextGrammarCheck__GrammarResultTextEdit) QTextDocument {
        return .{ .ptr = qtc.QTextEdit_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPlaceholderText` instead
    ///
    pub const SetPlaceholderText = setPlaceholderText;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _placeholderText: []const u8 `
    ///
    pub fn setPlaceholderText(self: TextGrammarCheck__GrammarResultTextEdit, _placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = _placeholderText.len,
            .data = _placeholderText.ptr,
        };
        qtc.QTextEdit_SetPlaceholderText(@ptrCast(self.ptr), placeholderText_str);
    }

    /// ### DEPRECATED: Use `placeholderText` instead
    ///
    pub const PlaceholderText = placeholderText;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn placeholderText(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.placeholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTextCursor` instead
    ///
    pub const SetTextCursor = setTextCursor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn setTextCursor(self: TextGrammarCheck__GrammarResultTextEdit, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        qtc.QTextEdit_SetTextCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `textCursor` instead
    ///
    pub const TextCursor = textCursor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn textCursor(self: TextGrammarCheck__GrammarResultTextEdit) QTextCursor {
        return .{ .ptr = qtc.QTextEdit_TextCursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isReadOnly(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.QTextEdit_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` ro: bool `
    ///
    pub fn setReadOnly(self: TextGrammarCheck__GrammarResultTextEdit, ro: bool) void {
        qtc.QTextEdit_SetReadOnly(@ptrCast(self.ptr), ro);
    }

    /// ### DEPRECATED: Use `setTextInteractionFlags` instead
    ///
    pub const SetTextInteractionFlags = setTextInteractionFlags;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` flags: flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn setTextInteractionFlags(self: TextGrammarCheck__GrammarResultTextEdit, flags: i32) void {
        qtc.QTextEdit_SetTextInteractionFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `textInteractionFlags` instead
    ///
    pub const TextInteractionFlags = textInteractionFlags;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn textInteractionFlags(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.QTextEdit_TextInteractionFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fontPointSize` instead
    ///
    pub const FontPointSize = fontPointSize;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn fontPointSize(self: TextGrammarCheck__GrammarResultTextEdit) f64 {
        return qtc.QTextEdit_FontPointSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fontFamily` instead
    ///
    pub const FontFamily = fontFamily;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fontFamily(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_FontFamily(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.fontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fontWeight` instead
    ///
    pub const FontWeight = fontWeight;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn fontWeight(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.QTextEdit_FontWeight(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fontUnderline` instead
    ///
    pub const FontUnderline = fontUnderline;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn fontUnderline(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.QTextEdit_FontUnderline(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fontItalic` instead
    ///
    pub const FontItalic = fontItalic;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn fontItalic(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.QTextEdit_FontItalic(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textColor` instead
    ///
    pub const TextColor = textColor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn textColor(self: TextGrammarCheck__GrammarResultTextEdit) QColor {
        return .{ .ptr = qtc.QTextEdit_TextColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `textBackgroundColor` instead
    ///
    pub const TextBackgroundColor = textBackgroundColor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn textBackgroundColor(self: TextGrammarCheck__GrammarResultTextEdit) QColor {
        return .{ .ptr = qtc.QTextEdit_TextBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `currentFont` instead
    ///
    pub const CurrentFont = currentFont;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn currentFont(self: TextGrammarCheck__GrammarResultTextEdit) QFont {
        return .{ .ptr = qtc.QTextEdit_CurrentFont(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `alignment` instead
    ///
    pub const Alignment = alignment;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn alignment(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.QTextEdit_Alignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mergeCurrentCharFormat` instead
    ///
    pub const MergeCurrentCharFormat = mergeCurrentCharFormat;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` modifier: QTextCharFormat `
    ///
    pub fn mergeCurrentCharFormat(self: TextGrammarCheck__GrammarResultTextEdit, modifier: anytype) void {
        comptime _ = @TypeOf(modifier)._is_QTextCharFormat;
        qtc.QTextEdit_MergeCurrentCharFormat(@ptrCast(self.ptr), @ptrCast(modifier.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentCharFormat` instead
    ///
    pub const SetCurrentCharFormat = setCurrentCharFormat;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn setCurrentCharFormat(self: TextGrammarCheck__GrammarResultTextEdit, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QTextEdit_SetCurrentCharFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `currentCharFormat` instead
    ///
    pub const CurrentCharFormat = currentCharFormat;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn currentCharFormat(self: TextGrammarCheck__GrammarResultTextEdit) QTextCharFormat {
        return .{ .ptr = qtc.QTextEdit_CurrentCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `autoFormatting` instead
    ///
    pub const AutoFormatting = autoFormatting;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextedit_enums.AutoFormattingFlag `
    ///
    pub fn autoFormatting(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.QTextEdit_AutoFormatting(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoFormatting` instead
    ///
    pub const SetAutoFormatting = setAutoFormatting;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` features: flag of qtextedit_enums.AutoFormattingFlag `
    ///
    pub fn setAutoFormatting(self: TextGrammarCheck__GrammarResultTextEdit, features: i32) void {
        qtc.QTextEdit_SetAutoFormatting(@ptrCast(self.ptr), @bitCast(features));
    }

    /// ### DEPRECATED: Use `tabChangesFocus` instead
    ///
    pub const TabChangesFocus = tabChangesFocus;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn tabChangesFocus(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.QTextEdit_TabChangesFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabChangesFocus` instead
    ///
    pub const SetTabChangesFocus = setTabChangesFocus;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn setTabChangesFocus(self: TextGrammarCheck__GrammarResultTextEdit, b: bool) void {
        qtc.QTextEdit_SetTabChangesFocus(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setDocumentTitle` instead
    ///
    pub const SetDocumentTitle = setDocumentTitle;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setDocumentTitle(self: TextGrammarCheck__GrammarResultTextEdit, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QTextEdit_SetDocumentTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `documentTitle` instead
    ///
    pub const DocumentTitle = documentTitle;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn documentTitle(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_DocumentTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.documentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isUndoRedoEnabled` instead
    ///
    pub const IsUndoRedoEnabled = isUndoRedoEnabled;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isUndoRedoEnabled(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.QTextEdit_IsUndoRedoEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUndoRedoEnabled` instead
    ///
    pub const SetUndoRedoEnabled = setUndoRedoEnabled;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn setUndoRedoEnabled(self: TextGrammarCheck__GrammarResultTextEdit, enable: bool) void {
        qtc.QTextEdit_SetUndoRedoEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `lineWrapMode` instead
    ///
    pub const LineWrapMode = lineWrapMode;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qtextedit_enums.LineWrapMode `
    ///
    pub fn lineWrapMode(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.QTextEdit_LineWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineWrapMode` instead
    ///
    pub const SetLineWrapMode = setLineWrapMode;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` mode: qtextedit_enums.LineWrapMode `
    ///
    pub fn setLineWrapMode(self: TextGrammarCheck__GrammarResultTextEdit, mode: i32) void {
        qtc.QTextEdit_SetLineWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `lineWrapColumnOrWidth` instead
    ///
    pub const LineWrapColumnOrWidth = lineWrapColumnOrWidth;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn lineWrapColumnOrWidth(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.QTextEdit_LineWrapColumnOrWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineWrapColumnOrWidth` instead
    ///
    pub const SetLineWrapColumnOrWidth = setLineWrapColumnOrWidth;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn setLineWrapColumnOrWidth(self: TextGrammarCheck__GrammarResultTextEdit, w: i32) void {
        qtc.QTextEdit_SetLineWrapColumnOrWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `wordWrapMode` instead
    ///
    pub const WordWrapMode = wordWrapMode;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qtextoption_enums.WrapMode `
    ///
    pub fn wordWrapMode(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.QTextEdit_WordWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWordWrapMode` instead
    ///
    pub const SetWordWrapMode = setWordWrapMode;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` policy: qtextoption_enums.WrapMode `
    ///
    pub fn setWordWrapMode(self: TextGrammarCheck__GrammarResultTextEdit, policy: i32) void {
        qtc.QTextEdit_SetWordWrapMode(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` exp: []const u8 `
    ///
    pub fn find(self: TextGrammarCheck__GrammarResultTextEdit, exp: []const u8) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QTextEdit_Find(@ptrCast(self.ptr), exp_str);
    }

    /// ### DEPRECATED: Use `find2` instead
    ///
    pub const Find2 = find2;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` exp: QRegularExpression `
    ///
    pub fn find2(self: TextGrammarCheck__GrammarResultTextEdit, exp: anytype) bool {
        comptime _ = @TypeOf(exp)._is_QRegularExpression;
        return qtc.QTextEdit_Find2(@ptrCast(self.ptr), @ptrCast(exp.ptr));
    }

    /// ### DEPRECATED: Use `toPlainText` instead
    ///
    pub const ToPlainText = toPlainText;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toPlainText(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_ToPlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.toPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toHtml` instead
    ///
    pub const ToHtml = toHtml;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toHtml(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_ToHtml(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.toHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `toMarkdown` instead
    ///
    pub const ToMarkdown = toMarkdown;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toMarkdown(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_ToMarkdown(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.toMarkdown: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `ensureCursorVisible` instead
    ///
    pub const EnsureCursorVisible = ensureCursorVisible;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn ensureCursorVisible(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_EnsureCursorVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createStandardContextMenu` instead
    ///
    pub const CreateStandardContextMenu = createStandardContextMenu;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn createStandardContextMenu(self: TextGrammarCheck__GrammarResultTextEdit) QMenu {
        return .{ .ptr = qtc.QTextEdit_CreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createStandardContextMenu2` instead
    ///
    pub const CreateStandardContextMenu2 = createStandardContextMenu2;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` position: QPoint `
    ///
    pub fn createStandardContextMenu2(self: TextGrammarCheck__GrammarResultTextEdit, position: anytype) QMenu {
        comptime _ = @TypeOf(position)._is_QPoint;
        return .{ .ptr = qtc.QTextEdit_CreateStandardContextMenu2(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorForPosition` instead
    ///
    pub const CursorForPosition = cursorForPosition;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn cursorForPosition(self: TextGrammarCheck__GrammarResultTextEdit, _pos: anytype) QTextCursor {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        return .{ .ptr = qtc.QTextEdit_CursorForPosition(@ptrCast(self.ptr), @ptrCast(_pos.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorRect` instead
    ///
    pub const CursorRect = cursorRect;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn cursorRect(self: TextGrammarCheck__GrammarResultTextEdit, _cursor: anytype) QRect {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QTextEdit_CursorRect(@ptrCast(self.ptr), @ptrCast(_cursor.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorRect2` instead
    ///
    pub const CursorRect2 = cursorRect2;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn cursorRect2(self: TextGrammarCheck__GrammarResultTextEdit) QRect {
        return .{ .ptr = qtc.QTextEdit_CursorRect2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `anchorAt` instead
    ///
    pub const AnchorAt = anchorAt;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn anchorAt(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator, _pos: anytype) []const u8 {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        var _str = qtc.QTextEdit_AnchorAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.anchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `overwriteMode` instead
    ///
    pub const OverwriteMode = overwriteMode;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn overwriteMode(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.QTextEdit_OverwriteMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOverwriteMode` instead
    ///
    pub const SetOverwriteMode = setOverwriteMode;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` overwrite: bool `
    ///
    pub fn setOverwriteMode(self: TextGrammarCheck__GrammarResultTextEdit, overwrite: bool) void {
        qtc.QTextEdit_SetOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// ### DEPRECATED: Use `tabStopDistance` instead
    ///
    pub const TabStopDistance = tabStopDistance;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn tabStopDistance(self: TextGrammarCheck__GrammarResultTextEdit) f64 {
        return qtc.QTextEdit_TabStopDistance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabStopDistance` instead
    ///
    pub const SetTabStopDistance = setTabStopDistance;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` distance: f64 `
    ///
    pub fn setTabStopDistance(self: TextGrammarCheck__GrammarResultTextEdit, distance: f64) void {
        qtc.QTextEdit_SetTabStopDistance(@ptrCast(self.ptr), @bitCast(distance));
    }

    /// ### DEPRECATED: Use `cursorWidth` instead
    ///
    pub const CursorWidth = cursorWidth;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn cursorWidth(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.QTextEdit_CursorWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorWidth` instead
    ///
    pub const SetCursorWidth = setCursorWidth;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _width: i32 `
    ///
    pub fn setCursorWidth(self: TextGrammarCheck__GrammarResultTextEdit, _width: i32) void {
        qtc.QTextEdit_SetCursorWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `acceptRichText` instead
    ///
    pub const AcceptRichText = acceptRichText;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn acceptRichText(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.QTextEdit_AcceptRichText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAcceptRichText` instead
    ///
    pub const SetAcceptRichText = setAcceptRichText;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` accept: bool `
    ///
    pub fn setAcceptRichText(self: TextGrammarCheck__GrammarResultTextEdit, accept: bool) void {
        qtc.QTextEdit_SetAcceptRichText(@ptrCast(self.ptr), accept);
    }

    /// ### DEPRECATED: Use `setExtraSelections` instead
    ///
    pub const SetExtraSelections = setExtraSelections;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` selections: []QTextEdit__ExtraSelection `
    ///
    pub fn setExtraSelections(self: TextGrammarCheck__GrammarResultTextEdit, selections: []QTextEdit__ExtraSelection) void {
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QTextEdit_SetExtraSelections(@ptrCast(self.ptr), selections_list);
    }

    /// ### DEPRECATED: Use `extraSelections` instead
    ///
    pub const ExtraSelections = extraSelections;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extraSelections(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []QTextEdit__ExtraSelection {
        const _arr: qtc.libqt_list = qtc.QTextEdit_ExtraSelections(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextEdit__ExtraSelection, _arr.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.extraSelections: Memory allocation failed");
        const _data_val: [*]QtC.QTextEdit__ExtraSelection = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `moveCursor` instead
    ///
    pub const MoveCursor = moveCursor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    pub fn moveCursor(self: TextGrammarCheck__GrammarResultTextEdit, operation: i32) void {
        qtc.QTextEdit_MoveCursor(@ptrCast(self.ptr), @bitCast(operation));
    }

    /// ### DEPRECATED: Use `canPaste` instead
    ///
    pub const CanPaste = canPaste;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn canPaste(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.QTextEdit_CanPaste(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `print` instead
    ///
    pub const Print = print;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` printer: QPagedPaintDevice `
    ///
    pub fn print(self: TextGrammarCheck__GrammarResultTextEdit, printer: anytype) void {
        comptime _ = @TypeOf(printer)._is_QPagedPaintDevice;
        qtc.QTextEdit_Print(@ptrCast(self.ptr), @ptrCast(printer.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodQuery2` instead
    ///
    pub const InputMethodQuery2 = inputMethodQuery2;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn inputMethodQuery2(self: TextGrammarCheck__GrammarResultTextEdit, query: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QTextEdit_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(query), @ptrCast(argument.ptr)) };
    }

    /// ### DEPRECATED: Use `setFontPointSize` instead
    ///
    pub const SetFontPointSize = setFontPointSize;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` s: f64 `
    ///
    pub fn setFontPointSize(self: TextGrammarCheck__GrammarResultTextEdit, s: f64) void {
        qtc.QTextEdit_SetFontPointSize(@ptrCast(self.ptr), @bitCast(s));
    }

    /// ### DEPRECATED: Use `setFontFamily` instead
    ///
    pub const SetFontFamily = setFontFamily;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _fontFamily: []const u8 `
    ///
    pub fn setFontFamily(self: TextGrammarCheck__GrammarResultTextEdit, _fontFamily: []const u8) void {
        const fontFamily_str = qtc.libqt_string{
            .len = _fontFamily.len,
            .data = _fontFamily.ptr,
        };
        qtc.QTextEdit_SetFontFamily(@ptrCast(self.ptr), fontFamily_str);
    }

    /// ### DEPRECATED: Use `setFontWeight` instead
    ///
    pub const SetFontWeight = setFontWeight;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn setFontWeight(self: TextGrammarCheck__GrammarResultTextEdit, w: i32) void {
        qtc.QTextEdit_SetFontWeight(@ptrCast(self.ptr), @bitCast(w));
    }

    /// ### DEPRECATED: Use `setFontUnderline` instead
    ///
    pub const SetFontUnderline = setFontUnderline;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn setFontUnderline(self: TextGrammarCheck__GrammarResultTextEdit, b: bool) void {
        qtc.QTextEdit_SetFontUnderline(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setFontItalic` instead
    ///
    pub const SetFontItalic = setFontItalic;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn setFontItalic(self: TextGrammarCheck__GrammarResultTextEdit, b: bool) void {
        qtc.QTextEdit_SetFontItalic(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setTextColor` instead
    ///
    pub const SetTextColor = setTextColor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` c: QColor `
    ///
    pub fn setTextColor(self: TextGrammarCheck__GrammarResultTextEdit, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QTextEdit_SetTextColor(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `setTextBackgroundColor` instead
    ///
    pub const SetTextBackgroundColor = setTextBackgroundColor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` c: QColor `
    ///
    pub fn setTextBackgroundColor(self: TextGrammarCheck__GrammarResultTextEdit, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QTextEdit_SetTextBackgroundColor(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentFont` instead
    ///
    pub const SetCurrentFont = setCurrentFont;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` f: QFont `
    ///
    pub fn setCurrentFont(self: TextGrammarCheck__GrammarResultTextEdit, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QTextEdit_SetCurrentFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### DEPRECATED: Use `setAlignment` instead
    ///
    pub const SetAlignment = setAlignment;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` a: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setAlignment(self: TextGrammarCheck__GrammarResultTextEdit, a: i32) void {
        qtc.QTextEdit_SetAlignment(@ptrCast(self.ptr), @bitCast(a));
    }

    /// ### DEPRECATED: Use `setPlainText` instead
    ///
    pub const SetPlainText = setPlainText;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setPlainText(self: TextGrammarCheck__GrammarResultTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_SetPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `setHtml` instead
    ///
    pub const SetHtml = setHtml;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setHtml(self: TextGrammarCheck__GrammarResultTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_SetHtml(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `setMarkdown` instead
    ///
    pub const SetMarkdown = setMarkdown;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` markdown: []const u8 `
    ///
    pub fn setMarkdown(self: TextGrammarCheck__GrammarResultTextEdit, markdown: []const u8) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextEdit_SetMarkdown(@ptrCast(self.ptr), markdown_str);
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setText(self: TextGrammarCheck__GrammarResultTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `cut` instead
    ///
    pub const Cut = cut;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn cut(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_Cut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copy` instead
    ///
    pub const Copy = copy;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn copy(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_Copy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paste` instead
    ///
    pub const Paste = paste;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn paste(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_Paste(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `undo` instead
    ///
    pub const Undo = undo;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn undo(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_Undo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `redo` instead
    ///
    pub const Redo = redo;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn redo(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_Redo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn clear(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectAll` instead
    ///
    pub const SelectAll = selectAll;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn selectAll(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_SelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertPlainText` instead
    ///
    pub const InsertPlainText = insertPlainText;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn insertPlainText(self: TextGrammarCheck__GrammarResultTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_InsertPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `insertHtml` instead
    ///
    pub const InsertHtml = insertHtml;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn insertHtml(self: TextGrammarCheck__GrammarResultTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_InsertHtml(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn append(self: TextGrammarCheck__GrammarResultTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_Append(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `scrollToAnchor` instead
    ///
    pub const ScrollToAnchor = scrollToAnchor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn scrollToAnchor(self: TextGrammarCheck__GrammarResultTextEdit, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextEdit_ScrollToAnchor(@ptrCast(self.ptr), name_str);
    }

    /// ### DEPRECATED: Use `zoomIn` instead
    ///
    pub const ZoomIn = zoomIn;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn zoomIn(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_ZoomIn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomOut` instead
    ///
    pub const ZoomOut = zoomOut;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn zoomOut(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_ZoomOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textChanged` instead
    ///
    pub const TextChanged = textChanged;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn textChanged(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_TextChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTextChanged` instead
    ///
    pub const OnTextChanged = onTextChanged;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void `
    ///
    pub fn onTextChanged(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void) void {
        qtc.QTextEdit_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `undoAvailable` instead
    ///
    pub const UndoAvailable = undoAvailable;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn undoAvailable(self: TextGrammarCheck__GrammarResultTextEdit, b: bool) void {
        qtc.QTextEdit_UndoAvailable(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onUndoAvailable` instead
    ///
    pub const OnUndoAvailable = onUndoAvailable;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn onUndoAvailable(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_UndoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redoAvailable` instead
    ///
    pub const RedoAvailable = redoAvailable;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn redoAvailable(self: TextGrammarCheck__GrammarResultTextEdit, b: bool) void {
        qtc.QTextEdit_RedoAvailable(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onRedoAvailable` instead
    ///
    pub const OnRedoAvailable = onRedoAvailable;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn onRedoAvailable(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_RedoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentCharFormatChanged` instead
    ///
    pub const CurrentCharFormatChanged = currentCharFormatChanged;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn currentCharFormatChanged(self: TextGrammarCheck__GrammarResultTextEdit, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QTextEdit_CurrentCharFormatChanged(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentCharFormatChanged` instead
    ///
    pub const OnCurrentCharFormatChanged = onCurrentCharFormatChanged;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, format: QTextCharFormat) callconv(.c) void `
    ///
    pub fn onCurrentCharFormatChanged(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QTextCharFormat) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CurrentCharFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `copyAvailable` instead
    ///
    pub const CopyAvailable = copyAvailable;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn copyAvailable(self: TextGrammarCheck__GrammarResultTextEdit, b: bool) void {
        qtc.QTextEdit_CopyAvailable(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onCopyAvailable` instead
    ///
    pub const OnCopyAvailable = onCopyAvailable;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn onCopyAvailable(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CopyAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn selectionChanged(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void `
    ///
    pub fn onSelectionChanged(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void) void {
        qtc.QTextEdit_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cursorPositionChanged` instead
    ///
    pub const CursorPositionChanged = cursorPositionChanged;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn cursorPositionChanged(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.QTextEdit_CursorPositionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCursorPositionChanged` instead
    ///
    pub const OnCursorPositionChanged = onCursorPositionChanged;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void `
    ///
    pub fn onCursorPositionChanged(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `find22` instead
    ///
    pub const Find22 = find22;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` exp: []const u8 `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn find22(self: TextGrammarCheck__GrammarResultTextEdit, exp: []const u8, options: i32) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QTextEdit_Find22(@ptrCast(self.ptr), exp_str, @bitCast(options));
    }

    /// ### DEPRECATED: Use `find23` instead
    ///
    pub const Find23 = find23;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` exp: QRegularExpression `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn find23(self: TextGrammarCheck__GrammarResultTextEdit, exp: anytype, options: i32) bool {
        comptime _ = @TypeOf(exp)._is_QRegularExpression;
        return qtc.QTextEdit_Find23(@ptrCast(self.ptr), @ptrCast(exp.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `toMarkdown1` instead
    ///
    pub const ToMarkdown1 = toMarkdown1;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` features: flag of qtextdocument_enums.MarkdownFeature `
    ///
    pub fn toMarkdown1(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator, features: i32) []const u8 {
        var _str = qtc.QTextEdit_ToMarkdown1(@ptrCast(self.ptr), @bitCast(features));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.toMarkdown1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `moveCursor2` instead
    ///
    pub const MoveCursor2 = moveCursor2;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    /// ` mode: qtextcursor_enums.MoveMode `
    ///
    pub fn moveCursor2(self: TextGrammarCheck__GrammarResultTextEdit, operation: i32, mode: i32) void {
        qtc.QTextEdit_MoveCursor2(@ptrCast(self.ptr), @bitCast(operation), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `zoomIn1` instead
    ///
    pub const ZoomIn1 = zoomIn1;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` range: i32 `
    ///
    pub fn zoomIn1(self: TextGrammarCheck__GrammarResultTextEdit, range: i32) void {
        qtc.QTextEdit_ZoomIn1(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `zoomOut1` instead
    ///
    pub const ZoomOut1 = zoomOut1;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` range: i32 `
    ///
    pub fn zoomOut1(self: TextGrammarCheck__GrammarResultTextEdit, range: i32) void {
        qtc.QTextEdit_ZoomOut1(@ptrCast(self.ptr), @bitCast(range));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn verticalScrollBarPolicy(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setVerticalScrollBarPolicy(self: TextGrammarCheck__GrammarResultTextEdit, _verticalScrollBarPolicy: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn verticalScrollBar(self: TextGrammarCheck__GrammarResultTextEdit) QScrollBar {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setVerticalScrollBar(self: TextGrammarCheck__GrammarResultTextEdit, scrollbar: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn horizontalScrollBarPolicy(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setHorizontalScrollBarPolicy(self: TextGrammarCheck__GrammarResultTextEdit, _horizontalScrollBarPolicy: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn horizontalScrollBar(self: TextGrammarCheck__GrammarResultTextEdit) QScrollBar {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setHorizontalScrollBar(self: TextGrammarCheck__GrammarResultTextEdit, scrollbar: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn cornerWidget(self: TextGrammarCheck__GrammarResultTextEdit) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setCornerWidget(self: TextGrammarCheck__GrammarResultTextEdit, widget: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` widget: QWidget `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn addScrollBarWidget(self: TextGrammarCheck__GrammarResultTextEdit, widget: anytype, _alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(_alignment));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn scrollBarWidgets(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator, _alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(_alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.scrollBarWidgets: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn viewport(self: TextGrammarCheck__GrammarResultTextEdit) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setViewport(self: TextGrammarCheck__GrammarResultTextEdit, widget: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn maximumViewportSize(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn sizeAdjustPolicy(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn setSizeAdjustPolicy(self: TextGrammarCheck__GrammarResultTextEdit, policy: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn frameStyle(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _frameStyle: i32 `
    ///
    pub fn setFrameStyle(self: TextGrammarCheck__GrammarResultTextEdit, _frameStyle: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn frameWidth(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn frameShape(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _frameShape: qframe_enums.Shape `
    ///
    pub fn setFrameShape(self: TextGrammarCheck__GrammarResultTextEdit, _frameShape: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn frameShadow(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _frameShadow: qframe_enums.Shadow `
    ///
    pub fn setFrameShadow(self: TextGrammarCheck__GrammarResultTextEdit, _frameShadow: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn lineWidth(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: TextGrammarCheck__GrammarResultTextEdit, _lineWidth: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn midLineWidth(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: TextGrammarCheck__GrammarResultTextEdit, _midLineWidth: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn frameRect(self: TextGrammarCheck__GrammarResultTextEdit) QRect {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _frameRect: QRect `
    ///
    pub fn setFrameRect(self: TextGrammarCheck__GrammarResultTextEdit, _frameRect: anytype) void {
        comptime _ = @TypeOf(_frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(_frameRect.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn winId(self: TextGrammarCheck__GrammarResultTextEdit) usize {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn createWinId(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn internalWinId(self: TextGrammarCheck__GrammarResultTextEdit) usize {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn effectiveWinId(self: TextGrammarCheck__GrammarResultTextEdit) usize {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn style(self: TextGrammarCheck__GrammarResultTextEdit) QStyle {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: TextGrammarCheck__GrammarResultTextEdit, _style: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isTopLevel(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isWindow(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isModal(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: TextGrammarCheck__GrammarResultTextEdit, _windowModality: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isEnabled(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: TextGrammarCheck__GrammarResultTextEdit, enabled: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: TextGrammarCheck__GrammarResultTextEdit, disabled: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: TextGrammarCheck__GrammarResultTextEdit, windowModified: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn frameGeometry(self: TextGrammarCheck__GrammarResultTextEdit) QRect {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn geometry(self: TextGrammarCheck__GrammarResultTextEdit) QRect {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn normalGeometry(self: TextGrammarCheck__GrammarResultTextEdit) QRect {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn x(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn y(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn pos(self: TextGrammarCheck__GrammarResultTextEdit) QPoint {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn frameSize(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn size(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn width(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn height(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn rect(self: TextGrammarCheck__GrammarResultTextEdit) QRect {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn childrenRect(self: TextGrammarCheck__GrammarResultTextEdit) QRect {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn childrenRegion(self: TextGrammarCheck__GrammarResultTextEdit) QRegion {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn minimumSize(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn maximumSize(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn minimumWidth(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn minimumHeight(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn maximumWidth(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn maximumHeight(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: TextGrammarCheck__GrammarResultTextEdit, _minimumSize: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: TextGrammarCheck__GrammarResultTextEdit, minw: i32, minh: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: TextGrammarCheck__GrammarResultTextEdit, _maximumSize: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: TextGrammarCheck__GrammarResultTextEdit, maxw: i32, maxh: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: TextGrammarCheck__GrammarResultTextEdit, minw: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: TextGrammarCheck__GrammarResultTextEdit, minh: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: TextGrammarCheck__GrammarResultTextEdit, maxw: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: TextGrammarCheck__GrammarResultTextEdit, maxh: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn sizeIncrement(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: TextGrammarCheck__GrammarResultTextEdit, _sizeIncrement: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: TextGrammarCheck__GrammarResultTextEdit, w: i32, h: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn baseSize(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: TextGrammarCheck__GrammarResultTextEdit, _baseSize: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: TextGrammarCheck__GrammarResultTextEdit, basew: i32, baseh: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: TextGrammarCheck__GrammarResultTextEdit, fixedSize: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: TextGrammarCheck__GrammarResultTextEdit, w: i32, h: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: TextGrammarCheck__GrammarResultTextEdit, w: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: TextGrammarCheck__GrammarResultTextEdit, h: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) QPointF {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) QPoint {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) QPointF {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) QPoint {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) QPointF {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) QPoint {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) QPointF {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) QPoint {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn window(self: TextGrammarCheck__GrammarResultTextEdit) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn nativeParentWidget(self: TextGrammarCheck__GrammarResultTextEdit) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn topLevelWidget(self: TextGrammarCheck__GrammarResultTextEdit) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn palette(self: TextGrammarCheck__GrammarResultTextEdit) QPalette {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: TextGrammarCheck__GrammarResultTextEdit, _palette: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: TextGrammarCheck__GrammarResultTextEdit, _backgroundRole: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: TextGrammarCheck__GrammarResultTextEdit, _foregroundRole: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn font(self: TextGrammarCheck__GrammarResultTextEdit) QFont {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: TextGrammarCheck__GrammarResultTextEdit, _font: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn fontMetrics(self: TextGrammarCheck__GrammarResultTextEdit) QFontMetrics {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn fontInfo(self: TextGrammarCheck__GrammarResultTextEdit) QFontInfo {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn cursor(self: TextGrammarCheck__GrammarResultTextEdit) QCursor {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: TextGrammarCheck__GrammarResultTextEdit, _cursor: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn unsetCursor(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: TextGrammarCheck__GrammarResultTextEdit, enable: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn hasMouseTracking(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn underMouse(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: TextGrammarCheck__GrammarResultTextEdit, enable: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn hasTabletTracking(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: TextGrammarCheck__GrammarResultTextEdit, _mask: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: TextGrammarCheck__GrammarResultTextEdit, _mask: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn mask(self: TextGrammarCheck__GrammarResultTextEdit) QRegion {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn clearMask(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: TextGrammarCheck__GrammarResultTextEdit, target: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: TextGrammarCheck__GrammarResultTextEdit, painter: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn grab(self: TextGrammarCheck__GrammarResultTextEdit) QPixmap {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn graphicsEffect(self: TextGrammarCheck__GrammarResultTextEdit) QGraphicsEffect {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: TextGrammarCheck__GrammarResultTextEdit, effect: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: TextGrammarCheck__GrammarResultTextEdit, typeVal: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: TextGrammarCheck__GrammarResultTextEdit, typeVal: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: TextGrammarCheck__GrammarResultTextEdit, _windowTitle: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: TextGrammarCheck__GrammarResultTextEdit, _styleSheet: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.styleSheet: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.windowTitle: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(self: TextGrammarCheck__GrammarResultTextEdit, icon: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn windowIcon(self: TextGrammarCheck__GrammarResultTextEdit) QIcon {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: TextGrammarCheck__GrammarResultTextEdit, _windowIconText: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.windowIconText: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: TextGrammarCheck__GrammarResultTextEdit, _windowRole: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.windowRole: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: TextGrammarCheck__GrammarResultTextEdit, filePath: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.windowFilePath: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: TextGrammarCheck__GrammarResultTextEdit, level: f64) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn windowOpacity(self: TextGrammarCheck__GrammarResultTextEdit) f64 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isWindowModified(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: TextGrammarCheck__GrammarResultTextEdit, _toolTip: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.toolTip: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: TextGrammarCheck__GrammarResultTextEdit, msec: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn toolTipDuration(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: TextGrammarCheck__GrammarResultTextEdit, _statusTip: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.statusTip: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: TextGrammarCheck__GrammarResultTextEdit, _whatsThis: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.whatsThis: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.accessibleName: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: TextGrammarCheck__GrammarResultTextEdit, name: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.accessibleDescription: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: TextGrammarCheck__GrammarResultTextEdit, description: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: TextGrammarCheck__GrammarResultTextEdit, direction: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn unsetLayoutDirection(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: TextGrammarCheck__GrammarResultTextEdit, _locale: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn locale(self: TextGrammarCheck__GrammarResultTextEdit) QLocale {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn unsetLocale(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isRightToLeft(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isLeftToRight(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn setFocus(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isActiveWindow(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn activateWindow(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn clearFocus(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: TextGrammarCheck__GrammarResultTextEdit, reason: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: TextGrammarCheck__GrammarResultTextEdit, policy: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn hasFocus(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: TextGrammarCheck__GrammarResultTextEdit, _focusProxy: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn focusProxy(self: TextGrammarCheck__GrammarResultTextEdit) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: TextGrammarCheck__GrammarResultTextEdit, policy: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn grabMouse(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn releaseMouse(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn grabKeyboard(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn releaseKeyboard(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: TextGrammarCheck__GrammarResultTextEdit, key: anytype) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: TextGrammarCheck__GrammarResultTextEdit, id: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: TextGrammarCheck__GrammarResultTextEdit, id: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: TextGrammarCheck__GrammarResultTextEdit, id: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn updatesEnabled(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: TextGrammarCheck__GrammarResultTextEdit, enable: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn graphicsProxyWidget(self: TextGrammarCheck__GrammarResultTextEdit) QGraphicsProxyWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn update(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn repaint(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: TextGrammarCheck__GrammarResultTextEdit, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: TextGrammarCheck__GrammarResultTextEdit, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: TextGrammarCheck__GrammarResultTextEdit, hidden: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn show(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn hide(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn showMinimized(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn showMaximized(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn showFullScreen(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn showNormal(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn close(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn raise(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn lower(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: TextGrammarCheck__GrammarResultTextEdit, _x: i32, _y: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: TextGrammarCheck__GrammarResultTextEdit, w: i32, h: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: TextGrammarCheck__GrammarResultTextEdit, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: TextGrammarCheck__GrammarResultTextEdit, _geometry: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.saveGeometry: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: TextGrammarCheck__GrammarResultTextEdit, _geometry: []u8) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn adjustSize(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isVisible(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isHidden(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isMinimized(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isMaximized(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isFullScreen(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: TextGrammarCheck__GrammarResultTextEdit, state: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: TextGrammarCheck__GrammarResultTextEdit, state: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn sizePolicy(self: TextGrammarCheck__GrammarResultTextEdit) QSizePolicy {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: TextGrammarCheck__GrammarResultTextEdit, _sizePolicy: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: TextGrammarCheck__GrammarResultTextEdit, horizontal: i32, vertical: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn visibleRegion(self: TextGrammarCheck__GrammarResultTextEdit) QRegion {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: TextGrammarCheck__GrammarResultTextEdit, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: TextGrammarCheck__GrammarResultTextEdit, margins: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn contentsMargins(self: TextGrammarCheck__GrammarResultTextEdit) QMargins {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn contentsRect(self: TextGrammarCheck__GrammarResultTextEdit) QRect {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn layout(self: TextGrammarCheck__GrammarResultTextEdit) QLayout {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: TextGrammarCheck__GrammarResultTextEdit, _layout: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn updateGeometry(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: TextGrammarCheck__GrammarResultTextEdit, _parent: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: TextGrammarCheck__GrammarResultTextEdit, _parent: anytype, f: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: TextGrammarCheck__GrammarResultTextEdit, dx: i32, dy: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: TextGrammarCheck__GrammarResultTextEdit, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn focusWidget(self: TextGrammarCheck__GrammarResultTextEdit) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn nextInFocusChain(self: TextGrammarCheck__GrammarResultTextEdit) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn previousInFocusChain(self: TextGrammarCheck__GrammarResultTextEdit) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn acceptDrops(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: TextGrammarCheck__GrammarResultTextEdit, on: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: TextGrammarCheck__GrammarResultTextEdit, action: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: TextGrammarCheck__GrammarResultTextEdit, _actions: []QAction) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: TextGrammarCheck__GrammarResultTextEdit, before: anytype, _actions: []QAction) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: TextGrammarCheck__GrammarResultTextEdit, before: anytype, action: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: TextGrammarCheck__GrammarResultTextEdit, action: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.actions: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction2(self: TextGrammarCheck__GrammarResultTextEdit, text: []const u8) QAction {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction3(self: TextGrammarCheck__GrammarResultTextEdit, icon: anytype, text: []const u8) QAction {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: TextGrammarCheck__GrammarResultTextEdit, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: TextGrammarCheck__GrammarResultTextEdit, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn parentWidget(self: TextGrammarCheck__GrammarResultTextEdit) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: TextGrammarCheck__GrammarResultTextEdit, typeVal: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: TextGrammarCheck__GrammarResultTextEdit, param1: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: TextGrammarCheck__GrammarResultTextEdit, typeVal: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: TextGrammarCheck__GrammarResultTextEdit, _x: i32, _y: i32) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: TextGrammarCheck__GrammarResultTextEdit, p: anytype) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: TextGrammarCheck__GrammarResultTextEdit, p: anytype) QWidget {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: TextGrammarCheck__GrammarResultTextEdit, param1: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: TextGrammarCheck__GrammarResultTextEdit, param1: i32) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn ensurePolished(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: TextGrammarCheck__GrammarResultTextEdit, child: anytype) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn autoFillBackground(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: TextGrammarCheck__GrammarResultTextEdit, enabled: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn backingStore(self: TextGrammarCheck__GrammarResultTextEdit) QBackingStore {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn windowHandle(self: TextGrammarCheck__GrammarResultTextEdit) QWindow {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn screen(self: TextGrammarCheck__GrammarResultTextEdit) QScreen {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: TextGrammarCheck__GrammarResultTextEdit, _screen: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: TextGrammarCheck__GrammarResultTextEdit, title: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn windowIconChanged(self: TextGrammarCheck__GrammarResultTextEdit, icon: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QIcon) callconv(.c) void) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: TextGrammarCheck__GrammarResultTextEdit, iconText: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: TextGrammarCheck__GrammarResultTextEdit, _pos: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QPoint) callconv(.c) void) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: TextGrammarCheck__GrammarResultTextEdit, hints: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: TextGrammarCheck__GrammarResultTextEdit, target: anytype, targetOffset: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: TextGrammarCheck__GrammarResultTextEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render4(self: TextGrammarCheck__GrammarResultTextEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: TextGrammarCheck__GrammarResultTextEdit, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: TextGrammarCheck__GrammarResultTextEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render42(self: TextGrammarCheck__GrammarResultTextEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: TextGrammarCheck__GrammarResultTextEdit, rectangle: anytype) QPixmap {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: TextGrammarCheck__GrammarResultTextEdit, typeVal: i32, flags: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: TextGrammarCheck__GrammarResultTextEdit, key: anytype, context: i32) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: TextGrammarCheck__GrammarResultTextEdit, id: i32, enable: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: TextGrammarCheck__GrammarResultTextEdit, id: i32, enable: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: TextGrammarCheck__GrammarResultTextEdit, param1: i32, on: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: TextGrammarCheck__GrammarResultTextEdit, param1: i32, on: bool) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.objectName: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: TextGrammarCheck__GrammarResultTextEdit, name: []const u8) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isWidgetType(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isWindowType(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn isQuickItemType(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn signalsBlocked(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: TextGrammarCheck__GrammarResultTextEdit, b: bool) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn thread(self: TextGrammarCheck__GrammarResultTextEdit) QThread {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: TextGrammarCheck__GrammarResultTextEdit, _thread: anytype) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: TextGrammarCheck__GrammarResultTextEdit, interval: i32) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: TextGrammarCheck__GrammarResultTextEdit, time: i64) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: TextGrammarCheck__GrammarResultTextEdit, id: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: TextGrammarCheck__GrammarResultTextEdit, id: i32) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.children: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: TextGrammarCheck__GrammarResultTextEdit, filterObj: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: TextGrammarCheck__GrammarResultTextEdit, obj: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: TextGrammarCheck__GrammarResultTextEdit, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn disconnect3(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: TextGrammarCheck__GrammarResultTextEdit, receiver: anytype) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn dumpObjectTree(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn dumpObjectInfo(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: TextGrammarCheck__GrammarResultTextEdit, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: TextGrammarCheck__GrammarResultTextEdit, name: [:0]const u8) QVariant {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: TextGrammarCheck__GrammarResultTextEdit, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextGrammarCheck__GrammarResultTextEdit.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn bindingStorage(self: TextGrammarCheck__GrammarResultTextEdit) QBindingStorage {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn bindingStorage2(self: TextGrammarCheck__GrammarResultTextEdit) QBindingStorage {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn destroyed(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void `
    ///
    pub fn onDestroyed(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit) callconv(.c) void) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn parent(self: TextGrammarCheck__GrammarResultTextEdit) QObject {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: TextGrammarCheck__GrammarResultTextEdit, classname: [:0]const u8) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn deleteLater(self: TextGrammarCheck__GrammarResultTextEdit) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: TextGrammarCheck__GrammarResultTextEdit, interval: i32, timerType: i32) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: TextGrammarCheck__GrammarResultTextEdit, time: i64, timerType: i32) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: TextGrammarCheck__GrammarResultTextEdit, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: TextGrammarCheck__GrammarResultTextEdit, signal: [:0]const u8) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: TextGrammarCheck__GrammarResultTextEdit, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: TextGrammarCheck__GrammarResultTextEdit, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: TextGrammarCheck__GrammarResultTextEdit, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QObject) callconv(.c) void) void {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn paintingActive(self: TextGrammarCheck__GrammarResultTextEdit) bool {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn widthMM(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn heightMM(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn logicalDpiX(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn logicalDpiY(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn physicalDpiX(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn physicalDpiY(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn devicePixelRatio(self: TextGrammarCheck__GrammarResultTextEdit) f64 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn devicePixelRatioF(self: TextGrammarCheck__GrammarResultTextEdit) f64 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn colorCount(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn depth(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
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

    /// ### DEPRECATED: Use `loadResource` instead
    ///
    pub const LoadResource = loadResource;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn loadResource(self: TextGrammarCheck__GrammarResultTextEdit, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_LoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### DEPRECATED: Use `superLoadResource` instead
    ///
    pub const SuperLoadResource = superLoadResource;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn superLoadResource(self: TextGrammarCheck__GrammarResultTextEdit, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SuperLoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### DEPRECATED: Use `onLoadResource` instead
    ///
    pub const OnLoadResource = onLoadResource;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#loadResource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, typeVal: i32, name: QUrl) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onLoadResource(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, i32, QUrl) callconv(.c) QVariant) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnLoadResource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: TextGrammarCheck__GrammarResultTextEdit, _property: i32) QVariant {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_InputMethodQuery(@ptrCast(self.ptr), @bitCast(_property)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: TextGrammarCheck__GrammarResultTextEdit, _property: i32) QVariant {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(_property)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, property: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, i32) callconv(.c) QVariant) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn timerEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_TimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn superTimerEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QTimerEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn keyPressEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QKeyEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QKeyEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn resizeEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn superResizeEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QResizeEvent) callconv(.c) void `
    ///
    pub fn onResizeEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QResizeEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mousePressEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: TextGrammarCheck__GrammarResultTextEdit, next: bool) bool {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` next: bool `
    ///
    pub fn superFocusNextPrevChild(self: TextGrammarCheck__GrammarResultTextEdit, next: bool) bool {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, next: bool) callconv(.c) bool `
    ///
    pub fn onFocusNextPrevChild(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, bool) callconv(.c) bool) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QDragEnterEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QDragLeaveEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QDragMoveEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn dropEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_DropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn superDropEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QDropEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn focusInEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QFocusEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn focusOutEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QFocusEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn showEvent(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_ShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn superShowEvent(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, param1: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QShowEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QEvent `
    ///
    pub fn changeEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QEvent `
    ///
    pub fn superChangeEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QEvent) callconv(.c) void `
    ///
    pub fn onChangeEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn wheelEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn superWheelEvent(self: TextGrammarCheck__GrammarResultTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, e: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QWheelEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createMimeDataFromSelection` instead
    ///
    pub const CreateMimeDataFromSelection = createMimeDataFromSelection;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn createMimeDataFromSelection(self: TextGrammarCheck__GrammarResultTextEdit) QMimeData {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_CreateMimeDataFromSelection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superCreateMimeDataFromSelection` instead
    ///
    pub const SuperCreateMimeDataFromSelection = superCreateMimeDataFromSelection;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superCreateMimeDataFromSelection(self: TextGrammarCheck__GrammarResultTextEdit) QMimeData {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SuperCreateMimeDataFromSelection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateMimeDataFromSelection` instead
    ///
    pub const OnCreateMimeDataFromSelection = onCreateMimeDataFromSelection;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QMimeData `
    ///
    pub fn onCreateMimeDataFromSelection(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) QMimeData) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnCreateMimeDataFromSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canInsertFromMimeData` instead
    ///
    pub const CanInsertFromMimeData = canInsertFromMimeData;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn canInsertFromMimeData(self: TextGrammarCheck__GrammarResultTextEdit, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_CanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `superCanInsertFromMimeData` instead
    ///
    pub const SuperCanInsertFromMimeData = superCanInsertFromMimeData;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn superCanInsertFromMimeData(self: TextGrammarCheck__GrammarResultTextEdit, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperCanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `onCanInsertFromMimeData` instead
    ///
    pub const OnCanInsertFromMimeData = onCanInsertFromMimeData;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, source: QMimeData) callconv(.c) bool `
    ///
    pub fn onCanInsertFromMimeData(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QMimeData) callconv(.c) bool) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnCanInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertFromMimeData` instead
    ///
    pub const InsertFromMimeData = insertFromMimeData;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn insertFromMimeData(self: TextGrammarCheck__GrammarResultTextEdit, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QMimeData;
        qtc.TextGrammarCheck__GrammarResultTextEdit_InsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `superInsertFromMimeData` instead
    ///
    pub const SuperInsertFromMimeData = superInsertFromMimeData;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn superInsertFromMimeData(self: TextGrammarCheck__GrammarResultTextEdit, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QMimeData;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `onInsertFromMimeData` instead
    ///
    pub const OnInsertFromMimeData = onInsertFromMimeData;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, source: QMimeData) callconv(.c) void `
    ///
    pub fn onInsertFromMimeData(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QMimeData) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QInputMethodEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollContentsBy` instead
    ///
    pub const ScrollContentsBy = scrollContentsBy;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scrollContentsBy(self: TextGrammarCheck__GrammarResultTextEdit, dx: i32, dy: i32) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `superScrollContentsBy` instead
    ///
    pub const SuperScrollContentsBy = superScrollContentsBy;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn superScrollContentsBy(self: TextGrammarCheck__GrammarResultTextEdit, dx: i32, dy: i32) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onScrollContentsBy` instead
    ///
    pub const OnScrollContentsBy = onScrollContentsBy;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn onScrollContentsBy(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, i32, i32) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doSetTextCursor` instead
    ///
    pub const DoSetTextCursor = doSetTextCursor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn doSetTextCursor(self: TextGrammarCheck__GrammarResultTextEdit, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        qtc.TextGrammarCheck__GrammarResultTextEdit_DoSetTextCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `superDoSetTextCursor` instead
    ///
    pub const SuperDoSetTextCursor = superDoSetTextCursor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn superDoSetTextCursor(self: TextGrammarCheck__GrammarResultTextEdit, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperDoSetTextCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `onDoSetTextCursor` instead
    ///
    pub const OnDoSetTextCursor = onDoSetTextCursor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, cursor: QTextCursor) callconv(.c) void `
    ///
    pub fn onDoSetTextCursor(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QTextCursor) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnDoSetTextCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn minimumSizeHint(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superMinimumSizeHint(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn sizeHint(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superSizeHint(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SuperSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn setupViewport(self: TextGrammarCheck__GrammarResultTextEdit, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn superSetupViewport(self: TextGrammarCheck__GrammarResultTextEdit, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, viewport: QWidget) callconv(.c) void `
    ///
    pub fn onSetupViewport(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QWidget) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn eventFilter(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn superEventFilter(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn viewportEvent(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_ViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superViewportEvent(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onViewportEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QEvent) callconv(.c) bool) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn viewportSizeHint(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_ViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superViewportSizeHint(self: TextGrammarCheck__GrammarResultTextEdit) QSize {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SuperViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportSizeHint(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn initStyleOption(self: TextGrammarCheck__GrammarResultTextEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.TextGrammarCheck__GrammarResultTextEdit_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn superInitStyleOption(self: TextGrammarCheck__GrammarResultTextEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn onInitStyleOption(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QStyleOptionFrame) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn devType(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_DevType(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superDevType(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: TextGrammarCheck__GrammarResultTextEdit, visible: bool) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: TextGrammarCheck__GrammarResultTextEdit, visible: bool) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperSetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, bool) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: TextGrammarCheck__GrammarResultTextEdit, param1: i32) i32 {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: TextGrammarCheck__GrammarResultTextEdit, param1: i32) i32 {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, i32) callconv(.c) i32) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn hasHeightForWidth(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superHasHeightForWidth(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn paintEngine(self: TextGrammarCheck__GrammarResultTextEdit) QPaintEngine {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superPaintEngine(self: TextGrammarCheck__GrammarResultTextEdit) QPaintEngine {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QEnterEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QMoveEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QCloseEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QTabletEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QActionEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QHideEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: TextGrammarCheck__GrammarResultTextEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextGrammarCheck__GrammarResultTextEdit_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: TextGrammarCheck__GrammarResultTextEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: TextGrammarCheck__GrammarResultTextEdit, param1: i32) i32 {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: TextGrammarCheck__GrammarResultTextEdit, param1: i32) i32 {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, i32) callconv(.c) i32) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: TextGrammarCheck__GrammarResultTextEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextGrammarCheck__GrammarResultTextEdit_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: TextGrammarCheck__GrammarResultTextEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QPainter) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: TextGrammarCheck__GrammarResultTextEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: TextGrammarCheck__GrammarResultTextEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QPoint) callconv(.c) QPaintDevice) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn sharedPainter(self: TextGrammarCheck__GrammarResultTextEdit) QPainter {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superSharedPainter(self: TextGrammarCheck__GrammarResultTextEdit) QPainter {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) QPainter) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QChildEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: TextGrammarCheck__GrammarResultTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QEvent) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: TextGrammarCheck__GrammarResultTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextGrammarCheck__GrammarResultTextEdit_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: TextGrammarCheck__GrammarResultTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QMetaMethod) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: TextGrammarCheck__GrammarResultTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextGrammarCheck__GrammarResultTextEdit_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: TextGrammarCheck__GrammarResultTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QMetaMethod) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zoomInF` instead
    ///
    pub const ZoomInF = zoomInF;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` range: f32 `
    ///
    pub fn zoomInF(self: TextGrammarCheck__GrammarResultTextEdit, range: f32) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_ZoomInF(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `superZoomInF` instead
    ///
    pub const SuperZoomInF = superZoomInF;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` range: f32 `
    ///
    pub fn superZoomInF(self: TextGrammarCheck__GrammarResultTextEdit, range: f32) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperZoomInF(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `onZoomInF` instead
    ///
    pub const OnZoomInF = onZoomInF;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, range: f32) callconv(.c) void `
    ///
    pub fn onZoomInF(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, f32) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnZoomInF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setViewportMargins(self: TextGrammarCheck__GrammarResultTextEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn superSetViewportMargins(self: TextGrammarCheck__GrammarResultTextEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn onSetViewportMargins(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn viewportMargins(self: TextGrammarCheck__GrammarResultTextEdit) QMargins {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superViewportMargins(self: TextGrammarCheck__GrammarResultTextEdit) QMargins {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SuperViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportMargins(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) QMargins) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QPainter `
    ///
    pub fn drawFrame(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.TextGrammarCheck__GrammarResultTextEdit_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` param1: QPainter `
    ///
    pub fn superDrawFrame(self: TextGrammarCheck__GrammarResultTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, param1: QPainter) callconv(.c) void `
    ///
    pub fn onDrawFrame(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QPainter) callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn updateMicroFocus(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superUpdateMicroFocus(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn create(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_Create(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superCreate(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn destroy(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_Destroy(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superDestroy(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) void) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn focusNextChild(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superFocusNextChild(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn focusPreviousChild(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superFocusPreviousChild(self: TextGrammarCheck__GrammarResultTextEdit) bool {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn sender(self: TextGrammarCheck__GrammarResultTextEdit) QObject {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superSender(self: TextGrammarCheck__GrammarResultTextEdit) QObject {
        return .{ .ptr = qtc.TextGrammarCheck__GrammarResultTextEdit_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn senderSignalIndex(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn superSenderSignalIndex(self: TextGrammarCheck__GrammarResultTextEdit) i32 {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: TextGrammarCheck__GrammarResultTextEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: TextGrammarCheck__GrammarResultTextEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: TextGrammarCheck__GrammarResultTextEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: TextGrammarCheck__GrammarResultTextEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, QMetaMethod) callconv(.c) bool) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: TextGrammarCheck__GrammarResultTextEdit, metricA: i32, metricB: i32) f64 {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: TextGrammarCheck__GrammarResultTextEdit, metricA: i32, metricB: i32) f64 {
        return qtc.TextGrammarCheck__GrammarResultTextEdit_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit`
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, i32, i32) callconv(.c) f64) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    /// ` callback: *const fn (self: TextGrammarCheck__GrammarResultTextEdit, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: TextGrammarCheck__GrammarResultTextEdit, callback: *const fn (TextGrammarCheck__GrammarResultTextEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextGrammarCheck_1_1GrammarResultTextEdit.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextGrammarCheck__GrammarResultTextEdit `
    ///
    pub fn delete(self: TextGrammarCheck__GrammarResultTextEdit) void {
        qtc.TextGrammarCheck__GrammarResultTextEdit_Delete(@ptrCast(self.ptr));
    }
};
