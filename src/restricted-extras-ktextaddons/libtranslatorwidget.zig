const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractTextDocumentLayout__PaintContext = @import("libqt6").QAbstractTextDocumentLayout__PaintContext;
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
const QRectF = @import("libqt6").QRectF;
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
const QTextBlock = @import("libqt6").QTextBlock;
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
const qplaintextedit_enums = @import("../libqplaintextedit.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qtextcursor_enums = @import("../libqtextcursor.zig").enums;
const qtextdocument_enums = @import("../libqtextdocument.zig").enums;
const qtextoption_enums = @import("../libqtextoption.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
pub const TextTranslator__TranslatorTextEdit = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextTranslator__TranslatorTextEdit,

    pub const _is_TextTranslator__TranslatorTextEdit = {};
    pub const _is_QPlainTextEdit = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new TextTranslator::TranslatorTextEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) TextTranslator__TranslatorTextEdit {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new TextTranslator::TranslatorTextEdit object.
    ///
    pub fn New2() TextTranslator__TranslatorTextEdit {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_new2() };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn MetaObject(self: TextTranslator__TranslatorTextEdit) QMetaObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextTranslator__TranslatorTextEdit_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperMetaObject(self: TextTranslator__TranslatorTextEdit) QMetaObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextTranslator__TranslatorTextEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextTranslator__TranslatorTextEdit_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextTranslator__TranslatorTextEdit_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextTranslator__TranslatorTextEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextTranslator__TranslatorTextEdit_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextTranslator__TranslatorTextEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextTranslator__TranslatorTextEdit_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorTextEdit_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextTranslator__TranslatorTextEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextTranslator__TranslatorTextEdit_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn TranslateText(self: TextTranslator__TranslatorTextEdit) void {
        qtc.TextTranslator__TranslatorTextEdit_TranslateText(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit) callconv(.c) void `
    ///
    pub fn OnTranslateText(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_Connect_TranslateText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn DropEvent(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.TextTranslator__TranslatorTextEdit_DropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, param1: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QDropEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn SuperDropEvent(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` document: QTextDocument `
    ///
    pub fn SetDocument(self: TextTranslator__TranslatorTextEdit, document: anytype) void {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        qtc.QPlainTextEdit_SetDocument(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Document(self: TextTranslator__TranslatorTextEdit) QTextDocument {
        return .{ .ptr = qtc.QPlainTextEdit_Document(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` placeholderText: []const u8 `
    ///
    pub fn SetPlaceholderText(self: TextTranslator__TranslatorTextEdit, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = placeholderText.len,
            .data = placeholderText.ptr,
        };
        qtc.QPlainTextEdit_SetPlaceholderText(@ptrCast(self.ptr), placeholderText_str);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceholderText(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlainTextEdit_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn SetTextCursor(self: TextTranslator__TranslatorTextEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QPlainTextEdit_SetTextCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn TextCursor(self: TextTranslator__TranslatorTextEdit) QTextCursor {
        return .{ .ptr = qtc.QPlainTextEdit_TextCursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsReadOnly(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QPlainTextEdit_IsReadOnly(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` ro: bool `
    ///
    pub fn SetReadOnly(self: TextTranslator__TranslatorTextEdit, ro: bool) void {
        qtc.QPlainTextEdit_SetReadOnly(@ptrCast(self.ptr), ro);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` flags: flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn SetTextInteractionFlags(self: TextTranslator__TranslatorTextEdit, flags: i32) void {
        qtc.QPlainTextEdit_SetTextInteractionFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn TextInteractionFlags(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPlainTextEdit_TextInteractionFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mergeCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` modifier: QTextCharFormat `
    ///
    pub fn MergeCurrentCharFormat(self: TextTranslator__TranslatorTextEdit, modifier: anytype) void {
        comptime _ = @TypeOf(modifier)._is_QTextCharFormat;
        qtc.QPlainTextEdit_MergeCurrentCharFormat(@ptrCast(self.ptr), @ptrCast(modifier.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SetCurrentCharFormat(self: TextTranslator__TranslatorTextEdit, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QPlainTextEdit_SetCurrentCharFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#currentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn CurrentCharFormat(self: TextTranslator__TranslatorTextEdit) QTextCharFormat {
        return .{ .ptr = qtc.QPlainTextEdit_CurrentCharFormat(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn TabChangesFocus(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QPlainTextEdit_TabChangesFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn SetTabChangesFocus(self: TextTranslator__TranslatorTextEdit, b: bool) void {
        qtc.QPlainTextEdit_SetTabChangesFocus(@ptrCast(self.ptr), b);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocumentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetDocumentTitle(self: TextTranslator__TranslatorTextEdit, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QPlainTextEdit_SetDocumentTitle(@ptrCast(self.ptr), title_str);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#documentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocumentTitle(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlainTextEdit_DocumentTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.DocumentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsUndoRedoEnabled(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QPlainTextEdit_IsUndoRedoEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUndoRedoEnabled(self: TextTranslator__TranslatorTextEdit, enable: bool) void {
        qtc.QPlainTextEdit_SetUndoRedoEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setMaximumBlockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` maximum: i32 `
    ///
    pub fn SetMaximumBlockCount(self: TextTranslator__TranslatorTextEdit, maximum: i32) void {
        qtc.QPlainTextEdit_SetMaximumBlockCount(@ptrCast(self.ptr), @bitCast(maximum));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#maximumBlockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn MaximumBlockCount(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPlainTextEdit_MaximumBlockCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#lineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qplaintextedit_enums.LineWrapMode `
    ///
    pub fn LineWrapMode(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPlainTextEdit_LineWrapMode(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setLineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` mode: qplaintextedit_enums.LineWrapMode `
    ///
    pub fn SetLineWrapMode(self: TextTranslator__TranslatorTextEdit, mode: i32) void {
        qtc.QPlainTextEdit_SetLineWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qtextoption_enums.WrapMode `
    ///
    pub fn WordWrapMode(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPlainTextEdit_WordWrapMode(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setWordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` policy: qtextoption_enums.WrapMode `
    ///
    pub fn SetWordWrapMode(self: TextTranslator__TranslatorTextEdit, policy: i32) void {
        qtc.QPlainTextEdit_SetWordWrapMode(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SetBackgroundVisible(self: TextTranslator__TranslatorTextEdit, visible: bool) void {
        qtc.QPlainTextEdit_SetBackgroundVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#backgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn BackgroundVisible(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QPlainTextEdit_BackgroundVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCenterOnScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetCenterOnScroll(self: TextTranslator__TranslatorTextEdit, enabled: bool) void {
        qtc.QPlainTextEdit_SetCenterOnScroll(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerOnScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn CenterOnScroll(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QPlainTextEdit_CenterOnScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` exp: []const u8 `
    ///
    pub fn Find(self: TextTranslator__TranslatorTextEdit, exp: []const u8) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QPlainTextEdit_Find(@ptrCast(self.ptr), exp_str);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` exp: QRegularExpression `
    ///
    pub fn Find2(self: TextTranslator__TranslatorTextEdit, exp: anytype) bool {
        comptime _ = @TypeOf(exp)._is_QRegularExpression;
        return qtc.QPlainTextEdit_Find2(@ptrCast(self.ptr), @ptrCast(exp.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToPlainText(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlainTextEdit_ToPlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.ToPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#ensureCursorVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn EnsureCursorVisible(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_EnsureCursorVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn CreateStandardContextMenu(self: TextTranslator__TranslatorTextEdit) QMenu {
        return .{ .ptr = qtc.QPlainTextEdit_CreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` position: QPoint `
    ///
    pub fn CreateStandardContextMenu2(self: TextTranslator__TranslatorTextEdit, position: anytype) QMenu {
        comptime _ = @TypeOf(position)._is_QPoint;
        return .{ .ptr = qtc.QPlainTextEdit_CreateStandardContextMenu2(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorForPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CursorForPosition(self: TextTranslator__TranslatorTextEdit, pos: anytype) QTextCursor {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QPlainTextEdit_CursorForPosition(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn CursorRect(self: TextTranslator__TranslatorTextEdit, cursor: anytype) QRect {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QPlainTextEdit_CursorRect(@ptrCast(self.ptr), @ptrCast(cursor.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn CursorRect2(self: TextTranslator__TranslatorTextEdit) QRect {
        return .{ .ptr = qtc.QPlainTextEdit_CursorRect2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#anchorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPoint `
    ///
    pub fn AnchorAt(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator, pos: anytype) []const u8 {
        comptime _ = @TypeOf(pos)._is_QPoint;
        var _str = qtc.QPlainTextEdit_AnchorAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.AnchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#overwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn OverwriteMode(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QPlainTextEdit_OverwriteMode(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` overwrite: bool `
    ///
    pub fn SetOverwriteMode(self: TextTranslator__TranslatorTextEdit, overwrite: bool) void {
        qtc.QPlainTextEdit_SetOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn TabStopDistance(self: TextTranslator__TranslatorTextEdit) f64 {
        return qtc.QPlainTextEdit_TabStopDistance(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` distance: f64 `
    ///
    pub fn SetTabStopDistance(self: TextTranslator__TranslatorTextEdit, distance: f64) void {
        qtc.QPlainTextEdit_SetTabStopDistance(@ptrCast(self.ptr), @bitCast(distance));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn CursorWidth(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPlainTextEdit_CursorWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` width: i32 `
    ///
    pub fn SetCursorWidth(self: TextTranslator__TranslatorTextEdit, width: i32) void {
        qtc.QPlainTextEdit_SetCursorWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setExtraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` selections: []QTextEdit__ExtraSelection `
    ///
    pub fn SetExtraSelections(self: TextTranslator__TranslatorTextEdit, selections: []QTextEdit__ExtraSelection) void {
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QPlainTextEdit_SetExtraSelections(@ptrCast(self.ptr), selections_list);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#extraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtraSelections(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []QTextEdit__ExtraSelection {
        const _arr: qtc.libqt_list = qtc.QPlainTextEdit_ExtraSelections(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextEdit__ExtraSelection, _arr.len) catch @panic("texttranslator__translatortextedit.ExtraSelections: Memory allocation failed");
        const _data: [*]QtC.QTextEdit__ExtraSelection = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    pub fn MoveCursor(self: TextTranslator__TranslatorTextEdit, operation: i32) void {
        qtc.QPlainTextEdit_MoveCursor(@ptrCast(self.ptr), @bitCast(operation));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canPaste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn CanPaste(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QPlainTextEdit_CanPaste(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` printer: QPagedPaintDevice `
    ///
    pub fn Print(self: TextTranslator__TranslatorTextEdit, printer: anytype) void {
        comptime _ = @TypeOf(printer)._is_QPagedPaintDevice;
        qtc.QPlainTextEdit_Print(@ptrCast(self.ptr), @ptrCast(printer.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn BlockCount(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPlainTextEdit_BlockCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn InputMethodQuery2(self: TextTranslator__TranslatorTextEdit, query: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QPlainTextEdit_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(query), @ptrCast(argument.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetPlainText(self: TextTranslator__TranslatorTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_SetPlainText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Cut(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_Cut(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Copy(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_Copy(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Paste(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_Paste(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Undo(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_Undo(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Redo(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_Redo(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Clear(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_Clear(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SelectAll(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_SelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertPlainText(self: TextTranslator__TranslatorTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_InsertPlainText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AppendPlainText(self: TextTranslator__TranslatorTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_AppendPlainText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` html: []const u8 `
    ///
    pub fn AppendHtml(self: TextTranslator__TranslatorTextEdit, html: []const u8) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QPlainTextEdit_AppendHtml(@ptrCast(self.ptr), html_str);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn CenterCursor(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_CenterCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ZoomIn(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_ZoomIn(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ZoomOut(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_ZoomOut(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn TextChanged(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_TextChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn UndoAvailable(self: TextTranslator__TranslatorTextEdit, b: bool) void {
        qtc.QPlainTextEdit_UndoAvailable(@ptrCast(self.ptr), b);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn OnUndoAvailable(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_UndoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn RedoAvailable(self: TextTranslator__TranslatorTextEdit, b: bool) void {
        qtc.QPlainTextEdit_RedoAvailable(@ptrCast(self.ptr), b);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn OnRedoAvailable(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_RedoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn CopyAvailable(self: TextTranslator__TranslatorTextEdit, b: bool) void {
        qtc.QPlainTextEdit_CopyAvailable(@ptrCast(self.ptr), b);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn OnCopyAvailable(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_CopyAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SelectionChanged(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_SelectionChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn CursorPositionChanged(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QPlainTextEdit_CursorPositionChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit) callconv(.c) void `
    ///
    pub fn OnCursorPositionChanged(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` rect: QRect `
    ///
    /// ` dy: i32 `
    ///
    pub fn UpdateRequest(self: TextTranslator__TranslatorTextEdit, rect: anytype, dy: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPlainTextEdit_UpdateRequest(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(dy));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, rect: QRect, dy: i32) callconv(.c) void `
    ///
    pub fn OnUpdateRequest(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QRect, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_UpdateRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` newBlockCount: i32 `
    ///
    pub fn BlockCountChanged(self: TextTranslator__TranslatorTextEdit, newBlockCount: i32) void {
        qtc.QPlainTextEdit_BlockCountChanged(@ptrCast(self.ptr), @bitCast(newBlockCount));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, newBlockCount: i32) callconv(.c) void `
    ///
    pub fn OnBlockCountChanged(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_BlockCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: bool `
    ///
    pub fn ModificationChanged(self: TextTranslator__TranslatorTextEdit, param1: bool) void {
        qtc.QPlainTextEdit_ModificationChanged(@ptrCast(self.ptr), param1);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, param1: bool) callconv(.c) void `
    ///
    pub fn OnModificationChanged(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_ModificationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` exp: []const u8 `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn Find22(self: TextTranslator__TranslatorTextEdit, exp: []const u8, options: i32) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QPlainTextEdit_Find22(@ptrCast(self.ptr), exp_str, @bitCast(options));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` exp: QRegularExpression `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn Find23(self: TextTranslator__TranslatorTextEdit, exp: anytype, options: i32) bool {
        comptime _ = @TypeOf(exp)._is_QRegularExpression;
        return qtc.QPlainTextEdit_Find23(@ptrCast(self.ptr), @ptrCast(exp.ptr), @bitCast(options));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    /// ` mode: qtextcursor_enums.MoveMode `
    ///
    pub fn MoveCursor2(self: TextTranslator__TranslatorTextEdit, operation: i32, mode: i32) void {
        qtc.QPlainTextEdit_MoveCursor2(@ptrCast(self.ptr), @bitCast(operation), @bitCast(mode));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` range: i32 `
    ///
    pub fn ZoomIn1(self: TextTranslator__TranslatorTextEdit, range: i32) void {
        qtc.QPlainTextEdit_ZoomIn1(@ptrCast(self.ptr), @bitCast(range));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` range: i32 `
    ///
    pub fn ZoomOut1(self: TextTranslator__TranslatorTextEdit, range: i32) void {
        qtc.QPlainTextEdit_ZoomOut1(@ptrCast(self.ptr), @bitCast(range));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: TextTranslator__TranslatorTextEdit, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn VerticalScrollBar(self: TextTranslator__TranslatorTextEdit) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: TextTranslator__TranslatorTextEdit, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: TextTranslator__TranslatorTextEdit, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn HorizontalScrollBar(self: TextTranslator__TranslatorTextEdit) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: TextTranslator__TranslatorTextEdit, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn CornerWidget(self: TextTranslator__TranslatorTextEdit) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCornerWidget(self: TextTranslator__TranslatorTextEdit, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: TextTranslator__TranslatorTextEdit, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ScrollBarWidgets(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("texttranslator__translatortextedit.ScrollBarWidgets: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Viewport(self: TextTranslator__TranslatorTextEdit) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetViewport(self: TextTranslator__TranslatorTextEdit, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn MaximumViewportSize(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: TextTranslator__TranslatorTextEdit, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn FrameStyle(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: TextTranslator__TranslatorTextEdit, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn FrameWidth(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: TextTranslator__TranslatorTextEdit, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: TextTranslator__TranslatorTextEdit, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn LineWidth(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: TextTranslator__TranslatorTextEdit, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn MidLineWidth(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: TextTranslator__TranslatorTextEdit, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn FrameRect(self: TextTranslator__TranslatorTextEdit) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` frameRect: QRect `
    ///
    pub fn SetFrameRect(self: TextTranslator__TranslatorTextEdit, frameRect: anytype) void {
        comptime _ = @TypeOf(frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn WinId(self: TextTranslator__TranslatorTextEdit) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn CreateWinId(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn InternalWinId(self: TextTranslator__TranslatorTextEdit) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn EffectiveWinId(self: TextTranslator__TranslatorTextEdit) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Style(self: TextTranslator__TranslatorTextEdit) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: TextTranslator__TranslatorTextEdit, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsTopLevel(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsWindow(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsModal(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: TextTranslator__TranslatorTextEdit, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsEnabled(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: TextTranslator__TranslatorTextEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: TextTranslator__TranslatorTextEdit, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: TextTranslator__TranslatorTextEdit, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: TextTranslator__TranslatorTextEdit, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn FrameGeometry(self: TextTranslator__TranslatorTextEdit) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Geometry(self: TextTranslator__TranslatorTextEdit) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn NormalGeometry(self: TextTranslator__TranslatorTextEdit) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn X(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Y(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Pos(self: TextTranslator__TranslatorTextEdit) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn FrameSize(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Size(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Width(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Height(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Rect(self: TextTranslator__TranslatorTextEdit) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ChildrenRect(self: TextTranslator__TranslatorTextEdit) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ChildrenRegion(self: TextTranslator__TranslatorTextEdit) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn MinimumSize(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn MaximumSize(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn MinimumWidth(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn MinimumHeight(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn MaximumWidth(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn MaximumHeight(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: TextTranslator__TranslatorTextEdit, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: TextTranslator__TranslatorTextEdit, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: TextTranslator__TranslatorTextEdit, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: TextTranslator__TranslatorTextEdit, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: TextTranslator__TranslatorTextEdit, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: TextTranslator__TranslatorTextEdit, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: TextTranslator__TranslatorTextEdit, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: TextTranslator__TranslatorTextEdit, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SizeIncrement(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: TextTranslator__TranslatorTextEdit, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: TextTranslator__TranslatorTextEdit, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn BaseSize(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: TextTranslator__TranslatorTextEdit, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: TextTranslator__TranslatorTextEdit, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: TextTranslator__TranslatorTextEdit, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: TextTranslator__TranslatorTextEdit, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: TextTranslator__TranslatorTextEdit, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: TextTranslator__TranslatorTextEdit, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: TextTranslator__TranslatorTextEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: TextTranslator__TranslatorTextEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: TextTranslator__TranslatorTextEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: TextTranslator__TranslatorTextEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: TextTranslator__TranslatorTextEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: TextTranslator__TranslatorTextEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: TextTranslator__TranslatorTextEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: TextTranslator__TranslatorTextEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: TextTranslator__TranslatorTextEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: TextTranslator__TranslatorTextEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: TextTranslator__TranslatorTextEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: TextTranslator__TranslatorTextEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Window(self: TextTranslator__TranslatorTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn NativeParentWidget(self: TextTranslator__TranslatorTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn TopLevelWidget(self: TextTranslator__TranslatorTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Palette(self: TextTranslator__TranslatorTextEdit) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: TextTranslator__TranslatorTextEdit, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: TextTranslator__TranslatorTextEdit, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: TextTranslator__TranslatorTextEdit, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Font(self: TextTranslator__TranslatorTextEdit) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: TextTranslator__TranslatorTextEdit, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn FontMetrics(self: TextTranslator__TranslatorTextEdit) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn FontInfo(self: TextTranslator__TranslatorTextEdit) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Cursor(self: TextTranslator__TranslatorTextEdit) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: TextTranslator__TranslatorTextEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn UnsetCursor(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: TextTranslator__TranslatorTextEdit, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn HasMouseTracking(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn UnderMouse(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: TextTranslator__TranslatorTextEdit, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn HasTabletTracking(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: TextTranslator__TranslatorTextEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: TextTranslator__TranslatorTextEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Mask(self: TextTranslator__TranslatorTextEdit) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ClearMask(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: TextTranslator__TranslatorTextEdit, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: TextTranslator__TranslatorTextEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Grab(self: TextTranslator__TranslatorTextEdit) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn GraphicsEffect(self: TextTranslator__TranslatorTextEdit) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: TextTranslator__TranslatorTextEdit, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: TextTranslator__TranslatorTextEdit, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: TextTranslator__TranslatorTextEdit, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: TextTranslator__TranslatorTextEdit, windowTitle: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: TextTranslator__TranslatorTextEdit, styleSheet: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: TextTranslator__TranslatorTextEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn WindowIcon(self: TextTranslator__TranslatorTextEdit) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: TextTranslator__TranslatorTextEdit, windowIconText: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: TextTranslator__TranslatorTextEdit, windowRole: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: TextTranslator__TranslatorTextEdit, filePath: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: TextTranslator__TranslatorTextEdit, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn WindowOpacity(self: TextTranslator__TranslatorTextEdit) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsWindowModified(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: TextTranslator__TranslatorTextEdit, toolTip: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: TextTranslator__TranslatorTextEdit, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ToolTipDuration(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: TextTranslator__TranslatorTextEdit, statusTip: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: TextTranslator__TranslatorTextEdit, whatsThis: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: TextTranslator__TranslatorTextEdit, name: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: TextTranslator__TranslatorTextEdit, description: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: TextTranslator__TranslatorTextEdit, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn UnsetLayoutDirection(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: TextTranslator__TranslatorTextEdit, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Locale(self: TextTranslator__TranslatorTextEdit) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn UnsetLocale(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsRightToLeft(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsLeftToRight(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SetFocus(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsActiveWindow(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ActivateWindow(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ClearFocus(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: TextTranslator__TranslatorTextEdit, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: TextTranslator__TranslatorTextEdit, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn HasFocus(self: TextTranslator__TranslatorTextEdit) bool {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: TextTranslator__TranslatorTextEdit, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn FocusProxy(self: TextTranslator__TranslatorTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: TextTranslator__TranslatorTextEdit, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn GrabMouse(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ReleaseMouse(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn GrabKeyboard(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ReleaseKeyboard(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: TextTranslator__TranslatorTextEdit, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: TextTranslator__TranslatorTextEdit, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: TextTranslator__TranslatorTextEdit, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: TextTranslator__TranslatorTextEdit, id: i32) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn UpdatesEnabled(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: TextTranslator__TranslatorTextEdit, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn GraphicsProxyWidget(self: TextTranslator__TranslatorTextEdit) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Update(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Repaint(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: TextTranslator__TranslatorTextEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: TextTranslator__TranslatorTextEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: TextTranslator__TranslatorTextEdit, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Show(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Hide(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ShowMinimized(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ShowMaximized(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ShowFullScreen(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ShowNormal(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Close(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Raise(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Lower(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: TextTranslator__TranslatorTextEdit, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: TextTranslator__TranslatorTextEdit, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: TextTranslator__TranslatorTextEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: TextTranslator__TranslatorTextEdit, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("texttranslator__translatortextedit.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: TextTranslator__TranslatorTextEdit, geometry: []u8) bool {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn AdjustSize(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsVisible(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: TextTranslator__TranslatorTextEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsHidden(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsMinimized(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsMaximized(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsFullScreen(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: TextTranslator__TranslatorTextEdit, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: TextTranslator__TranslatorTextEdit, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SizePolicy(self: TextTranslator__TranslatorTextEdit) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: TextTranslator__TranslatorTextEdit, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: TextTranslator__TranslatorTextEdit, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn VisibleRegion(self: TextTranslator__TranslatorTextEdit) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: TextTranslator__TranslatorTextEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: TextTranslator__TranslatorTextEdit, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ContentsMargins(self: TextTranslator__TranslatorTextEdit) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ContentsRect(self: TextTranslator__TranslatorTextEdit) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Layout(self: TextTranslator__TranslatorTextEdit) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: TextTranslator__TranslatorTextEdit, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn UpdateGeometry(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: TextTranslator__TranslatorTextEdit, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: TextTranslator__TranslatorTextEdit, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: TextTranslator__TranslatorTextEdit, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: TextTranslator__TranslatorTextEdit, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn FocusWidget(self: TextTranslator__TranslatorTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn NextInFocusChain(self: TextTranslator__TranslatorTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn PreviousInFocusChain(self: TextTranslator__TranslatorTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn AcceptDrops(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: TextTranslator__TranslatorTextEdit, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: TextTranslator__TranslatorTextEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: TextTranslator__TranslatorTextEdit, actions: []QAction) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: TextTranslator__TranslatorTextEdit, before: anytype, actions: []QAction) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: TextTranslator__TranslatorTextEdit, before: anytype, action: anytype) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: TextTranslator__TranslatorTextEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("texttranslator__translatortextedit.Actions: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: TextTranslator__TranslatorTextEdit, text: []const u8) QAction {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: TextTranslator__TranslatorTextEdit, icon: anytype, text: []const u8) QAction {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: TextTranslator__TranslatorTextEdit, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: TextTranslator__TranslatorTextEdit, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ParentWidget(self: TextTranslator__TranslatorTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: TextTranslator__TranslatorTextEdit, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: TextTranslator__TranslatorTextEdit, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: TextTranslator__TranslatorTextEdit, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: TextTranslator__TranslatorTextEdit, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: TextTranslator__TranslatorTextEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: TextTranslator__TranslatorTextEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: TextTranslator__TranslatorTextEdit, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: TextTranslator__TranslatorTextEdit, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn EnsurePolished(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: TextTranslator__TranslatorTextEdit, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn AutoFillBackground(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: TextTranslator__TranslatorTextEdit, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn BackingStore(self: TextTranslator__TranslatorTextEdit) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn WindowHandle(self: TextTranslator__TranslatorTextEdit) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Screen(self: TextTranslator__TranslatorTextEdit) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: TextTranslator__TranslatorTextEdit, screen: anytype) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: TextTranslator__TranslatorTextEdit, title: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: TextTranslator__TranslatorTextEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: TextTranslator__TranslatorTextEdit, iconText: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: TextTranslator__TranslatorTextEdit, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: TextTranslator__TranslatorTextEdit, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: TextTranslator__TranslatorTextEdit, target: anytype, targetOffset: anytype) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: TextTranslator__TranslatorTextEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: TextTranslator__TranslatorTextEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: TextTranslator__TranslatorTextEdit, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: TextTranslator__TranslatorTextEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: TextTranslator__TranslatorTextEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: TextTranslator__TranslatorTextEdit, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: TextTranslator__TranslatorTextEdit, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: TextTranslator__TranslatorTextEdit, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: TextTranslator__TranslatorTextEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: TextTranslator__TranslatorTextEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: TextTranslator__TranslatorTextEdit, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: TextTranslator__TranslatorTextEdit, param1: i32, on: bool) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatortextedit.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextTranslator__TranslatorTextEdit, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsWidgetType(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsWindowType(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn IsQuickItemType(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SignalsBlocked(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextTranslator__TranslatorTextEdit, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Thread(self: TextTranslator__TranslatorTextEdit) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextTranslator__TranslatorTextEdit, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextTranslator__TranslatorTextEdit, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextTranslator__TranslatorTextEdit, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextTranslator__TranslatorTextEdit, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextTranslator__TranslatorTextEdit, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("texttranslator__translatortextedit.Children: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextTranslator__TranslatorTextEdit, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextTranslator__TranslatorTextEdit, obj: anytype) void {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextTranslator__TranslatorTextEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Disconnect3(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextTranslator__TranslatorTextEdit, receiver: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn DumpObjectTree(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn DumpObjectInfo(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextTranslator__TranslatorTextEdit, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextTranslator__TranslatorTextEdit, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextTranslator__TranslatorTextEdit, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("texttranslator__translatortextedit.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("texttranslator__translatortextedit.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn BindingStorage(self: TextTranslator__TranslatorTextEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn BindingStorage2(self: TextTranslator__TranslatorTextEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Destroyed(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Parent(self: TextTranslator__TranslatorTextEdit) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextTranslator__TranslatorTextEdit, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn DeleteLater(self: TextTranslator__TranslatorTextEdit) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextTranslator__TranslatorTextEdit, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextTranslator__TranslatorTextEdit, time: i64, timerType: i32) i32 {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextTranslator__TranslatorTextEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextTranslator__TranslatorTextEdit, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextTranslator__TranslatorTextEdit, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextTranslator__TranslatorTextEdit, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextTranslator__TranslatorTextEdit, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn PaintingActive(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn WidthMM(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn HeightMM(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn LogicalDpiX(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn LogicalDpiY(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn PhysicalDpiX(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn PhysicalDpiY(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn DevicePixelRatio(self: TextTranslator__TranslatorTextEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn DevicePixelRatioF(self: TextTranslator__TranslatorTextEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ColorCount(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Depth(self: TextTranslator__TranslatorTextEdit) i32 {
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

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn LoadResource(self: TextTranslator__TranslatorTextEdit, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_LoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperLoadResource` instead
    ///
    pub const QBaseLoadResource = SuperLoadResource;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn SuperLoadResource(self: TextTranslator__TranslatorTextEdit, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperLoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, typeVal: i32, name: QUrl) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnLoadResource(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, i32, QUrl) callconv(.c) QVariant) void {
        qtc.TextTranslator__TranslatorTextEdit_OnLoadResource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: TextTranslator__TranslatorTextEdit, property: i32) QVariant {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_InputMethodQuery(@ptrCast(self.ptr), @bitCast(property)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: TextTranslator__TranslatorTextEdit, property: i32) QVariant {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(property)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, property: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnInputMethodQuery(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, i32) callconv(.c) QVariant) void {
        qtc.TextTranslator__TranslatorTextEdit_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: TextTranslator__TranslatorTextEdit, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.TextTranslator__TranslatorTextEdit_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.TextTranslator__TranslatorTextEdit_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorTextEdit_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.TextTranslator__TranslatorTextEdit_TimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QTimerEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextTranslator__TranslatorTextEdit_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QKeyEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextTranslator__TranslatorTextEdit_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QKeyEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn ResizeEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.TextTranslator__TranslatorTextEdit_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QResizeEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn PaintEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.TextTranslator__TranslatorTextEdit_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QPaintEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MousePressEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorTextEdit_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorTextEdit_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorTextEdit_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorTextEdit_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: TextTranslator__TranslatorTextEdit, next: bool) bool {
        return qtc.TextTranslator__TranslatorTextEdit_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: TextTranslator__TranslatorTextEdit, next: bool) bool {
        return qtc.TextTranslator__TranslatorTextEdit_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, bool) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorTextEdit_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.TextTranslator__TranslatorTextEdit_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QContextMenuEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.TextTranslator__TranslatorTextEdit_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QDragEnterEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.TextTranslator__TranslatorTextEdit_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QDragLeaveEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.TextTranslator__TranslatorTextEdit_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QDragMoveEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusInEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextTranslator__TranslatorTextEdit_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QFocusEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextTranslator__TranslatorTextEdit_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QFocusEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn ShowEvent(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.TextTranslator__TranslatorTextEdit_ShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn SuperShowEvent(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, param1: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QShowEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QEvent `
    ///
    pub fn ChangeEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.TextTranslator__TranslatorTextEdit_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperChangeEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn WheelEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.TextTranslator__TranslatorTextEdit_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: TextTranslator__TranslatorTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, e: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QWheelEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn CreateMimeDataFromSelection(self: TextTranslator__TranslatorTextEdit) QMimeData {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_CreateMimeDataFromSelection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCreateMimeDataFromSelection` instead
    ///
    pub const QBaseCreateMimeDataFromSelection = SuperCreateMimeDataFromSelection;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperCreateMimeDataFromSelection(self: TextTranslator__TranslatorTextEdit) QMimeData {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperCreateMimeDataFromSelection(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QMimeData `
    ///
    pub fn OnCreateMimeDataFromSelection(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) QMimeData) void {
        qtc.TextTranslator__TranslatorTextEdit_OnCreateMimeDataFromSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn CanInsertFromMimeData(self: TextTranslator__TranslatorTextEdit, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.TextTranslator__TranslatorTextEdit_CanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `SuperCanInsertFromMimeData` instead
    ///
    pub const QBaseCanInsertFromMimeData = SuperCanInsertFromMimeData;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn SuperCanInsertFromMimeData(self: TextTranslator__TranslatorTextEdit, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.TextTranslator__TranslatorTextEdit_SuperCanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, source: QMimeData) callconv(.c) bool `
    ///
    pub fn OnCanInsertFromMimeData(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QMimeData) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorTextEdit_OnCanInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn InsertFromMimeData(self: TextTranslator__TranslatorTextEdit, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QMimeData;
        qtc.TextTranslator__TranslatorTextEdit_InsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `SuperInsertFromMimeData` instead
    ///
    pub const QBaseInsertFromMimeData = SuperInsertFromMimeData;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn SuperInsertFromMimeData(self: TextTranslator__TranslatorTextEdit, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QMimeData;
        qtc.TextTranslator__TranslatorTextEdit_SuperInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, source: QMimeData) callconv(.c) void `
    ///
    pub fn OnInsertFromMimeData(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QMimeData) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextTranslator__TranslatorTextEdit_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QInputMethodEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: TextTranslator__TranslatorTextEdit, dx: i32, dy: i32) void {
        qtc.TextTranslator__TranslatorTextEdit_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: TextTranslator__TranslatorTextEdit, dx: i32, dy: i32) void {
        qtc.TextTranslator__TranslatorTextEdit_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, i32, i32) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn DoSetTextCursor(self: TextTranslator__TranslatorTextEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.TextTranslator__TranslatorTextEdit_DoSetTextCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoSetTextCursor` instead
    ///
    pub const QBaseDoSetTextCursor = SuperDoSetTextCursor;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn SuperDoSetTextCursor(self: TextTranslator__TranslatorTextEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.TextTranslator__TranslatorTextEdit_SuperDoSetTextCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, cursor: QTextCursor) callconv(.c) void `
    ///
    pub fn OnDoSetTextCursor(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QTextCursor) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnDoSetTextCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn MinimumSizeHint(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperMinimumSizeHint(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnMinimumSizeHint(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextTranslator__TranslatorTextEdit_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SizeHint(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperSizeHint(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnSizeHint(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextTranslator__TranslatorTextEdit_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SetupViewport(self: TextTranslator__TranslatorTextEdit, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.TextTranslator__TranslatorTextEdit_SetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SuperSetupViewport(self: TextTranslator__TranslatorTextEdit, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.TextTranslator__TranslatorTextEdit_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, viewport: QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QWidget) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn EventFilter(self: TextTranslator__TranslatorTextEdit, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.TextTranslator__TranslatorTextEdit_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperEventFilter(self: TextTranslator__TranslatorTextEdit, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.TextTranslator__TranslatorTextEdit_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorTextEdit_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ViewportEvent(self: TextTranslator__TranslatorTextEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.TextTranslator__TranslatorTextEdit_ViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperViewportEvent(self: TextTranslator__TranslatorTextEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.TextTranslator__TranslatorTextEdit_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorTextEdit_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ViewportSizeHint(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_ViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperViewportSizeHint(self: TextTranslator__TranslatorTextEdit) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnViewportSizeHint(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextTranslator__TranslatorTextEdit_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: TextTranslator__TranslatorTextEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.TextTranslator__TranslatorTextEdit_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: TextTranslator__TranslatorTextEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.TextTranslator__TranslatorTextEdit_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QStyleOptionFrame) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn DevType(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.TextTranslator__TranslatorTextEdit_DevType(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperDevType(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.TextTranslator__TranslatorTextEdit_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorTextEdit_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: TextTranslator__TranslatorTextEdit, visible: bool) void {
        qtc.TextTranslator__TranslatorTextEdit_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: TextTranslator__TranslatorTextEdit, visible: bool) void {
        qtc.TextTranslator__TranslatorTextEdit_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, bool) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: TextTranslator__TranslatorTextEdit, param1: i32) i32 {
        return qtc.TextTranslator__TranslatorTextEdit_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: TextTranslator__TranslatorTextEdit, param1: i32) i32 {
        return qtc.TextTranslator__TranslatorTextEdit_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, i32) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorTextEdit_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn HasHeightForWidth(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.TextTranslator__TranslatorTextEdit_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperHasHeightForWidth(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.TextTranslator__TranslatorTextEdit_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorTextEdit_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn PaintEngine(self: TextTranslator__TranslatorTextEdit) QPaintEngine {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperPaintEngine(self: TextTranslator__TranslatorTextEdit) QPaintEngine {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.TextTranslator__TranslatorTextEdit_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextTranslator__TranslatorTextEdit_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QEnterEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorTextEdit_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextTranslator__TranslatorTextEdit_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QMoveEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextTranslator__TranslatorTextEdit_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QCloseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextTranslator__TranslatorTextEdit_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QTabletEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextTranslator__TranslatorTextEdit_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QActionEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextTranslator__TranslatorTextEdit_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QHideEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: TextTranslator__TranslatorTextEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextTranslator__TranslatorTextEdit_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: TextTranslator__TranslatorTextEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextTranslator__TranslatorTextEdit_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorTextEdit_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: TextTranslator__TranslatorTextEdit, param1: i32) i32 {
        return qtc.TextTranslator__TranslatorTextEdit_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: TextTranslator__TranslatorTextEdit, param1: i32) i32 {
        return qtc.TextTranslator__TranslatorTextEdit_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, i32) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorTextEdit_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: TextTranslator__TranslatorTextEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextTranslator__TranslatorTextEdit_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: TextTranslator__TranslatorTextEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextTranslator__TranslatorTextEdit_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QPainter) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: TextTranslator__TranslatorTextEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: TextTranslator__TranslatorTextEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QPoint) callconv(.c) QPaintDevice) void {
        qtc.TextTranslator__TranslatorTextEdit_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SharedPainter(self: TextTranslator__TranslatorTextEdit) QPainter {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperSharedPainter(self: TextTranslator__TranslatorTextEdit) QPainter {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) QPainter) void {
        qtc.TextTranslator__TranslatorTextEdit_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextTranslator__TranslatorTextEdit_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QChildEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorTextEdit_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextTranslator__TranslatorTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorTextEdit_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextTranslator__TranslatorTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorTextEdit_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextTranslator__TranslatorTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorTextEdit_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QMetaMethod) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextTranslator__TranslatorTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorTextEdit_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextTranslator__TranslatorTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorTextEdit_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QMetaMethod) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn FirstVisibleBlock(self: TextTranslator__TranslatorTextEdit) QTextBlock {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_FirstVisibleBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperFirstVisibleBlock` instead
    ///
    pub const QBaseFirstVisibleBlock = SuperFirstVisibleBlock;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperFirstVisibleBlock(self: TextTranslator__TranslatorTextEdit) QTextBlock {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperFirstVisibleBlock(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QTextBlock `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnFirstVisibleBlock(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) QTextBlock) void {
        qtc.TextTranslator__TranslatorTextEdit_OnFirstVisibleBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ContentOffset(self: TextTranslator__TranslatorTextEdit) QPointF {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_ContentOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperContentOffset` instead
    ///
    pub const QBaseContentOffset = SuperContentOffset;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperContentOffset(self: TextTranslator__TranslatorTextEdit) QPointF {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperContentOffset(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPointF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnContentOffset(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) QPointF) void {
        qtc.TextTranslator__TranslatorTextEdit_OnContentOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn BlockBoundingRect(self: TextTranslator__TranslatorTextEdit, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_BlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperBlockBoundingRect` instead
    ///
    pub const QBaseBlockBoundingRect = SuperBlockBoundingRect;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn SuperBlockBoundingRect(self: TextTranslator__TranslatorTextEdit, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperBlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, block: QTextBlock) callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnBlockBoundingRect(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QTextBlock) callconv(.c) QRectF) void {
        qtc.TextTranslator__TranslatorTextEdit_OnBlockBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn BlockBoundingGeometry(self: TextTranslator__TranslatorTextEdit, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_BlockBoundingGeometry(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperBlockBoundingGeometry` instead
    ///
    pub const QBaseBlockBoundingGeometry = SuperBlockBoundingGeometry;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn SuperBlockBoundingGeometry(self: TextTranslator__TranslatorTextEdit, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperBlockBoundingGeometry(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, block: QTextBlock) callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnBlockBoundingGeometry(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QTextBlock) callconv(.c) QRectF) void {
        qtc.TextTranslator__TranslatorTextEdit_OnBlockBoundingGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn GetPaintContext(self: TextTranslator__TranslatorTextEdit) QAbstractTextDocumentLayout__PaintContext {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_GetPaintContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperGetPaintContext` instead
    ///
    pub const QBaseGetPaintContext = SuperGetPaintContext;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperGetPaintContext(self: TextTranslator__TranslatorTextEdit) QAbstractTextDocumentLayout__PaintContext {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperGetPaintContext(@ptrCast(self.ptr)) };
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QAbstractTextDocumentLayout__PaintContext `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnGetPaintContext(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) QAbstractTextDocumentLayout__PaintContext) void {
        qtc.TextTranslator__TranslatorTextEdit_OnGetPaintContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` range: f32 `
    ///
    pub fn ZoomInF(self: TextTranslator__TranslatorTextEdit, range: f32) void {
        qtc.TextTranslator__TranslatorTextEdit_ZoomInF(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `SuperZoomInF` instead
    ///
    pub const QBaseZoomInF = SuperZoomInF;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` range: f32 `
    ///
    pub fn SuperZoomInF(self: TextTranslator__TranslatorTextEdit, range: f32) void {
        qtc.TextTranslator__TranslatorTextEdit_SuperZoomInF(@ptrCast(self.ptr), @bitCast(range));
    }

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, range: f32) callconv(.c) void `
    ///
    pub fn OnZoomInF(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, f32) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnZoomInF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: TextTranslator__TranslatorTextEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.TextTranslator__TranslatorTextEdit_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: TextTranslator__TranslatorTextEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.TextTranslator__TranslatorTextEdit_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn ViewportMargins(self: TextTranslator__TranslatorTextEdit) QMargins {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperViewportMargins(self: TextTranslator__TranslatorTextEdit) QMargins {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnViewportMargins(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) QMargins) void {
        qtc.TextTranslator__TranslatorTextEdit_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QPainter `
    ///
    pub fn DrawFrame(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.TextTranslator__TranslatorTextEdit_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` param1: QPainter `
    ///
    pub fn SuperDrawFrame(self: TextTranslator__TranslatorTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.TextTranslator__TranslatorTextEdit_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, param1: QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QPainter) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn UpdateMicroFocus(self: TextTranslator__TranslatorTextEdit) void {
        qtc.TextTranslator__TranslatorTextEdit_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperUpdateMicroFocus(self: TextTranslator__TranslatorTextEdit) void {
        qtc.TextTranslator__TranslatorTextEdit_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Create(self: TextTranslator__TranslatorTextEdit) void {
        qtc.TextTranslator__TranslatorTextEdit_Create(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperCreate(self: TextTranslator__TranslatorTextEdit) void {
        qtc.TextTranslator__TranslatorTextEdit_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Destroy(self: TextTranslator__TranslatorTextEdit) void {
        qtc.TextTranslator__TranslatorTextEdit_Destroy(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperDestroy(self: TextTranslator__TranslatorTextEdit) void {
        qtc.TextTranslator__TranslatorTextEdit_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) void) void {
        qtc.TextTranslator__TranslatorTextEdit_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn FocusNextChild(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.TextTranslator__TranslatorTextEdit_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperFocusNextChild(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.TextTranslator__TranslatorTextEdit_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorTextEdit_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn FocusPreviousChild(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.TextTranslator__TranslatorTextEdit_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperFocusPreviousChild(self: TextTranslator__TranslatorTextEdit) bool {
        return qtc.TextTranslator__TranslatorTextEdit_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorTextEdit_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Sender(self: TextTranslator__TranslatorTextEdit) QObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperSender(self: TextTranslator__TranslatorTextEdit) QObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorTextEdit_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextTranslator__TranslatorTextEdit_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SenderSignalIndex(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.TextTranslator__TranslatorTextEdit_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn SuperSenderSignalIndex(self: TextTranslator__TranslatorTextEdit) i32 {
        return qtc.TextTranslator__TranslatorTextEdit_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextTranslator__TranslatorTextEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorTextEdit_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextTranslator__TranslatorTextEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextTranslator__TranslatorTextEdit_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextTranslator__TranslatorTextEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextTranslator__TranslatorTextEdit_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorTextEdit_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextTranslator__TranslatorTextEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextTranslator__TranslatorTextEdit_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextTranslator__TranslatorTextEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextTranslator__TranslatorTextEdit_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, QMetaMethod) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorTextEdit_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: TextTranslator__TranslatorTextEdit, metricA: i32, metricB: i32) f64 {
        return qtc.TextTranslator__TranslatorTextEdit_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: TextTranslator__TranslatorTextEdit, metricA: i32, metricB: i32) f64 {
        return qtc.TextTranslator__TranslatorTextEdit_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, i32, i32) callconv(.c) f64) void {
        qtc.TextTranslator__TranslatorTextEdit_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorTextEdit, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextTranslator__TranslatorTextEdit, callback: *const fn (TextTranslator__TranslatorTextEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorTextEdit.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextTranslator__TranslatorTextEdit `
    ///
    pub fn Delete(self: TextTranslator__TranslatorTextEdit) void {
        qtc.TextTranslator__TranslatorTextEdit_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
pub const TextTranslator__TranslatorWidget = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextTranslator__TranslatorWidget,

    pub const _is_TextTranslator__TranslatorWidget = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new TextTranslator::TranslatorWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) TextTranslator__TranslatorWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new TextTranslator::TranslatorWidget object.
    ///
    pub fn New2() TextTranslator__TranslatorWidget {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_new2() };
    }

    /// New3 constructs a new TextTranslator::TranslatorWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn New3(text: []const u8) TextTranslator__TranslatorWidget {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_new3(text_str) };
    }

    /// New4 constructs a new TextTranslator::TranslatorWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New4(text: []const u8, parent: anytype) TextTranslator__TranslatorWidget {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_new4(text_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn MetaObject(self: TextTranslator__TranslatorWidget) QMetaObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextTranslator__TranslatorWidget_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperMetaObject(self: TextTranslator__TranslatorWidget) QMetaObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextTranslator__TranslatorWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextTranslator__TranslatorWidget_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextTranslator__TranslatorWidget_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextTranslator__TranslatorWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextTranslator__TranslatorWidget_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextTranslator__TranslatorWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextTranslator__TranslatorWidget_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorWidget_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextTranslator__TranslatorWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextTranslator__TranslatorWidget_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` textToTranslate: []const u8 `
    ///
    pub fn SetTextToTranslate(self: TextTranslator__TranslatorWidget, textToTranslate: []const u8) void {
        const textToTranslate_str = qtc.libqt_string{
            .len = textToTranslate.len,
            .data = textToTranslate.ptr,
        };
        qtc.TextTranslator__TranslatorWidget_SetTextToTranslate(@ptrCast(self.ptr), textToTranslate_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn WriteConfig(self: TextTranslator__TranslatorWidget) void {
        qtc.TextTranslator__TranslatorWidget_WriteConfig(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ReadConfig(self: TextTranslator__TranslatorWidget) void {
        qtc.TextTranslator__TranslatorWidget_ReadConfig(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` b: bool `
    ///
    pub fn SetStandalone(self: TextTranslator__TranslatorWidget, b: bool) void {
        qtc.TextTranslator__TranslatorWidget_SetStandalone(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SlotTranslate(self: TextTranslator__TranslatorWidget) void {
        qtc.TextTranslator__TranslatorWidget_SlotTranslate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SlotCloseWidget(self: TextTranslator__TranslatorWidget) void {
        qtc.TextTranslator__TranslatorWidget_SlotCloseWidget(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: TextTranslator__TranslatorWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.TextTranslator__TranslatorWidget_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorWidget_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: TextTranslator__TranslatorWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.TextTranslator__TranslatorWidget_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ToolsWasClosed(self: TextTranslator__TranslatorWidget) void {
        qtc.TextTranslator__TranslatorWidget_ToolsWasClosed(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget) callconv(.c) void `
    ///
    pub fn OnToolsWasClosed(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_Connect_ToolsWasClosed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn WinId(self: TextTranslator__TranslatorWidget) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn CreateWinId(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn InternalWinId(self: TextTranslator__TranslatorWidget) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn EffectiveWinId(self: TextTranslator__TranslatorWidget) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Style(self: TextTranslator__TranslatorWidget) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: TextTranslator__TranslatorWidget, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsTopLevel(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsWindow(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsModal(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: TextTranslator__TranslatorWidget, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsEnabled(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: TextTranslator__TranslatorWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: TextTranslator__TranslatorWidget, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: TextTranslator__TranslatorWidget, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: TextTranslator__TranslatorWidget, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn FrameGeometry(self: TextTranslator__TranslatorWidget) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Geometry(self: TextTranslator__TranslatorWidget) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn NormalGeometry(self: TextTranslator__TranslatorWidget) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn X(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Y(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Pos(self: TextTranslator__TranslatorWidget) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn FrameSize(self: TextTranslator__TranslatorWidget) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Size(self: TextTranslator__TranslatorWidget) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Width(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Height(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Rect(self: TextTranslator__TranslatorWidget) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ChildrenRect(self: TextTranslator__TranslatorWidget) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ChildrenRegion(self: TextTranslator__TranslatorWidget) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn MinimumSize(self: TextTranslator__TranslatorWidget) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn MaximumSize(self: TextTranslator__TranslatorWidget) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn MinimumWidth(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn MinimumHeight(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn MaximumWidth(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn MaximumHeight(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: TextTranslator__TranslatorWidget, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: TextTranslator__TranslatorWidget, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: TextTranslator__TranslatorWidget, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: TextTranslator__TranslatorWidget, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: TextTranslator__TranslatorWidget, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: TextTranslator__TranslatorWidget, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: TextTranslator__TranslatorWidget, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: TextTranslator__TranslatorWidget, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SizeIncrement(self: TextTranslator__TranslatorWidget) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: TextTranslator__TranslatorWidget, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: TextTranslator__TranslatorWidget, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn BaseSize(self: TextTranslator__TranslatorWidget) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: TextTranslator__TranslatorWidget, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: TextTranslator__TranslatorWidget, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: TextTranslator__TranslatorWidget, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: TextTranslator__TranslatorWidget, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: TextTranslator__TranslatorWidget, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: TextTranslator__TranslatorWidget, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: TextTranslator__TranslatorWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: TextTranslator__TranslatorWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: TextTranslator__TranslatorWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: TextTranslator__TranslatorWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: TextTranslator__TranslatorWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: TextTranslator__TranslatorWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: TextTranslator__TranslatorWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: TextTranslator__TranslatorWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: TextTranslator__TranslatorWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: TextTranslator__TranslatorWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: TextTranslator__TranslatorWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: TextTranslator__TranslatorWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Window(self: TextTranslator__TranslatorWidget) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn NativeParentWidget(self: TextTranslator__TranslatorWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn TopLevelWidget(self: TextTranslator__TranslatorWidget) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Palette(self: TextTranslator__TranslatorWidget) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: TextTranslator__TranslatorWidget, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: TextTranslator__TranslatorWidget, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: TextTranslator__TranslatorWidget, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Font(self: TextTranslator__TranslatorWidget) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: TextTranslator__TranslatorWidget, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn FontMetrics(self: TextTranslator__TranslatorWidget) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn FontInfo(self: TextTranslator__TranslatorWidget) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Cursor(self: TextTranslator__TranslatorWidget) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: TextTranslator__TranslatorWidget, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn UnsetCursor(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: TextTranslator__TranslatorWidget, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn HasMouseTracking(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn UnderMouse(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: TextTranslator__TranslatorWidget, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn HasTabletTracking(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: TextTranslator__TranslatorWidget, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: TextTranslator__TranslatorWidget, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Mask(self: TextTranslator__TranslatorWidget) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ClearMask(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: TextTranslator__TranslatorWidget, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: TextTranslator__TranslatorWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Grab(self: TextTranslator__TranslatorWidget) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn GraphicsEffect(self: TextTranslator__TranslatorWidget) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: TextTranslator__TranslatorWidget, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: TextTranslator__TranslatorWidget, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: TextTranslator__TranslatorWidget, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: TextTranslator__TranslatorWidget, windowTitle: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: TextTranslator__TranslatorWidget, styleSheet: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: TextTranslator__TranslatorWidget, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn WindowIcon(self: TextTranslator__TranslatorWidget) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: TextTranslator__TranslatorWidget, windowIconText: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: TextTranslator__TranslatorWidget, windowRole: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: TextTranslator__TranslatorWidget, filePath: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: TextTranslator__TranslatorWidget, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn WindowOpacity(self: TextTranslator__TranslatorWidget) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsWindowModified(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: TextTranslator__TranslatorWidget, toolTip: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: TextTranslator__TranslatorWidget, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ToolTipDuration(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: TextTranslator__TranslatorWidget, statusTip: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: TextTranslator__TranslatorWidget, whatsThis: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: TextTranslator__TranslatorWidget, name: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: TextTranslator__TranslatorWidget, description: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: TextTranslator__TranslatorWidget, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn UnsetLayoutDirection(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: TextTranslator__TranslatorWidget, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Locale(self: TextTranslator__TranslatorWidget) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn UnsetLocale(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsRightToLeft(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsLeftToRight(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SetFocus(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsActiveWindow(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ActivateWindow(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ClearFocus(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: TextTranslator__TranslatorWidget, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: TextTranslator__TranslatorWidget, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn HasFocus(self: TextTranslator__TranslatorWidget) bool {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: TextTranslator__TranslatorWidget, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn FocusProxy(self: TextTranslator__TranslatorWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: TextTranslator__TranslatorWidget, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn GrabMouse(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ReleaseMouse(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn GrabKeyboard(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ReleaseKeyboard(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: TextTranslator__TranslatorWidget, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: TextTranslator__TranslatorWidget, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: TextTranslator__TranslatorWidget, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: TextTranslator__TranslatorWidget, id: i32) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn UpdatesEnabled(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: TextTranslator__TranslatorWidget, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn GraphicsProxyWidget(self: TextTranslator__TranslatorWidget) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Update(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Repaint(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: TextTranslator__TranslatorWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: TextTranslator__TranslatorWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: TextTranslator__TranslatorWidget, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Show(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Hide(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ShowMinimized(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ShowMaximized(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ShowFullScreen(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ShowNormal(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Close(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Raise(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Lower(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: TextTranslator__TranslatorWidget, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: TextTranslator__TranslatorWidget, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: TextTranslator__TranslatorWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: TextTranslator__TranslatorWidget, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("texttranslator__translatorwidget.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: TextTranslator__TranslatorWidget, geometry: []u8) bool {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn AdjustSize(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsVisible(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: TextTranslator__TranslatorWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsHidden(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsMinimized(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsMaximized(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsFullScreen(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: TextTranslator__TranslatorWidget, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: TextTranslator__TranslatorWidget, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SizePolicy(self: TextTranslator__TranslatorWidget) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: TextTranslator__TranslatorWidget, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: TextTranslator__TranslatorWidget, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn VisibleRegion(self: TextTranslator__TranslatorWidget) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: TextTranslator__TranslatorWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: TextTranslator__TranslatorWidget, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ContentsMargins(self: TextTranslator__TranslatorWidget) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ContentsRect(self: TextTranslator__TranslatorWidget) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Layout(self: TextTranslator__TranslatorWidget) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: TextTranslator__TranslatorWidget, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn UpdateGeometry(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: TextTranslator__TranslatorWidget, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: TextTranslator__TranslatorWidget, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: TextTranslator__TranslatorWidget, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: TextTranslator__TranslatorWidget, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn FocusWidget(self: TextTranslator__TranslatorWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn NextInFocusChain(self: TextTranslator__TranslatorWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn PreviousInFocusChain(self: TextTranslator__TranslatorWidget) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn AcceptDrops(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: TextTranslator__TranslatorWidget, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: TextTranslator__TranslatorWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: TextTranslator__TranslatorWidget, actions: []QAction) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: TextTranslator__TranslatorWidget, before: anytype, actions: []QAction) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: TextTranslator__TranslatorWidget, before: anytype, action: anytype) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: TextTranslator__TranslatorWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("texttranslator__translatorwidget.Actions: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: TextTranslator__TranslatorWidget, text: []const u8) QAction {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: TextTranslator__TranslatorWidget, icon: anytype, text: []const u8) QAction {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: TextTranslator__TranslatorWidget, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: TextTranslator__TranslatorWidget, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ParentWidget(self: TextTranslator__TranslatorWidget) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: TextTranslator__TranslatorWidget, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: TextTranslator__TranslatorWidget, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: TextTranslator__TranslatorWidget, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: TextTranslator__TranslatorWidget) i32 {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: TextTranslator__TranslatorWidget, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: TextTranslator__TranslatorWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: TextTranslator__TranslatorWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: TextTranslator__TranslatorWidget, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: TextTranslator__TranslatorWidget, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn EnsurePolished(self: TextTranslator__TranslatorWidget) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: TextTranslator__TranslatorWidget, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn AutoFillBackground(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: TextTranslator__TranslatorWidget, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn BackingStore(self: TextTranslator__TranslatorWidget) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn WindowHandle(self: TextTranslator__TranslatorWidget) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Screen(self: TextTranslator__TranslatorWidget) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: TextTranslator__TranslatorWidget, screen: anytype) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: TextTranslator__TranslatorWidget, title: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: TextTranslator__TranslatorWidget, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: TextTranslator__TranslatorWidget, iconText: []const u8) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: TextTranslator__TranslatorWidget, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: TextTranslator__TranslatorWidget, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: TextTranslator__TranslatorWidget, target: anytype, targetOffset: anytype) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: TextTranslator__TranslatorWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: TextTranslator__TranslatorWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: TextTranslator__TranslatorWidget, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: TextTranslator__TranslatorWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: TextTranslator__TranslatorWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: TextTranslator__TranslatorWidget, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: TextTranslator__TranslatorWidget, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: TextTranslator__TranslatorWidget, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: TextTranslator__TranslatorWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: TextTranslator__TranslatorWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: TextTranslator__TranslatorWidget, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: TextTranslator__TranslatorWidget, param1: i32, on: bool) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("texttranslator__translatorwidget.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextTranslator__TranslatorWidget, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsWidgetType(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsWindowType(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn IsQuickItemType(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SignalsBlocked(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextTranslator__TranslatorWidget, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Thread(self: TextTranslator__TranslatorWidget) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextTranslator__TranslatorWidget, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextTranslator__TranslatorWidget, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextTranslator__TranslatorWidget, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextTranslator__TranslatorWidget, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextTranslator__TranslatorWidget, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("texttranslator__translatorwidget.Children: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextTranslator__TranslatorWidget, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextTranslator__TranslatorWidget, obj: anytype) void {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextTranslator__TranslatorWidget, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Disconnect3(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextTranslator__TranslatorWidget, receiver: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn DumpObjectTree(self: TextTranslator__TranslatorWidget) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn DumpObjectInfo(self: TextTranslator__TranslatorWidget) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextTranslator__TranslatorWidget, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextTranslator__TranslatorWidget, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextTranslator__TranslatorWidget, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("texttranslator__translatorwidget.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("texttranslator__translatorwidget.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn BindingStorage(self: TextTranslator__TranslatorWidget) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn BindingStorage2(self: TextTranslator__TranslatorWidget) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Destroyed(self: TextTranslator__TranslatorWidget) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Parent(self: TextTranslator__TranslatorWidget) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextTranslator__TranslatorWidget, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn DeleteLater(self: TextTranslator__TranslatorWidget) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextTranslator__TranslatorWidget, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextTranslator__TranslatorWidget, time: i64, timerType: i32) i32 {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextTranslator__TranslatorWidget, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextTranslator__TranslatorWidget, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextTranslator__TranslatorWidget, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextTranslator__TranslatorWidget, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextTranslator__TranslatorWidget, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn PaintingActive(self: TextTranslator__TranslatorWidget) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn WidthMM(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn HeightMM(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn LogicalDpiX(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn LogicalDpiY(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn PhysicalDpiX(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn PhysicalDpiY(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn DevicePixelRatio(self: TextTranslator__TranslatorWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn DevicePixelRatioF(self: TextTranslator__TranslatorWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn ColorCount(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Depth(self: TextTranslator__TranslatorWidget) i32 {
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn DevType(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.TextTranslator__TranslatorWidget_DevType(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperDevType(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.TextTranslator__TranslatorWidget_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorWidget_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: TextTranslator__TranslatorWidget, visible: bool) void {
        qtc.TextTranslator__TranslatorWidget_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: TextTranslator__TranslatorWidget, visible: bool) void {
        qtc.TextTranslator__TranslatorWidget_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, bool) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SizeHint(self: TextTranslator__TranslatorWidget) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperSizeHint(self: TextTranslator__TranslatorWidget) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnSizeHint(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextTranslator__TranslatorWidget_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn MinimumSizeHint(self: TextTranslator__TranslatorWidget) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperMinimumSizeHint(self: TextTranslator__TranslatorWidget) QSize {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnMinimumSizeHint(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextTranslator__TranslatorWidget_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: TextTranslator__TranslatorWidget, param1: i32) i32 {
        return qtc.TextTranslator__TranslatorWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: TextTranslator__TranslatorWidget, param1: i32) i32 {
        return qtc.TextTranslator__TranslatorWidget_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, i32) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorWidget_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn HasHeightForWidth(self: TextTranslator__TranslatorWidget) bool {
        return qtc.TextTranslator__TranslatorWidget_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperHasHeightForWidth(self: TextTranslator__TranslatorWidget) bool {
        return qtc.TextTranslator__TranslatorWidget_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorWidget_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn PaintEngine(self: TextTranslator__TranslatorWidget) QPaintEngine {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperPaintEngine(self: TextTranslator__TranslatorWidget) QPaintEngine {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.TextTranslator__TranslatorWidget_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorWidget_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorWidget_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QMouseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorWidget_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorWidget_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QMouseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorWidget_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorWidget_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QMouseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorWidget_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextTranslator__TranslatorWidget_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QMouseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.TextTranslator__TranslatorWidget_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.TextTranslator__TranslatorWidget_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QWheelEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextTranslator__TranslatorWidget_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextTranslator__TranslatorWidget_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QKeyEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextTranslator__TranslatorWidget_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextTranslator__TranslatorWidget_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QKeyEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextTranslator__TranslatorWidget_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextTranslator__TranslatorWidget_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QFocusEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextTranslator__TranslatorWidget_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextTranslator__TranslatorWidget_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QFocusEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextTranslator__TranslatorWidget_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextTranslator__TranslatorWidget_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QEnterEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorWidget_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorWidget_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.TextTranslator__TranslatorWidget_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.TextTranslator__TranslatorWidget_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QPaintEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextTranslator__TranslatorWidget_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextTranslator__TranslatorWidget_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QMoveEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.TextTranslator__TranslatorWidget_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.TextTranslator__TranslatorWidget_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QResizeEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextTranslator__TranslatorWidget_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextTranslator__TranslatorWidget_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QCloseEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextTranslator__TranslatorWidget_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextTranslator__TranslatorWidget_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QContextMenuEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextTranslator__TranslatorWidget_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextTranslator__TranslatorWidget_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QTabletEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextTranslator__TranslatorWidget_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextTranslator__TranslatorWidget_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QActionEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextTranslator__TranslatorWidget_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextTranslator__TranslatorWidget_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QDragEnterEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextTranslator__TranslatorWidget_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextTranslator__TranslatorWidget_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QDragMoveEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextTranslator__TranslatorWidget_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextTranslator__TranslatorWidget_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QDragLeaveEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextTranslator__TranslatorWidget_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextTranslator__TranslatorWidget_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QDropEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.TextTranslator__TranslatorWidget_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.TextTranslator__TranslatorWidget_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QShowEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextTranslator__TranslatorWidget_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextTranslator__TranslatorWidget_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QHideEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: TextTranslator__TranslatorWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextTranslator__TranslatorWidget_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: TextTranslator__TranslatorWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextTranslator__TranslatorWidget_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorWidget_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextTranslator__TranslatorWidget_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextTranslator__TranslatorWidget_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: TextTranslator__TranslatorWidget, param1: i32) i32 {
        return qtc.TextTranslator__TranslatorWidget_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: TextTranslator__TranslatorWidget, param1: i32) i32 {
        return qtc.TextTranslator__TranslatorWidget_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, i32) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorWidget_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: TextTranslator__TranslatorWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextTranslator__TranslatorWidget_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: TextTranslator__TranslatorWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextTranslator__TranslatorWidget_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QPainter) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: TextTranslator__TranslatorWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: TextTranslator__TranslatorWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QPoint) callconv(.c) QPaintDevice) void {
        qtc.TextTranslator__TranslatorWidget_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SharedPainter(self: TextTranslator__TranslatorWidget) QPainter {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperSharedPainter(self: TextTranslator__TranslatorWidget) QPainter {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) QPainter) void {
        qtc.TextTranslator__TranslatorWidget_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextTranslator__TranslatorWidget_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: TextTranslator__TranslatorWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextTranslator__TranslatorWidget_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QInputMethodEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: TextTranslator__TranslatorWidget, param1: i32) QVariant {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: TextTranslator__TranslatorWidget, param1: i32) QVariant {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnInputMethodQuery(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, i32) callconv(.c) QVariant) void {
        qtc.TextTranslator__TranslatorWidget_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: TextTranslator__TranslatorWidget, next: bool) bool {
        return qtc.TextTranslator__TranslatorWidget_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: TextTranslator__TranslatorWidget, next: bool) bool {
        return qtc.TextTranslator__TranslatorWidget_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, bool) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorWidget_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: TextTranslator__TranslatorWidget, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextTranslator__TranslatorWidget_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: TextTranslator__TranslatorWidget, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextTranslator__TranslatorWidget_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorWidget_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextTranslator__TranslatorWidget_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextTranslator__TranslatorWidget_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QTimerEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextTranslator__TranslatorWidget_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextTranslator__TranslatorWidget_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QChildEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorWidget_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextTranslator__TranslatorWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextTranslator__TranslatorWidget_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QEvent) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextTranslator__TranslatorWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorWidget_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextTranslator__TranslatorWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorWidget_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QMetaMethod) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextTranslator__TranslatorWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorWidget_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextTranslator__TranslatorWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextTranslator__TranslatorWidget_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QMetaMethod) callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn UpdateMicroFocus(self: TextTranslator__TranslatorWidget) void {
        qtc.TextTranslator__TranslatorWidget_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperUpdateMicroFocus(self: TextTranslator__TranslatorWidget) void {
        qtc.TextTranslator__TranslatorWidget_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Create(self: TextTranslator__TranslatorWidget) void {
        qtc.TextTranslator__TranslatorWidget_Create(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperCreate(self: TextTranslator__TranslatorWidget) void {
        qtc.TextTranslator__TranslatorWidget_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Destroy(self: TextTranslator__TranslatorWidget) void {
        qtc.TextTranslator__TranslatorWidget_Destroy(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperDestroy(self: TextTranslator__TranslatorWidget) void {
        qtc.TextTranslator__TranslatorWidget_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) void) void {
        qtc.TextTranslator__TranslatorWidget_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn FocusNextChild(self: TextTranslator__TranslatorWidget) bool {
        return qtc.TextTranslator__TranslatorWidget_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperFocusNextChild(self: TextTranslator__TranslatorWidget) bool {
        return qtc.TextTranslator__TranslatorWidget_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorWidget_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn FocusPreviousChild(self: TextTranslator__TranslatorWidget) bool {
        return qtc.TextTranslator__TranslatorWidget_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperFocusPreviousChild(self: TextTranslator__TranslatorWidget) bool {
        return qtc.TextTranslator__TranslatorWidget_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorWidget_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Sender(self: TextTranslator__TranslatorWidget) QObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperSender(self: TextTranslator__TranslatorWidget) QObject {
        return .{ .ptr = qtc.TextTranslator__TranslatorWidget_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextTranslator__TranslatorWidget_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SenderSignalIndex(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.TextTranslator__TranslatorWidget_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn SuperSenderSignalIndex(self: TextTranslator__TranslatorWidget) i32 {
        return qtc.TextTranslator__TranslatorWidget_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextTranslator__TranslatorWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorWidget_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextTranslator__TranslatorWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextTranslator__TranslatorWidget_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextTranslator__TranslatorWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextTranslator__TranslatorWidget_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextTranslator__TranslatorWidget_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextTranslator__TranslatorWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextTranslator__TranslatorWidget_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextTranslator__TranslatorWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextTranslator__TranslatorWidget_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, QMetaMethod) callconv(.c) bool) void {
        qtc.TextTranslator__TranslatorWidget_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: TextTranslator__TranslatorWidget, metricA: i32, metricB: i32) f64 {
        return qtc.TextTranslator__TranslatorWidget_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: TextTranslator__TranslatorWidget, metricA: i32, metricB: i32) f64 {
        return qtc.TextTranslator__TranslatorWidget_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget`
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, i32, i32) callconv(.c) f64) void {
        qtc.TextTranslator__TranslatorWidget_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    /// ` callback: *const fn (self: TextTranslator__TranslatorWidget, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextTranslator__TranslatorWidget, callback: *const fn (TextTranslator__TranslatorWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextTranslator_1_1TranslatorWidget.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextTranslator__TranslatorWidget `
    ///
    pub fn Delete(self: TextTranslator__TranslatorWidget) void {
        qtc.TextTranslator__TranslatorWidget_Delete(@ptrCast(self.ptr));
    }
};
