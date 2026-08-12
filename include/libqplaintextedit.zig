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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlainTextEdit object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) QPlainTextEdit {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QPlainTextEdit_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QPlainTextEdit object in C++ memory
    ///
    pub fn new2() QPlainTextEdit {
        return .{ .ptr = qtc.QPlainTextEdit_new2() };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QPlainTextEdit object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    pub fn new3(text: []const u8) QPlainTextEdit {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QPlainTextEdit_new3(text_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QPlainTextEdit object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new4(text: []const u8, _parent: anytype) QPlainTextEdit {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QPlainTextEdit_new4(text_str, @ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn metaObject(self: QPlainTextEdit) QMetaObject {
        return .{ .ptr = qtc.QPlainTextEdit_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QPlainTextEdit, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPlainTextEdit_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superMetaObject(self: QPlainTextEdit) QMetaObject {
        return .{ .ptr = qtc.QPlainTextEdit_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QPlainTextEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlainTextEdit_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPlainTextEdit_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QPlainTextEdit, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlainTextEdit_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QPlainTextEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlainTextEdit_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QPlainTextEdit, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlainTextEdit_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDocument` instead
    ///
    pub const SetDocument = setDocument;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` _document: QTextDocument `
    ///
    pub fn setDocument(self: QPlainTextEdit, _document: anytype) void {
        comptime _ = @TypeOf(_document)._is_QTextDocument;
        qtc.QPlainTextEdit_SetDocument(@ptrCast(self.ptr), @ptrCast(_document.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn document(self: QPlainTextEdit) QTextDocument {
        return .{ .ptr = qtc.QPlainTextEdit_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPlaceholderText` instead
    ///
    pub const SetPlaceholderText = setPlaceholderText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` _placeholderText: []const u8 `
    ///
    pub fn setPlaceholderText(self: QPlainTextEdit, _placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = _placeholderText.len,
            .data = _placeholderText.ptr,
        };
        qtc.QPlainTextEdit_SetPlaceholderText(@ptrCast(self.ptr), placeholderText_str);
    }

    /// ### DEPRECATED: Use `placeholderText` instead
    ///
    pub const PlaceholderText = placeholderText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn placeholderText(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlainTextEdit_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.placeholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTextCursor` instead
    ///
    pub const SetTextCursor = setTextCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn setTextCursor(self: QPlainTextEdit, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        qtc.QPlainTextEdit_SetTextCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `textCursor` instead
    ///
    pub const TextCursor = textCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn textCursor(self: QPlainTextEdit) QTextCursor {
        return .{ .ptr = qtc.QPlainTextEdit_TextCursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn isReadOnly(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` ro: bool `
    ///
    pub fn setReadOnly(self: QPlainTextEdit, ro: bool) void {
        qtc.QPlainTextEdit_SetReadOnly(@ptrCast(self.ptr), ro);
    }

    /// ### DEPRECATED: Use `setTextInteractionFlags` instead
    ///
    pub const SetTextInteractionFlags = setTextInteractionFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` flags: flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn setTextInteractionFlags(self: QPlainTextEdit, flags: i32) void {
        qtc.QPlainTextEdit_SetTextInteractionFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `textInteractionFlags` instead
    ///
    pub const TextInteractionFlags = textInteractionFlags;

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
    pub fn textInteractionFlags(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_TextInteractionFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mergeCurrentCharFormat` instead
    ///
    pub const MergeCurrentCharFormat = mergeCurrentCharFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mergeCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` modifier: QTextCharFormat `
    ///
    pub fn mergeCurrentCharFormat(self: QPlainTextEdit, modifier: anytype) void {
        comptime _ = @TypeOf(modifier)._is_QTextCharFormat;
        qtc.QPlainTextEdit_MergeCurrentCharFormat(@ptrCast(self.ptr), @ptrCast(modifier.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentCharFormat` instead
    ///
    pub const SetCurrentCharFormat = setCurrentCharFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn setCurrentCharFormat(self: QPlainTextEdit, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QPlainTextEdit_SetCurrentCharFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `currentCharFormat` instead
    ///
    pub const CurrentCharFormat = currentCharFormat;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#currentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn currentCharFormat(self: QPlainTextEdit) QTextCharFormat {
        return .{ .ptr = qtc.QPlainTextEdit_CurrentCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tabChangesFocus` instead
    ///
    pub const TabChangesFocus = tabChangesFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn tabChangesFocus(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_TabChangesFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabChangesFocus` instead
    ///
    pub const SetTabChangesFocus = setTabChangesFocus;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn setTabChangesFocus(self: QPlainTextEdit, b: bool) void {
        qtc.QPlainTextEdit_SetTabChangesFocus(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setDocumentTitle` instead
    ///
    pub const SetDocumentTitle = setDocumentTitle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocumentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setDocumentTitle(self: QPlainTextEdit, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QPlainTextEdit_SetDocumentTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `documentTitle` instead
    ///
    pub const DocumentTitle = documentTitle;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#documentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn documentTitle(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlainTextEdit_DocumentTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.documentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isUndoRedoEnabled` instead
    ///
    pub const IsUndoRedoEnabled = isUndoRedoEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn isUndoRedoEnabled(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_IsUndoRedoEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUndoRedoEnabled` instead
    ///
    pub const SetUndoRedoEnabled = setUndoRedoEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn setUndoRedoEnabled(self: QPlainTextEdit, enable: bool) void {
        qtc.QPlainTextEdit_SetUndoRedoEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `setMaximumBlockCount` instead
    ///
    pub const SetMaximumBlockCount = setMaximumBlockCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setMaximumBlockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` maximum: i32 `
    ///
    pub fn setMaximumBlockCount(self: QPlainTextEdit, maximum: i32) void {
        qtc.QPlainTextEdit_SetMaximumBlockCount(@ptrCast(self.ptr), @bitCast(maximum));
    }

    /// ### DEPRECATED: Use `maximumBlockCount` instead
    ///
    pub const MaximumBlockCount = maximumBlockCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#maximumBlockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn maximumBlockCount(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_MaximumBlockCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineWrapMode` instead
    ///
    pub const LineWrapMode = lineWrapMode;

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
    pub fn lineWrapMode(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_LineWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineWrapMode` instead
    ///
    pub const SetLineWrapMode = setLineWrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setLineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` mode: qplaintextedit_enums.LineWrapMode `
    ///
    pub fn setLineWrapMode(self: QPlainTextEdit, mode: i32) void {
        qtc.QPlainTextEdit_SetLineWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `wordWrapMode` instead
    ///
    pub const WordWrapMode = wordWrapMode;

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
    pub fn wordWrapMode(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_WordWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWordWrapMode` instead
    ///
    pub const SetWordWrapMode = setWordWrapMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setWordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` policy: qtextoption_enums.WrapMode `
    ///
    pub fn setWordWrapMode(self: QPlainTextEdit, policy: i32) void {
        qtc.QPlainTextEdit_SetWordWrapMode(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `setBackgroundVisible` instead
    ///
    pub const SetBackgroundVisible = setBackgroundVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn setBackgroundVisible(self: QPlainTextEdit, visible: bool) void {
        qtc.QPlainTextEdit_SetBackgroundVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `backgroundVisible` instead
    ///
    pub const BackgroundVisible = backgroundVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#backgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn backgroundVisible(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_BackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCenterOnScroll` instead
    ///
    pub const SetCenterOnScroll = setCenterOnScroll;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCenterOnScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn setCenterOnScroll(self: QPlainTextEdit, enabled: bool) void {
        qtc.QPlainTextEdit_SetCenterOnScroll(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `centerOnScroll` instead
    ///
    pub const CenterOnScroll = centerOnScroll;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerOnScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn centerOnScroll(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_CenterOnScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` exp: []const u8 `
    ///
    pub fn find(self: QPlainTextEdit, exp: []const u8) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QPlainTextEdit_Find(@ptrCast(self.ptr), exp_str);
    }

    /// ### DEPRECATED: Use `find2` instead
    ///
    pub const Find2 = find2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` exp: QRegularExpression `
    ///
    pub fn find2(self: QPlainTextEdit, exp: anytype) bool {
        comptime _ = @TypeOf(exp)._is_QRegularExpression;
        return qtc.QPlainTextEdit_Find2(@ptrCast(self.ptr), @ptrCast(exp.ptr));
    }

    /// ### DEPRECATED: Use `toPlainText` instead
    ///
    pub const ToPlainText = toPlainText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toPlainText(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlainTextEdit_ToPlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.toPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `ensureCursorVisible` instead
    ///
    pub const EnsureCursorVisible = ensureCursorVisible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#ensureCursorVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn ensureCursorVisible(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_EnsureCursorVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `loadResource` instead
    ///
    pub const LoadResource = loadResource;

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
    pub fn loadResource(self: QPlainTextEdit, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.QPlainTextEdit_LoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### DEPRECATED: Use `onLoadResource` instead
    ///
    pub const OnLoadResource = onLoadResource;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onLoadResource(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32, QUrl) callconv(.c) QVariant) void {
        qtc.QPlainTextEdit_OnLoadResource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superLoadResource` instead
    ///
    pub const SuperLoadResource = superLoadResource;

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
    pub fn superLoadResource(self: QPlainTextEdit, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.QPlainTextEdit_SuperLoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### DEPRECATED: Use `createStandardContextMenu` instead
    ///
    pub const CreateStandardContextMenu = createStandardContextMenu;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn createStandardContextMenu(self: QPlainTextEdit) QMenu {
        return .{ .ptr = qtc.QPlainTextEdit_CreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createStandardContextMenu2` instead
    ///
    pub const CreateStandardContextMenu2 = createStandardContextMenu2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` position: QPoint `
    ///
    pub fn createStandardContextMenu2(self: QPlainTextEdit, position: anytype) QMenu {
        comptime _ = @TypeOf(position)._is_QPoint;
        return .{ .ptr = qtc.QPlainTextEdit_CreateStandardContextMenu2(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorForPosition` instead
    ///
    pub const CursorForPosition = cursorForPosition;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorForPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn cursorForPosition(self: QPlainTextEdit, _pos: anytype) QTextCursor {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        return .{ .ptr = qtc.QPlainTextEdit_CursorForPosition(@ptrCast(self.ptr), @ptrCast(_pos.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorRect` instead
    ///
    pub const CursorRect = cursorRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn cursorRect(self: QPlainTextEdit, _cursor: anytype) QRect {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QPlainTextEdit_CursorRect(@ptrCast(self.ptr), @ptrCast(_cursor.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorRect2` instead
    ///
    pub const CursorRect2 = cursorRect2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn cursorRect2(self: QPlainTextEdit) QRect {
        return .{ .ptr = qtc.QPlainTextEdit_CursorRect2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `anchorAt` instead
    ///
    pub const AnchorAt = anchorAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#anchorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn anchorAt(self: QPlainTextEdit, allocator: std.mem.Allocator, _pos: anytype) []const u8 {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        var _str = qtc.QPlainTextEdit_AnchorAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.anchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `overwriteMode` instead
    ///
    pub const OverwriteMode = overwriteMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#overwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn overwriteMode(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_OverwriteMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOverwriteMode` instead
    ///
    pub const SetOverwriteMode = setOverwriteMode;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` overwrite: bool `
    ///
    pub fn setOverwriteMode(self: QPlainTextEdit, overwrite: bool) void {
        qtc.QPlainTextEdit_SetOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// ### DEPRECATED: Use `tabStopDistance` instead
    ///
    pub const TabStopDistance = tabStopDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn tabStopDistance(self: QPlainTextEdit) f64 {
        return qtc.QPlainTextEdit_TabStopDistance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabStopDistance` instead
    ///
    pub const SetTabStopDistance = setTabStopDistance;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` distance: f64 `
    ///
    pub fn setTabStopDistance(self: QPlainTextEdit, distance: f64) void {
        qtc.QPlainTextEdit_SetTabStopDistance(@ptrCast(self.ptr), @bitCast(distance));
    }

    /// ### DEPRECATED: Use `cursorWidth` instead
    ///
    pub const CursorWidth = cursorWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn cursorWidth(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_CursorWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorWidth` instead
    ///
    pub const SetCursorWidth = setCursorWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` _width: i32 `
    ///
    pub fn setCursorWidth(self: QPlainTextEdit, _width: i32) void {
        qtc.QPlainTextEdit_SetCursorWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `setExtraSelections` instead
    ///
    pub const SetExtraSelections = setExtraSelections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setExtraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` selections: []QTextEdit__ExtraSelection `
    ///
    pub fn setExtraSelections(self: QPlainTextEdit, selections: []QTextEdit__ExtraSelection) void {
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QPlainTextEdit_SetExtraSelections(@ptrCast(self.ptr), selections_list);
    }

    /// ### DEPRECATED: Use `extraSelections` instead
    ///
    pub const ExtraSelections = extraSelections;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#extraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extraSelections(self: QPlainTextEdit, allocator: std.mem.Allocator) []QTextEdit__ExtraSelection {
        const _arr: qtc.libqt_list = qtc.QPlainTextEdit_ExtraSelections(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextEdit__ExtraSelection, _arr.len) catch @panic("QPlainTextEdit.extraSelections: Memory allocation failed");
        const _data_val: [*]QtC.QTextEdit__ExtraSelection = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `moveCursor` instead
    ///
    pub const MoveCursor = moveCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    pub fn moveCursor(self: QPlainTextEdit, operation: i32) void {
        qtc.QPlainTextEdit_MoveCursor(@ptrCast(self.ptr), @bitCast(operation));
    }

    /// ### DEPRECATED: Use `canPaste` instead
    ///
    pub const CanPaste = canPaste;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canPaste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn canPaste(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_CanPaste(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `print` instead
    ///
    pub const Print = print;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` printer: QPagedPaintDevice `
    ///
    pub fn print(self: QPlainTextEdit, printer: anytype) void {
        comptime _ = @TypeOf(printer)._is_QPagedPaintDevice;
        qtc.QPlainTextEdit_Print(@ptrCast(self.ptr), @ptrCast(printer.ptr));
    }

    /// ### DEPRECATED: Use `blockCount` instead
    ///
    pub const BlockCount = blockCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn blockCount(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_BlockCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` _property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QPlainTextEdit, _property: i32) QVariant {
        return .{ .ptr = qtc.QPlainTextEdit_InputMethodQuery(@ptrCast(self.ptr), @bitCast(_property)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32) callconv(.c) QVariant) void {
        qtc.QPlainTextEdit_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` _property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QPlainTextEdit, _property: i32) QVariant {
        return .{ .ptr = qtc.QPlainTextEdit_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(_property)) };
    }

    /// ### DEPRECATED: Use `inputMethodQuery2` instead
    ///
    pub const InputMethodQuery2 = inputMethodQuery2;

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
    pub fn inputMethodQuery2(self: QPlainTextEdit, query: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QPlainTextEdit_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(query), @ptrCast(argument.ptr)) };
    }

    /// ### DEPRECATED: Use `setPlainText` instead
    ///
    pub const SetPlainText = setPlainText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setPlainText(self: QPlainTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_SetPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `cut` instead
    ///
    pub const Cut = cut;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn cut(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Cut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copy` instead
    ///
    pub const Copy = copy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn copy(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Copy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paste` instead
    ///
    pub const Paste = paste;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn paste(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Paste(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `undo` instead
    ///
    pub const Undo = undo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn undo(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Undo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `redo` instead
    ///
    pub const Redo = redo;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn redo(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Redo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn clear(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectAll` instead
    ///
    pub const SelectAll = selectAll;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn selectAll(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_SelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertPlainText` instead
    ///
    pub const InsertPlainText = insertPlainText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn insertPlainText(self: QPlainTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_InsertPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `appendPlainText` instead
    ///
    pub const AppendPlainText = appendPlainText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn appendPlainText(self: QPlainTextEdit, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_AppendPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `appendHtml` instead
    ///
    pub const AppendHtml = appendHtml;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` html: []const u8 `
    ///
    pub fn appendHtml(self: QPlainTextEdit, html: []const u8) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QPlainTextEdit_AppendHtml(@ptrCast(self.ptr), html_str);
    }

    /// ### DEPRECATED: Use `centerCursor` instead
    ///
    pub const CenterCursor = centerCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn centerCursor(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_CenterCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomIn` instead
    ///
    pub const ZoomIn = zoomIn;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn zoomIn(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_ZoomIn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomOut` instead
    ///
    pub const ZoomOut = zoomOut;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn zoomOut(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_ZoomOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textChanged` instead
    ///
    pub const TextChanged = textChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn textChanged(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_TextChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTextChanged` instead
    ///
    pub const OnTextChanged = onTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit) callconv(.c) void `
    ///
    pub fn onTextChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `undoAvailable` instead
    ///
    pub const UndoAvailable = undoAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn undoAvailable(self: QPlainTextEdit, b: bool) void {
        qtc.QPlainTextEdit_UndoAvailable(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onUndoAvailable` instead
    ///
    pub const OnUndoAvailable = onUndoAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn onUndoAvailable(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_UndoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redoAvailable` instead
    ///
    pub const RedoAvailable = redoAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn redoAvailable(self: QPlainTextEdit, b: bool) void {
        qtc.QPlainTextEdit_RedoAvailable(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onRedoAvailable` instead
    ///
    pub const OnRedoAvailable = onRedoAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn onRedoAvailable(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_RedoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `copyAvailable` instead
    ///
    pub const CopyAvailable = copyAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn copyAvailable(self: QPlainTextEdit, b: bool) void {
        qtc.QPlainTextEdit_CopyAvailable(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onCopyAvailable` instead
    ///
    pub const OnCopyAvailable = onCopyAvailable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, b: bool) callconv(.c) void `
    ///
    pub fn onCopyAvailable(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_CopyAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn selectionChanged(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit) callconv(.c) void `
    ///
    pub fn onSelectionChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cursorPositionChanged` instead
    ///
    pub const CursorPositionChanged = cursorPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn cursorPositionChanged(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_CursorPositionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCursorPositionChanged` instead
    ///
    pub const OnCursorPositionChanged = onCursorPositionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit) callconv(.c) void `
    ///
    pub fn onCursorPositionChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateRequest` instead
    ///
    pub const UpdateRequest = updateRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` _rect: QRect `
    ///
    /// ` dy: i32 `
    ///
    pub fn updateRequest(self: QPlainTextEdit, _rect: anytype, dy: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QPlainTextEdit_UpdateRequest(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onUpdateRequest` instead
    ///
    pub const OnUpdateRequest = onUpdateRequest;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, rect: QRect, dy: i32) callconv(.c) void `
    ///
    pub fn onUpdateRequest(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QRect, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_UpdateRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockCountChanged` instead
    ///
    pub const BlockCountChanged = blockCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` newBlockCount: i32 `
    ///
    pub fn blockCountChanged(self: QPlainTextEdit, newBlockCount: i32) void {
        qtc.QPlainTextEdit_BlockCountChanged(@ptrCast(self.ptr), @bitCast(newBlockCount));
    }

    /// ### DEPRECATED: Use `onBlockCountChanged` instead
    ///
    pub const OnBlockCountChanged = onBlockCountChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, newBlockCount: i32) callconv(.c) void `
    ///
    pub fn onBlockCountChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_BlockCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modificationChanged` instead
    ///
    pub const ModificationChanged = modificationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: bool `
    ///
    pub fn modificationChanged(self: QPlainTextEdit, param1: bool) void {
        qtc.QPlainTextEdit_ModificationChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onModificationChanged` instead
    ///
    pub const OnModificationChanged = onModificationChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: bool) callconv(.c) void `
    ///
    pub fn onModificationChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_ModificationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QEvent `
    ///
    pub fn event(self: QPlainTextEdit, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QPlainTextEdit_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QEvent) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    pub fn superEvent(self: QPlainTextEdit, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QPlainTextEdit_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn timerEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.QPlainTextEdit_TimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

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
    pub fn onTimerEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QTimerEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

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
    pub fn superTimerEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.QPlainTextEdit_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QPlainTextEdit_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

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
    pub fn onKeyPressEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QKeyEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

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
    pub fn superKeyPressEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QPlainTextEdit_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QPlainTextEdit_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

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
    pub fn onKeyReleaseEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QKeyEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

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
    pub fn superKeyReleaseEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QPlainTextEdit_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn resizeEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QPlainTextEdit_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

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
    pub fn onResizeEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QResizeEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

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
    pub fn superResizeEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QPlainTextEdit_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn paintEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QPlainTextEdit_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

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
    pub fn onPaintEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QPaintEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

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
    pub fn superPaintEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QPlainTextEdit_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

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
    pub fn onMousePressEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

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
    pub fn superMousePressEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

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
    pub fn onMouseMoveEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

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
    pub fn superMouseMoveEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

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
    pub fn onMouseReleaseEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

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
    pub fn superMouseReleaseEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

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
    pub fn onMouseDoubleClickEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMouseEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

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
    pub fn superMouseDoubleClickEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QPlainTextEdit_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: QPlainTextEdit, next: bool) bool {
        return qtc.QPlainTextEdit_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

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
    pub fn onFocusNextPrevChild(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, bool) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

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
    pub fn superFocusNextPrevChild(self: QPlainTextEdit, next: bool) bool {
        return qtc.QPlainTextEdit_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contextMenuEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QPlainTextEdit_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

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
    pub fn onContextMenuEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QContextMenuEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

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
    pub fn superContextMenuEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QPlainTextEdit_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.QPlainTextEdit_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

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
    pub fn onDragEnterEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QDragEnterEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

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
    pub fn superDragEnterEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.QPlainTextEdit_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QPlainTextEdit_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

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
    pub fn onDragLeaveEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

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
    pub fn superDragLeaveEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QPlainTextEdit_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QPlainTextEdit_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

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
    pub fn onDragMoveEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QDragMoveEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

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
    pub fn superDragMoveEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QPlainTextEdit_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn dropEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.QPlainTextEdit_DropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

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
    pub fn onDropEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QDropEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

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
    pub fn superDropEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.QPlainTextEdit_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusInEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn focusInEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QPlainTextEdit_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

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
    pub fn onFocusInEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QFocusEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

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
    pub fn superFocusInEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QPlainTextEdit_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QPlainTextEdit_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

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
    pub fn onFocusOutEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QFocusEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

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
    pub fn superFocusOutEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QPlainTextEdit_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn showEvent(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.QPlainTextEdit_ShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

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
    pub fn onShowEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QShowEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

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
    pub fn superShowEvent(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.QPlainTextEdit_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QEvent `
    ///
    pub fn changeEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QPlainTextEdit_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

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
    pub fn onChangeEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

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
    pub fn superChangeEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QPlainTextEdit_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wheelEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn wheelEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.QPlainTextEdit_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

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
    pub fn onWheelEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QWheelEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

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
    pub fn superWheelEvent(self: QPlainTextEdit, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.QPlainTextEdit_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `createMimeDataFromSelection` instead
    ///
    pub const CreateMimeDataFromSelection = createMimeDataFromSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn createMimeDataFromSelection(self: QPlainTextEdit) QMimeData {
        return .{ .ptr = qtc.QPlainTextEdit_CreateMimeDataFromSelection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateMimeDataFromSelection` instead
    ///
    pub const OnCreateMimeDataFromSelection = onCreateMimeDataFromSelection;

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
    pub fn onCreateMimeDataFromSelection(self: QPlainTextEdit, callback: *const fn () callconv(.c) QMimeData) void {
        qtc.QPlainTextEdit_OnCreateMimeDataFromSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateMimeDataFromSelection` instead
    ///
    pub const SuperCreateMimeDataFromSelection = superCreateMimeDataFromSelection;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn superCreateMimeDataFromSelection(self: QPlainTextEdit) QMimeData {
        return .{ .ptr = qtc.QPlainTextEdit_SuperCreateMimeDataFromSelection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `canInsertFromMimeData` instead
    ///
    pub const CanInsertFromMimeData = canInsertFromMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn canInsertFromMimeData(self: QPlainTextEdit, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.QPlainTextEdit_CanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `onCanInsertFromMimeData` instead
    ///
    pub const OnCanInsertFromMimeData = onCanInsertFromMimeData;

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
    pub fn onCanInsertFromMimeData(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMimeData) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnCanInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCanInsertFromMimeData` instead
    ///
    pub const SuperCanInsertFromMimeData = superCanInsertFromMimeData;

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
    pub fn superCanInsertFromMimeData(self: QPlainTextEdit, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.QPlainTextEdit_SuperCanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `insertFromMimeData` instead
    ///
    pub const InsertFromMimeData = insertFromMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` source: QMimeData `
    ///
    pub fn insertFromMimeData(self: QPlainTextEdit, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QMimeData;
        qtc.QPlainTextEdit_InsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `onInsertFromMimeData` instead
    ///
    pub const OnInsertFromMimeData = onInsertFromMimeData;

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
    pub fn onInsertFromMimeData(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMimeData) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInsertFromMimeData` instead
    ///
    pub const SuperInsertFromMimeData = superInsertFromMimeData;

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
    pub fn superInsertFromMimeData(self: QPlainTextEdit, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QMimeData;
        qtc.QPlainTextEdit_SuperInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QPlainTextEdit_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

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
    pub fn onInputMethodEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QInputMethodEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

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
    pub fn superInputMethodEvent(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QPlainTextEdit_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `scrollContentsBy` instead
    ///
    pub const ScrollContentsBy = scrollContentsBy;

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
    pub fn scrollContentsBy(self: QPlainTextEdit, dx: i32, dy: i32) void {
        qtc.QPlainTextEdit_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onScrollContentsBy` instead
    ///
    pub const OnScrollContentsBy = onScrollContentsBy;

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
    pub fn onScrollContentsBy(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superScrollContentsBy` instead
    ///
    pub const SuperScrollContentsBy = superScrollContentsBy;

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
    pub fn superScrollContentsBy(self: QPlainTextEdit, dx: i32, dy: i32) void {
        qtc.QPlainTextEdit_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `doSetTextCursor` instead
    ///
    pub const DoSetTextCursor = doSetTextCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn doSetTextCursor(self: QPlainTextEdit, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        qtc.QPlainTextEdit_DoSetTextCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `onDoSetTextCursor` instead
    ///
    pub const OnDoSetTextCursor = onDoSetTextCursor;

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
    pub fn onDoSetTextCursor(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QTextCursor) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDoSetTextCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDoSetTextCursor` instead
    ///
    pub const SuperDoSetTextCursor = superDoSetTextCursor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn superDoSetTextCursor(self: QPlainTextEdit, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        qtc.QPlainTextEdit_SuperDoSetTextCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `firstVisibleBlock` instead
    ///
    pub const FirstVisibleBlock = firstVisibleBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn firstVisibleBlock(self: QPlainTextEdit) QTextBlock {
        return .{ .ptr = qtc.QPlainTextEdit_FirstVisibleBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFirstVisibleBlock` instead
    ///
    pub const OnFirstVisibleBlock = onFirstVisibleBlock;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFirstVisibleBlock(self: QPlainTextEdit, callback: *const fn () callconv(.c) QTextBlock) void {
        qtc.QPlainTextEdit_OnFirstVisibleBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFirstVisibleBlock` instead
    ///
    pub const SuperFirstVisibleBlock = superFirstVisibleBlock;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn superFirstVisibleBlock(self: QPlainTextEdit) QTextBlock {
        return .{ .ptr = qtc.QPlainTextEdit_SuperFirstVisibleBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contentOffset` instead
    ///
    pub const ContentOffset = contentOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn contentOffset(self: QPlainTextEdit) QPointF {
        return .{ .ptr = qtc.QPlainTextEdit_ContentOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onContentOffset` instead
    ///
    pub const OnContentOffset = onContentOffset;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onContentOffset(self: QPlainTextEdit, callback: *const fn () callconv(.c) QPointF) void {
        qtc.QPlainTextEdit_OnContentOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContentOffset` instead
    ///
    pub const SuperContentOffset = superContentOffset;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn superContentOffset(self: QPlainTextEdit) QPointF {
        return .{ .ptr = qtc.QPlainTextEdit_SuperContentOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `blockBoundingRect` instead
    ///
    pub const BlockBoundingRect = blockBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn blockBoundingRect(self: QPlainTextEdit, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QPlainTextEdit_BlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `onBlockBoundingRect` instead
    ///
    pub const OnBlockBoundingRect = onBlockBoundingRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBlockBoundingRect(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QTextBlock) callconv(.c) QRectF) void {
        qtc.QPlainTextEdit_OnBlockBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBlockBoundingRect` instead
    ///
    pub const SuperBlockBoundingRect = superBlockBoundingRect;

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
    pub fn superBlockBoundingRect(self: QPlainTextEdit, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QPlainTextEdit_SuperBlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `blockBoundingGeometry` instead
    ///
    pub const BlockBoundingGeometry = blockBoundingGeometry;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn blockBoundingGeometry(self: QPlainTextEdit, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QPlainTextEdit_BlockBoundingGeometry(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `onBlockBoundingGeometry` instead
    ///
    pub const OnBlockBoundingGeometry = onBlockBoundingGeometry;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBlockBoundingGeometry(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QTextBlock) callconv(.c) QRectF) void {
        qtc.QPlainTextEdit_OnBlockBoundingGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBlockBoundingGeometry` instead
    ///
    pub const SuperBlockBoundingGeometry = superBlockBoundingGeometry;

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
    pub fn superBlockBoundingGeometry(self: QPlainTextEdit, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QPlainTextEdit_SuperBlockBoundingGeometry(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `getPaintContext` instead
    ///
    pub const GetPaintContext = getPaintContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn getPaintContext(self: QPlainTextEdit) QAbstractTextDocumentLayout__PaintContext {
        return .{ .ptr = qtc.QPlainTextEdit_GetPaintContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onGetPaintContext` instead
    ///
    pub const OnGetPaintContext = onGetPaintContext;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGetPaintContext(self: QPlainTextEdit, callback: *const fn () callconv(.c) QAbstractTextDocumentLayout__PaintContext) void {
        qtc.QPlainTextEdit_OnGetPaintContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superGetPaintContext` instead
    ///
    pub const SuperGetPaintContext = superGetPaintContext;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn superGetPaintContext(self: QPlainTextEdit) QAbstractTextDocumentLayout__PaintContext {
        return .{ .ptr = qtc.QPlainTextEdit_SuperGetPaintContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `zoomInF` instead
    ///
    pub const ZoomInF = zoomInF;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` range: f32 `
    ///
    pub fn zoomInF(self: QPlainTextEdit, range: f32) void {
        qtc.QPlainTextEdit_ZoomInF(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `onZoomInF` instead
    ///
    pub const OnZoomInF = onZoomInF;

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
    pub fn onZoomInF(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, f32) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnZoomInF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superZoomInF` instead
    ///
    pub const SuperZoomInF = superZoomInF;

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
    pub fn superZoomInF(self: QPlainTextEdit, range: f32) void {
        qtc.QPlainTextEdit_SuperZoomInF(@ptrCast(self.ptr), @bitCast(range));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `find22` instead
    ///
    pub const Find22 = find22;

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
    pub fn find22(self: QPlainTextEdit, exp: []const u8, options: i32) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QPlainTextEdit_Find22(@ptrCast(self.ptr), exp_str, @bitCast(options));
    }

    /// ### DEPRECATED: Use `find23` instead
    ///
    pub const Find23 = find23;

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
    pub fn find23(self: QPlainTextEdit, exp: anytype, options: i32) bool {
        comptime _ = @TypeOf(exp)._is_QRegularExpression;
        return qtc.QPlainTextEdit_Find23(@ptrCast(self.ptr), @ptrCast(exp.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `moveCursor2` instead
    ///
    pub const MoveCursor2 = moveCursor2;

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
    pub fn moveCursor2(self: QPlainTextEdit, operation: i32, mode: i32) void {
        qtc.QPlainTextEdit_MoveCursor2(@ptrCast(self.ptr), @bitCast(operation), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `zoomIn1` instead
    ///
    pub const ZoomIn1 = zoomIn1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` range: i32 `
    ///
    pub fn zoomIn1(self: QPlainTextEdit, range: i32) void {
        qtc.QPlainTextEdit_ZoomIn1(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `zoomOut1` instead
    ///
    pub const ZoomOut1 = zoomOut1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextEdit `
    ///
    /// ` range: i32 `
    ///
    pub fn zoomOut1(self: QPlainTextEdit, range: i32) void {
        qtc.QPlainTextEdit_ZoomOut1(@ptrCast(self.ptr), @bitCast(range));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn verticalScrollBarPolicy(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setVerticalScrollBarPolicy(self: QPlainTextEdit, _verticalScrollBarPolicy: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn verticalScrollBar(self: QPlainTextEdit) QScrollBar {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setVerticalScrollBar(self: QPlainTextEdit, scrollbar: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn horizontalScrollBarPolicy(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setHorizontalScrollBarPolicy(self: QPlainTextEdit, _horizontalScrollBarPolicy: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn horizontalScrollBar(self: QPlainTextEdit) QScrollBar {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setHorizontalScrollBar(self: QPlainTextEdit, scrollbar: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn cornerWidget(self: QPlainTextEdit) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setCornerWidget(self: QPlainTextEdit, widget: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn addScrollBarWidget(self: QPlainTextEdit, widget: anytype, alignment: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn scrollBarWidgets(self: QPlainTextEdit, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("QPlainTextEdit.scrollBarWidgets: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn viewport(self: QPlainTextEdit) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setViewport(self: QPlainTextEdit, widget: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn maximumViewportSize(self: QPlainTextEdit) QSize {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn sizeAdjustPolicy(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn setSizeAdjustPolicy(self: QPlainTextEdit, policy: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn frameStyle(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _frameStyle: i32 `
    ///
    pub fn setFrameStyle(self: QPlainTextEdit, _frameStyle: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn frameWidth(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn frameShape(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _frameShape: qframe_enums.Shape `
    ///
    pub fn setFrameShape(self: QPlainTextEdit, _frameShape: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn frameShadow(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _frameShadow: qframe_enums.Shadow `
    ///
    pub fn setFrameShadow(self: QPlainTextEdit, _frameShadow: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn lineWidth(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: QPlainTextEdit, _lineWidth: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn midLineWidth(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: QPlainTextEdit, _midLineWidth: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn frameRect(self: QPlainTextEdit) QRect {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _frameRect: QRect `
    ///
    pub fn setFrameRect(self: QPlainTextEdit, _frameRect: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn winId(self: QPlainTextEdit) usize {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn createWinId(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn internalWinId(self: QPlainTextEdit) usize {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn effectiveWinId(self: QPlainTextEdit) usize {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn style(self: QPlainTextEdit) QStyle {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QPlainTextEdit, _style: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isTopLevel(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isWindow(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isModal(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: QPlainTextEdit, _windowModality: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isEnabled(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: QPlainTextEdit, param1: anytype) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QPlainTextEdit, enabled: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: QPlainTextEdit, disabled: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: QPlainTextEdit, windowModified: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn frameGeometry(self: QPlainTextEdit) QRect {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn geometry(self: QPlainTextEdit) QRect {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn normalGeometry(self: QPlainTextEdit) QRect {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn x(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn y(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn pos(self: QPlainTextEdit) QPoint {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn frameSize(self: QPlainTextEdit) QSize {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn size(self: QPlainTextEdit) QSize {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn width(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn height(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn rect(self: QPlainTextEdit) QRect {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn childrenRect(self: QPlainTextEdit) QRect {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn childrenRegion(self: QPlainTextEdit) QRegion {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn minimumSize(self: QPlainTextEdit) QSize {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn maximumSize(self: QPlainTextEdit) QSize {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn minimumWidth(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn minimumHeight(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn maximumWidth(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn maximumHeight(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: QPlainTextEdit, _minimumSize: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: QPlainTextEdit, minw: i32, minh: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: QPlainTextEdit, _maximumSize: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: QPlainTextEdit, maxw: i32, maxh: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: QPlainTextEdit, minw: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: QPlainTextEdit, minh: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: QPlainTextEdit, maxw: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: QPlainTextEdit, maxh: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn sizeIncrement(self: QPlainTextEdit) QSize {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: QPlainTextEdit, _sizeIncrement: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: QPlainTextEdit, w: i32, h: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn baseSize(self: QPlainTextEdit) QSize {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: QPlainTextEdit, _baseSize: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: QPlainTextEdit, basew: i32, baseh: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: QPlainTextEdit, fixedSize: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: QPlainTextEdit, w: i32, h: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: QPlainTextEdit, w: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: QPlainTextEdit, h: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: QPlainTextEdit, param1: anytype) QPointF {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: QPlainTextEdit, param1: anytype) QPoint {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: QPlainTextEdit, param1: anytype) QPointF {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: QPlainTextEdit, param1: anytype) QPoint {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: QPlainTextEdit, param1: anytype) QPointF {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: QPlainTextEdit, param1: anytype) QPoint {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: QPlainTextEdit, param1: anytype) QPointF {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: QPlainTextEdit, param1: anytype) QPoint {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: QPlainTextEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: QPlainTextEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: QPlainTextEdit, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: QPlainTextEdit, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn window(self: QPlainTextEdit) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn nativeParentWidget(self: QPlainTextEdit) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn topLevelWidget(self: QPlainTextEdit) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn palette(self: QPlainTextEdit) QPalette {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QPlainTextEdit, _palette: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: QPlainTextEdit, _backgroundRole: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: QPlainTextEdit, _foregroundRole: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn font(self: QPlainTextEdit) QFont {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QPlainTextEdit, _font: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn fontMetrics(self: QPlainTextEdit) QFontMetrics {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn fontInfo(self: QPlainTextEdit) QFontInfo {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn cursor(self: QPlainTextEdit) QCursor {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QPlainTextEdit, _cursor: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn unsetCursor(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: QPlainTextEdit, enable: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn hasMouseTracking(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn underMouse(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: QPlainTextEdit, enable: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn hasTabletTracking(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: QPlainTextEdit, _mask: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: QPlainTextEdit, _mask: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn mask(self: QPlainTextEdit) QRegion {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn clearMask(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: QPlainTextEdit, target: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: QPlainTextEdit, painter: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn grab(self: QPlainTextEdit) QPixmap {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn graphicsEffect(self: QPlainTextEdit) QGraphicsEffect {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QPlainTextEdit, effect: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QPlainTextEdit, typeVal: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QPlainTextEdit, typeVal: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: QPlainTextEdit, _windowTitle: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: QPlainTextEdit, _styleSheet: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.styleSheet: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.windowTitle: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(self: QPlainTextEdit, icon: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn windowIcon(self: QPlainTextEdit) QIcon {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: QPlainTextEdit, _windowIconText: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.windowIconText: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: QPlainTextEdit, _windowRole: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.windowRole: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: QPlainTextEdit, filePath: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.windowFilePath: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: QPlainTextEdit, level: f64) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn windowOpacity(self: QPlainTextEdit) f64 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isWindowModified(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QPlainTextEdit, _toolTip: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.toolTip: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: QPlainTextEdit, msec: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn toolTipDuration(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QPlainTextEdit, _statusTip: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.statusTip: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QPlainTextEdit, _whatsThis: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.whatsThis: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.accessibleName: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: QPlainTextEdit, name: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.accessibleDescription: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: QPlainTextEdit, description: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QPlainTextEdit, direction: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn unsetLayoutDirection(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QPlainTextEdit, _locale: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn locale(self: QPlainTextEdit) QLocale {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn unsetLocale(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isRightToLeft(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isLeftToRight(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn setFocus(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isActiveWindow(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn activateWindow(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn clearFocus(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QPlainTextEdit, reason: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QPlainTextEdit, policy: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn hasFocus(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: QPlainTextEdit, _focusProxy: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn focusProxy(self: QPlainTextEdit) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: QPlainTextEdit, policy: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn grabMouse(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: QPlainTextEdit, param1: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn releaseMouse(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn grabKeyboard(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn releaseKeyboard(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: QPlainTextEdit, key: anytype) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: QPlainTextEdit, id: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: QPlainTextEdit, id: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: QPlainTextEdit, id: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn updatesEnabled(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: QPlainTextEdit, enable: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn graphicsProxyWidget(self: QPlainTextEdit) QGraphicsProxyWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn update(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn repaint(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: QPlainTextEdit, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: QPlainTextEdit, param1: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: QPlainTextEdit, param1: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: QPlainTextEdit, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: QPlainTextEdit, param1: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: QPlainTextEdit, param1: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: QPlainTextEdit, hidden: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn show(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn hide(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn showMinimized(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn showMaximized(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn showFullScreen(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn showNormal(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn close(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn raise(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn lower(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: QPlainTextEdit, param1: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: QPlainTextEdit, _x: i32, _y: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: QPlainTextEdit, param1: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: QPlainTextEdit, w: i32, h: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: QPlainTextEdit, param1: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: QPlainTextEdit, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: QPlainTextEdit, _geometry: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: QPlainTextEdit, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QPlainTextEdit.saveGeometry: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: QPlainTextEdit, _geometry: []u8) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn adjustSize(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isVisible(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: QPlainTextEdit, param1: anytype) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isHidden(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isMinimized(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isMaximized(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isFullScreen(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: QPlainTextEdit, state: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: QPlainTextEdit, state: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn sizePolicy(self: QPlainTextEdit) QSizePolicy {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QPlainTextEdit, _sizePolicy: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QPlainTextEdit, horizontal: i32, vertical: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn visibleRegion(self: QPlainTextEdit) QRegion {
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
    pub fn setContentsMargins(self: QPlainTextEdit, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QPlainTextEdit, margins: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn contentsMargins(self: QPlainTextEdit) QMargins {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn contentsRect(self: QPlainTextEdit) QRect {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn layout(self: QPlainTextEdit) QLayout {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: QPlainTextEdit, _layout: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn updateGeometry(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: QPlainTextEdit, _parent: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: QPlainTextEdit, _parent: anytype, f: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: QPlainTextEdit, dx: i32, dy: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: QPlainTextEdit, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn focusWidget(self: QPlainTextEdit) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn nextInFocusChain(self: QPlainTextEdit) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn previousInFocusChain(self: QPlainTextEdit) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn acceptDrops(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QPlainTextEdit, on: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: QPlainTextEdit, action: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QPlainTextEdit, _actions: []QAction) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QPlainTextEdit, before: anytype, _actions: []QAction) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: QPlainTextEdit, before: anytype, action: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: QPlainTextEdit, action: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: QPlainTextEdit, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QPlainTextEdit.actions: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction2(self: QPlainTextEdit, text: []const u8) QAction {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction3(self: QPlainTextEdit, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: QPlainTextEdit, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: QPlainTextEdit, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn parentWidget(self: QPlainTextEdit) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: QPlainTextEdit, typeVal: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: QPlainTextEdit, param1: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: QPlainTextEdit, typeVal: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: QPlainTextEdit, _x: i32, _y: i32) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: QPlainTextEdit, p: anytype) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: QPlainTextEdit, p: anytype) QWidget {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: QPlainTextEdit, param1: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: QPlainTextEdit, param1: i32) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn ensurePolished(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: QPlainTextEdit, child: anytype) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn autoFillBackground(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: QPlainTextEdit, enabled: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn backingStore(self: QPlainTextEdit) QBackingStore {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn windowHandle(self: QPlainTextEdit) QWindow {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn screen(self: QPlainTextEdit) QScreen {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QPlainTextEdit, _screen: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QPlainTextEdit, title: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` icon: QIcon `
    ///
    pub fn windowIconChanged(self: QPlainTextEdit, icon: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QIcon) callconv(.c) void) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: QPlainTextEdit, iconText: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: QPlainTextEdit, _pos: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QPoint) callconv(.c) void) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QPlainTextEdit, hints: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: QPlainTextEdit, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: QPlainTextEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn render4(self: QPlainTextEdit, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: QPlainTextEdit, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: QPlainTextEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn render42(self: QPlainTextEdit, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: QPlainTextEdit, rectangle: anytype) QPixmap {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QPlainTextEdit, typeVal: i32, flags: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: QPlainTextEdit, key: anytype, context: i32) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: QPlainTextEdit, id: i32, enable: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: QPlainTextEdit, id: i32, enable: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: QPlainTextEdit, param1: i32, on: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: QPlainTextEdit, param1: i32, on: bool) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QPlainTextEdit, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextEdit.objectName: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QPlainTextEdit, name: []const u8) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isWidgetType(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isWindowType(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn isQuickItemType(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn signalsBlocked(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QPlainTextEdit, b: bool) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn thread(self: QPlainTextEdit) QThread {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QPlainTextEdit, _thread: anytype) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QPlainTextEdit, interval: i32) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QPlainTextEdit, time: i64) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QPlainTextEdit, id: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QPlainTextEdit, id: i32) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QPlainTextEdit, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QPlainTextEdit.children: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QPlainTextEdit, filterObj: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QPlainTextEdit, obj: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QPlainTextEdit, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn disconnect3(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QPlainTextEdit, receiver: anytype) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn dumpObjectTree(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn dumpObjectInfo(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QPlainTextEdit, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QPlainTextEdit, name: [:0]const u8) QVariant {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QPlainTextEdit, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QPlainTextEdit.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlainTextEdit.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn bindingStorage(self: QPlainTextEdit) QBindingStorage {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn bindingStorage2(self: QPlainTextEdit) QBindingStorage {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn destroyed(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit) callconv(.c) void) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn parent(self: QPlainTextEdit) QObject {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QPlainTextEdit, classname: [:0]const u8) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn deleteLater(self: QPlainTextEdit) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QPlainTextEdit, interval: i32, timerType: i32) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QPlainTextEdit, time: i64, timerType: i32) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QPlainTextEdit, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QPlainTextEdit, signal: [:0]const u8) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QPlainTextEdit, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QPlainTextEdit, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QPlainTextEdit, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QPlainTextEdit, param1: anytype) void {
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QObject) callconv(.c) void) void {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn paintingActive(self: QPlainTextEdit) bool {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn widthMM(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn heightMM(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn logicalDpiX(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn logicalDpiY(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn physicalDpiX(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn physicalDpiY(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn devicePixelRatio(self: QPlainTextEdit) f64 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn devicePixelRatioF(self: QPlainTextEdit) f64 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn colorCount(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn depth(self: QPlainTextEdit) i32 {
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn minimumSizeHint(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QPlainTextEdit_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superMinimumSizeHint(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QPlainTextEdit_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: QPlainTextEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.QPlainTextEdit_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn sizeHint(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QPlainTextEdit_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superSizeHint(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QPlainTextEdit_SuperSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QPlainTextEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.QPlainTextEdit_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn setupViewport(self: QPlainTextEdit, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QPlainTextEdit_SetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn superSetupViewport(self: QPlainTextEdit, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QPlainTextEdit_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, viewport: QWidget) callconv(.c) void `
    ///
    pub fn onSetupViewport(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QWidget) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn eventFilter(self: QPlainTextEdit, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QPlainTextEdit_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn superEventFilter(self: QPlainTextEdit, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QPlainTextEdit_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn viewportEvent(self: QPlainTextEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QPlainTextEdit_ViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superViewportEvent(self: QPlainTextEdit, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QPlainTextEdit_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onViewportEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QEvent) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn viewportSizeHint(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QPlainTextEdit_ViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superViewportSizeHint(self: QPlainTextEdit) QSize {
        return .{ .ptr = qtc.QPlainTextEdit_SuperViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportSizeHint(self: QPlainTextEdit, callback: *const fn () callconv(.c) QSize) void {
        qtc.QPlainTextEdit_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn initStyleOption(self: QPlainTextEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QPlainTextEdit_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn superInitStyleOption(self: QPlainTextEdit, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QPlainTextEdit_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn onInitStyleOption(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn devType(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_DevType(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superDevType(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QPlainTextEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QPlainTextEdit, visible: bool) void {
        qtc.QPlainTextEdit_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: QPlainTextEdit, visible: bool) void {
        qtc.QPlainTextEdit_SuperSetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QPlainTextEdit, param1: i32) i32 {
        return qtc.QPlainTextEdit_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QPlainTextEdit, param1: i32) i32 {
        return qtc.QPlainTextEdit_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32) callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn hasHeightForWidth(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superHasHeightForWidth(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QPlainTextEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn paintEngine(self: QPlainTextEdit) QPaintEngine {
        return .{ .ptr = qtc.QPlainTextEdit_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superPaintEngine(self: QPlainTextEdit) QPaintEngine {
        return .{ .ptr = qtc.QPlainTextEdit_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QPlainTextEdit, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QPlainTextEdit_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QPlainTextEdit_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QPlainTextEdit_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QEnterEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPlainTextEdit_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPlainTextEdit_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QPlainTextEdit_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QPlainTextEdit_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMoveEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QPlainTextEdit_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QPlainTextEdit_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QCloseEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QPlainTextEdit_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QPlainTextEdit_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QTabletEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QPlainTextEdit_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QPlainTextEdit_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QActionEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QPlainTextEdit_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QPlainTextEdit_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QHideEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: QPlainTextEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QPlainTextEdit_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: QPlainTextEdit, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QPlainTextEdit_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QPlainTextEdit, param1: i32) i32 {
        return qtc.QPlainTextEdit_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QPlainTextEdit, param1: i32) i32 {
        return qtc.QPlainTextEdit_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32) callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QPlainTextEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPlainTextEdit_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QPlainTextEdit, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QPlainTextEdit_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QPainter) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QPlainTextEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPlainTextEdit_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QPlainTextEdit, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QPlainTextEdit_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QPlainTextEdit_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn sharedPainter(self: QPlainTextEdit) QPainter {
        return .{ .ptr = qtc.QPlainTextEdit_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superSharedPainter(self: QPlainTextEdit) QPainter {
        return .{ .ptr = qtc.QPlainTextEdit_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QPlainTextEdit, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QPlainTextEdit_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPlainTextEdit_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPlainTextEdit_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QChildEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPlainTextEdit_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QPlainTextEdit, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPlainTextEdit_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QEvent) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QPlainTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextEdit_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QPlainTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextEdit_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMetaMethod) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QPlainTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextEdit_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QPlainTextEdit, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextEdit_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMetaMethod) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    pub fn setViewportMargins(self: QPlainTextEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QPlainTextEdit_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    pub fn superSetViewportMargins(self: QPlainTextEdit, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QPlainTextEdit_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn onSetViewportMargins(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn viewportMargins(self: QPlainTextEdit) QMargins {
        return .{ .ptr = qtc.QPlainTextEdit_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superViewportMargins(self: QPlainTextEdit) QMargins {
        return .{ .ptr = qtc.QPlainTextEdit_SuperViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportMargins(self: QPlainTextEdit, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QPlainTextEdit_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPainter `
    ///
    pub fn drawFrame(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QPlainTextEdit_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` param1: QPainter `
    ///
    pub fn superDrawFrame(self: QPlainTextEdit, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QPlainTextEdit_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, param1: QPainter) callconv(.c) void `
    ///
    pub fn onDrawFrame(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QPainter) callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn updateMicroFocus(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superUpdateMicroFocus(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: QPlainTextEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QPlainTextEdit_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn create(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Create(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superCreate(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: QPlainTextEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QPlainTextEdit_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn destroy(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superDestroy(self: QPlainTextEdit) void {
        qtc.QPlainTextEdit_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: QPlainTextEdit, callback: *const fn () callconv(.c) void) void {
        qtc.QPlainTextEdit_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn focusNextChild(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superFocusNextChild(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: QPlainTextEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn focusPreviousChild(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superFocusPreviousChild(self: QPlainTextEdit) bool {
        return qtc.QPlainTextEdit_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: QPlainTextEdit, callback: *const fn () callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn sender(self: QPlainTextEdit) QObject {
        return .{ .ptr = qtc.QPlainTextEdit_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superSender(self: QPlainTextEdit) QObject {
        return .{ .ptr = qtc.QPlainTextEdit_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QPlainTextEdit, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPlainTextEdit_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn senderSignalIndex(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    pub fn superSenderSignalIndex(self: QPlainTextEdit) i32 {
        return qtc.QPlainTextEdit_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QPlainTextEdit, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QPlainTextEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlainTextEdit_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QPlainTextEdit, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlainTextEdit_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPlainTextEdit_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QPlainTextEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlainTextEdit_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QPlainTextEdit, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlainTextEdit_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, QMetaMethod) callconv(.c) bool) void {
        qtc.QPlainTextEdit_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QPlainTextEdit, metricA: i32, metricB: i32) f64 {
        return qtc.QPlainTextEdit_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QPlainTextEdit, metricA: i32, metricB: i32) f64 {
        return qtc.QPlainTextEdit_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QPlainTextEdit`
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, i32, i32) callconv(.c) f64) void {
        qtc.QPlainTextEdit_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextEdit `
    ///
    /// ` callback: *const fn (self: QPlainTextEdit, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QPlainTextEdit, callback: *const fn (QPlainTextEdit, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dtor.QPlainTextEdit)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlainTextEdit `
    ///
    pub fn delete(self: QPlainTextEdit) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QPlainTextDocumentLayout object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _document: QTextDocument `
    ///
    pub fn new(_document: anytype) QPlainTextDocumentLayout {
        comptime _ = @TypeOf(_document)._is_QTextDocument;
        return .{ .ptr = qtc.QPlainTextDocumentLayout_new(@ptrCast(_document.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn metaObject(self: QPlainTextDocumentLayout) QMetaObject {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QPlainTextDocumentLayout, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QPlainTextDocumentLayout_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn superMetaObject(self: QPlainTextDocumentLayout) QMetaObject {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QPlainTextDocumentLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlainTextDocumentLayout_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QPlainTextDocumentLayout_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QPlainTextDocumentLayout, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QPlainTextDocumentLayout_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QPlainTextDocumentLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlainTextDocumentLayout_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QPlainTextDocumentLayout, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QPlainTextDocumentLayout_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextDocumentLayout.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `draw` instead
    ///
    pub const Draw = draw;

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
    pub fn draw(self: QPlainTextDocumentLayout, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        comptime _ = @TypeOf(param2)._is_QAbstractTextDocumentLayout__PaintContext;
        qtc.QPlainTextDocumentLayout_Draw(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onDraw` instead
    ///
    pub const OnDraw = onDraw;

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
    pub fn onDraw(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QPainter, QAbstractTextDocumentLayout__PaintContext) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDraw(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDraw` instead
    ///
    pub const SuperDraw = superDraw;

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
    pub fn superDraw(self: QPlainTextDocumentLayout, param1: anytype, param2: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        comptime _ = @TypeOf(param2)._is_QAbstractTextDocumentLayout__PaintContext;
        qtc.QPlainTextDocumentLayout_SuperDraw(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `hitTest` instead
    ///
    pub const HitTest = hitTest;

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
    pub fn hitTest(self: QPlainTextDocumentLayout, param1: anytype, param2: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return qtc.QPlainTextDocumentLayout_HitTest(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `onHitTest` instead
    ///
    pub const OnHitTest = onHitTest;

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
    pub fn onHitTest(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QPointF, i32) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnHitTest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHitTest` instead
    ///
    pub const SuperHitTest = superHitTest;

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
    pub fn superHitTest(self: QPlainTextDocumentLayout, param1: anytype, param2: i32) i32 {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return qtc.QPlainTextDocumentLayout_SuperHitTest(@ptrCast(self.ptr), @ptrCast(param1.ptr), @bitCast(param2));
    }

    /// ### DEPRECATED: Use `pageCount` instead
    ///
    pub const PageCount = pageCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn pageCount(self: QPlainTextDocumentLayout) i32 {
        return qtc.QPlainTextDocumentLayout_PageCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPageCount` instead
    ///
    pub const OnPageCount = onPageCount;

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
    pub fn onPageCount(self: QPlainTextDocumentLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnPageCount(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPageCount` instead
    ///
    pub const SuperPageCount = superPageCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#pageCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn superPageCount(self: QPlainTextDocumentLayout) i32 {
        return qtc.QPlainTextDocumentLayout_SuperPageCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `documentSize` instead
    ///
    pub const DocumentSize = documentSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn documentSize(self: QPlainTextDocumentLayout) QSizeF {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_DocumentSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onDocumentSize` instead
    ///
    pub const OnDocumentSize = onDocumentSize;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDocumentSize(self: QPlainTextDocumentLayout, callback: *const fn () callconv(.c) QSizeF) void {
        qtc.QPlainTextDocumentLayout_OnDocumentSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDocumentSize` instead
    ///
    pub const SuperDocumentSize = superDocumentSize;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#documentSize)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn superDocumentSize(self: QPlainTextDocumentLayout) QSizeF {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_SuperDocumentSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `frameBoundingRect` instead
    ///
    pub const FrameBoundingRect = frameBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#frameBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: QTextFrame `
    ///
    pub fn frameBoundingRect(self: QPlainTextDocumentLayout, param1: anytype) QRectF {
        comptime _ = @TypeOf(param1)._is_QTextFrame;
        return .{ .ptr = qtc.QPlainTextDocumentLayout_FrameBoundingRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `onFrameBoundingRect` instead
    ///
    pub const OnFrameBoundingRect = onFrameBoundingRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFrameBoundingRect(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QTextFrame) callconv(.c) QRectF) void {
        qtc.QPlainTextDocumentLayout_OnFrameBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFrameBoundingRect` instead
    ///
    pub const SuperFrameBoundingRect = superFrameBoundingRect;

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
    pub fn superFrameBoundingRect(self: QPlainTextDocumentLayout, param1: anytype) QRectF {
        comptime _ = @TypeOf(param1)._is_QTextFrame;
        return .{ .ptr = qtc.QPlainTextDocumentLayout_SuperFrameBoundingRect(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `blockBoundingRect` instead
    ///
    pub const BlockBoundingRect = blockBoundingRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#blockBoundingRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn blockBoundingRect(self: QPlainTextDocumentLayout, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QPlainTextDocumentLayout_BlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `onBlockBoundingRect` instead
    ///
    pub const OnBlockBoundingRect = onBlockBoundingRect;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBlockBoundingRect(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QTextBlock) callconv(.c) QRectF) void {
        qtc.QPlainTextDocumentLayout_OnBlockBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superBlockBoundingRect` instead
    ///
    pub const SuperBlockBoundingRect = superBlockBoundingRect;

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
    pub fn superBlockBoundingRect(self: QPlainTextDocumentLayout, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.QPlainTextDocumentLayout_SuperBlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `ensureBlockLayout` instead
    ///
    pub const EnsureBlockLayout = ensureBlockLayout;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#ensureBlockLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn ensureBlockLayout(self: QPlainTextDocumentLayout, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QPlainTextDocumentLayout_EnsureBlockLayout(@ptrCast(self.ptr), @ptrCast(block.ptr));
    }

    /// ### DEPRECATED: Use `setCursorWidth` instead
    ///
    pub const SetCursorWidth = setCursorWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#setCursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _width: i32 `
    ///
    pub fn setCursorWidth(self: QPlainTextDocumentLayout, _width: i32) void {
        qtc.QPlainTextDocumentLayout_SetCursorWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `cursorWidth` instead
    ///
    pub const CursorWidth = cursorWidth;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#cursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn cursorWidth(self: QPlainTextDocumentLayout) i32 {
        return qtc.QPlainTextDocumentLayout_CursorWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `requestUpdate` instead
    ///
    pub const RequestUpdate = requestUpdate;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#requestUpdate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn requestUpdate(self: QPlainTextDocumentLayout) void {
        qtc.QPlainTextDocumentLayout_RequestUpdate(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `documentChanged` instead
    ///
    pub const DocumentChanged = documentChanged;

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
    pub fn documentChanged(self: QPlainTextDocumentLayout, from: i32, param2: i32, charsAdded: i32) void {
        qtc.QPlainTextDocumentLayout_DocumentChanged(@ptrCast(self.ptr), @bitCast(from), @bitCast(param2), @bitCast(charsAdded));
    }

    /// ### DEPRECATED: Use `onDocumentChanged` instead
    ///
    pub const OnDocumentChanged = onDocumentChanged;

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
    pub fn onDocumentChanged(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, i32, i32, i32) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDocumentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDocumentChanged` instead
    ///
    pub const SuperDocumentChanged = superDocumentChanged;

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
    pub fn superDocumentChanged(self: QPlainTextDocumentLayout, from: i32, param2: i32, charsAdded: i32) void {
        qtc.QPlainTextDocumentLayout_SuperDocumentChanged(@ptrCast(self.ptr), @bitCast(from), @bitCast(param2), @bitCast(charsAdded));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextDocumentLayout.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextDocumentLayout.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `anchorAt` instead
    ///
    pub const AnchorAt = anchorAt;

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
    /// ` _pos: QPointF `
    ///
    pub fn anchorAt(self: QPlainTextDocumentLayout, allocator: std.mem.Allocator, _pos: anytype) []const u8 {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        var _str = qtc.QAbstractTextDocumentLayout_AnchorAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextDocumentLayout.anchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `imageAt` instead
    ///
    pub const ImageAt = imageAt;

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
    /// ` _pos: QPointF `
    ///
    pub fn imageAt(self: QPlainTextDocumentLayout, allocator: std.mem.Allocator, _pos: anytype) []const u8 {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        var _str = qtc.QAbstractTextDocumentLayout_ImageAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextDocumentLayout.imageAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `formatAt` instead
    ///
    pub const FormatAt = formatAt;

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#formatAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn formatAt(self: QPlainTextDocumentLayout, _pos: anytype) QTextFormat {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_FormatAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr)) };
    }

    /// ### DEPRECATED: Use `blockWithMarkerAt` instead
    ///
    pub const BlockWithMarkerAt = blockWithMarkerAt;

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#blockWithMarkerAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _pos: QPointF `
    ///
    pub fn blockWithMarkerAt(self: QPlainTextDocumentLayout, _pos: anytype) QTextBlock {
        comptime _ = @TypeOf(_pos)._is_QPointF;
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_BlockWithMarkerAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr)) };
    }

    /// ### DEPRECATED: Use `setPaintDevice` instead
    ///
    pub const SetPaintDevice = setPaintDevice;

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
    pub fn setPaintDevice(self: QPlainTextDocumentLayout, device: anytype) void {
        comptime _ = @TypeOf(device)._is_QPaintDevice;
        qtc.QAbstractTextDocumentLayout_SetPaintDevice(@ptrCast(self.ptr), @ptrCast(device.ptr));
    }

    /// ### DEPRECATED: Use `paintDevice` instead
    ///
    pub const PaintDevice = paintDevice;

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#paintDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn paintDevice(self: QPlainTextDocumentLayout) QPaintDevice {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_PaintDevice(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn document(self: QPlainTextDocumentLayout) QTextDocument {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `registerHandler` instead
    ///
    pub const RegisterHandler = registerHandler;

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
    pub fn registerHandler(self: QPlainTextDocumentLayout, objectType: i32, component: anytype) void {
        comptime _ = @TypeOf(component)._is_QObject;
        qtc.QAbstractTextDocumentLayout_RegisterHandler(@ptrCast(self.ptr), @bitCast(objectType), @ptrCast(component.ptr));
    }

    /// ### DEPRECATED: Use `unregisterHandler` instead
    ///
    pub const UnregisterHandler = unregisterHandler;

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
    pub fn unregisterHandler(self: QPlainTextDocumentLayout, objectType: i32) void {
        qtc.QAbstractTextDocumentLayout_UnregisterHandler(@ptrCast(self.ptr), @bitCast(objectType));
    }

    /// ### DEPRECATED: Use `handlerForObject` instead
    ///
    pub const HandlerForObject = handlerForObject;

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
    pub fn handlerForObject(self: QPlainTextDocumentLayout, objectType: i32) QTextObjectInterface {
        return .{ .ptr = qtc.QAbstractTextDocumentLayout_HandlerForObject(@ptrCast(self.ptr), @bitCast(objectType)) };
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QAbstractTextDocumentLayout
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstracttextdocumentlayout.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn update(self: QPlainTextDocumentLayout) void {
        qtc.QAbstractTextDocumentLayout_Update(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdate` instead
    ///
    pub const OnUpdate = onUpdate;

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
    pub fn onUpdate(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateBlock` instead
    ///
    pub const UpdateBlock = updateBlock;

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
    pub fn updateBlock(self: QPlainTextDocumentLayout, block: anytype) void {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        qtc.QAbstractTextDocumentLayout_UpdateBlock(@ptrCast(self.ptr), @ptrCast(block.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateBlock` instead
    ///
    pub const OnUpdateBlock = onUpdateBlock;

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
    pub fn onUpdateBlock(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QTextBlock) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_UpdateBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `documentSizeChanged` instead
    ///
    pub const DocumentSizeChanged = documentSizeChanged;

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
    pub fn documentSizeChanged(self: QPlainTextDocumentLayout, newSize: anytype) void {
        comptime _ = @TypeOf(newSize)._is_QSizeF;
        qtc.QAbstractTextDocumentLayout_DocumentSizeChanged(@ptrCast(self.ptr), @ptrCast(newSize.ptr));
    }

    /// ### DEPRECATED: Use `onDocumentSizeChanged` instead
    ///
    pub const OnDocumentSizeChanged = onDocumentSizeChanged;

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
    pub fn onDocumentSizeChanged(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QSizeF) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_DocumentSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `pageCountChanged` instead
    ///
    pub const PageCountChanged = pageCountChanged;

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
    pub fn pageCountChanged(self: QPlainTextDocumentLayout, newPages: i32) void {
        qtc.QAbstractTextDocumentLayout_PageCountChanged(@ptrCast(self.ptr), @bitCast(newPages));
    }

    /// ### DEPRECATED: Use `onPageCountChanged` instead
    ///
    pub const OnPageCountChanged = onPageCountChanged;

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
    pub fn onPageCountChanged(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, i32) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_PageCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `unregisterHandler2` instead
    ///
    pub const UnregisterHandler2 = unregisterHandler2;

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
    pub fn unregisterHandler2(self: QPlainTextDocumentLayout, objectType: i32, component: anytype) void {
        comptime _ = @TypeOf(component)._is_QObject;
        qtc.QAbstractTextDocumentLayout_UnregisterHandler2(@ptrCast(self.ptr), @bitCast(objectType), @ptrCast(component.ptr));
    }

    /// ### DEPRECATED: Use `update1` instead
    ///
    pub const Update1 = update1;

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
    pub fn update1(self: QPlainTextDocumentLayout, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRectF;
        qtc.QAbstractTextDocumentLayout_Update1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onUpdate1` instead
    ///
    pub const OnUpdate1 = onUpdate1;

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
    pub fn onUpdate1(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QRectF) callconv(.c) void) void {
        qtc.QAbstractTextDocumentLayout_Connect_Update1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QPlainTextDocumentLayout, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QPlainTextDocumentLayout.objectName: Memory allocation failed");
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QPlainTextDocumentLayout, name: []const u8) void {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn isWidgetType(self: QPlainTextDocumentLayout) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn isWindowType(self: QPlainTextDocumentLayout) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn isQuickItemType(self: QPlainTextDocumentLayout) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn signalsBlocked(self: QPlainTextDocumentLayout) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QPlainTextDocumentLayout, b: bool) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn thread(self: QPlainTextDocumentLayout) QThread {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QPlainTextDocumentLayout, _thread: anytype) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QPlainTextDocumentLayout, interval: i32) i32 {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QPlainTextDocumentLayout, time: i64) i32 {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QPlainTextDocumentLayout, id: i32) void {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QPlainTextDocumentLayout, id: i32) void {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QPlainTextDocumentLayout, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QPlainTextDocumentLayout.children: Memory allocation failed");
        const _data_val: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `setParent` instead
    ///
    pub const SetParent = setParent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _parent: QObject `
    ///
    pub fn setParent(self: QPlainTextDocumentLayout, _parent: anytype) void {
        comptime _ = @TypeOf(_parent)._is_QObject;
        qtc.QObject_SetParent(@ptrCast(self.ptr), @ptrCast(_parent.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QPlainTextDocumentLayout, filterObj: anytype) void {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QPlainTextDocumentLayout, obj: anytype) void {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QPlainTextDocumentLayout, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn disconnect3(self: QPlainTextDocumentLayout) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QPlainTextDocumentLayout, receiver: anytype) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn dumpObjectTree(self: QPlainTextDocumentLayout) void {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn dumpObjectInfo(self: QPlainTextDocumentLayout) void {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QPlainTextDocumentLayout, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QPlainTextDocumentLayout, name: [:0]const u8) QVariant {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QPlainTextDocumentLayout, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QPlainTextDocumentLayout.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QPlainTextDocumentLayout.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn bindingStorage(self: QPlainTextDocumentLayout) QBindingStorage {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn bindingStorage2(self: QPlainTextDocumentLayout) QBindingStorage {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn destroyed(self: QPlainTextDocumentLayout) void {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout) callconv(.c) void) void {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn parent(self: QPlainTextDocumentLayout) QObject {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QPlainTextDocumentLayout, classname: [:0]const u8) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn deleteLater(self: QPlainTextDocumentLayout) void {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QPlainTextDocumentLayout, interval: i32, timerType: i32) i32 {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QPlainTextDocumentLayout, time: i64, timerType: i32) i32 {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QPlainTextDocumentLayout, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QPlainTextDocumentLayout, signal: [:0]const u8) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QPlainTextDocumentLayout, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QPlainTextDocumentLayout, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QPlainTextDocumentLayout, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QPlainTextDocumentLayout, param1: anytype) void {
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeInlineObject` instead
    ///
    pub const ResizeInlineObject = resizeInlineObject;

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
    /// ` _format: QTextFormat `
    ///
    pub fn resizeInlineObject(self: QPlainTextDocumentLayout, item: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QPlainTextDocumentLayout_ResizeInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `superResizeInlineObject` instead
    ///
    pub const SuperResizeInlineObject = superResizeInlineObject;

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
    /// ` _format: QTextFormat `
    ///
    pub fn superResizeInlineObject(self: QPlainTextDocumentLayout, item: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QPlainTextDocumentLayout_SuperResizeInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `onResizeInlineObject` instead
    ///
    pub const OnResizeInlineObject = onResizeInlineObject;

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
    pub fn onResizeInlineObject(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QTextInlineObject, i32, QTextFormat) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnResizeInlineObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `positionInlineObject` instead
    ///
    pub const PositionInlineObject = positionInlineObject;

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
    /// ` _format: QTextFormat `
    ///
    pub fn positionInlineObject(self: QPlainTextDocumentLayout, item: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QPlainTextDocumentLayout_PositionInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `superPositionInlineObject` instead
    ///
    pub const SuperPositionInlineObject = superPositionInlineObject;

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
    /// ` _format: QTextFormat `
    ///
    pub fn superPositionInlineObject(self: QPlainTextDocumentLayout, item: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(item)._is_QTextInlineObject;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QPlainTextDocumentLayout_SuperPositionInlineObject(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `onPositionInlineObject` instead
    ///
    pub const OnPositionInlineObject = onPositionInlineObject;

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
    pub fn onPositionInlineObject(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QTextInlineObject, i32, QTextFormat) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnPositionInlineObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `drawInlineObject` instead
    ///
    pub const DrawInlineObject = drawInlineObject;

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
    /// ` _rect: QRectF `
    ///
    /// ` object: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` _format: QTextFormat `
    ///
    pub fn drawInlineObject(self: QPlainTextDocumentLayout, painter: anytype, _rect: anytype, object: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(_rect)._is_QRectF;
        comptime _ = @TypeOf(object)._is_QTextInlineObject;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QPlainTextDocumentLayout_DrawInlineObject(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(_rect.ptr), @ptrCast(object.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `superDrawInlineObject` instead
    ///
    pub const SuperDrawInlineObject = superDrawInlineObject;

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
    /// ` _rect: QRectF `
    ///
    /// ` object: QTextInlineObject `
    ///
    /// ` posInDocument: i32 `
    ///
    /// ` _format: QTextFormat `
    ///
    pub fn superDrawInlineObject(self: QPlainTextDocumentLayout, painter: anytype, _rect: anytype, object: anytype, posInDocument: i32, _format: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(_rect)._is_QRectF;
        comptime _ = @TypeOf(object)._is_QTextInlineObject;
        comptime _ = @TypeOf(_format)._is_QTextFormat;
        qtc.QPlainTextDocumentLayout_SuperDrawInlineObject(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(_rect.ptr), @ptrCast(object.ptr), @bitCast(posInDocument), @ptrCast(_format.ptr));
    }

    /// ### DEPRECATED: Use `onDrawInlineObject` instead
    ///
    pub const OnDrawInlineObject = onDrawInlineObject;

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
    pub fn onDrawInlineObject(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QPainter, QRectF, QTextInlineObject, i32, QTextFormat) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDrawInlineObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

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
    /// ` _event: QEvent `
    ///
    pub fn event(self: QPlainTextDocumentLayout, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlainTextDocumentLayout_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: QPlainTextDocumentLayout, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlainTextDocumentLayout_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QEvent) callconv(.c) bool) void {
        qtc.QPlainTextDocumentLayout_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QPlainTextDocumentLayout, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlainTextDocumentLayout_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

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
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QPlainTextDocumentLayout, watched: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QPlainTextDocumentLayout_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

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
    pub fn onEventFilter(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QObject, QEvent) callconv(.c) bool) void {
        qtc.QPlainTextDocumentLayout_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QPlainTextDocumentLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPlainTextDocumentLayout_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QPlainTextDocumentLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QPlainTextDocumentLayout_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QTimerEvent) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QPlainTextDocumentLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPlainTextDocumentLayout_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QPlainTextDocumentLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QPlainTextDocumentLayout_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QChildEvent) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QPlainTextDocumentLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPlainTextDocumentLayout_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QPlainTextDocumentLayout, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QPlainTextDocumentLayout_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QEvent) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QPlainTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextDocumentLayout_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QPlainTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextDocumentLayout_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QPlainTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextDocumentLayout_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QPlainTextDocumentLayout, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QPlainTextDocumentLayout_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QMetaMethod) callconv(.c) void) void {
        qtc.QPlainTextDocumentLayout_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `formatIndex` instead
    ///
    pub const FormatIndex = formatIndex;

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
    /// ` _pos: i32 `
    ///
    pub fn formatIndex(self: QPlainTextDocumentLayout, _pos: i32) i32 {
        return qtc.QPlainTextDocumentLayout_FormatIndex(@ptrCast(self.ptr), @bitCast(_pos));
    }

    /// ### DEPRECATED: Use `superFormatIndex` instead
    ///
    pub const SuperFormatIndex = superFormatIndex;

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
    /// ` _pos: i32 `
    ///
    pub fn superFormatIndex(self: QPlainTextDocumentLayout, _pos: i32) i32 {
        return qtc.QPlainTextDocumentLayout_SuperFormatIndex(@ptrCast(self.ptr), @bitCast(_pos));
    }

    /// ### DEPRECATED: Use `onFormatIndex` instead
    ///
    pub const OnFormatIndex = onFormatIndex;

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
    pub fn onFormatIndex(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, i32) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnFormatIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `format` instead
    ///
    pub const Format = format;

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
    /// ` _pos: i32 `
    ///
    pub fn format(self: QPlainTextDocumentLayout, _pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_Format(@ptrCast(self.ptr), @bitCast(_pos)) };
    }

    /// ### DEPRECATED: Use `superFormat` instead
    ///
    pub const SuperFormat = superFormat;

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
    /// ` _pos: i32 `
    ///
    pub fn superFormat(self: QPlainTextDocumentLayout, _pos: i32) QTextCharFormat {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_SuperFormat(@ptrCast(self.ptr), @bitCast(_pos)) };
    }

    /// ### DEPRECATED: Use `onFormat` instead
    ///
    pub const OnFormat = onFormat;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFormat(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, i32) callconv(.c) QTextCharFormat) void {
        qtc.QPlainTextDocumentLayout_OnFormat(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn sender(self: QPlainTextDocumentLayout) QObject {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn superSender(self: QPlainTextDocumentLayout) QObject {
        return .{ .ptr = qtc.QPlainTextDocumentLayout_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QPlainTextDocumentLayout, callback: *const fn () callconv(.c) QObject) void {
        qtc.QPlainTextDocumentLayout_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn senderSignalIndex(self: QPlainTextDocumentLayout) i32 {
        return qtc.QPlainTextDocumentLayout_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn superSenderSignalIndex(self: QPlainTextDocumentLayout) i32 {
        return qtc.QPlainTextDocumentLayout_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QPlainTextDocumentLayout, callback: *const fn () callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QPlainTextDocumentLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlainTextDocumentLayout_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QPlainTextDocumentLayout, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QPlainTextDocumentLayout_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, [*:0]const u8) callconv(.c) i32) void {
        qtc.QPlainTextDocumentLayout_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QPlainTextDocumentLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlainTextDocumentLayout_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QPlainTextDocumentLayout, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QPlainTextDocumentLayout_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QPlainTextDocumentLayout`
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, QMetaMethod) callconv(.c) bool) void {
        qtc.QPlainTextDocumentLayout_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QPlainTextDocumentLayout `
    ///
    /// ` callback: *const fn (self: QPlainTextDocumentLayout, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QPlainTextDocumentLayout, callback: *const fn (QPlainTextDocumentLayout, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextdocumentlayout.html#dtor.QPlainTextDocumentLayout)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QPlainTextDocumentLayout `
    ///
    pub fn delete(self: QPlainTextDocumentLayout) void {
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
