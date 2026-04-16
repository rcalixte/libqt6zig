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
const QSizeF = @import("libqt6").QSizeF;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QStyleOptionFrame = @import("libqt6").QStyleOptionFrame;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QTextBlock = @import("libqt6").QTextBlock;
const QTextCharFormat = @import("libqt6").QTextCharFormat;
const QTextCursor = @import("libqt6").QTextCursor;
const QTextDocument = @import("libqt6").QTextDocument;
const QTextEdit__ExtraSelection = @import("libqt6").QTextEdit__ExtraSelection;
const QTextFormat = @import("libqt6").QTextFormat;
const QTextFrame = @import("libqt6").QTextFrame;
const QTextInlineObject = @import("libqt6").QTextInlineObject;
const QTextObjectInterface = @import("libqt6").QTextObjectInterface;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QUrl = @import("libqt6").QUrl;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qabstractscrollarea_enums = @import("libqabstractscrollarea.zig").enums;
const qframe_enums = @import("libqframe.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qplaintextedit_enums = enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qtextcursor_enums = @import("libqtextcursor.zig").enums;
const qtextdocument_enums = @import("libqtextdocument.zig").enums;
const qtextoption_enums = @import("libqtextoption.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html)
pub const QPlainTextEdit = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlainTextEdit,

    pub const _is_QPlainTextEdit = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QPlainTextEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QPlainTextEdit {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QPlainTextEdit_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QPlainTextEdit object.
    ///
    pub fn New2() QPlainTextEdit {
        return .{ .ptr = qtc.QPlainTextEdit_new2() };
    }

    /// New3 constructs a new QPlainTextEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn New3(text: []const u8) QPlainTextEdit {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPlainTextEdit_new3(text_str) };
    }

    /// New4 constructs a new QPlainTextEdit object.
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New4(text: []const u8, parent: anytype) QPlainTextEdit {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QPlainTextEdit_new4(text_str, @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn MetaObject(self: QPlainTextEdit) QMetaObject {
        return .{ .ptr = qtc.QPlainTextEdit_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QPlainTextEdit, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPlainTextEdit_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperMetaObject(self: QPlainTextEdit) QMetaObject {
        return .{ .ptr = qtc.QPlainTextEdit_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QPlainTextEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlainTextEdit_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPlainTextEdit_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QPlainTextEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlainTextEdit_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QPlainTextEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlainTextEdit_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QPlainTextEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlainTextEdit_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` document: QTextDocument `
    ///
    pub fn SetDocument(self: QPlainTextEdit, document: anytype) void {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        qtc.QPlainTextEdit_SetDocument(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Document(self: QPlainTextEdit) QTextDocument {
        return .{ .ptr = qtc.QPlainTextEdit_Document(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` placeholderText: []const u8 `
    ///
    pub fn SetPlaceholderText(self: QPlainTextEdit, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = placeholderText.len,
            .data = placeholderText.ptr,
        };
        qtc.QPlainTextEdit_SetPlaceholderText(@ptrCast(self.ptr), placeholderText_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceholderText(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlainTextEdit_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn SetTextCursor(self: QPlainTextEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QPlainTextEdit_SetTextCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn TextCursor(self: QPlainTextEdit) QTextCursor {
        return .{ .ptr = qtc.QPlainTextEdit_TextCursor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsReadOnly(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` ro: bool `
    ///
    pub fn SetReadOnly(self: QPlainTextEdit, ro: bool) void {
        qtc.QPlainTextEdit_SetReadOnly(@ptrCast(self.ptr), ro);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` flags: flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn SetTextInteractionFlags(self: QPlainTextEdit, flags: i32) void {
        qtc.QPlainTextEdit_SetTextInteractionFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn TextInteractionFlags(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_TextInteractionFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mergeCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` modifier: QTextCharFormat `
    ///
    pub fn MergeCurrentCharFormat(self: QPlainTextEdit, modifier: anytype) void {
        comptime _ = @TypeOf(modifier)._is_QTextCharFormat;
        qtc.QPlainTextEdit_MergeCurrentCharFormat(@ptrCast(self.ptr), @ptrCast(modifier.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn SetCurrentCharFormat(self: QPlainTextEdit, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QPlainTextEdit_SetCurrentCharFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#currentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn CurrentCharFormat(self: QPlainTextEdit) QTextCharFormat {
        return .{ .ptr = qtc.QPlainTextEdit_CurrentCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn TabChangesFocus(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_TabChangesFocus(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn SetTabChangesFocus(self: QPlainTextEdit, b: bool) void {
        qtc.QPlainTextEdit_SetTabChangesFocus(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocumentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetDocumentTitle(self: QPlainTextEdit, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QPlainTextEdit_SetDocumentTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#documentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DocumentTitle(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlainTextEdit_DocumentTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.DocumentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsUndoRedoEnabled(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_IsUndoRedoEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUndoRedoEnabled(self: QPlainTextEdit, enable: bool) void {
        qtc.QPlainTextEdit_SetUndoRedoEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setMaximumBlockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` maximum: i32 `
    ///
    pub fn SetMaximumBlockCount(self: QPlainTextEdit, maximum: i32) void {
        qtc.QPlainTextEdit_SetMaximumBlockCount(@ptrCast(self.ptr), @bitCast(maximum));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#maximumBlockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn MaximumBlockCount(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_MaximumBlockCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#lineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qplaintextedit_enums.LineWrapMode `
    ///
    pub fn LineWrapMode(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_LineWrapMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setLineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` mode: qplaintextedit_enums.LineWrapMode `
    ///
    pub fn SetLineWrapMode(self: QPlainTextEdit, mode: i32) void {
        qtc.QPlainTextEdit_SetLineWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qtextoption_enums.WrapMode `
    ///
    pub fn WordWrapMode(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_WordWrapMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setWordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` policy: qtextoption_enums.WrapMode `
    ///
    pub fn SetWordWrapMode(self: QPlainTextEdit, policy: i32) void {
        qtc.QPlainTextEdit_SetWordWrapMode(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SetBackgroundVisible(self: QPlainTextEdit, visible: bool) void {
        qtc.QPlainTextEdit_SetBackgroundVisible(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#backgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn BackgroundVisible(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_BackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCenterOnScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetCenterOnScroll(self: QPlainTextEdit, enabled: bool) void {
        qtc.QPlainTextEdit_SetCenterOnScroll(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerOnScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn CenterOnScroll(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_CenterOnScroll(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` exp: []const u8 `
    ///
    pub fn Find(self: QPlainTextEdit, exp: []const u8) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QPlainTextEdit_Find(@ptrCast(self.ptr), exp_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` exp: QRegularExpression `
    ///
    pub fn Find2(self: QPlainTextEdit, exp: anytype) bool {
        comptime _ = @TypeOf(exp)._is_QRegularExpression;
        return qtc.QPlainTextEdit_Find2(@ptrCast(self.ptr), @ptrCast(exp.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToPlainText(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlainTextEdit_ToPlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.ToPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#ensureCursorVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn EnsureCursorVisible(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_EnsureCursorVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn LoadResource(self: QPlainTextEdit, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.QPlainTextEdit_LoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, typeVal: i32, name: QUrl) callconv(.c) QVariant `
    ///
    pub fn OnLoadResource(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32, QUrl) callconv(.c) QVariant) void {
        qtc.QPlainTextEdit_OnLoadResource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperLoadResource` instead
    ///
    pub const QBaseLoadResource = SuperLoadResource;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn SuperLoadResource(self: QPlainTextEdit, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.QPlainTextEdit_SuperLoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn CreateStandardContextMenu(self: QPlainTextEdit) QMenu {
        return .{ .ptr = qtc.QPlainTextEdit_CreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` position: QPoint `
    ///
    pub fn CreateStandardContextMenu2(self: QPlainTextEdit, position: anytype) QMenu {
        comptime _ = @TypeOf(position)._is_QPoint;
        return .{ .ptr = qtc.QPlainTextEdit_CreateStandardContextMenu2(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorForPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CursorForPosition(self: QPlainTextEdit, pos: anytype) QTextCursor {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return .{ .ptr = qtc.QPlainTextEdit_CursorForPosition(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn CursorRect(self: QPlainTextEdit, cursor: anytype) QRect {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QPlainTextEdit_CursorRect(@ptrCast(self.ptr), @ptrCast(cursor.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn CursorRect2(self: QPlainTextEdit) QRect {
        return .{ .ptr = qtc.QPlainTextEdit_CursorRect2(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#anchorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPoint `
    ///
    pub fn AnchorAt(self: QPlainTextEdit, allocator: std.mem.Allocator, pos: anytype) []const u8 {
        comptime _ = @TypeOf(pos)._is_QPoint;
        var _str = qtc.QPlainTextEdit_AnchorAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.AnchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#overwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn OverwriteMode(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_OverwriteMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` overwrite: bool `
    ///
    pub fn SetOverwriteMode(self: QPlainTextEdit, overwrite: bool) void {
        qtc.QPlainTextEdit_SetOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn TabStopDistance(self: QPlainTextEdit) f64 {
        return qtc.QPlainTextEdit_TabStopDistance(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` distance: f64 `
    ///
    pub fn SetTabStopDistance(self: QPlainTextEdit, distance: f64) void {
        qtc.QPlainTextEdit_SetTabStopDistance(@ptrCast(self.ptr), @bitCast(distance));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn CursorWidth(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_CursorWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` width: i32 `
    ///
    pub fn SetCursorWidth(self: QPlainTextEdit, width: i32) void {
        qtc.QPlainTextEdit_SetCursorWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setExtraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` selections: []QTextEdit__ExtraSelection `
    ///
    pub fn SetExtraSelections(self: QPlainTextEdit, selections: []QTextEdit__ExtraSelection) void {
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QPlainTextEdit_SetExtraSelections(@ptrCast(self.ptr), selections_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#extraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ExtraSelections(self: QPlainTextEdit, allocator: std.mem.Allocator) []QTextEdit__ExtraSelection {
        const _arr: qtc.libqt_list = qtc.QPlainTextEdit_ExtraSelections(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextEdit__ExtraSelection, _arr.len) catch @panic("qplaintextedit.ExtraSelections: Memory allocation failed");
        const _data: [*]QtC.QTextEdit__ExtraSelection = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    pub fn MoveCursor(self: QPlainTextEdit, operation: i32) void {
        qtc.QPlainTextEdit_MoveCursor(@ptrCast(self.ptr), @bitCast(operation));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canPaste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn CanPaste(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_CanPaste(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` printer: QPagedPaintDevice `
    ///
    pub fn Print(self: QPlainTextEdit, printer: anytype) void {
        comptime _ = @TypeOf(printer)._is_QPagedPaintDevice;
        qtc.QPlainTextEdit_Print(@ptrCast(self.ptr), @ptrCast(printer.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn BlockCount(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_BlockCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QPlainTextEdit, property: i32) QVariant {
        return .{ .ptr = qtc.QPlainTextEdit_InputMethodQuery(@ptrCast(self.ptr), @bitCast(property)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, property: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32) callconv(.c) QVariant) void {
        qtc.QPlainTextEdit_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QPlainTextEdit, property: i32) QVariant {
        return .{ .ptr = qtc.QPlainTextEdit_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(property)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn InputMethodQuery2(self: QPlainTextEdit, query: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QPlainTextEdit_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(query), @ptrCast(argument.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetPlainText(self: QPlainTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_SetPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Cut(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Cut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Copy(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Copy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Paste(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Paste(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Undo(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Undo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Redo(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Redo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Clear(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SelectAll(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_SelectAll(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn InsertPlainText(self: QPlainTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_InsertPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AppendPlainText(self: QPlainTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_AppendPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` html: []const u8 `
    ///
    pub fn AppendHtml(self: QPlainTextEdit, html: []const u8) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QPlainTextEdit_AppendHtml(@ptrCast(self.ptr), html_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn CenterCursor(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_CenterCursor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ZoomIn(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_ZoomIn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ZoomOut(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_ZoomOut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn TextChanged(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_TextChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn UndoAvailable(self: QPlainTextEdit, b: bool) void {
        qtc.QPlainTextEdit_UndoAvailable(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn OnUndoAvailable(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_UndoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn RedoAvailable(self: QPlainTextEdit, b: bool) void {
        qtc.QPlainTextEdit_RedoAvailable(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn OnRedoAvailable(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_RedoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn CopyAvailable(self: QPlainTextEdit, b: bool) void {
        qtc.QPlainTextEdit_CopyAvailable(@ptrCast(self.ptr), b);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn OnCopyAvailable(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_CopyAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SelectionChanged(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn CursorPositionChanged(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_CursorPositionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit) callconv(.c) void `
    ///
    pub fn OnCursorPositionChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` rect: QRect `
    ///
    /// ` dy: i32 `
    ///
    pub fn UpdateRequest(self: QPlainTextEdit, rect: anytype, dy: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QPlainTextEdit_UpdateRequest(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, rect: QRect, dy: i32) callconv(.c) void `
    ///
    pub fn OnUpdateRequest(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QRect, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_UpdateRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` newBlockCount: i32 `
    ///
    pub fn BlockCountChanged(self: QPlainTextEdit, newBlockCount: i32) void {
        qtc.QPlainTextEdit_BlockCountChanged(@ptrCast(self.ptr), @bitCast(newBlockCount));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, newBlockCount: i32) callconv(.c) void `
    ///
    pub fn OnBlockCountChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_BlockCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: bool `
    ///
    pub fn ModificationChanged(self: QPlainTextEdit, param1: bool) void {
        qtc.QPlainTextEdit_ModificationChanged(@ptrCast(self.ptr), param1);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: bool) callconv(.c) void `
    ///
    pub fn OnModificationChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_ModificationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: QPlainTextEdit, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QPlainTextEdit_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QEvent) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: QPlainTextEdit, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QPlainTextEdit_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn TimerEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.QPlainTextEdit_TimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QTimerEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.QPlainTextEdit_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QPlainTextEdit_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QKeyEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QPlainTextEdit_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QPlainTextEdit_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QKeyEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QPlainTextEdit_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QPlainTextEdit_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QResizeEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QPlainTextEdit_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn PaintEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QPlainTextEdit_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QPaintEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QPlainTextEdit_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QPlainTextEdit, next: bool) bool {
        return qtc.QPlainTextEdit_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, bool) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QPlainTextEdit, next: bool) bool {
        return qtc.QPlainTextEdit_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QPlainTextEdit_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QContextMenuEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QPlainTextEdit_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.QPlainTextEdit_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QDragEnterEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.QPlainTextEdit_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QPlainTextEdit_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QPlainTextEdit_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QPlainTextEdit_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QDragMoveEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QPlainTextEdit_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn DropEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.QPlainTextEdit_DropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QDropEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.QPlainTextEdit_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QPlainTextEdit_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QFocusEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QPlainTextEdit_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QPlainTextEdit_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QFocusEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QPlainTextEdit_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn ShowEvent(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.QPlainTextEdit_ShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QShowEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.QPlainTextEdit_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QEvent `
    ///
    pub fn ChangeEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QPlainTextEdit_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperChangeEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QPlainTextEdit_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn WheelEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.QPlainTextEdit_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, e: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QWheelEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.QPlainTextEdit_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn CreateMimeDataFromSelection(self: QPlainTextEdit) QMimeData {
        return .{ .ptr = qtc.QPlainTextEdit_CreateMimeDataFromSelection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QMimeData `
    ///
    pub fn OnCreateMimeDataFromSelection(self: QPlainTextEdit, callback: *const fn () callconv(.c) QMimeData) void {
        qtc.QPlainTextEdit_OnCreateMimeDataFromSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCreateMimeDataFromSelection` instead
    ///
    pub const QBaseCreateMimeDataFromSelection = SuperCreateMimeDataFromSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperCreateMimeDataFromSelection(self: QPlainTextEdit) QMimeData {
        return .{ .ptr = qtc.QPlainTextEdit_SuperCreateMimeDataFromSelection(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn CanInsertFromMimeData(self: QPlainTextEdit, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.QPlainTextEdit_CanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, source: QMimeData) callconv(.c) bool `
    ///
    pub fn OnCanInsertFromMimeData(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMimeData) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnCanInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCanInsertFromMimeData` instead
    ///
    pub const QBaseCanInsertFromMimeData = SuperCanInsertFromMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn SuperCanInsertFromMimeData(self: QPlainTextEdit, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.QPlainTextEdit_SuperCanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn InsertFromMimeData(self: QPlainTextEdit, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QMimeData;
        qtc.QPlainTextEdit_InsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, source: QMimeData) callconv(.c) void `
    ///
    pub fn OnInsertFromMimeData(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMimeData) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsertFromMimeData` instead
    ///
    pub const QBaseInsertFromMimeData = SuperInsertFromMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn SuperInsertFromMimeData(self: QPlainTextEdit, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QMimeData;
        qtc.QPlainTextEdit_SuperInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QPlainTextEdit_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QInputMethodEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QPlainTextEdit_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: QPlainTextEdit, dx: i32, dy: i32) void {
        qtc.QPlainTextEdit_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: QPlainTextEdit, dx: i32, dy: i32) void {
        qtc.QPlainTextEdit_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn DoSetTextCursor(self: QPlainTextEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QPlainTextEdit_DoSetTextCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, cursor: QTextCursor) callconv(.c) void `
    ///
    pub fn OnDoSetTextCursor(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QTextCursor) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDoSetTextCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDoSetTextCursor` instead
    ///
    pub const QBaseDoSetTextCursor = SuperDoSetTextCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` cursor: QTextCursor `
    ///
    pub fn SuperDoSetTextCursor(self: QPlainTextEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QTextCursor;
        qtc.QPlainTextEdit_SuperDoSetTextCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn FirstVisibleBlock(self: QPlainTextEdit) QTextBlock {
        return .{ .ptr = qtc.QPlainTextEdit_FirstVisibleBlock(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QTextBlock `
    ///
    pub fn OnFirstVisibleBlock(self: QPlainTextEdit, callback: *const fn () callconv(.c) QTextBlock) void {
        qtc.QPlainTextEdit_OnFirstVisibleBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFirstVisibleBlock` instead
    ///
    pub const QBaseFirstVisibleBlock = SuperFirstVisibleBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperFirstVisibleBlock(self: QPlainTextEdit) QTextBlock {
        return .{ .ptr = qtc.QPlainTextEdit_SuperFirstVisibleBlock(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ContentOffset(self: QPlainTextEdit) QPointF {
        return .{ .ptr = qtc.QPlainTextEdit_ContentOffset(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QPointF `
    ///
    pub fn OnContentOffset(self: QPlainTextEdit, callback: *const fn () callconv(.c) QPointF) void {
        qtc.QPlainTextEdit_OnContentOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContentOffset` instead
    ///
    pub const QBaseContentOffset = SuperContentOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperContentOffset(self: QPlainTextEdit) QPointF {
        return .{ .ptr = qtc.QPlainTextEdit_SuperContentOffset(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn BlockBoundingRect(self: QPlainTextEdit, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QPlainTextEdit_BlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, block: QTextBlock) callconv(.c) QRectF `
    ///
    pub fn OnBlockBoundingRect(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QTextBlock) callconv(.c) QRectF) void {
        qtc.QPlainTextEdit_OnBlockBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBlockBoundingRect` instead
    ///
    pub const QBaseBlockBoundingRect = SuperBlockBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn SuperBlockBoundingRect(self: QPlainTextEdit, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QPlainTextEdit_SuperBlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn BlockBoundingGeometry(self: QPlainTextEdit, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QPlainTextEdit_BlockBoundingGeometry(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, block: QTextBlock) callconv(.c) QRectF `
    ///
    pub fn OnBlockBoundingGeometry(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QTextBlock) callconv(.c) QRectF) void {
        qtc.QPlainTextEdit_OnBlockBoundingGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBlockBoundingGeometry` instead
    ///
    pub const QBaseBlockBoundingGeometry = SuperBlockBoundingGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn SuperBlockBoundingGeometry(self: QPlainTextEdit, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QPlainTextEdit_SuperBlockBoundingGeometry(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn GetPaintContext(self: QPlainTextEdit) QAbstractTextDocumentLayout__PaintContext {
        return .{ .ptr = qtc.QPlainTextEdit_GetPaintContext(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn OnGetPaintContext(self: QPlainTextEdit, callback: *const fn () callconv(.c) QAbstractTextDocumentLayout__PaintContext) void {
        qtc.QPlainTextEdit_OnGetPaintContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperGetPaintContext` instead
    ///
    pub const QBaseGetPaintContext = SuperGetPaintContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperGetPaintContext(self: QPlainTextEdit) QAbstractTextDocumentLayout__PaintContext {
        return .{ .ptr = qtc.QPlainTextEdit_SuperGetPaintContext(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` range: f32 `
    ///
    pub fn ZoomInF(self: QPlainTextEdit, range: f32) void {
        qtc.QPlainTextEdit_ZoomInF(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, range: f32) callconv(.c) void `
    ///
    pub fn OnZoomInF(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, f32) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnZoomInF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperZoomInF` instead
    ///
    pub const QBaseZoomInF = SuperZoomInF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` range: f32 `
    ///
    pub fn SuperZoomInF(self: QPlainTextEdit, range: f32) void {
        qtc.QPlainTextEdit_SuperZoomInF(@ptrCast(self.ptr), @bitCast(range));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` exp: []const u8 `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn Find22(self: QPlainTextEdit, exp: []const u8, options: i32) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QPlainTextEdit_Find22(@ptrCast(self.ptr), exp_str, @bitCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` exp: QRegularExpression `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn Find23(self: QPlainTextEdit, exp: anytype, options: i32) bool {
        comptime _ = @TypeOf(exp)._is_QRegularExpression;
        return qtc.QPlainTextEdit_Find23(@ptrCast(self.ptr), @ptrCast(exp.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    /// ` mode: qtextcursor_enums.MoveMode `
    ///
    pub fn MoveCursor2(self: QPlainTextEdit, operation: i32, mode: i32) void {
        qtc.QPlainTextEdit_MoveCursor2(@ptrCast(self.ptr), @bitCast(operation), @bitCast(mode));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` range: i32 `
    ///
    pub fn ZoomIn1(self: QPlainTextEdit, range: i32) void {
        qtc.QPlainTextEdit_ZoomIn1(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` range: i32 `
    ///
    pub fn ZoomOut1(self: QPlainTextEdit, range: i32) void {
        qtc.QPlainTextEdit_ZoomOut1(@ptrCast(self.ptr), @bitCast(range));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: QPlainTextEdit) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: QPlainTextEdit, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn VerticalScrollBar(self: QPlainTextEdit) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: QPlainTextEdit, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: QPlainTextEdit) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: QPlainTextEdit, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn HorizontalScrollBar(self: QPlainTextEdit) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: QPlainTextEdit, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn CornerWidget(self: QPlainTextEdit) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCornerWidget(self: QPlainTextEdit, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: QPlainTextEdit, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ScrollBarWidgets(self: QPlainTextEdit, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qplaintextedit.ScrollBarWidgets: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn Viewport(self: QPlainTextEdit) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetViewport(self: QPlainTextEdit, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn MaximumViewportSize(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: QPlainTextEdit) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: QPlainTextEdit, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn FrameStyle(self: QPlainTextEdit) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: QPlainTextEdit, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn FrameWidth(self: QPlainTextEdit) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: QPlainTextEdit) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: QPlainTextEdit, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: QPlainTextEdit) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: QPlainTextEdit, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn LineWidth(self: QPlainTextEdit) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: QPlainTextEdit, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn MidLineWidth(self: QPlainTextEdit) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: QPlainTextEdit, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn FrameRect(self: QPlainTextEdit) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` frameRect: QRect `
    ///
    pub fn SetFrameRect(self: QPlainTextEdit, frameRect: anytype) void {
        comptime _ = @TypeOf(frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn WinId(self: QPlainTextEdit) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn CreateWinId(self: QPlainTextEdit) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn InternalWinId(self: QPlainTextEdit) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn EffectiveWinId(self: QPlainTextEdit) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Style(self: QPlainTextEdit) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QPlainTextEdit, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsTopLevel(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsWindow(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsModal(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QPlainTextEdit) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QPlainTextEdit, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsEnabled(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QPlainTextEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QPlainTextEdit, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QPlainTextEdit, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QPlainTextEdit, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn FrameGeometry(self: QPlainTextEdit) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Geometry(self: QPlainTextEdit) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn NormalGeometry(self: QPlainTextEdit) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn X(self: QPlainTextEdit) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Y(self: QPlainTextEdit) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Pos(self: QPlainTextEdit) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn FrameSize(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Size(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Width(self: QPlainTextEdit) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Height(self: QPlainTextEdit) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Rect(self: QPlainTextEdit) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ChildrenRect(self: QPlainTextEdit) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ChildrenRegion(self: QPlainTextEdit) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn MinimumSize(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn MaximumSize(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn MinimumWidth(self: QPlainTextEdit) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn MinimumHeight(self: QPlainTextEdit) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn MaximumWidth(self: QPlainTextEdit) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn MaximumHeight(self: QPlainTextEdit) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QPlainTextEdit, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QPlainTextEdit, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QPlainTextEdit, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QPlainTextEdit, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QPlainTextEdit, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QPlainTextEdit, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QPlainTextEdit, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QPlainTextEdit, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SizeIncrement(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QPlainTextEdit, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QPlainTextEdit, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn BaseSize(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QPlainTextEdit, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QPlainTextEdit, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QPlainTextEdit, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QPlainTextEdit, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QPlainTextEdit, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QPlainTextEdit, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QPlainTextEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QPlainTextEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QPlainTextEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QPlainTextEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QPlainTextEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QPlainTextEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QPlainTextEdit, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QPlainTextEdit, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QPlainTextEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QPlainTextEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QPlainTextEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QPlainTextEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn Window(self: QPlainTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn NativeParentWidget(self: QPlainTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn TopLevelWidget(self: QPlainTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Palette(self: QPlainTextEdit) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QPlainTextEdit, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QPlainTextEdit, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QPlainTextEdit) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QPlainTextEdit, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QPlainTextEdit) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Font(self: QPlainTextEdit) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QPlainTextEdit, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn FontMetrics(self: QPlainTextEdit) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn FontInfo(self: QPlainTextEdit) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Cursor(self: QPlainTextEdit) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QPlainTextEdit, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn UnsetCursor(self: QPlainTextEdit) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QPlainTextEdit, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn HasMouseTracking(self: QPlainTextEdit) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn UnderMouse(self: QPlainTextEdit) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QPlainTextEdit, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn HasTabletTracking(self: QPlainTextEdit) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QPlainTextEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QPlainTextEdit, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Mask(self: QPlainTextEdit) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ClearMask(self: QPlainTextEdit) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QPlainTextEdit, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QPlainTextEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Grab(self: QPlainTextEdit) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn GraphicsEffect(self: QPlainTextEdit) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QPlainTextEdit, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QPlainTextEdit, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QPlainTextEdit, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QPlainTextEdit, windowTitle: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QPlainTextEdit, styleSheet: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QPlainTextEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn WindowIcon(self: QPlainTextEdit) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QPlainTextEdit, windowIconText: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QPlainTextEdit, windowRole: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QPlainTextEdit, filePath: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QPlainTextEdit, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn WindowOpacity(self: QPlainTextEdit) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsWindowModified(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QPlainTextEdit, toolTip: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QPlainTextEdit, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ToolTipDuration(self: QPlainTextEdit) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QPlainTextEdit, statusTip: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QPlainTextEdit, whatsThis: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QPlainTextEdit, name: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QPlainTextEdit, description: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QPlainTextEdit, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QPlainTextEdit) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn UnsetLayoutDirection(self: QPlainTextEdit) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QPlainTextEdit, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Locale(self: QPlainTextEdit) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn UnsetLocale(self: QPlainTextEdit) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsRightToLeft(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsLeftToRight(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SetFocus(self: QPlainTextEdit) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsActiveWindow(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ActivateWindow(self: QPlainTextEdit) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ClearFocus(self: QPlainTextEdit) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QPlainTextEdit, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QPlainTextEdit) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QPlainTextEdit, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn HasFocus(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QPlainTextEdit, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn FocusProxy(self: QPlainTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QPlainTextEdit) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QPlainTextEdit, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn GrabMouse(self: QPlainTextEdit) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ReleaseMouse(self: QPlainTextEdit) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn GrabKeyboard(self: QPlainTextEdit) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ReleaseKeyboard(self: QPlainTextEdit) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QPlainTextEdit, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QPlainTextEdit, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QPlainTextEdit, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QPlainTextEdit, id: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn UpdatesEnabled(self: QPlainTextEdit) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QPlainTextEdit, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn GraphicsProxyWidget(self: QPlainTextEdit) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Update(self: QPlainTextEdit) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Repaint(self: QPlainTextEdit) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QPlainTextEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QPlainTextEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QPlainTextEdit, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Show(self: QPlainTextEdit) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Hide(self: QPlainTextEdit) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ShowMinimized(self: QPlainTextEdit) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ShowMaximized(self: QPlainTextEdit) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ShowFullScreen(self: QPlainTextEdit) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ShowNormal(self: QPlainTextEdit) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Close(self: QPlainTextEdit) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Raise(self: QPlainTextEdit) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Lower(self: QPlainTextEdit) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QPlainTextEdit, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QPlainTextEdit, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QPlainTextEdit, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QPlainTextEdit, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QPlainTextEdit, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qplaintextedit.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QPlainTextEdit, geometry: []u8) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn AdjustSize(self: QPlainTextEdit) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsVisible(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QPlainTextEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsHidden(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsMinimized(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsMaximized(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsFullScreen(self: QPlainTextEdit) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QPlainTextEdit) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QPlainTextEdit, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QPlainTextEdit, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SizePolicy(self: QPlainTextEdit) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QPlainTextEdit, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QPlainTextEdit, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn VisibleRegion(self: QPlainTextEdit) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QPlainTextEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QPlainTextEdit, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ContentsMargins(self: QPlainTextEdit) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ContentsRect(self: QPlainTextEdit) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Layout(self: QPlainTextEdit) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QPlainTextEdit, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn UpdateGeometry(self: QPlainTextEdit) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QPlainTextEdit, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QPlainTextEdit, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QPlainTextEdit, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QPlainTextEdit, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn FocusWidget(self: QPlainTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn NextInFocusChain(self: QPlainTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn PreviousInFocusChain(self: QPlainTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn AcceptDrops(self: QPlainTextEdit) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QPlainTextEdit, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QPlainTextEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QPlainTextEdit, actions: []QAction) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QPlainTextEdit, before: anytype, actions: []QAction) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QPlainTextEdit, before: anytype, action: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QPlainTextEdit, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QPlainTextEdit, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qplaintextedit.Actions: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QPlainTextEdit, text: []const u8) QAction {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QPlainTextEdit, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QPlainTextEdit, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QPlainTextEdit, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn ParentWidget(self: QPlainTextEdit) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QPlainTextEdit, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QPlainTextEdit) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QPlainTextEdit, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QPlainTextEdit, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QPlainTextEdit) i32 {
        return qtc.QWidget_WindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QPlainTextEdit, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QPlainTextEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QPlainTextEdit, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QPlainTextEdit, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QPlainTextEdit, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn EnsurePolished(self: QPlainTextEdit) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QPlainTextEdit, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn AutoFillBackground(self: QPlainTextEdit) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QPlainTextEdit, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn BackingStore(self: QPlainTextEdit) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn WindowHandle(self: QPlainTextEdit) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Screen(self: QPlainTextEdit) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QPlainTextEdit, screen: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QPlainTextEdit, title: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QPlainTextEdit, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QPlainTextEdit, iconText: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QPlainTextEdit, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QPlainTextEdit) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QPlainTextEdit, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QPlainTextEdit, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QPlainTextEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QPlainTextEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QPlainTextEdit, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QPlainTextEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QPlainTextEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QPlainTextEdit, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QPlainTextEdit, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QPlainTextEdit, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QPlainTextEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QPlainTextEdit, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QPlainTextEdit, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QPlainTextEdit, param1: i32, on: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextedit.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QPlainTextEdit, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsWidgetType(self: QPlainTextEdit) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsWindowType(self: QPlainTextEdit) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn IsQuickItemType(self: QPlainTextEdit) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SignalsBlocked(self: QPlainTextEdit) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QPlainTextEdit, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Thread(self: QPlainTextEdit) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QPlainTextEdit, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QPlainTextEdit, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QPlainTextEdit, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QPlainTextEdit, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QPlainTextEdit, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QPlainTextEdit, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qplaintextedit.Children: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QPlainTextEdit, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QPlainTextEdit, obj: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QPlainTextEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn Disconnect3(self: QPlainTextEdit) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QPlainTextEdit, receiver: anytype) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn DumpObjectTree(self: QPlainTextEdit) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn DumpObjectInfo(self: QPlainTextEdit) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QPlainTextEdit, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QPlainTextEdit, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QPlainTextEdit, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qplaintextedit.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qplaintextedit.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn BindingStorage(self: QPlainTextEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn BindingStorage2(self: QPlainTextEdit) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Destroyed(self: QPlainTextEdit) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Parent(self: QPlainTextEdit) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QPlainTextEdit, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn DeleteLater(self: QPlainTextEdit) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QPlainTextEdit, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QPlainTextEdit, time: i64, timerType: i32) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QPlainTextEdit, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QPlainTextEdit, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QPlainTextEdit, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QPlainTextEdit, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QPlainTextEdit, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn PaintingActive(self: QPlainTextEdit) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn WidthMM(self: QPlainTextEdit) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn HeightMM(self: QPlainTextEdit) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn LogicalDpiX(self: QPlainTextEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn LogicalDpiY(self: QPlainTextEdit) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn PhysicalDpiX(self: QPlainTextEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn PhysicalDpiY(self: QPlainTextEdit) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn DevicePixelRatio(self: QPlainTextEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn DevicePixelRatioF(self: QPlainTextEdit) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ColorCount(self: QPlainTextEdit) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Depth(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn MinimumSizeHint(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QPlainTextEdit_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperMinimumSizeHint(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QPlainTextEdit_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QPlainTextEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.QPlainTextEdit_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SizeHint(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QPlainTextEdit_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperSizeHint(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QPlainTextEdit_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QPlainTextEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.QPlainTextEdit_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SetupViewport(self: QPlainTextEdit, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.QPlainTextEdit_SetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SuperSetupViewport(self: QPlainTextEdit, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.QPlainTextEdit_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, viewport: QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QWidget) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn EventFilter(self: QPlainTextEdit, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QPlainTextEdit_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperEventFilter(self: QPlainTextEdit, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QPlainTextEdit_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ViewportEvent(self: QPlainTextEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QPlainTextEdit_ViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperViewportEvent(self: QPlainTextEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QPlainTextEdit_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QEvent) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ViewportSizeHint(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QPlainTextEdit_ViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperViewportSizeHint(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QPlainTextEdit_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnViewportSizeHint(self: QPlainTextEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.QPlainTextEdit_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: QPlainTextEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QPlainTextEdit_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: QPlainTextEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QPlainTextEdit_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn DevType(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_DevType(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperDevType(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QPlainTextEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QPlainTextEdit, visible: bool) void {
        qtc.QPlainTextEdit_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QPlainTextEdit, visible: bool) void {
        qtc.QPlainTextEdit_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QPlainTextEdit, param1: i32) i32 {
        return qtc.QPlainTextEdit_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QPlainTextEdit, param1: i32) i32 {
        return qtc.QPlainTextEdit_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32) callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn HasHeightForWidth(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperHasHeightForWidth(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QPlainTextEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn PaintEngine(self: QPlainTextEdit) QPaintEngine {
        return .{ .ptr = qtc.QPlainTextEdit_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperPaintEngine(self: QPlainTextEdit) QPaintEngine {
        return .{ .ptr = qtc.QPlainTextEdit_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QPlainTextEdit, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QPlainTextEdit_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QPlainTextEdit_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QPlainTextEdit_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QEnterEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPlainTextEdit_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPlainTextEdit_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QPlainTextEdit_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QPlainTextEdit_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMoveEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QPlainTextEdit_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QPlainTextEdit_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QCloseEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QPlainTextEdit_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QPlainTextEdit_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QTabletEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QPlainTextEdit_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QPlainTextEdit_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QActionEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QPlainTextEdit_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QPlainTextEdit_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QHideEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QPlainTextEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QPlainTextEdit_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QPlainTextEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QPlainTextEdit_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QPlainTextEdit, param1: i32) i32 {
        return qtc.QPlainTextEdit_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QPlainTextEdit, param1: i32) i32 {
        return qtc.QPlainTextEdit_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32) callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QPlainTextEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPlainTextEdit_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QPlainTextEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPlainTextEdit_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QPainter) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QPlainTextEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPlainTextEdit_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QPlainTextEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPlainTextEdit_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QPlainTextEdit_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SharedPainter(self: QPlainTextEdit) QPainter {
        return .{ .ptr = qtc.QPlainTextEdit_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperSharedPainter(self: QPlainTextEdit) QPainter {
        return .{ .ptr = qtc.QPlainTextEdit_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QPlainTextEdit, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QPlainTextEdit_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPlainTextEdit_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPlainTextEdit_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QChildEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPlainTextEdit_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QPlainTextEdit, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPlainTextEdit_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QPlainTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextEdit_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QPlainTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextEdit_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMetaMethod) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QPlainTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextEdit_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QPlainTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextEdit_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMetaMethod) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: QPlainTextEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QPlainTextEdit_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: QPlainTextEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QPlainTextEdit_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ViewportMargins(self: QPlainTextEdit) QMargins {
        return .{ .ptr = qtc.QPlainTextEdit_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperViewportMargins(self: QPlainTextEdit) QMargins {
        return .{ .ptr = qtc.QPlainTextEdit_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    pub fn OnViewportMargins(self: QPlainTextEdit, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QPlainTextEdit_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPainter `
    ///
    pub fn DrawFrame(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QPlainTextEdit_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPainter `
    ///
    pub fn SuperDrawFrame(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QPlainTextEdit_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QPainter) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn UpdateMicroFocus(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperUpdateMicroFocus(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QPlainTextEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QPlainTextEdit_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Create(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Create(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperCreate(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QPlainTextEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QPlainTextEdit_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Destroy(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperDestroy(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QPlainTextEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn FocusNextChild(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperFocusNextChild(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QPlainTextEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn FocusPreviousChild(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperFocusPreviousChild(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QPlainTextEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Sender(self: QPlainTextEdit) QObject {
        return .{ .ptr = qtc.QPlainTextEdit_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperSender(self: QPlainTextEdit) QObject {
        return .{ .ptr = qtc.QPlainTextEdit_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QPlainTextEdit, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPlainTextEdit_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn SenderSignalIndex(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn SuperSenderSignalIndex(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QPlainTextEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QPlainTextEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlainTextEdit_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QPlainTextEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlainTextEdit_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QPlainTextEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlainTextEdit_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QPlainTextEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlainTextEdit_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMetaMethod) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QPlainTextEdit, metricA: i32, metricB: i32) f64 {
        return qtc.QPlainTextEdit_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QPlainTextEdit, metricA: i32, metricB: i32) f64 {
        return qtc.QPlainTextEdit_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32, i32) callconv(.c) f64) void {
        qtc.QPlainTextEdit_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dtor.QPlainTextEdit)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn Delete(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html)
pub const QPlainTextDocumentLayout = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QPlainTextDocumentLayout,

    pub const _is_QPlainTextDocumentLayout = {};
    pub const _is_QAbstractTextDocumentLayout = {};
    pub const _is_QObject = {};

    /// New constructs a new QPlainTextDocumentLayout object.
    ///
    /// ## Parameter(s):
    ///
    /// ` document: QTextDocument `
    ///
    pub fn New(document: anytype) QPlainTextDocumentLayout {
        comptime _ = @TypeOf(document)._is_QTextDocument;
        return .{ .ptr = qtc.QPlainTextDocumentLayout_new(@ptrCast(document.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn MetaObject(self: QPlainTextDocumentLayout) QMetaObject {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QPlainTextDocumentLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPlainTextDocumentLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn SuperMetaObject(self: QPlainTextDocumentLayout) QMetaObject {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QPlainTextDocumentLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlainTextDocumentLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QPlainTextDocumentLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlainTextDocumentLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QPlainTextDocumentLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlainTextDocumentLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QPlainTextDocumentLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlainTextDocumentLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: QPainter `
    ///
    /// ` param2: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn Draw(self: QPlainTextDocumentLayout, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        comptime _ = @TypeOf(param2)._is_QAbstractTextDocumentLayout__PaintContext;
        qtc.QPlainTextDocumentLayout_Draw(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, param1: QPainter, param2: QAbstractTextDocumentLayout__PaintContext) callconv(.c) void `
    ///
    pub fn OnDraw(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QPainter, QAbstractTextDocumentLayout__PaintContext) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDraw` instead
    ///
    pub const QBaseDraw = SuperDraw;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#draw)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: QPainter `
    ///
    /// ` param2: QAbstractTextDocumentLayout__PaintContext `
    ///
    pub fn SuperDraw(self: QPlainTextDocumentLayout, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        comptime _ = @TypeOf(param2)._is_QAbstractTextDocumentLayout__PaintContext;
        qtc.QPlainTextDocumentLayout_SuperDraw(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: QPointF `
    ///
    /// ` param2: qnamespace_enums.HitTestAccuracy `
    ///
    pub fn HitTest(self: QPlainTextDocumentLayout, param1: anytype, param2: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return qtc.QPlainTextDocumentLayout_HitTest(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, param1: QPointF, param2: qnamespace_enums.HitTestAccuracy) callconv(.c) i32 `
    ///
    pub fn OnHitTest(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QPointF, i32) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnHitTest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperHitTest` instead
    ///
    pub const QBaseHitTest = SuperHitTest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#hitTest)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: QPointF `
    ///
    /// ` param2: qnamespace_enums.HitTestAccuracy `
    ///
    pub fn SuperHitTest(self: QPlainTextDocumentLayout, param1: anytype, param2: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return qtc.QPlainTextDocumentLayout_SuperHitTest(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn PageCount(self: QPlainTextDocumentLayout) i32 {
        return qtc.QPlainTextDocumentLayout_PageCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnPageCount(self: QPlainTextDocumentLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnPageCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPageCount` instead
    ///
    pub const QBasePageCount = SuperPageCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn SuperPageCount(self: QPlainTextDocumentLayout) i32 {
        return qtc.QPlainTextDocumentLayout_SuperPageCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn DocumentSize(self: QPlainTextDocumentLayout) QSizeF {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_DocumentSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QSizeF `
    ///
    pub fn OnDocumentSize(self: QPlainTextDocumentLayout, callback: *const fn () callconv(.c) QSizeF) void {
        qtc.QPlainTextDocumentLayout_OnDocumentSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDocumentSize` instead
    ///
    pub const QBaseDocumentSize = SuperDocumentSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn SuperDocumentSize(self: QPlainTextDocumentLayout) QSizeF {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_SuperDocumentSize(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: QTextFrame `
    ///
    pub fn FrameBoundingRect(self: QPlainTextDocumentLayout, param1: anytype) QRectF {
        comptime _ = @TypeOf(param1)._is_QTextFrame;
        return .{ .ptr = qtc.QPlainTextDocumentLayout_FrameBoundingRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, param1: QTextFrame) callconv(.c) QRectF `
    ///
    pub fn OnFrameBoundingRect(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QTextFrame) callconv(.c) QRectF) void {
        qtc.QPlainTextDocumentLayout_OnFrameBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFrameBoundingRect` instead
    ///
    pub const QBaseFrameBoundingRect = SuperFrameBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: QTextFrame `
    ///
    pub fn SuperFrameBoundingRect(self: QPlainTextDocumentLayout, param1: anytype) QRectF {
        comptime _ = @TypeOf(param1)._is_QTextFrame;
        return .{ .ptr = qtc.QPlainTextDocumentLayout_SuperFrameBoundingRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn BlockBoundingRect(self: QPlainTextDocumentLayout, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QPlainTextDocumentLayout_BlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, block: QTextBlock) callconv(.c) QRectF `
    ///
    pub fn OnBlockBoundingRect(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QTextBlock) callconv(.c) QRectF) void {
        qtc.QPlainTextDocumentLayout_OnBlockBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBlockBoundingRect` instead
    ///
    pub const QBaseBlockBoundingRect = SuperBlockBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn SuperBlockBoundingRect(self: QPlainTextDocumentLayout, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QPlainTextDocumentLayout_SuperBlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#ensureBlockLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn EnsureBlockLayout(self: QPlainTextDocumentLayout, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QPlainTextDocumentLayout_EnsureBlockLayout(@ptrCast(self.ptr), @ptrCast(block.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#setCursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` width: i32 `
    ///
    pub fn SetCursorWidth(self: QPlainTextDocumentLayout, width: i32) void {
        qtc.QPlainTextDocumentLayout_SetCursorWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#cursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn CursorWidth(self: QPlainTextDocumentLayout) i32 {
        return qtc.QPlainTextDocumentLayout_CursorWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn RequestUpdate(self: QPlainTextDocumentLayout) void {
        qtc.QPlainTextDocumentLayout_RequestUpdate(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` from: i32 `
    ///
    /// ` param2: i32 `
    ///
    /// ` charsAdded: i32 `
    ///
    pub fn DocumentChanged(self: QPlainTextDocumentLayout, from: i32, param2: i32, charsAdded: i32) void {
        qtc.QPlainTextDocumentLayout_DocumentChanged(@ptrCast(self.ptr), @bitCast(from), @bitCast(param2), @bitCast(charsAdded));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, from: i32, param2: i32, charsAdded: i32) callconv(.c) void `
    ///
    pub fn OnDocumentChanged(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, i32, i32, i32) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDocumentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDocumentChanged` instead
    ///
    pub const QBaseDocumentChanged = SuperDocumentChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` from: i32 `
    ///
    /// ` param2: i32 `
    ///
    /// ` charsAdded: i32 `
    ///
    pub fn SuperDocumentChanged(self: QPlainTextDocumentLayout, from: i32, param2: i32, charsAdded: i32) void {
        qtc.QPlainTextDocumentLayout_SuperDocumentChanged(@ptrCast(self.ptr), @bitCast(from), @bitCast(param2), @bitCast(charsAdded));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#anchorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPointF `
    ///
    pub fn AnchorAt(self: QPlainTextDocumentLayout, allocator: std.mem.Allocator, pos: anytype) []const u8 {
        comptime _ = @TypeOf(pos)._is_QPointF;
        var _str = qtc.QAbstractTextDocumentLayout_AnchorAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.AnchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#imageAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: QPointF `
    ///
    pub fn ImageAt(self: QPlainTextDocumentLayout, allocator: std.mem.Allocator, pos: anytype) []const u8 {
        comptime _ = @TypeOf(pos)._is_QPointF;
        var _str = qtc.QAbstractTextDocumentLayout_ImageAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.ImageAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` pos: QPointF `
    ///
    pub fn FormatAt(self: QPlainTextDocumentLayout, pos: anytype) QTextFormat {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_FormatAt(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` pos: QPointF `
    ///
    pub fn BlockWithMarkerAt(self: QPlainTextDocumentLayout, pos: anytype) QTextBlock {
        comptime _ = @TypeOf(pos)._is_QPointF;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_BlockWithMarkerAt(@ptrCast(self.ptr), @ptrCast(pos.ptr)) };
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#setPaintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` device: QPaintDevice `
    ///
    pub fn SetPaintDevice(self: QPlainTextDocumentLayout, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QPaintDevice;
        qtc.QAbstractTextDocumentLayout_SetPaintDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn PaintDevice(self: QPlainTextDocumentLayout) QPaintDevice {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_PaintDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn Document(self: QPlainTextDocumentLayout) QTextDocument {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_Document(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#registerHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` objectType: i32 `
    ///
    /// ` component: QObject `
    ///
    pub fn RegisterHandler(self: QPlainTextDocumentLayout, objectType: i32, component: anytype) void {
        comptime _ = @TypeOf(component)._is_QObject;
        qtc.QAbstractTextDocumentLayout_RegisterHandler(@ptrCast(self.ptr), @bitCast(objectType), @ptrCast(component.ptr));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` objectType: i32 `
    ///
    pub fn UnregisterHandler(self: QPlainTextDocumentLayout, objectType: i32) void {
        qtc.QAbstractTextDocumentLayout_UnregisterHandler(@ptrCast(self.ptr), @bitCast(objectType));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#handlerForObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` objectType: i32 `
    ///
    pub fn HandlerForObject(self: QPlainTextDocumentLayout, objectType: i32) QTextObjectInterface {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_HandlerForObject(@ptrCast(self.ptr), @bitCast(objectType)) };
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn Update(self: QPlainTextDocumentLayout) void {
        qtc.QAbstractTextDocumentLayout_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout) callconv(.c) void `
    ///
    pub fn OnUpdate(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn UpdateBlock(self: QPlainTextDocumentLayout, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QAbstractTextDocumentLayout_UpdateBlock(@ptrCast(self.ptr), @ptrCast(block.ptr));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#updateBlock)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, block: QTextBlock) callconv(.c) void `
    ///
    pub fn OnUpdateBlock(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QTextBlock) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_UpdateBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` newSize: QSizeF `
    ///
    pub fn DocumentSizeChanged(self: QPlainTextDocumentLayout, newSize: anytype) void {
        comptime _ = @TypeOf(newSize)._is_QSizeF;
        qtc.QAbstractTextDocumentLayout_DocumentSizeChanged(@ptrCast(self.ptr), @ptrCast(newSize.ptr));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#documentSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, newSize: QSizeF) callconv(.c) void `
    ///
    pub fn OnDocumentSizeChanged(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QSizeF) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` newPages: i32 `
    ///
    pub fn PageCountChanged(self: QPlainTextDocumentLayout, newPages: i32) void {
        qtc.QAbstractTextDocumentLayout_PageCountChanged(@ptrCast(self.ptr), @bitCast(newPages));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#pageCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, newPages: i32) callconv(.c) void `
    ///
    pub fn OnPageCountChanged(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, i32) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_PageCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#unregisterHandler)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` objectType: i32 `
    ///
    /// ` component: QObject `
    ///
    pub fn UnregisterHandler2(self: QPlainTextDocumentLayout, objectType: i32, component: anytype) void {
        comptime _ = @TypeOf(component)._is_QObject;
        qtc.QAbstractTextDocumentLayout_UnregisterHandler2(@ptrCast(self.ptr), @bitCast(objectType), @ptrCast(component.ptr));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: QRectF `
    ///
    pub fn Update1(self: QPlainTextDocumentLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QAbstractTextDocumentLayout_Update1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, param1: QRectF) callconv(.c) void `
    ///
    pub fn OnUpdate1(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QRectF) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QPlainTextDocumentLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qplaintextdocumentlayout.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QPlainTextDocumentLayout, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn IsWidgetType(self: QPlainTextDocumentLayout) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn IsWindowType(self: QPlainTextDocumentLayout) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn IsQuickItemType(self: QPlainTextDocumentLayout) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn SignalsBlocked(self: QPlainTextDocumentLayout) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QPlainTextDocumentLayout, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn Thread(self: QPlainTextDocumentLayout) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QPlainTextDocumentLayout, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QPlainTextDocumentLayout, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QPlainTextDocumentLayout, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QPlainTextDocumentLayout, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QPlainTextDocumentLayout, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QPlainTextDocumentLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qplaintextdocumentlayout.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` parent: QObject `
    ///
    pub fn SetParent(self: QPlainTextDocumentLayout, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QPlainTextDocumentLayout, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QPlainTextDocumentLayout, obj: anytype) void {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QPlainTextDocumentLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn Disconnect3(self: QPlainTextDocumentLayout) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QPlainTextDocumentLayout, receiver: anytype) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn DumpObjectTree(self: QPlainTextDocumentLayout) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn DumpObjectInfo(self: QPlainTextDocumentLayout) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QPlainTextDocumentLayout, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QPlainTextDocumentLayout, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QPlainTextDocumentLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qplaintextdocumentlayout.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qplaintextdocumentlayout.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn BindingStorage(self: QPlainTextDocumentLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn BindingStorage2(self: QPlainTextDocumentLayout) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn Destroyed(self: QPlainTextDocumentLayout) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn Parent(self: QPlainTextDocumentLayout) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QPlainTextDocumentLayout, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn DeleteLater(self: QPlainTextDocumentLayout) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QPlainTextDocumentLayout, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QPlainTextDocumentLayout, time: i64, timerType: i32) i32 {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QPlainTextDocumentLayout, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QPlainTextDocumentLayout, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QPlainTextDocumentLayout, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QPlainTextDocumentLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QPlainTextDocumentLayout, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QPlainTextDocumentLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` item: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn ResizeInlineObject(self: QPlainTextDocumentLayout, item: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QPlainTextDocumentLayout_ResizeInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeInlineObject` instead
    ///
    pub const QBaseResizeInlineObject = SuperResizeInlineObject;

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` item: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn SuperResizeInlineObject(self: QPlainTextDocumentLayout, item: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QPlainTextDocumentLayout_SuperResizeInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#resizeInlineObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, item: QTextInlineObject, posInDocument: i32, format: QTextFormat) callconv(.c) void `
    ///
    pub fn OnResizeInlineObject(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QTextInlineObject, i32, QTextFormat) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnResizeInlineObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` item: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn PositionInlineObject(self: QPlainTextDocumentLayout, item: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QPlainTextDocumentLayout_PositionInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `SuperPositionInlineObject` instead
    ///
    pub const QBasePositionInlineObject = SuperPositionInlineObject;

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` item: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn SuperPositionInlineObject(self: QPlainTextDocumentLayout, item: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QPlainTextDocumentLayout_SuperPositionInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#positionInlineObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, item: QTextInlineObject, posInDocument: i32, format: QTextFormat) callconv(.c) void `
    ///
    pub fn OnPositionInlineObject(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QTextInlineObject, i32, QTextFormat) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnPositionInlineObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` object: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn DrawInlineObject(self: QPlainTextDocumentLayout, painter: anytype, rect: anytype, object: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(object)._is_QTextInlineObject;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QPlainTextDocumentLayout_DrawInlineObject(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(object.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawInlineObject` instead
    ///
    pub const QBaseDrawInlineObject = SuperDrawInlineObject;

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRectF `
    ///
    /// ` object: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` format: QTextFormat `
    ///
    pub fn SuperDrawInlineObject(self: QPlainTextDocumentLayout, painter: anytype, rect: anytype, object: anytype, posInDocument: i32, format: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRectF;
        comptime _ = @TypeOf(object)._is_QTextInlineObject;
        comptime _ = @TypeOf(format)._is_QTextFormat;
        qtc.QPlainTextDocumentLayout_SuperDrawInlineObject(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(object.ptr), @bitCast(posInDocument), @ptrCast(format.ptr));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#drawInlineObject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, painter: QPainter, rect: QRectF, object: QTextInlineObject, posInDocument: i32, format: QTextFormat) callconv(.c) void `
    ///
    pub fn OnDrawInlineObject(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QPainter, QRectF, QTextInlineObject, i32, QTextFormat) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDrawInlineObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: QPlainTextDocumentLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPlainTextDocumentLayout_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: QPlainTextDocumentLayout, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPlainTextDocumentLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QEvent) callconv(.c) bool) void {
        qtc.QPlainTextDocumentLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QPlainTextDocumentLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPlainTextDocumentLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QPlainTextDocumentLayout, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QPlainTextDocumentLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPlainTextDocumentLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QPlainTextDocumentLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPlainTextDocumentLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QPlainTextDocumentLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QPlainTextDocumentLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QPlainTextDocumentLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPlainTextDocumentLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QPlainTextDocumentLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QPlainTextDocumentLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QChildEvent) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QPlainTextDocumentLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPlainTextDocumentLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QPlainTextDocumentLayout, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QPlainTextDocumentLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QEvent) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QPlainTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextDocumentLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QPlainTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextDocumentLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QPlainTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextDocumentLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QPlainTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextDocumentLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn FormatIndex(self: QPlainTextDocumentLayout, pos: i32) i32 {
        return qtc.QPlainTextDocumentLayout_FormatIndex(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// ### DEPRECATED: Use `SuperFormatIndex` instead
    ///
    pub const QBaseFormatIndex = SuperFormatIndex;

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn SuperFormatIndex(self: QPlainTextDocumentLayout, pos: i32) i32 {
        return qtc.QPlainTextDocumentLayout_SuperFormatIndex(@ptrCast(self.ptr), @bitCast(pos));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, pos: i32) callconv(.c) i32 `
    ///
    pub fn OnFormatIndex(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, i32) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnFormatIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn Format(self: QPlainTextDocumentLayout, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_Format(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// ### DEPRECATED: Use `SuperFormat` instead
    ///
    pub const QBaseFormat = SuperFormat;

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` pos: i32 `
    ///
    pub fn SuperFormat(self: QPlainTextDocumentLayout, pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_SuperFormat(@ptrCast(self.ptr), @bitCast(pos)) };
    }

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#format)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, pos: i32) callconv(.c) QTextCharFormat `
    ///
    pub fn OnFormat(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, i32) callconv(.c) QTextCharFormat) void {
        qtc.QPlainTextDocumentLayout_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn Sender(self: QPlainTextDocumentLayout) QObject {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn SuperSender(self: QPlainTextDocumentLayout) QObject {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QPlainTextDocumentLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPlainTextDocumentLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn SenderSignalIndex(self: QPlainTextDocumentLayout) i32 {
        return qtc.QPlainTextDocumentLayout_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn SuperSenderSignalIndex(self: QPlainTextDocumentLayout) i32 {
        return qtc.QPlainTextDocumentLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QPlainTextDocumentLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QPlainTextDocumentLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlainTextDocumentLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QPlainTextDocumentLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlainTextDocumentLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QPlainTextDocumentLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlainTextDocumentLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QPlainTextDocumentLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlainTextDocumentLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QPlainTextDocumentLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#dtor.QPlainTextDocumentLayout)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn Delete(self: QPlainTextDocumentLayout) void {
        qtc.QPlainTextDocumentLayout_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#public-types)
pub const enums = struct {
    pub const LineWrapMode = enum(i32) {
        pub const NoWrap: i32 = 0;
        pub const WidgetWidth: i32 = 1;
    };
};
