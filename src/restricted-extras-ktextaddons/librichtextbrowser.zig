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

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
pub const TextCustomEditor__RichTextBrowser = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextCustomEditor__RichTextBrowser,

    pub const _is_TextCustomEditor__RichTextBrowser = {};
    pub const _is_QTextBrowser = {};
    pub const _is_QTextEdit = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new TextCustomEditor::RichTextBrowser object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) TextCustomEditor__RichTextBrowser {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new TextCustomEditor::RichTextBrowser object.
    ///
    pub fn New2() TextCustomEditor__RichTextBrowser {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_new2() };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn MetaObject(self: TextCustomEditor__RichTextBrowser) QMetaObject {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextCustomEditor__RichTextBrowser_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperMetaObject(self: TextCustomEditor__RichTextBrowser) QMetaObject {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextCustomEditor__RichTextBrowser, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextCustomEditor__RichTextBrowser_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextCustomEditor__RichTextBrowser_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextCustomEditor__RichTextBrowser, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextCustomEditor__RichTextBrowser_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextCustomEditor__RichTextBrowser, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextCustomEditor__RichTextBrowser_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextCustomEditor__RichTextBrowser_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextCustomEditor__RichTextBrowser, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextCustomEditor__RichTextBrowser_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` b: bool `
    ///
    pub fn SetSearchSupport(self: TextCustomEditor__RichTextBrowser, b: bool) void {
        qtc.TextCustomEditor__RichTextBrowser_SetSearchSupport(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SearchSupport(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.TextCustomEditor__RichTextBrowser_SearchSupport(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn TextToSpeechSupport(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.TextCustomEditor__RichTextBrowser_TextToSpeechSupport(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` b: bool `
    ///
    pub fn SetTextToSpeechSupport(self: TextCustomEditor__RichTextBrowser, b: bool) void {
        qtc.TextCustomEditor__RichTextBrowser_SetTextToSpeechSupport(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` b: bool `
    ///
    pub fn SetWebShortcutSupport(self: TextCustomEditor__RichTextBrowser, b: bool) void {
        qtc.TextCustomEditor__RichTextBrowser_SetWebShortcutSupport(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn WebShortcutSupport(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.TextCustomEditor__RichTextBrowser_WebShortcutSupport(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` val: i32 `
    ///
    pub fn SetDefaultFontSize(self: TextCustomEditor__RichTextBrowser, val: i32) void {
        qtc.TextCustomEditor__RichTextBrowser_SetDefaultFontSize(@ptrCast(self.ptr), @bitCast(val));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ZoomFactor(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.TextCustomEditor__RichTextBrowser_ZoomFactor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` message: []const u8 `
    ///
    pub fn SlotDisplayMessageIndicator(self: TextCustomEditor__RichTextBrowser, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.TextCustomEditor__RichTextBrowser_SlotDisplayMessageIndicator(@ptrCast(self.ptr), message_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SlotSpeakText(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_SlotSpeakText(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SlotZoomReset(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_SlotZoomReset(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` menu: QMenu `
    ///
    /// ` pos: QPoint `
    ///
    pub fn AddExtraMenuEntry(self: TextCustomEditor__RichTextBrowser, menu: anytype, pos: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.TextCustomEditor__RichTextBrowser_AddExtraMenuEntry(@ptrCast(self.ptr), @ptrCast(menu.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, menu: QMenu, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnAddExtraMenuEntry(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QMenu, QPoint) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnAddExtraMenuEntry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAddExtraMenuEntry` instead
    ///
    pub const QBaseAddExtraMenuEntry = SuperAddExtraMenuEntry;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` menu: QMenu `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SuperAddExtraMenuEntry(self: TextCustomEditor__RichTextBrowser, menu: anytype, pos: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.TextCustomEditor__RichTextBrowser_SuperAddExtraMenuEntry(@ptrCast(self.ptr), @ptrCast(menu.ptr), @ptrCast(pos.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextCustomEditor__RichTextBrowser_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QContextMenuEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` ev: QEvent `
    ///
    pub fn Event(self: TextCustomEditor__RichTextBrowser, ev: anytype) bool {
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.TextCustomEditor__RichTextBrowser_Event(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, ev: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__RichTextBrowser_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` ev: QEvent `
    ///
    pub fn SuperEvent(self: TextCustomEditor__RichTextBrowser, ev: anytype) bool {
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.TextCustomEditor__RichTextBrowser_SuperEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextCustomEditor__RichTextBrowser_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QKeyEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn WheelEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.TextCustomEditor__RichTextBrowser_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, e: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QWheelEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` pos: QPoint `
    ///
    pub fn MousePopupMenu(self: TextCustomEditor__RichTextBrowser, pos: anytype) QMenu {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_MousePopupMenu(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, pos: QPoint) callconv(.c) QMenu `
    ///
    pub fn OnMousePopupMenu(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QPoint) callconv(.c) QMenu) void {
        qtc.TextCustomEditor__RichTextBrowser_OnMousePopupMenu(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePopupMenu` instead
    ///
    pub const QBaseMousePopupMenu = SuperMousePopupMenu;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` pos: QPoint `
    ///
    pub fn SuperMousePopupMenu(self: TextCustomEditor__RichTextBrowser, pos: anytype) QMenu {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperMousePopupMenu(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Say(self: TextCustomEditor__RichTextBrowser, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.TextCustomEditor__RichTextBrowser_Say(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSay(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, [*:0]const u8) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_Connect_Say(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FindText(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_FindText(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser) callconv(.c) void `
    ///
    pub fn OnFindText(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_Connect_FindText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#source)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Source(self: TextCustomEditor__RichTextBrowser) QUrl {
        return .{ .ptr = qtc.QTextBrowser_Source(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#sourceType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qtextdocument_enums.ResourceType `
    ///
    pub fn SourceType(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QTextBrowser_SourceType(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#searchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SearchPaths(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTextBrowser_SearchPaths(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("textcustomeditor__richtextbrowser.SearchPaths: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textcustomeditor__richtextbrowser.SearchPaths: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#setSearchPaths)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` paths: []const []const u8 `
    ///
    pub fn SetSearchPaths(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator, paths: []const []const u8) void {
        const paths_arr = allocator.alloc(qtc.libqt_string, paths.len) catch @panic("textcustomeditor__richtextbrowser.SetSearchPaths: Memory allocation failed");
        defer allocator.free(paths_arr);
        for (paths, 0..paths.len) |item, i|
            paths_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const paths_list = qtc.libqt_list{
            .len = paths.len,
            .data = paths_arr.ptr,
        };
        qtc.QTextBrowser_SetSearchPaths(@ptrCast(self.ptr), paths_list);
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#isBackwardAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsBackwardAvailable(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QTextBrowser_IsBackwardAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#isForwardAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsForwardAvailable(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QTextBrowser_IsForwardAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#clearHistory)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ClearHistory(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextBrowser_ClearHistory(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#historyTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` param1: i32 `
    ///
    pub fn HistoryTitle(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator, param1: i32) []const u8 {
        var _str = qtc.QTextBrowser_HistoryTitle(@ptrCast(self.ptr), @bitCast(param1));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.HistoryTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#historyUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: i32 `
    ///
    pub fn HistoryUrl(self: TextCustomEditor__RichTextBrowser, param1: i32) QUrl {
        return .{ .ptr = qtc.QTextBrowser_HistoryUrl(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#backwardHistoryCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn BackwardHistoryCount(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QTextBrowser_BackwardHistoryCount(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#forwardHistoryCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ForwardHistoryCount(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QTextBrowser_ForwardHistoryCount(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#openExternalLinks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn OpenExternalLinks(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QTextBrowser_OpenExternalLinks(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#setOpenExternalLinks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` open: bool `
    ///
    pub fn SetOpenExternalLinks(self: TextCustomEditor__RichTextBrowser, open: bool) void {
        qtc.QTextBrowser_SetOpenExternalLinks(@ptrCast(self.ptr), open);
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#openLinks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn OpenLinks(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QTextBrowser_OpenLinks(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#setOpenLinks)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` open: bool `
    ///
    pub fn SetOpenLinks(self: TextCustomEditor__RichTextBrowser, open: bool) void {
        qtc.QTextBrowser_SetOpenLinks(@ptrCast(self.ptr), open);
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` name: QUrl `
    ///
    pub fn SetSource(self: TextCustomEditor__RichTextBrowser, name: anytype) void {
        comptime _ = @TypeOf(name)._is_QUrl;
        qtc.QTextBrowser_SetSource(@ptrCast(self.ptr), @ptrCast(name.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#backwardAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: bool `
    ///
    pub fn BackwardAvailable(self: TextCustomEditor__RichTextBrowser, param1: bool) void {
        qtc.QTextBrowser_BackwardAvailable(@ptrCast(self.ptr), param1);
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#backwardAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: bool) callconv(.c) void `
    ///
    pub fn OnBackwardAvailable(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, bool) callconv(.c) void) void {
        qtc.QTextBrowser_Connect_BackwardAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#forwardAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: bool `
    ///
    pub fn ForwardAvailable(self: TextCustomEditor__RichTextBrowser, param1: bool) void {
        qtc.QTextBrowser_ForwardAvailable(@ptrCast(self.ptr), param1);
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#forwardAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: bool) callconv(.c) void `
    ///
    pub fn OnForwardAvailable(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, bool) callconv(.c) void) void {
        qtc.QTextBrowser_Connect_ForwardAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#historyChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn HistoryChanged(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextBrowser_HistoryChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#historyChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser) callconv(.c) void `
    ///
    pub fn OnHistoryChanged(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser) callconv(.c) void) void {
        qtc.QTextBrowser_Connect_HistoryChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#sourceChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QUrl `
    ///
    pub fn SourceChanged(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QUrl;
        qtc.QTextBrowser_SourceChanged(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#sourceChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: QUrl) callconv(.c) void `
    ///
    pub fn OnSourceChanged(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QUrl) callconv(.c) void) void {
        qtc.QTextBrowser_Connect_SourceChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#highlighted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QUrl `
    ///
    pub fn Highlighted(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QUrl;
        qtc.QTextBrowser_Highlighted(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#highlighted)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: QUrl) callconv(.c) void `
    ///
    pub fn OnHighlighted(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QUrl) callconv(.c) void) void {
        qtc.QTextBrowser_Connect_Highlighted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#anchorClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QUrl `
    ///
    pub fn AnchorClicked(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QUrl;
        qtc.QTextBrowser_AnchorClicked(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#anchorClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: QUrl) callconv(.c) void `
    ///
    pub fn OnAnchorClicked(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QUrl) callconv(.c) void) void {
        qtc.QTextBrowser_Connect_AnchorClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#setSource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` name: QUrl `
    ///
    /// ` typeVal: qtextdocument_enums.ResourceType `
    ///
    pub fn SetSource2(self: TextCustomEditor__RichTextBrowser, name: anytype, typeVal: i32) void {
        comptime _ = @TypeOf(name)._is_QUrl;
        qtc.QTextBrowser_SetSource2(@ptrCast(self.ptr), @ptrCast(name.ptr), @bitCast(typeVal));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` document: QTextDocument `
    ///
    pub fn SetDocument(self: TextCustomEditor__RichTextBrowser, document: anytype) void {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        qtc.QTextEdit_SetDocument(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Document(self: TextCustomEditor__RichTextBrowser) QTextDocument {
        return .{ .ptr = qtc.QTextEdit_Document(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` placeholderText: []const u8 `
    ///
    pub fn SetPlaceholderText(self: TextCustomEditor__RichTextBrowser, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = placeholderText.len,
            .data = placeholderText.ptr,
        };
        qtc.QTextEdit_SetPlaceholderText(@ptrCast(self.ptr), placeholderText_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceholderText(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn SetTextCursor(self: TextCustomEditor__RichTextBrowser, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QTextEdit_SetTextCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn TextCursor(self: TextCustomEditor__RichTextBrowser) QTextCursor {
        return .{ .ptr = qtc.QTextEdit_TextCursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsReadOnly(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QTextEdit_IsReadOnly(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` ro: bool `
    ///
    pub fn SetReadOnly(self: TextCustomEditor__RichTextBrowser, ro: bool) void {
        qtc.QTextEdit_SetReadOnly(@ptrCast(self.ptr), ro);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` flags: flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn SetTextInteractionFlags(self: TextCustomEditor__RichTextBrowser, flags: i32) void {
        qtc.QTextEdit_SetTextInteractionFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn TextInteractionFlags(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QTextEdit_TextInteractionFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FontPointSize(self: TextCustomEditor__RichTextBrowser) f64 {
        return qtc.QTextEdit_FontPointSize(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FontFamily(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_FontFamily(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.FontFamily: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FontWeight(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QTextEdit_FontWeight(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FontUnderline(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QTextEdit_FontUnderline(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#fontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FontItalic(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QTextEdit_FontItalic(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn TextColor(self: TextCustomEditor__RichTextBrowser) QColor {
        return .{ .ptr = qtc.QTextEdit_TextColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn TextBackgroundColor(self: TextCustomEditor__RichTextBrowser) QColor {
        return .{ .ptr = qtc.QTextEdit_TextBackgroundColor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn CurrentFont(self: TextCustomEditor__RichTextBrowser) QFont {
        return .{ .ptr = qtc.QTextEdit_CurrentFont(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QTextEdit_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mergeCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` modifier: QTextCharFormat `
    ///
    pub fn MergeCurrentCharFormat(self: TextCustomEditor__RichTextBrowser, modifier: anytype) void {
        comptime _ = @TypeOf(modifier)._is_QTextCharFormat;
        qtc.QTextEdit_MergeCurrentCharFormat(@ptrCast(self.ptr), @ptrCast(modifier.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SetCurrentCharFormat(self: TextCustomEditor__RichTextBrowser, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QTextEdit_SetCurrentCharFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn CurrentCharFormat(self: TextCustomEditor__RichTextBrowser) QTextCharFormat {
        return .{ .ptr = qtc.QTextEdit_CurrentCharFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#autoFormatting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` flag of qtextedit_enums.AutoFormattingFlag `
    ///
    pub fn AutoFormatting(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QTextEdit_AutoFormatting(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAutoFormatting)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` features: flag of qtextedit_enums.AutoFormattingFlag `
    ///
    pub fn SetAutoFormatting(self: TextCustomEditor__RichTextBrowser, features: i32) void {
        qtc.QTextEdit_SetAutoFormatting(@ptrCast(self.ptr), @bitCast(features));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn TabChangesFocus(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QTextEdit_TabChangesFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` b: bool `
    ///
    pub fn SetTabChangesFocus(self: TextCustomEditor__RichTextBrowser, b: bool) void {
        qtc.QTextEdit_SetTabChangesFocus(@ptrCast(self.ptr), b);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setDocumentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetDocumentTitle(self: TextCustomEditor__RichTextBrowser, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QTextEdit_SetDocumentTitle(@ptrCast(self.ptr), title_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#documentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocumentTitle(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_DocumentTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.DocumentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#isUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsUndoRedoEnabled(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QTextEdit_IsUndoRedoEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUndoRedoEnabled(self: TextCustomEditor__RichTextBrowser, enable: bool) void {
        qtc.QTextEdit_SetUndoRedoEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qtextedit_enums.LineWrapMode `
    ///
    pub fn LineWrapMode(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QTextEdit_LineWrapMode(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` mode: qtextedit_enums.LineWrapMode `
    ///
    pub fn SetLineWrapMode(self: TextCustomEditor__RichTextBrowser, mode: i32) void {
        qtc.QTextEdit_SetLineWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#lineWrapColumnOrWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn LineWrapColumnOrWidth(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QTextEdit_LineWrapColumnOrWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setLineWrapColumnOrWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` w: i32 `
    ///
    pub fn SetLineWrapColumnOrWidth(self: TextCustomEditor__RichTextBrowser, w: i32) void {
        qtc.QTextEdit_SetLineWrapColumnOrWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#wordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qtextoption_enums.WrapMode `
    ///
    pub fn WordWrapMode(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QTextEdit_WordWrapMode(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setWordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` policy: qtextoption_enums.WrapMode `
    ///
    pub fn SetWordWrapMode(self: TextCustomEditor__RichTextBrowser, policy: i32) void {
        qtc.QTextEdit_SetWordWrapMode(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` exp: []const u8 `
    ///
    pub fn Find(self: TextCustomEditor__RichTextBrowser, exp: []const u8) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QTextEdit_Find(@ptrCast(self.ptr), exp_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` exp: QRegularExpression `
    ///
    pub fn Find2(self: TextCustomEditor__RichTextBrowser, exp: anytype) bool {
        comptime _ = @TypeOf(exp)._is_QRegularExpression;
        return qtc.QTextEdit_Find2(@ptrCast(self.ptr), @ptrCast(exp.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToPlainText(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_ToPlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.ToPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToHtml(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_ToHtml(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.ToHtml: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToMarkdown(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QTextEdit_ToMarkdown(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.ToMarkdown: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#ensureCursorVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn EnsureCursorVisible(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_EnsureCursorVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn CreateStandardContextMenu(self: TextCustomEditor__RichTextBrowser) QMenu {
        return .{ .ptr = qtc.QTextEdit_CreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` position: QPoint `
    ///
    pub fn CreateStandardContextMenu2(self: TextCustomEditor__RichTextBrowser, position: anytype) QMenu {
        comptime _ = @TypeOf(position)._is_QPoint;
        return .{ .ptr = qtc.QTextEdit_CreateStandardContextMenu2(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorForPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CursorForPosition(self: TextCustomEditor__RichTextBrowser, pos: anytype) QTextCursor {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QTextEdit_CursorForPosition(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn CursorRect(self: TextCustomEditor__RichTextBrowser, cursor: anytype) QRect {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QTextEdit_CursorRect(@ptrCast(self.ptr), @ptrCast(cursor.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn CursorRect2(self: TextCustomEditor__RichTextBrowser) QRect {
        return .{ .ptr = qtc.QTextEdit_CursorRect2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#anchorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPoint `
    ///
    pub fn AnchorAt(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator, pos: anytype) []const u8 {
        comptime _ = @TypeOf(pos)._is_QPoint;
        var _str = qtc.QTextEdit_AnchorAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.AnchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#overwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn OverwriteMode(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QTextEdit_OverwriteMode(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` overwrite: bool `
    ///
    pub fn SetOverwriteMode(self: TextCustomEditor__RichTextBrowser, overwrite: bool) void {
        qtc.QTextEdit_SetOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#tabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn TabStopDistance(self: TextCustomEditor__RichTextBrowser) f64 {
        return qtc.QTextEdit_TabStopDistance(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` distance: f64 `
    ///
    pub fn SetTabStopDistance(self: TextCustomEditor__RichTextBrowser, distance: f64) void {
        qtc.QTextEdit_SetTabStopDistance(@ptrCast(self.ptr), @bitCast(distance));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn CursorWidth(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QTextEdit_CursorWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` width: i32 `
    ///
    pub fn SetCursorWidth(self: TextCustomEditor__RichTextBrowser, width: i32) void {
        qtc.QTextEdit_SetCursorWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#acceptRichText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn AcceptRichText(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QTextEdit_AcceptRichText(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAcceptRichText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` accept: bool `
    ///
    pub fn SetAcceptRichText(self: TextCustomEditor__RichTextBrowser, accept: bool) void {
        qtc.QTextEdit_SetAcceptRichText(@ptrCast(self.ptr), accept);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setExtraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` selections: []QTextEdit__ExtraSelection `
    ///
    pub fn SetExtraSelections(self: TextCustomEditor__RichTextBrowser, selections: []QTextEdit__ExtraSelection) void {
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QTextEdit_SetExtraSelections(@ptrCast(self.ptr), selections_list);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#extraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtraSelections(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []QTextEdit__ExtraSelection {
        const _arr: qtc.libqt_list = qtc.QTextEdit_ExtraSelections(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextEdit__ExtraSelection, _arr.len) catch @panic("textcustomeditor__richtextbrowser.ExtraSelections: Memory allocation failed");
        const _data: [*]QtC.QTextEdit__ExtraSelection = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    pub fn MoveCursor(self: TextCustomEditor__RichTextBrowser, operation: i32) void {
        qtc.QTextEdit_MoveCursor(@ptrCast(self.ptr), @bitCast(operation));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canPaste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn CanPaste(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QTextEdit_CanPaste(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` printer: QPagedPaintDevice `
    ///
    pub fn Print(self: TextCustomEditor__RichTextBrowser, printer: anytype) void {
        comptime _ = @TypeOf(printer)._is_QPagedPaintDevice;
        qtc.QTextEdit_Print(@ptrCast(self.ptr), @ptrCast(printer.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn InputMethodQuery2(self: TextCustomEditor__RichTextBrowser, query: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QTextEdit_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(query), @ptrCast(argument.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontPointSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` s: f64 `
    ///
    pub fn SetFontPointSize(self: TextCustomEditor__RichTextBrowser, s: f64) void {
        qtc.QTextEdit_SetFontPointSize(@ptrCast(self.ptr), @bitCast(s));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontFamily)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` fontFamily: []const u8 `
    ///
    pub fn SetFontFamily(self: TextCustomEditor__RichTextBrowser, fontFamily: []const u8) void {
        const fontFamily_str = qtc.libqt_string{
            .len = fontFamily.len,
            .data = fontFamily.ptr,
        };
        qtc.QTextEdit_SetFontFamily(@ptrCast(self.ptr), fontFamily_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontWeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFontWeight(self: TextCustomEditor__RichTextBrowser, w: i32) void {
        qtc.QTextEdit_SetFontWeight(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontUnderline)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` b: bool `
    ///
    pub fn SetFontUnderline(self: TextCustomEditor__RichTextBrowser, b: bool) void {
        qtc.QTextEdit_SetFontUnderline(@ptrCast(self.ptr), b);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setFontItalic)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` b: bool `
    ///
    pub fn SetFontItalic(self: TextCustomEditor__RichTextBrowser, b: bool) void {
        qtc.QTextEdit_SetFontItalic(@ptrCast(self.ptr), b);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` c: QColor `
    ///
    pub fn SetTextColor(self: TextCustomEditor__RichTextBrowser, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QTextEdit_SetTextColor(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setTextBackgroundColor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` c: QColor `
    ///
    pub fn SetTextBackgroundColor(self: TextCustomEditor__RichTextBrowser, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QTextEdit_SetTextBackgroundColor(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setCurrentFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` f: QFont `
    ///
    pub fn SetCurrentFont(self: TextCustomEditor__RichTextBrowser, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QTextEdit_SetCurrentFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` a: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: TextCustomEditor__RichTextBrowser, a: i32) void {
        qtc.QTextEdit_SetAlignment(@ptrCast(self.ptr), @bitCast(a));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetPlainText(self: TextCustomEditor__RichTextBrowser, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_SetPlainText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetHtml(self: TextCustomEditor__RichTextBrowser, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_SetHtml(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` markdown: []const u8 `
    ///
    pub fn SetMarkdown(self: TextCustomEditor__RichTextBrowser, markdown: []const u8) void {
        const markdown_str = qtc.libqt_string{
            .len = markdown.len,
            .data = markdown.ptr,
        };
        qtc.QTextEdit_SetMarkdown(@ptrCast(self.ptr), markdown_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: TextCustomEditor__RichTextBrowser, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_SetText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Cut(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_Cut(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Copy(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_Copy(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Paste(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_Paste(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Undo(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_Undo(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Redo(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_Redo(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Clear(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SelectAll(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_SelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertPlainText(self: TextCustomEditor__RichTextBrowser, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_InsertPlainText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertHtml(self: TextCustomEditor__RichTextBrowser, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_InsertHtml(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Append(self: TextCustomEditor__RichTextBrowser, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTextEdit_Append(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollToAnchor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` name: []const u8 `
    ///
    pub fn ScrollToAnchor(self: TextCustomEditor__RichTextBrowser, name: []const u8) void {
        const name_str = qtc.libqt_string{
            .len = name.len,
            .data = name.ptr,
        };
        qtc.QTextEdit_ScrollToAnchor(@ptrCast(self.ptr), name_str);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ZoomIn(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_ZoomIn(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ZoomOut(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_ZoomOut(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn TextChanged(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_TextChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser) callconv(.c) void) void {
        qtc.QTextEdit_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` b: bool `
    ///
    pub fn UndoAvailable(self: TextCustomEditor__RichTextBrowser, b: bool) void {
        qtc.QTextEdit_UndoAvailable(@ptrCast(self.ptr), b);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#undoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, b: bool) callconv(.c) void `
    ///
    pub fn OnUndoAvailable(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_UndoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` b: bool `
    ///
    pub fn RedoAvailable(self: TextCustomEditor__RichTextBrowser, b: bool) void {
        qtc.QTextEdit_RedoAvailable(@ptrCast(self.ptr), b);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#redoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, b: bool) callconv(.c) void `
    ///
    pub fn OnRedoAvailable(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_RedoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn CurrentCharFormatChanged(self: TextCustomEditor__RichTextBrowser, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QTextEdit_CurrentCharFormatChanged(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#currentCharFormatChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, format: QTextCharFormat) callconv(.c) void `
    ///
    pub fn OnCurrentCharFormatChanged(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QTextCharFormat) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CurrentCharFormatChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` b: bool `
    ///
    pub fn CopyAvailable(self: TextCustomEditor__RichTextBrowser, b: bool) void {
        qtc.QTextEdit_CopyAvailable(@ptrCast(self.ptr), b);
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#copyAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, b: bool) callconv(.c) void `
    ///
    pub fn OnCopyAvailable(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, bool) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CopyAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SelectionChanged(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_SelectionChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser) callconv(.c) void) void {
        qtc.QTextEdit_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn CursorPositionChanged(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QTextEdit_CursorPositionChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser) callconv(.c) void `
    ///
    pub fn OnCursorPositionChanged(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser) callconv(.c) void) void {
        qtc.QTextEdit_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` exp: []const u8 `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn Find22(self: TextCustomEditor__RichTextBrowser, exp: []const u8, options: i32) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QTextEdit_Find22(@ptrCast(self.ptr), exp_str, @bitCast(options));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` exp: QRegularExpression `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn Find23(self: TextCustomEditor__RichTextBrowser, exp: anytype, options: i32) bool {
        comptime _ = @TypeOf(exp)._is_QRegularExpression;
        return qtc.QTextEdit_Find23(@ptrCast(self.ptr), @ptrCast(exp.ptr), @bitCast(options));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#toMarkdown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` features: flag of qtextdocument_enums.MarkdownFeature `
    ///
    pub fn ToMarkdown1(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator, features: i32) []const u8 {
        var _str = qtc.QTextEdit_ToMarkdown1(@ptrCast(self.ptr), @bitCast(features));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.ToMarkdown1: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    /// ` mode: qtextcursor_enums.MoveMode `
    ///
    pub fn MoveCursor2(self: TextCustomEditor__RichTextBrowser, operation: i32, mode: i32) void {
        qtc.QTextEdit_MoveCursor2(@ptrCast(self.ptr), @bitCast(operation), @bitCast(mode));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` range: i32 `
    ///
    pub fn ZoomIn1(self: TextCustomEditor__RichTextBrowser, range: i32) void {
        qtc.QTextEdit_ZoomIn1(@ptrCast(self.ptr), @bitCast(range));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` range: i32 `
    ///
    pub fn ZoomOut1(self: TextCustomEditor__RichTextBrowser, range: i32) void {
        qtc.QTextEdit_ZoomOut1(@ptrCast(self.ptr), @bitCast(range));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: TextCustomEditor__RichTextBrowser, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn VerticalScrollBar(self: TextCustomEditor__RichTextBrowser) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: TextCustomEditor__RichTextBrowser, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: TextCustomEditor__RichTextBrowser, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn HorizontalScrollBar(self: TextCustomEditor__RichTextBrowser) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: TextCustomEditor__RichTextBrowser, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn CornerWidget(self: TextCustomEditor__RichTextBrowser) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCornerWidget(self: TextCustomEditor__RichTextBrowser, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: TextCustomEditor__RichTextBrowser, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ScrollBarWidgets(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("textcustomeditor__richtextbrowser.ScrollBarWidgets: Memory allocation failed");
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Viewport(self: TextCustomEditor__RichTextBrowser) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetViewport(self: TextCustomEditor__RichTextBrowser, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn MaximumViewportSize(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: TextCustomEditor__RichTextBrowser, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FrameStyle(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: TextCustomEditor__RichTextBrowser, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FrameWidth(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: TextCustomEditor__RichTextBrowser, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: TextCustomEditor__RichTextBrowser, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn LineWidth(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: TextCustomEditor__RichTextBrowser, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn MidLineWidth(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: TextCustomEditor__RichTextBrowser, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FrameRect(self: TextCustomEditor__RichTextBrowser) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` frameRect: QRect `
    ///
    pub fn SetFrameRect(self: TextCustomEditor__RichTextBrowser, frameRect: anytype) void {
        comptime _ = @TypeOf(frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn WinId(self: TextCustomEditor__RichTextBrowser) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn CreateWinId(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn InternalWinId(self: TextCustomEditor__RichTextBrowser) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn EffectiveWinId(self: TextCustomEditor__RichTextBrowser) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Style(self: TextCustomEditor__RichTextBrowser) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: TextCustomEditor__RichTextBrowser, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsTopLevel(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsWindow(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsModal(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: TextCustomEditor__RichTextBrowser, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsEnabled(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: TextCustomEditor__RichTextBrowser, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: TextCustomEditor__RichTextBrowser, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: TextCustomEditor__RichTextBrowser, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: TextCustomEditor__RichTextBrowser, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FrameGeometry(self: TextCustomEditor__RichTextBrowser) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Geometry(self: TextCustomEditor__RichTextBrowser) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn NormalGeometry(self: TextCustomEditor__RichTextBrowser) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn X(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Y(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Pos(self: TextCustomEditor__RichTextBrowser) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FrameSize(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Size(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Width(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Height(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Rect(self: TextCustomEditor__RichTextBrowser) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ChildrenRect(self: TextCustomEditor__RichTextBrowser) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ChildrenRegion(self: TextCustomEditor__RichTextBrowser) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn MinimumSize(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn MaximumSize(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn MinimumWidth(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn MinimumHeight(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn MaximumWidth(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn MaximumHeight(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: TextCustomEditor__RichTextBrowser, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: TextCustomEditor__RichTextBrowser, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: TextCustomEditor__RichTextBrowser, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: TextCustomEditor__RichTextBrowser, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: TextCustomEditor__RichTextBrowser, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: TextCustomEditor__RichTextBrowser, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: TextCustomEditor__RichTextBrowser, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: TextCustomEditor__RichTextBrowser, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SizeIncrement(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: TextCustomEditor__RichTextBrowser, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: TextCustomEditor__RichTextBrowser, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn BaseSize(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: TextCustomEditor__RichTextBrowser, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: TextCustomEditor__RichTextBrowser, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: TextCustomEditor__RichTextBrowser, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: TextCustomEditor__RichTextBrowser, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: TextCustomEditor__RichTextBrowser, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: TextCustomEditor__RichTextBrowser, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: TextCustomEditor__RichTextBrowser, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: TextCustomEditor__RichTextBrowser, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: TextCustomEditor__RichTextBrowser, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: TextCustomEditor__RichTextBrowser, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: TextCustomEditor__RichTextBrowser, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: TextCustomEditor__RichTextBrowser, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: TextCustomEditor__RichTextBrowser, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: TextCustomEditor__RichTextBrowser, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: TextCustomEditor__RichTextBrowser, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: TextCustomEditor__RichTextBrowser, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: TextCustomEditor__RichTextBrowser, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: TextCustomEditor__RichTextBrowser, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Window(self: TextCustomEditor__RichTextBrowser) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn NativeParentWidget(self: TextCustomEditor__RichTextBrowser) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn TopLevelWidget(self: TextCustomEditor__RichTextBrowser) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Palette(self: TextCustomEditor__RichTextBrowser) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: TextCustomEditor__RichTextBrowser, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: TextCustomEditor__RichTextBrowser, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: TextCustomEditor__RichTextBrowser, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Font(self: TextCustomEditor__RichTextBrowser) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: TextCustomEditor__RichTextBrowser, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FontMetrics(self: TextCustomEditor__RichTextBrowser) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FontInfo(self: TextCustomEditor__RichTextBrowser) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Cursor(self: TextCustomEditor__RichTextBrowser) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: TextCustomEditor__RichTextBrowser, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn UnsetCursor(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: TextCustomEditor__RichTextBrowser, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn HasMouseTracking(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn UnderMouse(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: TextCustomEditor__RichTextBrowser, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn HasTabletTracking(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: TextCustomEditor__RichTextBrowser, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: TextCustomEditor__RichTextBrowser, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Mask(self: TextCustomEditor__RichTextBrowser) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ClearMask(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: TextCustomEditor__RichTextBrowser, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: TextCustomEditor__RichTextBrowser, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Grab(self: TextCustomEditor__RichTextBrowser) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn GraphicsEffect(self: TextCustomEditor__RichTextBrowser) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: TextCustomEditor__RichTextBrowser, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: TextCustomEditor__RichTextBrowser, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: TextCustomEditor__RichTextBrowser, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: TextCustomEditor__RichTextBrowser, windowTitle: []const u8) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: TextCustomEditor__RichTextBrowser, styleSheet: []const u8) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: TextCustomEditor__RichTextBrowser, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn WindowIcon(self: TextCustomEditor__RichTextBrowser) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: TextCustomEditor__RichTextBrowser, windowIconText: []const u8) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: TextCustomEditor__RichTextBrowser, windowRole: []const u8) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: TextCustomEditor__RichTextBrowser, filePath: []const u8) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: TextCustomEditor__RichTextBrowser, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn WindowOpacity(self: TextCustomEditor__RichTextBrowser) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsWindowModified(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: TextCustomEditor__RichTextBrowser, toolTip: []const u8) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: TextCustomEditor__RichTextBrowser, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ToolTipDuration(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: TextCustomEditor__RichTextBrowser, statusTip: []const u8) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: TextCustomEditor__RichTextBrowser, whatsThis: []const u8) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: TextCustomEditor__RichTextBrowser, name: []const u8) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: TextCustomEditor__RichTextBrowser, description: []const u8) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: TextCustomEditor__RichTextBrowser, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn UnsetLayoutDirection(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: TextCustomEditor__RichTextBrowser, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Locale(self: TextCustomEditor__RichTextBrowser) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn UnsetLocale(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsRightToLeft(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsLeftToRight(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SetFocus(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsActiveWindow(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ActivateWindow(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ClearFocus(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: TextCustomEditor__RichTextBrowser, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: TextCustomEditor__RichTextBrowser, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn HasFocus(self: TextCustomEditor__RichTextBrowser) bool {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: TextCustomEditor__RichTextBrowser, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FocusProxy(self: TextCustomEditor__RichTextBrowser) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: TextCustomEditor__RichTextBrowser, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn GrabMouse(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ReleaseMouse(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn GrabKeyboard(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ReleaseKeyboard(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: TextCustomEditor__RichTextBrowser, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: TextCustomEditor__RichTextBrowser, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: TextCustomEditor__RichTextBrowser, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: TextCustomEditor__RichTextBrowser, id: i32) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn UpdatesEnabled(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: TextCustomEditor__RichTextBrowser, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn GraphicsProxyWidget(self: TextCustomEditor__RichTextBrowser) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Update(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Repaint(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: TextCustomEditor__RichTextBrowser, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: TextCustomEditor__RichTextBrowser, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: TextCustomEditor__RichTextBrowser, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Show(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Hide(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ShowMinimized(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ShowMaximized(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ShowFullScreen(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ShowNormal(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Close(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Raise(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Lower(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: TextCustomEditor__RichTextBrowser, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: TextCustomEditor__RichTextBrowser, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: TextCustomEditor__RichTextBrowser, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: TextCustomEditor__RichTextBrowser, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("textcustomeditor__richtextbrowser.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: TextCustomEditor__RichTextBrowser, geometry: []u8) bool {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn AdjustSize(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsVisible(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: TextCustomEditor__RichTextBrowser, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsHidden(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsMinimized(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsMaximized(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsFullScreen(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: TextCustomEditor__RichTextBrowser, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: TextCustomEditor__RichTextBrowser, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SizePolicy(self: TextCustomEditor__RichTextBrowser) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: TextCustomEditor__RichTextBrowser, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: TextCustomEditor__RichTextBrowser, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn VisibleRegion(self: TextCustomEditor__RichTextBrowser) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: TextCustomEditor__RichTextBrowser, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: TextCustomEditor__RichTextBrowser, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ContentsMargins(self: TextCustomEditor__RichTextBrowser) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ContentsRect(self: TextCustomEditor__RichTextBrowser) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Layout(self: TextCustomEditor__RichTextBrowser) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: TextCustomEditor__RichTextBrowser, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn UpdateGeometry(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: TextCustomEditor__RichTextBrowser, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: TextCustomEditor__RichTextBrowser, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: TextCustomEditor__RichTextBrowser, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: TextCustomEditor__RichTextBrowser, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FocusWidget(self: TextCustomEditor__RichTextBrowser) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn NextInFocusChain(self: TextCustomEditor__RichTextBrowser) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn PreviousInFocusChain(self: TextCustomEditor__RichTextBrowser) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn AcceptDrops(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: TextCustomEditor__RichTextBrowser, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: TextCustomEditor__RichTextBrowser, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: TextCustomEditor__RichTextBrowser, actions: []QAction) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: TextCustomEditor__RichTextBrowser, before: anytype, actions: []QAction) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: TextCustomEditor__RichTextBrowser, before: anytype, action: anytype) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: TextCustomEditor__RichTextBrowser, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("textcustomeditor__richtextbrowser.Actions: Memory allocation failed");
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: TextCustomEditor__RichTextBrowser, text: []const u8) QAction {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: TextCustomEditor__RichTextBrowser, icon: anytype, text: []const u8) QAction {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: TextCustomEditor__RichTextBrowser, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: TextCustomEditor__RichTextBrowser, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ParentWidget(self: TextCustomEditor__RichTextBrowser) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: TextCustomEditor__RichTextBrowser, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: TextCustomEditor__RichTextBrowser, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: TextCustomEditor__RichTextBrowser, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: TextCustomEditor__RichTextBrowser, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: TextCustomEditor__RichTextBrowser, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: TextCustomEditor__RichTextBrowser, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: TextCustomEditor__RichTextBrowser, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: TextCustomEditor__RichTextBrowser, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn EnsurePolished(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: TextCustomEditor__RichTextBrowser, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn AutoFillBackground(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: TextCustomEditor__RichTextBrowser, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn BackingStore(self: TextCustomEditor__RichTextBrowser) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn WindowHandle(self: TextCustomEditor__RichTextBrowser) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Screen(self: TextCustomEditor__RichTextBrowser) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: TextCustomEditor__RichTextBrowser, screen: anytype) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: TextCustomEditor__RichTextBrowser, title: []const u8) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: TextCustomEditor__RichTextBrowser, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: TextCustomEditor__RichTextBrowser, iconText: []const u8) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: TextCustomEditor__RichTextBrowser, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: TextCustomEditor__RichTextBrowser, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: TextCustomEditor__RichTextBrowser, target: anytype, targetOffset: anytype) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: TextCustomEditor__RichTextBrowser, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: TextCustomEditor__RichTextBrowser, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: TextCustomEditor__RichTextBrowser, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: TextCustomEditor__RichTextBrowser, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: TextCustomEditor__RichTextBrowser, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: TextCustomEditor__RichTextBrowser, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: TextCustomEditor__RichTextBrowser, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: TextCustomEditor__RichTextBrowser, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: TextCustomEditor__RichTextBrowser, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: TextCustomEditor__RichTextBrowser, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: TextCustomEditor__RichTextBrowser, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: TextCustomEditor__RichTextBrowser, param1: i32, on: bool) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__richtextbrowser.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextCustomEditor__RichTextBrowser, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsWidgetType(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsWindowType(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn IsQuickItemType(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SignalsBlocked(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextCustomEditor__RichTextBrowser, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Thread(self: TextCustomEditor__RichTextBrowser) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextCustomEditor__RichTextBrowser, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextCustomEditor__RichTextBrowser, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextCustomEditor__RichTextBrowser, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextCustomEditor__RichTextBrowser, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextCustomEditor__RichTextBrowser, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("textcustomeditor__richtextbrowser.Children: Memory allocation failed");
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextCustomEditor__RichTextBrowser, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextCustomEditor__RichTextBrowser, obj: anytype) void {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextCustomEditor__RichTextBrowser, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Disconnect3(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextCustomEditor__RichTextBrowser, receiver: anytype) bool {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn DumpObjectTree(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn DumpObjectInfo(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextCustomEditor__RichTextBrowser, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextCustomEditor__RichTextBrowser, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextCustomEditor__RichTextBrowser, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("textcustomeditor__richtextbrowser.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textcustomeditor__richtextbrowser.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn BindingStorage(self: TextCustomEditor__RichTextBrowser) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn BindingStorage2(self: TextCustomEditor__RichTextBrowser) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Destroyed(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Parent(self: TextCustomEditor__RichTextBrowser) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextCustomEditor__RichTextBrowser, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn DeleteLater(self: TextCustomEditor__RichTextBrowser) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextCustomEditor__RichTextBrowser, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextCustomEditor__RichTextBrowser, time: i64, timerType: i32) i32 {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextCustomEditor__RichTextBrowser, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextCustomEditor__RichTextBrowser, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextCustomEditor__RichTextBrowser, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextCustomEditor__RichTextBrowser, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextCustomEditor__RichTextBrowser, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn PaintingActive(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn WidthMM(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn HeightMM(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn LogicalDpiX(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn LogicalDpiY(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn PhysicalDpiX(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn PhysicalDpiY(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn DevicePixelRatio(self: TextCustomEditor__RichTextBrowser) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn DevicePixelRatioF(self: TextCustomEditor__RichTextBrowser) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ColorCount(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Depth(self: TextCustomEditor__RichTextBrowser) i32 {
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

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#loadResource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn LoadResource(self: TextCustomEditor__RichTextBrowser, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_LoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperLoadResource` instead
    ///
    pub const QBaseLoadResource = SuperLoadResource;

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#loadResource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn SuperLoadResource(self: TextCustomEditor__RichTextBrowser, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperLoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#loadResource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, typeVal: i32, name: QUrl) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnLoadResource(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, i32, QUrl) callconv(.c) QVariant) void {
        qtc.TextCustomEditor__RichTextBrowser_OnLoadResource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#backward)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Backward(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_Backward(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperBackward` instead
    ///
    pub const QBaseBackward = SuperBackward;

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#backward)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperBackward(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_SuperBackward(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#backward)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnBackward(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnBackward(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#forward)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Forward(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_Forward(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperForward` instead
    ///
    pub const QBaseForward = SuperForward;

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#forward)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperForward(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_SuperForward(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#forward)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnForward(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnForward(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#home)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Home(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_Home(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHome` instead
    ///
    pub const QBaseHome = SuperHome;

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#home)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperHome(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_SuperHome(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#home)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnHome(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnHome(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#reload)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Reload(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_Reload(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReload` instead
    ///
    pub const QBaseReload = SuperReload;

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#reload)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperReload(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_SuperReload(@ptrCast(self.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#reload)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReload(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnReload(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` ev: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: TextCustomEditor__RichTextBrowser, ev: anytype) void {
        comptime _ = @TypeOf(ev)._is_QMouseEvent;
        qtc.TextCustomEditor__RichTextBrowser_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` ev: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: TextCustomEditor__RichTextBrowser, ev: anytype) void {
        comptime _ = @TypeOf(ev)._is_QMouseEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, ev: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` ev: QMouseEvent `
    ///
    pub fn MousePressEvent(self: TextCustomEditor__RichTextBrowser, ev: anytype) void {
        comptime _ = @TypeOf(ev)._is_QMouseEvent;
        qtc.TextCustomEditor__RichTextBrowser_MousePressEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` ev: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: TextCustomEditor__RichTextBrowser, ev: anytype) void {
        comptime _ = @TypeOf(ev)._is_QMouseEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, ev: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` ev: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: TextCustomEditor__RichTextBrowser, ev: anytype) void {
        comptime _ = @TypeOf(ev)._is_QMouseEvent;
        qtc.TextCustomEditor__RichTextBrowser_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` ev: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: TextCustomEditor__RichTextBrowser, ev: anytype) void {
        comptime _ = @TypeOf(ev)._is_QMouseEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, ev: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` ev: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: TextCustomEditor__RichTextBrowser, ev: anytype) void {
        comptime _ = @TypeOf(ev)._is_QFocusEvent;
        qtc.TextCustomEditor__RichTextBrowser_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` ev: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: TextCustomEditor__RichTextBrowser, ev: anytype) void {
        comptime _ = @TypeOf(ev)._is_QFocusEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, ev: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QFocusEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: TextCustomEditor__RichTextBrowser, next: bool) bool {
        return qtc.TextCustomEditor__RichTextBrowser_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: TextCustomEditor__RichTextBrowser, next: bool) bool {
        return qtc.TextCustomEditor__RichTextBrowser_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, bool) callconv(.c) bool) void {
        qtc.TextCustomEditor__RichTextBrowser_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn PaintEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.TextCustomEditor__RichTextBrowser_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, e: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QPaintEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#doSetSource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` name: QUrl `
    ///
    /// ` typeVal: qtextdocument_enums.ResourceType `
    ///
    pub fn DoSetSource(self: TextCustomEditor__RichTextBrowser, name: anytype, typeVal: i32) void {
        comptime _ = @TypeOf(name)._is_QUrl;
        qtc.TextCustomEditor__RichTextBrowser_DoSetSource(@ptrCast(self.ptr), @ptrCast(name.ptr), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `SuperDoSetSource` instead
    ///
    pub const QBaseDoSetSource = SuperDoSetSource;

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#doSetSource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` name: QUrl `
    ///
    /// ` typeVal: qtextdocument_enums.ResourceType `
    ///
    pub fn SuperDoSetSource(self: TextCustomEditor__RichTextBrowser, name: anytype, typeVal: i32) void {
        comptime _ = @TypeOf(name)._is_QUrl;
        qtc.TextCustomEditor__RichTextBrowser_SuperDoSetSource(@ptrCast(self.ptr), @ptrCast(name.ptr), @bitCast(typeVal));
    }

    /// Inherited from QTextBrowser
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextbrowser.html#doSetSource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, name: QUrl, typeVal: qtextdocument_enums.ResourceType) callconv(.c) void `
    ///
    pub fn OnDoSetSource(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QUrl, i32) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnDoSetSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: TextCustomEditor__RichTextBrowser, property: i32) QVariant {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_InputMethodQuery(@ptrCast(self.ptr), @bitCast(property)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: TextCustomEditor__RichTextBrowser, property: i32) QVariant {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(property)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, property: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnInputMethodQuery(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, i32) callconv(.c) QVariant) void {
        qtc.TextCustomEditor__RichTextBrowser_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.TextCustomEditor__RichTextBrowser_TimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, e: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QTimerEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextCustomEditor__RichTextBrowser_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QKeyEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn ResizeEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.TextCustomEditor__RichTextBrowser_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, e: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QResizeEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextCustomEditor__RichTextBrowser_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.TextCustomEditor__RichTextBrowser_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, e: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QDragEnterEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.TextCustomEditor__RichTextBrowser_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, e: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QDragLeaveEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.TextCustomEditor__RichTextBrowser_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, e: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QDragMoveEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn DropEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.TextCustomEditor__RichTextBrowser_DropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn SuperDropEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, e: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QDropEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusInEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextCustomEditor__RichTextBrowser_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QFocusEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn ShowEvent(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.TextCustomEditor__RichTextBrowser_ShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn SuperShowEvent(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QShowEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QEvent `
    ///
    pub fn ChangeEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.TextCustomEditor__RichTextBrowser_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperChangeEvent(self: TextCustomEditor__RichTextBrowser, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, e: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn CreateMimeDataFromSelection(self: TextCustomEditor__RichTextBrowser) QMimeData {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_CreateMimeDataFromSelection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCreateMimeDataFromSelection` instead
    ///
    pub const QBaseCreateMimeDataFromSelection = SuperCreateMimeDataFromSelection;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperCreateMimeDataFromSelection(self: TextCustomEditor__RichTextBrowser) QMimeData {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperCreateMimeDataFromSelection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) QMimeData `
    ///
    pub fn OnCreateMimeDataFromSelection(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) QMimeData) void {
        qtc.TextCustomEditor__RichTextBrowser_OnCreateMimeDataFromSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` source: QMimeData `
    ///
    pub fn CanInsertFromMimeData(self: TextCustomEditor__RichTextBrowser, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.TextCustomEditor__RichTextBrowser_CanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `SuperCanInsertFromMimeData` instead
    ///
    pub const QBaseCanInsertFromMimeData = SuperCanInsertFromMimeData;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` source: QMimeData `
    ///
    pub fn SuperCanInsertFromMimeData(self: TextCustomEditor__RichTextBrowser, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.TextCustomEditor__RichTextBrowser_SuperCanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, source: QMimeData) callconv(.c) bool `
    ///
    pub fn OnCanInsertFromMimeData(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QMimeData) callconv(.c) bool) void {
        qtc.TextCustomEditor__RichTextBrowser_OnCanInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` source: QMimeData `
    ///
    pub fn InsertFromMimeData(self: TextCustomEditor__RichTextBrowser, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QMimeData;
        qtc.TextCustomEditor__RichTextBrowser_InsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `SuperInsertFromMimeData` instead
    ///
    pub const QBaseInsertFromMimeData = SuperInsertFromMimeData;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` source: QMimeData `
    ///
    pub fn SuperInsertFromMimeData(self: TextCustomEditor__RichTextBrowser, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QMimeData;
        qtc.TextCustomEditor__RichTextBrowser_SuperInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, source: QMimeData) callconv(.c) void `
    ///
    pub fn OnInsertFromMimeData(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QMimeData) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextCustomEditor__RichTextBrowser_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QInputMethodEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: TextCustomEditor__RichTextBrowser, dx: i32, dy: i32) void {
        qtc.TextCustomEditor__RichTextBrowser_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: TextCustomEditor__RichTextBrowser, dx: i32, dy: i32) void {
        qtc.TextCustomEditor__RichTextBrowser_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, i32, i32) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn DoSetTextCursor(self: TextCustomEditor__RichTextBrowser, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.TextCustomEditor__RichTextBrowser_DoSetTextCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoSetTextCursor` instead
    ///
    pub const QBaseDoSetTextCursor = SuperDoSetTextCursor;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn SuperDoSetTextCursor(self: TextCustomEditor__RichTextBrowser, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.TextCustomEditor__RichTextBrowser_SuperDoSetTextCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, cursor: QTextCursor) callconv(.c) void `
    ///
    pub fn OnDoSetTextCursor(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QTextCursor) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnDoSetTextCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn MinimumSizeHint(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperMinimumSizeHint(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnMinimumSizeHint(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextCustomEditor__RichTextBrowser_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SizeHint(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperSizeHint(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnSizeHint(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextCustomEditor__RichTextBrowser_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SetupViewport(self: TextCustomEditor__RichTextBrowser, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.TextCustomEditor__RichTextBrowser_SetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SuperSetupViewport(self: TextCustomEditor__RichTextBrowser, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.TextCustomEditor__RichTextBrowser_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, viewport: QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QWidget) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn EventFilter(self: TextCustomEditor__RichTextBrowser, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.TextCustomEditor__RichTextBrowser_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperEventFilter(self: TextCustomEditor__RichTextBrowser, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.TextCustomEditor__RichTextBrowser_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__RichTextBrowser_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ViewportEvent(self: TextCustomEditor__RichTextBrowser, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.TextCustomEditor__RichTextBrowser_ViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperViewportEvent(self: TextCustomEditor__RichTextBrowser, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.TextCustomEditor__RichTextBrowser_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__RichTextBrowser_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ViewportSizeHint(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_ViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperViewportSizeHint(self: TextCustomEditor__RichTextBrowser) QSize {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnViewportSizeHint(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextCustomEditor__RichTextBrowser_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: TextCustomEditor__RichTextBrowser, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.TextCustomEditor__RichTextBrowser_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: TextCustomEditor__RichTextBrowser, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.TextCustomEditor__RichTextBrowser_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QStyleOptionFrame) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn DevType(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.TextCustomEditor__RichTextBrowser_DevType(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperDevType(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.TextCustomEditor__RichTextBrowser_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) i32) void {
        qtc.TextCustomEditor__RichTextBrowser_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: TextCustomEditor__RichTextBrowser, visible: bool) void {
        qtc.TextCustomEditor__RichTextBrowser_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: TextCustomEditor__RichTextBrowser, visible: bool) void {
        qtc.TextCustomEditor__RichTextBrowser_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: TextCustomEditor__RichTextBrowser, param1: i32) i32 {
        return qtc.TextCustomEditor__RichTextBrowser_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: TextCustomEditor__RichTextBrowser, param1: i32) i32 {
        return qtc.TextCustomEditor__RichTextBrowser_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, i32) callconv(.c) i32) void {
        qtc.TextCustomEditor__RichTextBrowser_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn HasHeightForWidth(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.TextCustomEditor__RichTextBrowser_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperHasHeightForWidth(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.TextCustomEditor__RichTextBrowser_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__RichTextBrowser_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn PaintEngine(self: TextCustomEditor__RichTextBrowser) QPaintEngine {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperPaintEngine(self: TextCustomEditor__RichTextBrowser) QPaintEngine {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.TextCustomEditor__RichTextBrowser_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextCustomEditor__RichTextBrowser_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QEnterEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__RichTextBrowser_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextCustomEditor__RichTextBrowser_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QMoveEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextCustomEditor__RichTextBrowser_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QCloseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextCustomEditor__RichTextBrowser_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QTabletEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextCustomEditor__RichTextBrowser_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QActionEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextCustomEditor__RichTextBrowser_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QHideEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: TextCustomEditor__RichTextBrowser, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextCustomEditor__RichTextBrowser_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: TextCustomEditor__RichTextBrowser, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextCustomEditor__RichTextBrowser_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.TextCustomEditor__RichTextBrowser_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: TextCustomEditor__RichTextBrowser, param1: i32) i32 {
        return qtc.TextCustomEditor__RichTextBrowser_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: TextCustomEditor__RichTextBrowser, param1: i32) i32 {
        return qtc.TextCustomEditor__RichTextBrowser_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, i32) callconv(.c) i32) void {
        qtc.TextCustomEditor__RichTextBrowser_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: TextCustomEditor__RichTextBrowser, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextCustomEditor__RichTextBrowser_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: TextCustomEditor__RichTextBrowser, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextCustomEditor__RichTextBrowser_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QPainter) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: TextCustomEditor__RichTextBrowser, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: TextCustomEditor__RichTextBrowser, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QPoint) callconv(.c) QPaintDevice) void {
        qtc.TextCustomEditor__RichTextBrowser_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SharedPainter(self: TextCustomEditor__RichTextBrowser) QPainter {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperSharedPainter(self: TextCustomEditor__RichTextBrowser) QPainter {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) QPainter) void {
        qtc.TextCustomEditor__RichTextBrowser_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextCustomEditor__RichTextBrowser_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QChildEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__RichTextBrowser_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextCustomEditor__RichTextBrowser, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__RichTextBrowser_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextCustomEditor__RichTextBrowser, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__RichTextBrowser_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextCustomEditor__RichTextBrowser, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__RichTextBrowser_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QMetaMethod) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextCustomEditor__RichTextBrowser, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__RichTextBrowser_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextCustomEditor__RichTextBrowser, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__RichTextBrowser_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QMetaMethod) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` range: f32 `
    ///
    pub fn ZoomInF(self: TextCustomEditor__RichTextBrowser, range: f32) void {
        qtc.TextCustomEditor__RichTextBrowser_ZoomInF(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `SuperZoomInF` instead
    ///
    pub const QBaseZoomInF = SuperZoomInF;

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` range: f32 `
    ///
    pub fn SuperZoomInF(self: TextCustomEditor__RichTextBrowser, range: f32) void {
        qtc.TextCustomEditor__RichTextBrowser_SuperZoomInF(@ptrCast(self.ptr), @bitCast(range));
    }

    /// Inherited from QTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtextedit.html#zoomInF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, range: f32) callconv(.c) void `
    ///
    pub fn OnZoomInF(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, f32) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnZoomInF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: TextCustomEditor__RichTextBrowser, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.TextCustomEditor__RichTextBrowser_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: TextCustomEditor__RichTextBrowser, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.TextCustomEditor__RichTextBrowser_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn ViewportMargins(self: TextCustomEditor__RichTextBrowser) QMargins {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperViewportMargins(self: TextCustomEditor__RichTextBrowser) QMargins {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnViewportMargins(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) QMargins) void {
        qtc.TextCustomEditor__RichTextBrowser_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QPainter `
    ///
    pub fn DrawFrame(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.TextCustomEditor__RichTextBrowser_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` param1: QPainter `
    ///
    pub fn SuperDrawFrame(self: TextCustomEditor__RichTextBrowser, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.TextCustomEditor__RichTextBrowser_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, param1: QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QPainter) callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn UpdateMicroFocus(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperUpdateMicroFocus(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Create(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_Create(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperCreate(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Destroy(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_Destroy(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperDestroy(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__RichTextBrowser_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FocusNextChild(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.TextCustomEditor__RichTextBrowser_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperFocusNextChild(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.TextCustomEditor__RichTextBrowser_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__RichTextBrowser_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn FocusPreviousChild(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.TextCustomEditor__RichTextBrowser_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperFocusPreviousChild(self: TextCustomEditor__RichTextBrowser) bool {
        return qtc.TextCustomEditor__RichTextBrowser_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__RichTextBrowser_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Sender(self: TextCustomEditor__RichTextBrowser) QObject {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperSender(self: TextCustomEditor__RichTextBrowser) QObject {
        return .{ .ptr = qtc.TextCustomEditor__RichTextBrowser_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextCustomEditor__RichTextBrowser_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SenderSignalIndex(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.TextCustomEditor__RichTextBrowser_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn SuperSenderSignalIndex(self: TextCustomEditor__RichTextBrowser) i32 {
        return qtc.TextCustomEditor__RichTextBrowser_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextCustomEditor__RichTextBrowser, callback: *const fn () callconv(.c) i32) void {
        qtc.TextCustomEditor__RichTextBrowser_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextCustomEditor__RichTextBrowser, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextCustomEditor__RichTextBrowser_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextCustomEditor__RichTextBrowser, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextCustomEditor__RichTextBrowser_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextCustomEditor__RichTextBrowser_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextCustomEditor__RichTextBrowser, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextCustomEditor__RichTextBrowser_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextCustomEditor__RichTextBrowser, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextCustomEditor__RichTextBrowser_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, QMetaMethod) callconv(.c) bool) void {
        qtc.TextCustomEditor__RichTextBrowser_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: TextCustomEditor__RichTextBrowser, metricA: i32, metricB: i32) f64 {
        return qtc.TextCustomEditor__RichTextBrowser_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: TextCustomEditor__RichTextBrowser, metricA: i32, metricB: i32) f64 {
        return qtc.TextCustomEditor__RichTextBrowser_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, i32, i32) callconv(.c) f64) void {
        qtc.TextCustomEditor__RichTextBrowser_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__RichTextBrowser, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextCustomEditor__RichTextBrowser, callback: *const fn (TextCustomEditor__RichTextBrowser, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1RichTextBrowser.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextCustomEditor__RichTextBrowser `
    ///
    pub fn Delete(self: TextCustomEditor__RichTextBrowser) void {
        qtc.TextCustomEditor__RichTextBrowser_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const SupportFeature = enum(i32) {
        pub const None: i32 = 0;
        pub const Search: i32 = 1;
        pub const TextToSpeech: i32 = 4;
        pub const AllowWebShortcut: i32 = 16;
    };
};
