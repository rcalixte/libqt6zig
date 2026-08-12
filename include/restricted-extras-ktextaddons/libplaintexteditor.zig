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
const Sonnet__Highlighter = @import("libqt6").Sonnet__Highlighter;
const Sonnet__SpellCheckDecorator = @import("libqt6").Sonnet__SpellCheckDecorator;
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

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
pub const TextCustomEditor__PlainTextEditor = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextCustomEditor__PlainTextEditor,

    pub const _is_TextCustomEditor__PlainTextEditor = {};
    pub const _is_QPlainTextEdit = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextCustomEditor::PlainTextEditor object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) TextCustomEditor__PlainTextEditor {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new TextCustomEditor::PlainTextEditor object in C++ memory
    ///
    pub fn new2() TextCustomEditor__PlainTextEditor {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_new2() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn metaObject(self: TextCustomEditor__PlainTextEditor) QMetaObject {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextCustomEditor__PlainTextEditor_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superMetaObject(self: TextCustomEditor__PlainTextEditor) QMetaObject {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: TextCustomEditor__PlainTextEditor, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextCustomEditor__PlainTextEditor_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextCustomEditor__PlainTextEditor_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: TextCustomEditor__PlainTextEditor, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextCustomEditor__PlainTextEditor_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: TextCustomEditor__PlainTextEditor, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextCustomEditor__PlainTextEditor_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextEditor_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: TextCustomEditor__PlainTextEditor, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextCustomEditor__PlainTextEditor_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSearchSupport` instead
    ///
    pub const SetSearchSupport = setSearchSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` b: bool `
    ///
    pub fn setSearchSupport(self: TextCustomEditor__PlainTextEditor, b: bool) void {
        qtc.TextCustomEditor__PlainTextEditor_SetSearchSupport(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `searchSupport` instead
    ///
    pub const SearchSupport = searchSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn searchSupport(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_SearchSupport(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `spellCheckingSupport` instead
    ///
    pub const SpellCheckingSupport = spellCheckingSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn spellCheckingSupport(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_SpellCheckingSupport(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpellCheckingSupport` instead
    ///
    pub const SetSpellCheckingSupport = setSpellCheckingSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` check: bool `
    ///
    pub fn setSpellCheckingSupport(self: TextCustomEditor__PlainTextEditor, check: bool) void {
        qtc.TextCustomEditor__PlainTextEditor_SetSpellCheckingSupport(@ptrCast(self.ptr), check);
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` readOnly: bool `
    ///
    pub fn setReadOnly(self: TextCustomEditor__PlainTextEditor, readOnly: bool) void {
        qtc.TextCustomEditor__PlainTextEditor_SetReadOnly(@ptrCast(self.ptr), readOnly);
    }

    /// ### DEPRECATED: Use `onSetReadOnly` instead
    ///
    pub const OnSetReadOnly = onSetReadOnly;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, readOnly: bool) callconv(.c) void `
    ///
    pub fn onSetReadOnly(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnSetReadOnly(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetReadOnly` instead
    ///
    pub const SuperSetReadOnly = superSetReadOnly;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` readOnly: bool `
    ///
    pub fn superSetReadOnly(self: TextCustomEditor__PlainTextEditor, readOnly: bool) void {
        qtc.TextCustomEditor__PlainTextEditor_SuperSetReadOnly(@ptrCast(self.ptr), readOnly);
    }

    /// ### DEPRECATED: Use `setTextToSpeechSupport` instead
    ///
    pub const SetTextToSpeechSupport = setTextToSpeechSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` b: bool `
    ///
    pub fn setTextToSpeechSupport(self: TextCustomEditor__PlainTextEditor, b: bool) void {
        qtc.TextCustomEditor__PlainTextEditor_SetTextToSpeechSupport(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `textToSpeechSupport` instead
    ///
    pub const TextToSpeechSupport = textToSpeechSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn textToSpeechSupport(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_TextToSpeechSupport(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWebShortcutSupport` instead
    ///
    pub const SetWebShortcutSupport = setWebShortcutSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` b: bool `
    ///
    pub fn setWebShortcutSupport(self: TextCustomEditor__PlainTextEditor, b: bool) void {
        qtc.TextCustomEditor__PlainTextEditor_SetWebShortcutSupport(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `webShortcutSupport` instead
    ///
    pub const WebShortcutSupport = webShortcutSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn webShortcutSupport(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_WebShortcutSupport(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createHighlighter` instead
    ///
    pub const CreateHighlighter = createHighlighter;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn createHighlighter(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_CreateHighlighter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCreateHighlighter` instead
    ///
    pub const OnCreateHighlighter = onCreateHighlighter;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreateHighlighter(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnCreateHighlighter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateHighlighter` instead
    ///
    pub const SuperCreateHighlighter = superCreateHighlighter;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superCreateHighlighter(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_SuperCreateHighlighter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addIgnoreWords` instead
    ///
    pub const AddIgnoreWords = addIgnoreWords;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` lst: []const []const u8 `
    ///
    pub fn addIgnoreWords(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator, lst: []const []const u8) void {
        const lst_arr = allocator.alloc(qtc.libqt_string, lst.len) catch @panic("TextCustomEditor__PlainTextEditor.addIgnoreWords: Memory allocation failed");
        defer allocator.free(lst_arr);
        for (lst, 0..lst.len) |str_item, i|
            lst_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const lst_list = qtc.libqt_list{
            .len = lst.len,
            .data = lst_arr.ptr,
        };
        qtc.TextCustomEditor__PlainTextEditor_AddIgnoreWords(@ptrCast(self.ptr), lst_list);
    }

    /// ### DEPRECATED: Use `activateLanguageMenu` instead
    ///
    pub const ActivateLanguageMenu = activateLanguageMenu;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn activateLanguageMenu(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_ActivateLanguageMenu(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setActivateLanguageMenu` instead
    ///
    pub const SetActivateLanguageMenu = setActivateLanguageMenu;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` activate: bool `
    ///
    pub fn setActivateLanguageMenu(self: TextCustomEditor__PlainTextEditor, activate: bool) void {
        qtc.TextCustomEditor__PlainTextEditor_SetActivateLanguageMenu(@ptrCast(self.ptr), activate);
    }

    /// ### DEPRECATED: Use `highlighter` instead
    ///
    pub const Highlighter = highlighter;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn highlighter(self: TextCustomEditor__PlainTextEditor) Sonnet__Highlighter {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_Highlighter(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `checkSpellingEnabled` instead
    ///
    pub const CheckSpellingEnabled = checkSpellingEnabled;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn checkSpellingEnabled(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_CheckSpellingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCheckSpellingEnabled` instead
    ///
    pub const SetCheckSpellingEnabled = setCheckSpellingEnabled;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` check: bool `
    ///
    pub fn setCheckSpellingEnabled(self: TextCustomEditor__PlainTextEditor, check: bool) void {
        qtc.TextCustomEditor__PlainTextEditor_SetCheckSpellingEnabled(@ptrCast(self.ptr), check);
    }

    /// ### DEPRECATED: Use `setSpellCheckingConfigFileName` instead
    ///
    pub const SetSpellCheckingConfigFileName = setSpellCheckingConfigFileName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _fileName: []const u8 `
    ///
    pub fn setSpellCheckingConfigFileName(self: TextCustomEditor__PlainTextEditor, _fileName: []const u8) void {
        const _fileName_str = qtc.libqt_string{
            .len = _fileName.len,
            .data = _fileName.ptr,
        };
        qtc.TextCustomEditor__PlainTextEditor_SetSpellCheckingConfigFileName(@ptrCast(self.ptr), _fileName_str);
    }

    /// ### DEPRECATED: Use `spellCheckingConfigFileName` instead
    ///
    pub const SpellCheckingConfigFileName = spellCheckingConfigFileName;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn spellCheckingConfigFileName(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextCustomEditor__PlainTextEditor_SpellCheckingConfigFileName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.spellCheckingConfigFileName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `spellCheckingLanguage` instead
    ///
    pub const SpellCheckingLanguage = spellCheckingLanguage;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn spellCheckingLanguage(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextCustomEditor__PlainTextEditor_SpellCheckingLanguage(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.spellCheckingLanguage: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSpellCheckingLanguage` instead
    ///
    pub const SetSpellCheckingLanguage = setSpellCheckingLanguage;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _language: []const u8 `
    ///
    pub fn setSpellCheckingLanguage(self: TextCustomEditor__PlainTextEditor, _language: []const u8) void {
        const _language_str = qtc.libqt_string{
            .len = _language.len,
            .data = _language.ptr,
        };
        qtc.TextCustomEditor__PlainTextEditor_SetSpellCheckingLanguage(@ptrCast(self.ptr), _language_str);
    }

    /// ### DEPRECATED: Use `setEmojiSupport` instead
    ///
    pub const SetEmojiSupport = setEmojiSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` b: bool `
    ///
    pub fn setEmojiSupport(self: TextCustomEditor__PlainTextEditor, b: bool) void {
        qtc.TextCustomEditor__PlainTextEditor_SetEmojiSupport(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `emojiSupport` instead
    ///
    pub const EmojiSupport = emojiSupport;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn emojiSupport(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_EmojiSupport(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `slotDisplayMessageIndicator` instead
    ///
    pub const SlotDisplayMessageIndicator = slotDisplayMessageIndicator;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` message: []const u8 `
    ///
    pub fn slotDisplayMessageIndicator(self: TextCustomEditor__PlainTextEditor, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.TextCustomEditor__PlainTextEditor_SlotDisplayMessageIndicator(@ptrCast(self.ptr), message_str);
    }

    /// ### DEPRECATED: Use `slotCheckSpelling` instead
    ///
    pub const SlotCheckSpelling = slotCheckSpelling;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn slotCheckSpelling(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_SlotCheckSpelling(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `slotSpeakText` instead
    ///
    pub const SlotSpeakText = slotSpeakText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn slotSpeakText(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_SlotSpeakText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `slotZoomReset` instead
    ///
    pub const SlotZoomReset = slotZoomReset;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn slotZoomReset(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_SlotZoomReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `addExtraMenuEntry` instead
    ///
    pub const AddExtraMenuEntry = addExtraMenuEntry;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` menu: QMenu `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn addExtraMenuEntry(self: TextCustomEditor__PlainTextEditor, menu: anytype, _pos: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.TextCustomEditor__PlainTextEditor_AddExtraMenuEntry(@ptrCast(self.ptr), @ptrCast(menu.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `onAddExtraMenuEntry` instead
    ///
    pub const OnAddExtraMenuEntry = onAddExtraMenuEntry;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, menu: QMenu, pos: QPoint) callconv(.c) void `
    ///
    pub fn onAddExtraMenuEntry(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QMenu, QPoint) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnAddExtraMenuEntry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAddExtraMenuEntry` instead
    ///
    pub const SuperAddExtraMenuEntry = superAddExtraMenuEntry;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` menu: QMenu `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn superAddExtraMenuEntry(self: TextCustomEditor__PlainTextEditor, menu: anytype, _pos: anytype) void {
        comptime _ = @TypeOf(menu)._is_QMenu;
        comptime _ = @TypeOf(_pos)._is_QPoint;
        qtc.TextCustomEditor__PlainTextEditor_SuperAddExtraMenuEntry(@ptrCast(self.ptr), @ptrCast(menu.ptr), @ptrCast(_pos.ptr));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QContextMenuEvent;
        qtc.TextCustomEditor__PlainTextEditor_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn onContextMenuEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QContextMenuEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QContextMenuEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` ev: QEvent `
    ///
    pub fn event(self: TextCustomEditor__PlainTextEditor, ev: anytype) bool {
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextEditor_Event(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, ev: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditor_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` ev: QEvent `
    ///
    pub fn superEvent(self: TextCustomEditor__PlainTextEditor, ev: anytype) bool {
        comptime _ = @TypeOf(ev)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextEditor_SuperEvent(@ptrCast(self.ptr), @ptrCast(ev.ptr));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.TextCustomEditor__PlainTextEditor_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QKeyEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `overrideShortcut` instead
    ///
    pub const OverrideShortcut = overrideShortcut;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn overrideShortcut(self: TextCustomEditor__PlainTextEditor, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        return qtc.TextCustomEditor__PlainTextEditor_OverrideShortcut(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onOverrideShortcut` instead
    ///
    pub const OnOverrideShortcut = onOverrideShortcut;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QKeyEvent) callconv(.c) bool `
    ///
    pub fn onOverrideShortcut(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QKeyEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditor_OnOverrideShortcut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOverrideShortcut` instead
    ///
    pub const SuperOverrideShortcut = superOverrideShortcut;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superOverrideShortcut(self: TextCustomEditor__PlainTextEditor, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        return qtc.TextCustomEditor__PlainTextEditor_SuperOverrideShortcut(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `handleShortcut` instead
    ///
    pub const HandleShortcut = handleShortcut;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn handleShortcut(self: TextCustomEditor__PlainTextEditor, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        return qtc.TextCustomEditor__PlainTextEditor_HandleShortcut(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onHandleShortcut` instead
    ///
    pub const OnHandleShortcut = onHandleShortcut;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QKeyEvent) callconv(.c) bool `
    ///
    pub fn onHandleShortcut(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QKeyEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditor_OnHandleShortcut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superHandleShortcut` instead
    ///
    pub const SuperHandleShortcut = superHandleShortcut;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superHandleShortcut(self: TextCustomEditor__PlainTextEditor, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        return qtc.TextCustomEditor__PlainTextEditor_SuperHandleShortcut(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.TextCustomEditor__PlainTextEditor_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QWheelEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `createSpellCheckDecorator` instead
    ///
    pub const CreateSpellCheckDecorator = createSpellCheckDecorator;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn createSpellCheckDecorator(self: TextCustomEditor__PlainTextEditor) Sonnet__SpellCheckDecorator {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_CreateSpellCheckDecorator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateSpellCheckDecorator` instead
    ///
    pub const OnCreateSpellCheckDecorator = onCreateSpellCheckDecorator;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn () callconv(.c) Sonnet__SpellCheckDecorator `
    ///
    pub fn onCreateSpellCheckDecorator(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) Sonnet__SpellCheckDecorator) void {
        qtc.TextCustomEditor__PlainTextEditor_OnCreateSpellCheckDecorator(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCreateSpellCheckDecorator` instead
    ///
    pub const SuperCreateSpellCheckDecorator = superCreateSpellCheckDecorator;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superCreateSpellCheckDecorator(self: TextCustomEditor__PlainTextEditor) Sonnet__SpellCheckDecorator {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperCreateSpellCheckDecorator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setHighlighter` instead
    ///
    pub const SetHighlighter = setHighlighter;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _highLighter: Sonnet__Highlighter `
    ///
    pub fn setHighlighter(self: TextCustomEditor__PlainTextEditor, _highLighter: anytype) void {
        comptime _ = @TypeOf(_highLighter)._is_Sonnet__Highlighter;
        qtc.TextCustomEditor__PlainTextEditor_SetHighlighter(@ptrCast(self.ptr), @ptrCast(_highLighter.ptr));
    }

    /// ### DEPRECATED: Use `onSetHighlighter` instead
    ///
    pub const OnSetHighlighter = onSetHighlighter;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, _highLighter: Sonnet__Highlighter) callconv(.c) void `
    ///
    pub fn onSetHighlighter(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, Sonnet__Highlighter) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnSetHighlighter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetHighlighter` instead
    ///
    pub const SuperSetHighlighter = superSetHighlighter;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _highLighter: Sonnet__Highlighter `
    ///
    pub fn superSetHighlighter(self: TextCustomEditor__PlainTextEditor, _highLighter: anytype) void {
        comptime _ = @TypeOf(_highLighter)._is_Sonnet__Highlighter;
        qtc.TextCustomEditor__PlainTextEditor_SuperSetHighlighter(@ptrCast(self.ptr), @ptrCast(_highLighter.ptr));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.TextCustomEditor__PlainTextEditor_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QFocusEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `updateHighLighter` instead
    ///
    pub const UpdateHighLighter = updateHighLighter;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn updateHighLighter(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_UpdateHighLighter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateHighLighter` instead
    ///
    pub const OnUpdateHighLighter = onUpdateHighLighter;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateHighLighter(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnUpdateHighLighter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUpdateHighLighter` instead
    ///
    pub const SuperUpdateHighLighter = superUpdateHighLighter;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superUpdateHighLighter(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_SuperUpdateHighLighter(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearDecorator` instead
    ///
    pub const ClearDecorator = clearDecorator;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn clearDecorator(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_ClearDecorator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClearDecorator` instead
    ///
    pub const OnClearDecorator = onClearDecorator;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onClearDecorator(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnClearDecorator(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClearDecorator` instead
    ///
    pub const SuperClearDecorator = superClearDecorator;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superClearDecorator(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_SuperClearDecorator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `findText` instead
    ///
    pub const FindText = findText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn findText(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_FindText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFindText` instead
    ///
    pub const OnFindText = onFindText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor) callconv(.c) void `
    ///
    pub fn onFindText(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_Connect_FindText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `replaceText` instead
    ///
    pub const ReplaceText = replaceText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn replaceText(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_ReplaceText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReplaceText` instead
    ///
    pub const OnReplaceText = onReplaceText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor) callconv(.c) void `
    ///
    pub fn onReplaceText(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_Connect_ReplaceText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `spellCheckerAutoCorrect` instead
    ///
    pub const SpellCheckerAutoCorrect = spellCheckerAutoCorrect;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` currentWord: []const u8 `
    ///
    /// ` autoCorrectWord: []const u8 `
    ///
    pub fn spellCheckerAutoCorrect(self: TextCustomEditor__PlainTextEditor, currentWord: []const u8, autoCorrectWord: []const u8) void {
        const currentWord_str = qtc.libqt_string{
            .len = currentWord.len,
            .data = currentWord.ptr,
        };
        const autoCorrectWord_str = qtc.libqt_string{
            .len = autoCorrectWord.len,
            .data = autoCorrectWord.ptr,
        };
        qtc.TextCustomEditor__PlainTextEditor_SpellCheckerAutoCorrect(@ptrCast(self.ptr), currentWord_str, autoCorrectWord_str);
    }

    /// ### DEPRECATED: Use `onSpellCheckerAutoCorrect` instead
    ///
    pub const OnSpellCheckerAutoCorrect = onSpellCheckerAutoCorrect;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, currentWord: [*:0]const u8, autoCorrectWord: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSpellCheckerAutoCorrect(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_Connect_SpellCheckerAutoCorrect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `checkSpellingChanged` instead
    ///
    pub const CheckSpellingChanged = checkSpellingChanged;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: bool `
    ///
    pub fn checkSpellingChanged(self: TextCustomEditor__PlainTextEditor, param1: bool) void {
        qtc.TextCustomEditor__PlainTextEditor_CheckSpellingChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onCheckSpellingChanged` instead
    ///
    pub const OnCheckSpellingChanged = onCheckSpellingChanged;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: bool) callconv(.c) void `
    ///
    pub fn onCheckSpellingChanged(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_Connect_CheckSpellingChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `languageChanged` instead
    ///
    pub const LanguageChanged = languageChanged;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn languageChanged(self: TextCustomEditor__PlainTextEditor, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.TextCustomEditor__PlainTextEditor_LanguageChanged(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onLanguageChanged` instead
    ///
    pub const OnLanguageChanged = onLanguageChanged;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onLanguageChanged(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, [*:0]const u8) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_Connect_LanguageChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `spellCheckStatus` instead
    ///
    pub const SpellCheckStatus = spellCheckStatus;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn spellCheckStatus(self: TextCustomEditor__PlainTextEditor, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.TextCustomEditor__PlainTextEditor_SpellCheckStatus(@ptrCast(self.ptr), param1_str);
    }

    /// ### DEPRECATED: Use `onSpellCheckStatus` instead
    ///
    pub const OnSpellCheckStatus = onSpellCheckStatus;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSpellCheckStatus(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, [*:0]const u8) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_Connect_SpellCheckStatus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `say` instead
    ///
    pub const Say = say;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` text: []const u8 `
    ///
    pub fn say(self: TextCustomEditor__PlainTextEditor, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.TextCustomEditor__PlainTextEditor_Say(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onSay` instead
    ///
    pub const OnSay = onSay;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onSay(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, [*:0]const u8) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_Connect_Say(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDocument` instead
    ///
    pub const SetDocument = setDocument;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocument)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _document: QTextDocument `
    ///
    pub fn setDocument(self: TextCustomEditor__PlainTextEditor, _document: anytype) void {
        comptime _ = @TypeOf(_document)._is_QTextDocument;
        qtc.QPlainTextEdit_SetDocument(@ptrCast(self.ptr), @ptrCast(_document.ptr));
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#document)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn document(self: TextCustomEditor__PlainTextEditor) QTextDocument {
        return .{ .ptr = qtc.QPlainTextEdit_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setPlaceholderText` instead
    ///
    pub const SetPlaceholderText = setPlaceholderText;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _placeholderText: []const u8 `
    ///
    pub fn setPlaceholderText(self: TextCustomEditor__PlainTextEditor, _placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = _placeholderText.len,
            .data = _placeholderText.ptr,
        };
        qtc.QPlainTextEdit_SetPlaceholderText(@ptrCast(self.ptr), placeholderText_str);
    }

    /// ### DEPRECATED: Use `placeholderText` instead
    ///
    pub const PlaceholderText = placeholderText;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn placeholderText(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlainTextEdit_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.placeholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setTextCursor` instead
    ///
    pub const SetTextCursor = setTextCursor;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn setTextCursor(self: TextCustomEditor__PlainTextEditor, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        qtc.QPlainTextEdit_SetTextCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `textCursor` instead
    ///
    pub const TextCursor = textCursor;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn textCursor(self: TextCustomEditor__PlainTextEditor) QTextCursor {
        return .{ .ptr = qtc.QPlainTextEdit_TextCursor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isReadOnly(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.QPlainTextEdit_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextInteractionFlags` instead
    ///
    pub const SetTextInteractionFlags = setTextInteractionFlags;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTextInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` flags: flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn setTextInteractionFlags(self: TextCustomEditor__PlainTextEditor, flags: i32) void {
        qtc.QPlainTextEdit_SetTextInteractionFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### DEPRECATED: Use `textInteractionFlags` instead
    ///
    pub const TextInteractionFlags = textInteractionFlags;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn textInteractionFlags(self: TextCustomEditor__PlainTextEditor) i32 {
        return qtc.QPlainTextEdit_TextInteractionFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `mergeCurrentCharFormat` instead
    ///
    pub const MergeCurrentCharFormat = mergeCurrentCharFormat;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mergeCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` modifier: QTextCharFormat `
    ///
    pub fn mergeCurrentCharFormat(self: TextCustomEditor__PlainTextEditor, modifier: anytype) void {
        comptime _ = @TypeOf(modifier)._is_QTextCharFormat;
        qtc.QPlainTextEdit_MergeCurrentCharFormat(@ptrCast(self.ptr), @ptrCast(modifier.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentCharFormat` instead
    ///
    pub const SetCurrentCharFormat = setCurrentCharFormat;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCurrentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` format: QTextCharFormat `
    ///
    pub fn setCurrentCharFormat(self: TextCustomEditor__PlainTextEditor, format: anytype) void {
        comptime _ = @TypeOf(format)._is_QTextCharFormat;
        qtc.QPlainTextEdit_SetCurrentCharFormat(@ptrCast(self.ptr), @ptrCast(format.ptr));
    }

    /// ### DEPRECATED: Use `currentCharFormat` instead
    ///
    pub const CurrentCharFormat = currentCharFormat;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#currentCharFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn currentCharFormat(self: TextCustomEditor__PlainTextEditor) QTextCharFormat {
        return .{ .ptr = qtc.QPlainTextEdit_CurrentCharFormat(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tabChangesFocus` instead
    ///
    pub const TabChangesFocus = tabChangesFocus;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn tabChangesFocus(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.QPlainTextEdit_TabChangesFocus(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabChangesFocus` instead
    ///
    pub const SetTabChangesFocus = setTabChangesFocus;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabChangesFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` b: bool `
    ///
    pub fn setTabChangesFocus(self: TextCustomEditor__PlainTextEditor, b: bool) void {
        qtc.QPlainTextEdit_SetTabChangesFocus(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `setDocumentTitle` instead
    ///
    pub const SetDocumentTitle = setDocumentTitle;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setDocumentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` title: []const u8 `
    ///
    pub fn setDocumentTitle(self: TextCustomEditor__PlainTextEditor, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QPlainTextEdit_SetDocumentTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### DEPRECATED: Use `documentTitle` instead
    ///
    pub const DocumentTitle = documentTitle;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#documentTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn documentTitle(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlainTextEdit_DocumentTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.documentTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `isUndoRedoEnabled` instead
    ///
    pub const IsUndoRedoEnabled = isUndoRedoEnabled;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#isUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isUndoRedoEnabled(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.QPlainTextEdit_IsUndoRedoEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUndoRedoEnabled` instead
    ///
    pub const SetUndoRedoEnabled = setUndoRedoEnabled;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setUndoRedoEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` enable: bool `
    ///
    pub fn setUndoRedoEnabled(self: TextCustomEditor__PlainTextEditor, enable: bool) void {
        qtc.QPlainTextEdit_SetUndoRedoEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `setMaximumBlockCount` instead
    ///
    pub const SetMaximumBlockCount = setMaximumBlockCount;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setMaximumBlockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` maximum: i32 `
    ///
    pub fn setMaximumBlockCount(self: TextCustomEditor__PlainTextEditor, maximum: i32) void {
        qtc.QPlainTextEdit_SetMaximumBlockCount(@ptrCast(self.ptr), @bitCast(maximum));
    }

    /// ### DEPRECATED: Use `maximumBlockCount` instead
    ///
    pub const MaximumBlockCount = maximumBlockCount;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#maximumBlockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn maximumBlockCount(self: TextCustomEditor__PlainTextEditor) i32 {
        return qtc.QPlainTextEdit_MaximumBlockCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lineWrapMode` instead
    ///
    pub const LineWrapMode = lineWrapMode;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#lineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qplaintextedit_enums.LineWrapMode `
    ///
    pub fn lineWrapMode(self: TextCustomEditor__PlainTextEditor) i32 {
        return qtc.QPlainTextEdit_LineWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLineWrapMode` instead
    ///
    pub const SetLineWrapMode = setLineWrapMode;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setLineWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` mode: qplaintextedit_enums.LineWrapMode `
    ///
    pub fn setLineWrapMode(self: TextCustomEditor__PlainTextEditor, mode: i32) void {
        qtc.QPlainTextEdit_SetLineWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `wordWrapMode` instead
    ///
    pub const WordWrapMode = wordWrapMode;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#wordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qtextoption_enums.WrapMode `
    ///
    pub fn wordWrapMode(self: TextCustomEditor__PlainTextEditor) i32 {
        return qtc.QPlainTextEdit_WordWrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWordWrapMode` instead
    ///
    pub const SetWordWrapMode = setWordWrapMode;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setWordWrapMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` policy: qtextoption_enums.WrapMode `
    ///
    pub fn setWordWrapMode(self: TextCustomEditor__PlainTextEditor, policy: i32) void {
        qtc.QPlainTextEdit_SetWordWrapMode(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### DEPRECATED: Use `setBackgroundVisible` instead
    ///
    pub const SetBackgroundVisible = setBackgroundVisible;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setBackgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` visible: bool `
    ///
    pub fn setBackgroundVisible(self: TextCustomEditor__PlainTextEditor, visible: bool) void {
        qtc.QPlainTextEdit_SetBackgroundVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `backgroundVisible` instead
    ///
    pub const BackgroundVisible = backgroundVisible;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#backgroundVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn backgroundVisible(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.QPlainTextEdit_BackgroundVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCenterOnScroll` instead
    ///
    pub const SetCenterOnScroll = setCenterOnScroll;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCenterOnScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` enabled: bool `
    ///
    pub fn setCenterOnScroll(self: TextCustomEditor__PlainTextEditor, enabled: bool) void {
        qtc.QPlainTextEdit_SetCenterOnScroll(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `centerOnScroll` instead
    ///
    pub const CenterOnScroll = centerOnScroll;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerOnScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn centerOnScroll(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.QPlainTextEdit_CenterOnScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `find` instead
    ///
    pub const Find = find;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` exp: []const u8 `
    ///
    pub fn find(self: TextCustomEditor__PlainTextEditor, exp: []const u8) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QPlainTextEdit_Find(@ptrCast(self.ptr), exp_str);
    }

    /// ### DEPRECATED: Use `find2` instead
    ///
    pub const Find2 = find2;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` exp: QRegularExpression `
    ///
    pub fn find2(self: TextCustomEditor__PlainTextEditor, exp: anytype) bool {
        comptime _ = @TypeOf(exp)._is_QRegularExpression;
        return qtc.QPlainTextEdit_Find2(@ptrCast(self.ptr), @ptrCast(exp.ptr));
    }

    /// ### DEPRECATED: Use `toPlainText` instead
    ///
    pub const ToPlainText = toPlainText;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#toPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toPlainText(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QPlainTextEdit_ToPlainText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.toPlainText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `ensureCursorVisible` instead
    ///
    pub const EnsureCursorVisible = ensureCursorVisible;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#ensureCursorVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn ensureCursorVisible(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_EnsureCursorVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `createStandardContextMenu` instead
    ///
    pub const CreateStandardContextMenu = createStandardContextMenu;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn createStandardContextMenu(self: TextCustomEditor__PlainTextEditor) QMenu {
        return .{ .ptr = qtc.QPlainTextEdit_CreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `createStandardContextMenu2` instead
    ///
    pub const CreateStandardContextMenu2 = createStandardContextMenu2;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` position: QPoint `
    ///
    pub fn createStandardContextMenu2(self: TextCustomEditor__PlainTextEditor, position: anytype) QMenu {
        comptime _ = @TypeOf(position)._is_QPoint;
        return .{ .ptr = qtc.QPlainTextEdit_CreateStandardContextMenu2(@ptrCast(self.ptr), @ptrCast(position.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorForPosition` instead
    ///
    pub const CursorForPosition = cursorForPosition;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorForPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn cursorForPosition(self: TextCustomEditor__PlainTextEditor, _pos: anytype) QTextCursor {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        return .{ .ptr = qtc.QPlainTextEdit_CursorForPosition(@ptrCast(self.ptr), @ptrCast(_pos.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorRect` instead
    ///
    pub const CursorRect = cursorRect;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn cursorRect(self: TextCustomEditor__PlainTextEditor, _cursor: anytype) QRect {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        return .{ .ptr = qtc.QPlainTextEdit_CursorRect(@ptrCast(self.ptr), @ptrCast(_cursor.ptr)) };
    }

    /// ### DEPRECATED: Use `cursorRect2` instead
    ///
    pub const CursorRect2 = cursorRect2;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn cursorRect2(self: TextCustomEditor__PlainTextEditor) QRect {
        return .{ .ptr = qtc.QPlainTextEdit_CursorRect2(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `anchorAt` instead
    ///
    pub const AnchorAt = anchorAt;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#anchorAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn anchorAt(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator, _pos: anytype) []const u8 {
        comptime _ = @TypeOf(_pos)._is_QPoint;
        var _str = qtc.QPlainTextEdit_AnchorAt(@ptrCast(self.ptr), @ptrCast(_pos.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.anchorAt: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `overwriteMode` instead
    ///
    pub const OverwriteMode = overwriteMode;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#overwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn overwriteMode(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.QPlainTextEdit_OverwriteMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setOverwriteMode` instead
    ///
    pub const SetOverwriteMode = setOverwriteMode;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` overwrite: bool `
    ///
    pub fn setOverwriteMode(self: TextCustomEditor__PlainTextEditor, overwrite: bool) void {
        qtc.QPlainTextEdit_SetOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// ### DEPRECATED: Use `tabStopDistance` instead
    ///
    pub const TabStopDistance = tabStopDistance;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#tabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn tabStopDistance(self: TextCustomEditor__PlainTextEditor) f64 {
        return qtc.QPlainTextEdit_TabStopDistance(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabStopDistance` instead
    ///
    pub const SetTabStopDistance = setTabStopDistance;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setTabStopDistance)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` distance: f64 `
    ///
    pub fn setTabStopDistance(self: TextCustomEditor__PlainTextEditor, distance: f64) void {
        qtc.QPlainTextEdit_SetTabStopDistance(@ptrCast(self.ptr), @bitCast(distance));
    }

    /// ### DEPRECATED: Use `cursorWidth` instead
    ///
    pub const CursorWidth = cursorWidth;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn cursorWidth(self: TextCustomEditor__PlainTextEditor) i32 {
        return qtc.QPlainTextEdit_CursorWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCursorWidth` instead
    ///
    pub const SetCursorWidth = setCursorWidth;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setCursorWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _width: i32 `
    ///
    pub fn setCursorWidth(self: TextCustomEditor__PlainTextEditor, _width: i32) void {
        qtc.QPlainTextEdit_SetCursorWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `setExtraSelections` instead
    ///
    pub const SetExtraSelections = setExtraSelections;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setExtraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` selections: []QTextEdit__ExtraSelection `
    ///
    pub fn setExtraSelections(self: TextCustomEditor__PlainTextEditor, selections: []QTextEdit__ExtraSelection) void {
        const selections_list = qtc.libqt_list{
            .len = selections.len,
            .data = @ptrCast(selections.ptr),
        };
        qtc.QPlainTextEdit_SetExtraSelections(@ptrCast(self.ptr), selections_list);
    }

    /// ### DEPRECATED: Use `extraSelections` instead
    ///
    pub const ExtraSelections = extraSelections;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#extraSelections)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn extraSelections(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []QTextEdit__ExtraSelection {
        const _arr: qtc.libqt_list = qtc.QPlainTextEdit_ExtraSelections(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTextEdit__ExtraSelection, _arr.len) catch @panic("TextCustomEditor__PlainTextEditor.extraSelections: Memory allocation failed");
        const _data_val: [*]QtC.QTextEdit__ExtraSelection = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `moveCursor` instead
    ///
    pub const MoveCursor = moveCursor;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    pub fn moveCursor(self: TextCustomEditor__PlainTextEditor, operation: i32) void {
        qtc.QPlainTextEdit_MoveCursor(@ptrCast(self.ptr), @bitCast(operation));
    }

    /// ### DEPRECATED: Use `canPaste` instead
    ///
    pub const CanPaste = canPaste;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canPaste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn canPaste(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.QPlainTextEdit_CanPaste(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `print` instead
    ///
    pub const Print = print;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#print)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` printer: QPagedPaintDevice `
    ///
    pub fn print(self: TextCustomEditor__PlainTextEditor, printer: anytype) void {
        comptime _ = @TypeOf(printer)._is_QPagedPaintDevice;
        qtc.QPlainTextEdit_Print(@ptrCast(self.ptr), @ptrCast(printer.ptr));
    }

    /// ### DEPRECATED: Use `blockCount` instead
    ///
    pub const BlockCount = blockCount;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn blockCount(self: TextCustomEditor__PlainTextEditor) i32 {
        return qtc.QPlainTextEdit_BlockCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `inputMethodQuery2` instead
    ///
    pub const InputMethodQuery2 = inputMethodQuery2;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn inputMethodQuery2(self: TextCustomEditor__PlainTextEditor, query: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QPlainTextEdit_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(query), @ptrCast(argument.ptr)) };
    }

    /// ### DEPRECATED: Use `setPlainText` instead
    ///
    pub const SetPlainText = setPlainText;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#setPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setPlainText(self: TextCustomEditor__PlainTextEditor, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_SetPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `cut` instead
    ///
    pub const Cut = cut;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn cut(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_Cut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copy` instead
    ///
    pub const Copy = copy;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn copy(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_Copy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paste` instead
    ///
    pub const Paste = paste;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn paste(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_Paste(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `undo` instead
    ///
    pub const Undo = undo;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn undo(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_Undo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `redo` instead
    ///
    pub const Redo = redo;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn redo(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_Redo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn clear(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectAll` instead
    ///
    pub const SelectAll = selectAll;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn selectAll(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_SelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `insertPlainText` instead
    ///
    pub const InsertPlainText = insertPlainText;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` text: []const u8 `
    ///
    pub fn insertPlainText(self: TextCustomEditor__PlainTextEditor, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_InsertPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `appendPlainText` instead
    ///
    pub const AppendPlainText = appendPlainText;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendPlainText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` text: []const u8 `
    ///
    pub fn appendPlainText(self: TextCustomEditor__PlainTextEditor, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QPlainTextEdit_AppendPlainText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `appendHtml` instead
    ///
    pub const AppendHtml = appendHtml;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#appendHtml)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` html: []const u8 `
    ///
    pub fn appendHtml(self: TextCustomEditor__PlainTextEditor, html: []const u8) void {
        const html_str = qtc.libqt_string{
            .len = html.len,
            .data = html.ptr,
        };
        qtc.QPlainTextEdit_AppendHtml(@ptrCast(self.ptr), html_str);
    }

    /// ### DEPRECATED: Use `centerCursor` instead
    ///
    pub const CenterCursor = centerCursor;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#centerCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn centerCursor(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_CenterCursor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomIn` instead
    ///
    pub const ZoomIn = zoomIn;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn zoomIn(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_ZoomIn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomOut` instead
    ///
    pub const ZoomOut = zoomOut;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn zoomOut(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_ZoomOut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `textChanged` instead
    ///
    pub const TextChanged = textChanged;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn textChanged(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_TextChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTextChanged` instead
    ///
    pub const OnTextChanged = onTextChanged;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor) callconv(.c) void `
    ///
    pub fn onTextChanged(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `undoAvailable` instead
    ///
    pub const UndoAvailable = undoAvailable;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` b: bool `
    ///
    pub fn undoAvailable(self: TextCustomEditor__PlainTextEditor, b: bool) void {
        qtc.QPlainTextEdit_UndoAvailable(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onUndoAvailable` instead
    ///
    pub const OnUndoAvailable = onUndoAvailable;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#undoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, b: bool) callconv(.c) void `
    ///
    pub fn onUndoAvailable(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_UndoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `redoAvailable` instead
    ///
    pub const RedoAvailable = redoAvailable;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` b: bool `
    ///
    pub fn redoAvailable(self: TextCustomEditor__PlainTextEditor, b: bool) void {
        qtc.QPlainTextEdit_RedoAvailable(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onRedoAvailable` instead
    ///
    pub const OnRedoAvailable = onRedoAvailable;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#redoAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, b: bool) callconv(.c) void `
    ///
    pub fn onRedoAvailable(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_RedoAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `copyAvailable` instead
    ///
    pub const CopyAvailable = copyAvailable;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` b: bool `
    ///
    pub fn copyAvailable(self: TextCustomEditor__PlainTextEditor, b: bool) void {
        qtc.QPlainTextEdit_CopyAvailable(@ptrCast(self.ptr), b);
    }

    /// ### DEPRECATED: Use `onCopyAvailable` instead
    ///
    pub const OnCopyAvailable = onCopyAvailable;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#copyAvailable)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, b: bool) callconv(.c) void `
    ///
    pub fn onCopyAvailable(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_CopyAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn selectionChanged(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor) callconv(.c) void `
    ///
    pub fn onSelectionChanged(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `cursorPositionChanged` instead
    ///
    pub const CursorPositionChanged = cursorPositionChanged;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn cursorPositionChanged(self: TextCustomEditor__PlainTextEditor) void {
        qtc.QPlainTextEdit_CursorPositionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCursorPositionChanged` instead
    ///
    pub const OnCursorPositionChanged = onCursorPositionChanged;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor) callconv(.c) void `
    ///
    pub fn onCursorPositionChanged(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateRequest` instead
    ///
    pub const UpdateRequest = updateRequest;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _rect: QRect `
    ///
    /// ` dy: i32 `
    ///
    pub fn updateRequest(self: TextCustomEditor__PlainTextEditor, _rect: anytype, dy: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QPlainTextEdit_UpdateRequest(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onUpdateRequest` instead
    ///
    pub const OnUpdateRequest = onUpdateRequest;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#updateRequest)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, rect: QRect, dy: i32) callconv(.c) void `
    ///
    pub fn onUpdateRequest(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QRect, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_UpdateRequest(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockCountChanged` instead
    ///
    pub const BlockCountChanged = blockCountChanged;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` newBlockCount: i32 `
    ///
    pub fn blockCountChanged(self: TextCustomEditor__PlainTextEditor, newBlockCount: i32) void {
        qtc.QPlainTextEdit_BlockCountChanged(@ptrCast(self.ptr), @bitCast(newBlockCount));
    }

    /// ### DEPRECATED: Use `onBlockCountChanged` instead
    ///
    pub const OnBlockCountChanged = onBlockCountChanged;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockCountChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, newBlockCount: i32) callconv(.c) void `
    ///
    pub fn onBlockCountChanged(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, i32) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_BlockCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modificationChanged` instead
    ///
    pub const ModificationChanged = modificationChanged;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: bool `
    ///
    pub fn modificationChanged(self: TextCustomEditor__PlainTextEditor, param1: bool) void {
        qtc.QPlainTextEdit_ModificationChanged(@ptrCast(self.ptr), param1);
    }

    /// ### DEPRECATED: Use `onModificationChanged` instead
    ///
    pub const OnModificationChanged = onModificationChanged;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#modificationChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: bool) callconv(.c) void `
    ///
    pub fn onModificationChanged(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, bool) callconv(.c) void) void {
        qtc.QPlainTextEdit_Connect_ModificationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `find22` instead
    ///
    pub const Find22 = find22;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` exp: []const u8 `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn find22(self: TextCustomEditor__PlainTextEditor, exp: []const u8, options: i32) bool {
        const exp_str = qtc.libqt_string{
            .len = exp.len,
            .data = exp.ptr,
        };
        return qtc.QPlainTextEdit_Find22(@ptrCast(self.ptr), exp_str, @bitCast(options));
    }

    /// ### DEPRECATED: Use `find23` instead
    ///
    pub const Find23 = find23;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#find)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` exp: QRegularExpression `
    ///
    /// ` options: flag of qtextdocument_enums.FindFlag `
    ///
    pub fn find23(self: TextCustomEditor__PlainTextEditor, exp: anytype, options: i32) bool {
        comptime _ = @TypeOf(exp)._is_QRegularExpression;
        return qtc.QPlainTextEdit_Find23(@ptrCast(self.ptr), @ptrCast(exp.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `moveCursor2` instead
    ///
    pub const MoveCursor2 = moveCursor2;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#moveCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` operation: qtextcursor_enums.MoveOperation `
    ///
    /// ` mode: qtextcursor_enums.MoveMode `
    ///
    pub fn moveCursor2(self: TextCustomEditor__PlainTextEditor, operation: i32, mode: i32) void {
        qtc.QPlainTextEdit_MoveCursor2(@ptrCast(self.ptr), @bitCast(operation), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `zoomIn1` instead
    ///
    pub const ZoomIn1 = zoomIn1;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomIn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` range: i32 `
    ///
    pub fn zoomIn1(self: TextCustomEditor__PlainTextEditor, range: i32) void {
        qtc.QPlainTextEdit_ZoomIn1(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `zoomOut1` instead
    ///
    pub const ZoomOut1 = zoomOut1;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomOut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` range: i32 `
    ///
    pub fn zoomOut1(self: TextCustomEditor__PlainTextEditor, range: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn verticalScrollBarPolicy(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setVerticalScrollBarPolicy(self: TextCustomEditor__PlainTextEditor, _verticalScrollBarPolicy: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn verticalScrollBar(self: TextCustomEditor__PlainTextEditor) QScrollBar {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setVerticalScrollBar(self: TextCustomEditor__PlainTextEditor, scrollbar: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn horizontalScrollBarPolicy(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setHorizontalScrollBarPolicy(self: TextCustomEditor__PlainTextEditor, _horizontalScrollBarPolicy: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn horizontalScrollBar(self: TextCustomEditor__PlainTextEditor) QScrollBar {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setHorizontalScrollBar(self: TextCustomEditor__PlainTextEditor, scrollbar: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn cornerWidget(self: TextCustomEditor__PlainTextEditor) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setCornerWidget(self: TextCustomEditor__PlainTextEditor, widget: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn addScrollBarWidget(self: TextCustomEditor__PlainTextEditor, widget: anytype, alignment: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn scrollBarWidgets(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("TextCustomEditor__PlainTextEditor.scrollBarWidgets: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn viewport(self: TextCustomEditor__PlainTextEditor) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setViewport(self: TextCustomEditor__PlainTextEditor, widget: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn maximumViewportSize(self: TextCustomEditor__PlainTextEditor) QSize {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn sizeAdjustPolicy(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn setSizeAdjustPolicy(self: TextCustomEditor__PlainTextEditor, policy: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn frameStyle(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _frameStyle: i32 `
    ///
    pub fn setFrameStyle(self: TextCustomEditor__PlainTextEditor, _frameStyle: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn frameWidth(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn frameShape(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _frameShape: qframe_enums.Shape `
    ///
    pub fn setFrameShape(self: TextCustomEditor__PlainTextEditor, _frameShape: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn frameShadow(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _frameShadow: qframe_enums.Shadow `
    ///
    pub fn setFrameShadow(self: TextCustomEditor__PlainTextEditor, _frameShadow: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn lineWidth(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: TextCustomEditor__PlainTextEditor, _lineWidth: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn midLineWidth(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: TextCustomEditor__PlainTextEditor, _midLineWidth: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn frameRect(self: TextCustomEditor__PlainTextEditor) QRect {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _frameRect: QRect `
    ///
    pub fn setFrameRect(self: TextCustomEditor__PlainTextEditor, _frameRect: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn winId(self: TextCustomEditor__PlainTextEditor) usize {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn createWinId(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn internalWinId(self: TextCustomEditor__PlainTextEditor) usize {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn effectiveWinId(self: TextCustomEditor__PlainTextEditor) usize {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn style(self: TextCustomEditor__PlainTextEditor) QStyle {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: TextCustomEditor__PlainTextEditor, _style: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isTopLevel(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isWindow(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isModal(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: TextCustomEditor__PlainTextEditor, _windowModality: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isEnabled(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: TextCustomEditor__PlainTextEditor, param1: anytype) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: TextCustomEditor__PlainTextEditor, enabled: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: TextCustomEditor__PlainTextEditor, disabled: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: TextCustomEditor__PlainTextEditor, windowModified: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn frameGeometry(self: TextCustomEditor__PlainTextEditor) QRect {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn geometry(self: TextCustomEditor__PlainTextEditor) QRect {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn normalGeometry(self: TextCustomEditor__PlainTextEditor) QRect {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn x(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn y(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn pos(self: TextCustomEditor__PlainTextEditor) QPoint {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn frameSize(self: TextCustomEditor__PlainTextEditor) QSize {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn size(self: TextCustomEditor__PlainTextEditor) QSize {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn width(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn height(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn rect(self: TextCustomEditor__PlainTextEditor) QRect {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn childrenRect(self: TextCustomEditor__PlainTextEditor) QRect {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn childrenRegion(self: TextCustomEditor__PlainTextEditor) QRegion {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn minimumSize(self: TextCustomEditor__PlainTextEditor) QSize {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn maximumSize(self: TextCustomEditor__PlainTextEditor) QSize {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn minimumWidth(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn minimumHeight(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn maximumWidth(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn maximumHeight(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: TextCustomEditor__PlainTextEditor, _minimumSize: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: TextCustomEditor__PlainTextEditor, minw: i32, minh: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: TextCustomEditor__PlainTextEditor, _maximumSize: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: TextCustomEditor__PlainTextEditor, maxw: i32, maxh: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: TextCustomEditor__PlainTextEditor, minw: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: TextCustomEditor__PlainTextEditor, minh: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: TextCustomEditor__PlainTextEditor, maxw: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: TextCustomEditor__PlainTextEditor, maxh: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn sizeIncrement(self: TextCustomEditor__PlainTextEditor) QSize {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: TextCustomEditor__PlainTextEditor, _sizeIncrement: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: TextCustomEditor__PlainTextEditor, w: i32, h: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn baseSize(self: TextCustomEditor__PlainTextEditor) QSize {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: TextCustomEditor__PlainTextEditor, _baseSize: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: TextCustomEditor__PlainTextEditor, basew: i32, baseh: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: TextCustomEditor__PlainTextEditor, fixedSize: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: TextCustomEditor__PlainTextEditor, w: i32, h: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: TextCustomEditor__PlainTextEditor, w: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: TextCustomEditor__PlainTextEditor, h: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: TextCustomEditor__PlainTextEditor, param1: anytype) QPointF {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: TextCustomEditor__PlainTextEditor, param1: anytype) QPoint {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: TextCustomEditor__PlainTextEditor, param1: anytype) QPointF {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: TextCustomEditor__PlainTextEditor, param1: anytype) QPoint {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: TextCustomEditor__PlainTextEditor, param1: anytype) QPointF {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: TextCustomEditor__PlainTextEditor, param1: anytype) QPoint {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: TextCustomEditor__PlainTextEditor, param1: anytype) QPointF {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: TextCustomEditor__PlainTextEditor, param1: anytype) QPoint {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: TextCustomEditor__PlainTextEditor, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: TextCustomEditor__PlainTextEditor, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: TextCustomEditor__PlainTextEditor, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: TextCustomEditor__PlainTextEditor, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn window(self: TextCustomEditor__PlainTextEditor) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn nativeParentWidget(self: TextCustomEditor__PlainTextEditor) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn topLevelWidget(self: TextCustomEditor__PlainTextEditor) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn palette(self: TextCustomEditor__PlainTextEditor) QPalette {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: TextCustomEditor__PlainTextEditor, _palette: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: TextCustomEditor__PlainTextEditor, _backgroundRole: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: TextCustomEditor__PlainTextEditor, _foregroundRole: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn font(self: TextCustomEditor__PlainTextEditor) QFont {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: TextCustomEditor__PlainTextEditor, _font: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn fontMetrics(self: TextCustomEditor__PlainTextEditor) QFontMetrics {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn fontInfo(self: TextCustomEditor__PlainTextEditor) QFontInfo {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn cursor(self: TextCustomEditor__PlainTextEditor) QCursor {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: TextCustomEditor__PlainTextEditor, _cursor: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn unsetCursor(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: TextCustomEditor__PlainTextEditor, enable: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn hasMouseTracking(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn underMouse(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: TextCustomEditor__PlainTextEditor, enable: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn hasTabletTracking(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: TextCustomEditor__PlainTextEditor, _mask: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: TextCustomEditor__PlainTextEditor, _mask: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn mask(self: TextCustomEditor__PlainTextEditor) QRegion {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn clearMask(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: TextCustomEditor__PlainTextEditor, target: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: TextCustomEditor__PlainTextEditor, painter: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn grab(self: TextCustomEditor__PlainTextEditor) QPixmap {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn graphicsEffect(self: TextCustomEditor__PlainTextEditor) QGraphicsEffect {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: TextCustomEditor__PlainTextEditor, effect: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: TextCustomEditor__PlainTextEditor, typeVal: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: TextCustomEditor__PlainTextEditor, typeVal: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: TextCustomEditor__PlainTextEditor, _windowTitle: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: TextCustomEditor__PlainTextEditor, _styleSheet: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.styleSheet: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.windowTitle: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(self: TextCustomEditor__PlainTextEditor, icon: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn windowIcon(self: TextCustomEditor__PlainTextEditor) QIcon {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: TextCustomEditor__PlainTextEditor, _windowIconText: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.windowIconText: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: TextCustomEditor__PlainTextEditor, _windowRole: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.windowRole: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: TextCustomEditor__PlainTextEditor, filePath: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.windowFilePath: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: TextCustomEditor__PlainTextEditor, level: f64) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn windowOpacity(self: TextCustomEditor__PlainTextEditor) f64 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isWindowModified(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: TextCustomEditor__PlainTextEditor, _toolTip: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.toolTip: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: TextCustomEditor__PlainTextEditor, msec: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn toolTipDuration(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: TextCustomEditor__PlainTextEditor, _statusTip: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.statusTip: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: TextCustomEditor__PlainTextEditor, _whatsThis: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.whatsThis: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.accessibleName: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: TextCustomEditor__PlainTextEditor, name: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.accessibleDescription: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: TextCustomEditor__PlainTextEditor, description: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: TextCustomEditor__PlainTextEditor, direction: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn unsetLayoutDirection(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: TextCustomEditor__PlainTextEditor, _locale: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn locale(self: TextCustomEditor__PlainTextEditor) QLocale {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn unsetLocale(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isRightToLeft(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isLeftToRight(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn setFocus(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isActiveWindow(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn activateWindow(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn clearFocus(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: TextCustomEditor__PlainTextEditor, reason: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: TextCustomEditor__PlainTextEditor, policy: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn hasFocus(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: TextCustomEditor__PlainTextEditor, _focusProxy: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn focusProxy(self: TextCustomEditor__PlainTextEditor) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: TextCustomEditor__PlainTextEditor, policy: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn grabMouse(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn releaseMouse(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn grabKeyboard(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn releaseKeyboard(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: TextCustomEditor__PlainTextEditor, key: anytype) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: TextCustomEditor__PlainTextEditor, id: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: TextCustomEditor__PlainTextEditor, id: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: TextCustomEditor__PlainTextEditor, id: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn updatesEnabled(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: TextCustomEditor__PlainTextEditor, enable: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn graphicsProxyWidget(self: TextCustomEditor__PlainTextEditor) QGraphicsProxyWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn update(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn repaint(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: TextCustomEditor__PlainTextEditor, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: TextCustomEditor__PlainTextEditor, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: TextCustomEditor__PlainTextEditor, hidden: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn show(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn hide(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn showMinimized(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn showMaximized(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn showFullScreen(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn showNormal(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn close(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn raise(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn lower(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: TextCustomEditor__PlainTextEditor, _x: i32, _y: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: TextCustomEditor__PlainTextEditor, w: i32, h: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: TextCustomEditor__PlainTextEditor, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: TextCustomEditor__PlainTextEditor, _geometry: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("TextCustomEditor__PlainTextEditor.saveGeometry: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: TextCustomEditor__PlainTextEditor, _geometry: []u8) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn adjustSize(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isVisible(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: TextCustomEditor__PlainTextEditor, param1: anytype) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isHidden(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isMinimized(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isMaximized(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isFullScreen(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: TextCustomEditor__PlainTextEditor, state: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: TextCustomEditor__PlainTextEditor, state: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn sizePolicy(self: TextCustomEditor__PlainTextEditor) QSizePolicy {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: TextCustomEditor__PlainTextEditor, _sizePolicy: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: TextCustomEditor__PlainTextEditor, horizontal: i32, vertical: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn visibleRegion(self: TextCustomEditor__PlainTextEditor) QRegion {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: TextCustomEditor__PlainTextEditor, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: TextCustomEditor__PlainTextEditor, margins: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn contentsMargins(self: TextCustomEditor__PlainTextEditor) QMargins {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn contentsRect(self: TextCustomEditor__PlainTextEditor) QRect {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn layout(self: TextCustomEditor__PlainTextEditor) QLayout {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: TextCustomEditor__PlainTextEditor, _layout: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn updateGeometry(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: TextCustomEditor__PlainTextEditor, _parent: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: TextCustomEditor__PlainTextEditor, _parent: anytype, f: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: TextCustomEditor__PlainTextEditor, dx: i32, dy: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: TextCustomEditor__PlainTextEditor, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn focusWidget(self: TextCustomEditor__PlainTextEditor) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn nextInFocusChain(self: TextCustomEditor__PlainTextEditor) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn previousInFocusChain(self: TextCustomEditor__PlainTextEditor) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn acceptDrops(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: TextCustomEditor__PlainTextEditor, on: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: TextCustomEditor__PlainTextEditor, action: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: TextCustomEditor__PlainTextEditor, _actions: []QAction) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: TextCustomEditor__PlainTextEditor, before: anytype, _actions: []QAction) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: TextCustomEditor__PlainTextEditor, before: anytype, action: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: TextCustomEditor__PlainTextEditor, action: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("TextCustomEditor__PlainTextEditor.actions: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction2(self: TextCustomEditor__PlainTextEditor, text: []const u8) QAction {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction3(self: TextCustomEditor__PlainTextEditor, icon: anytype, text: []const u8) QAction {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: TextCustomEditor__PlainTextEditor, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: TextCustomEditor__PlainTextEditor, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn parentWidget(self: TextCustomEditor__PlainTextEditor) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: TextCustomEditor__PlainTextEditor, typeVal: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: TextCustomEditor__PlainTextEditor, param1: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: TextCustomEditor__PlainTextEditor, typeVal: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: TextCustomEditor__PlainTextEditor, _x: i32, _y: i32) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: TextCustomEditor__PlainTextEditor, p: anytype) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: TextCustomEditor__PlainTextEditor, p: anytype) QWidget {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: TextCustomEditor__PlainTextEditor, param1: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: TextCustomEditor__PlainTextEditor, param1: i32) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn ensurePolished(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: TextCustomEditor__PlainTextEditor, child: anytype) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn autoFillBackground(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: TextCustomEditor__PlainTextEditor, enabled: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn backingStore(self: TextCustomEditor__PlainTextEditor) QBackingStore {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn windowHandle(self: TextCustomEditor__PlainTextEditor) QWindow {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn screen(self: TextCustomEditor__PlainTextEditor) QScreen {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: TextCustomEditor__PlainTextEditor, _screen: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: TextCustomEditor__PlainTextEditor, title: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` icon: QIcon `
    ///
    pub fn windowIconChanged(self: TextCustomEditor__PlainTextEditor, icon: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QIcon) callconv(.c) void) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: TextCustomEditor__PlainTextEditor, iconText: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: TextCustomEditor__PlainTextEditor, _pos: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QPoint) callconv(.c) void) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: TextCustomEditor__PlainTextEditor, hints: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: TextCustomEditor__PlainTextEditor, target: anytype, targetOffset: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: TextCustomEditor__PlainTextEditor, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render4(self: TextCustomEditor__PlainTextEditor, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: TextCustomEditor__PlainTextEditor, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: TextCustomEditor__PlainTextEditor, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render42(self: TextCustomEditor__PlainTextEditor, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: TextCustomEditor__PlainTextEditor, rectangle: anytype) QPixmap {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: TextCustomEditor__PlainTextEditor, typeVal: i32, flags: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: TextCustomEditor__PlainTextEditor, key: anytype, context: i32) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: TextCustomEditor__PlainTextEditor, id: i32, enable: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: TextCustomEditor__PlainTextEditor, id: i32, enable: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: TextCustomEditor__PlainTextEditor, param1: i32, on: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: TextCustomEditor__PlainTextEditor, param1: i32, on: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextCustomEditor__PlainTextEditor.objectName: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: TextCustomEditor__PlainTextEditor, name: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isWidgetType(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isWindowType(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn isQuickItemType(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn signalsBlocked(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: TextCustomEditor__PlainTextEditor, b: bool) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn thread(self: TextCustomEditor__PlainTextEditor) QThread {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: TextCustomEditor__PlainTextEditor, _thread: anytype) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: TextCustomEditor__PlainTextEditor, interval: i32) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: TextCustomEditor__PlainTextEditor, time: i64) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: TextCustomEditor__PlainTextEditor, id: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: TextCustomEditor__PlainTextEditor, id: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("TextCustomEditor__PlainTextEditor.children: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: TextCustomEditor__PlainTextEditor, filterObj: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: TextCustomEditor__PlainTextEditor, obj: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: TextCustomEditor__PlainTextEditor, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn disconnect3(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: TextCustomEditor__PlainTextEditor, receiver: anytype) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn dumpObjectTree(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn dumpObjectInfo(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: TextCustomEditor__PlainTextEditor, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: TextCustomEditor__PlainTextEditor, name: [:0]const u8) QVariant {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: TextCustomEditor__PlainTextEditor, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("TextCustomEditor__PlainTextEditor.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextCustomEditor__PlainTextEditor.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn bindingStorage(self: TextCustomEditor__PlainTextEditor) QBindingStorage {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn bindingStorage2(self: TextCustomEditor__PlainTextEditor) QBindingStorage {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn destroyed(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor) callconv(.c) void `
    ///
    pub fn onDestroyed(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor) callconv(.c) void) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn parent(self: TextCustomEditor__PlainTextEditor) QObject {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: TextCustomEditor__PlainTextEditor, classname: [:0]const u8) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn deleteLater(self: TextCustomEditor__PlainTextEditor) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: TextCustomEditor__PlainTextEditor, interval: i32, timerType: i32) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: TextCustomEditor__PlainTextEditor, time: i64, timerType: i32) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: TextCustomEditor__PlainTextEditor, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: TextCustomEditor__PlainTextEditor, signal: [:0]const u8) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: TextCustomEditor__PlainTextEditor, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: TextCustomEditor__PlainTextEditor, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: TextCustomEditor__PlainTextEditor, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QObject) callconv(.c) void) void {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn paintingActive(self: TextCustomEditor__PlainTextEditor) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn widthMM(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn heightMM(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn logicalDpiX(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn logicalDpiY(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn physicalDpiX(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn physicalDpiY(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn devicePixelRatio(self: TextCustomEditor__PlainTextEditor) f64 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn devicePixelRatioF(self: TextCustomEditor__PlainTextEditor) f64 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn colorCount(self: TextCustomEditor__PlainTextEditor) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn depth(self: TextCustomEditor__PlainTextEditor) i32 {
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

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn loadResource(self: TextCustomEditor__PlainTextEditor, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_LoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### DEPRECATED: Use `superLoadResource` instead
    ///
    pub const SuperLoadResource = superLoadResource;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` name: QUrl `
    ///
    pub fn superLoadResource(self: TextCustomEditor__PlainTextEditor, typeVal: i32, name: anytype) QVariant {
        comptime _ = @TypeOf(name)._is_QUrl;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperLoadResource(@ptrCast(self.ptr), @bitCast(typeVal), @ptrCast(name.ptr)) };
    }

    /// ### DEPRECATED: Use `onLoadResource` instead
    ///
    pub const OnLoadResource = onLoadResource;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#loadResource)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, typeVal: i32, name: QUrl) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onLoadResource(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, i32, QUrl) callconv(.c) QVariant) void {
        qtc.TextCustomEditor__PlainTextEditor_OnLoadResource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: TextCustomEditor__PlainTextEditor, _property: i32) QVariant {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_InputMethodQuery(@ptrCast(self.ptr), @bitCast(_property)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _property: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: TextCustomEditor__PlainTextEditor, _property: i32) QVariant {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(_property)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, property: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, i32) callconv(.c) QVariant) void {
        qtc.TextCustomEditor__PlainTextEditor_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn timerEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.TextCustomEditor__PlainTextEditor_TimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn superTimerEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QTimerEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyReleaseEvent` instead
    ///
    pub const KeyReleaseEvent = keyReleaseEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextCustomEditor__PlainTextEditor_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superKeyReleaseEvent` instead
    ///
    pub const SuperKeyReleaseEvent = superKeyReleaseEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onKeyReleaseEvent` instead
    ///
    pub const OnKeyReleaseEvent = onKeyReleaseEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QKeyEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn resizeEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.TextCustomEditor__PlainTextEditor_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn superResizeEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QResizeEvent) callconv(.c) void `
    ///
    pub fn onResizeEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QResizeEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn paintEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.TextCustomEditor__PlainTextEditor_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn superPaintEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QPaintEvent) callconv(.c) void `
    ///
    pub fn onPaintEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QPaintEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mousePressEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditor_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditor_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditor_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditor_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: TextCustomEditor__PlainTextEditor, next: bool) bool {
        return qtc.TextCustomEditor__PlainTextEditor_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` next: bool `
    ///
    pub fn superFocusNextPrevChild(self: TextCustomEditor__PlainTextEditor, next: bool) bool {
        return qtc.TextCustomEditor__PlainTextEditor_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, next: bool) callconv(.c) bool `
    ///
    pub fn onFocusNextPrevChild(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, bool) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditor_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.TextCustomEditor__PlainTextEditor_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QDragEnterEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.TextCustomEditor__PlainTextEditor_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QDragLeaveEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.TextCustomEditor__PlainTextEditor_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QDragMoveEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn dropEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.TextCustomEditor__PlainTextEditor_DropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn superDropEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QDropEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn focusOutEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextCustomEditor__PlainTextEditor_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QFocusEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn showEvent(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.TextCustomEditor__PlainTextEditor_ShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn superShowEvent(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QShowEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QEvent `
    ///
    pub fn changeEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.TextCustomEditor__PlainTextEditor_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` e: QEvent `
    ///
    pub fn superChangeEvent(self: TextCustomEditor__PlainTextEditor, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, e: QEvent) callconv(.c) void `
    ///
    pub fn onChangeEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `createMimeDataFromSelection` instead
    ///
    pub const CreateMimeDataFromSelection = createMimeDataFromSelection;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn createMimeDataFromSelection(self: TextCustomEditor__PlainTextEditor) QMimeData {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_CreateMimeDataFromSelection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superCreateMimeDataFromSelection` instead
    ///
    pub const SuperCreateMimeDataFromSelection = superCreateMimeDataFromSelection;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superCreateMimeDataFromSelection(self: TextCustomEditor__PlainTextEditor) QMimeData {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperCreateMimeDataFromSelection(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onCreateMimeDataFromSelection` instead
    ///
    pub const OnCreateMimeDataFromSelection = onCreateMimeDataFromSelection;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#createMimeDataFromSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) QMimeData `
    ///
    pub fn onCreateMimeDataFromSelection(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) QMimeData) void {
        qtc.TextCustomEditor__PlainTextEditor_OnCreateMimeDataFromSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `canInsertFromMimeData` instead
    ///
    pub const CanInsertFromMimeData = canInsertFromMimeData;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` source: QMimeData `
    ///
    pub fn canInsertFromMimeData(self: TextCustomEditor__PlainTextEditor, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.TextCustomEditor__PlainTextEditor_CanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `superCanInsertFromMimeData` instead
    ///
    pub const SuperCanInsertFromMimeData = superCanInsertFromMimeData;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` source: QMimeData `
    ///
    pub fn superCanInsertFromMimeData(self: TextCustomEditor__PlainTextEditor, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.TextCustomEditor__PlainTextEditor_SuperCanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `onCanInsertFromMimeData` instead
    ///
    pub const OnCanInsertFromMimeData = onCanInsertFromMimeData;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#canInsertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, source: QMimeData) callconv(.c) bool `
    ///
    pub fn onCanInsertFromMimeData(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QMimeData) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditor_OnCanInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `insertFromMimeData` instead
    ///
    pub const InsertFromMimeData = insertFromMimeData;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` source: QMimeData `
    ///
    pub fn insertFromMimeData(self: TextCustomEditor__PlainTextEditor, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QMimeData;
        qtc.TextCustomEditor__PlainTextEditor_InsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `superInsertFromMimeData` instead
    ///
    pub const SuperInsertFromMimeData = superInsertFromMimeData;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` source: QMimeData `
    ///
    pub fn superInsertFromMimeData(self: TextCustomEditor__PlainTextEditor, source: anytype) void {
        comptime _ = @TypeOf(source)._is_QMimeData;
        qtc.TextCustomEditor__PlainTextEditor_SuperInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `onInsertFromMimeData` instead
    ///
    pub const OnInsertFromMimeData = onInsertFromMimeData;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#insertFromMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, source: QMimeData) callconv(.c) void `
    ///
    pub fn onInsertFromMimeData(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QMimeData) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextCustomEditor__PlainTextEditor_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QInputMethodEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollContentsBy` instead
    ///
    pub const ScrollContentsBy = scrollContentsBy;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scrollContentsBy(self: TextCustomEditor__PlainTextEditor, dx: i32, dy: i32) void {
        qtc.TextCustomEditor__PlainTextEditor_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `superScrollContentsBy` instead
    ///
    pub const SuperScrollContentsBy = superScrollContentsBy;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn superScrollContentsBy(self: TextCustomEditor__PlainTextEditor, dx: i32, dy: i32) void {
        qtc.TextCustomEditor__PlainTextEditor_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onScrollContentsBy` instead
    ///
    pub const OnScrollContentsBy = onScrollContentsBy;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn onScrollContentsBy(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, i32, i32) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doSetTextCursor` instead
    ///
    pub const DoSetTextCursor = doSetTextCursor;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn doSetTextCursor(self: TextCustomEditor__PlainTextEditor, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        qtc.TextCustomEditor__PlainTextEditor_DoSetTextCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `superDoSetTextCursor` instead
    ///
    pub const SuperDoSetTextCursor = superDoSetTextCursor;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _cursor: QTextCursor `
    ///
    pub fn superDoSetTextCursor(self: TextCustomEditor__PlainTextEditor, _cursor: anytype) void {
        comptime _ = @TypeOf(_cursor)._is_QTextCursor;
        qtc.TextCustomEditor__PlainTextEditor_SuperDoSetTextCursor(@ptrCast(self.ptr), @ptrCast(_cursor.ptr));
    }

    /// ### DEPRECATED: Use `onDoSetTextCursor` instead
    ///
    pub const OnDoSetTextCursor = onDoSetTextCursor;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#doSetTextCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, cursor: QTextCursor) callconv(.c) void `
    ///
    pub fn onDoSetTextCursor(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QTextCursor) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnDoSetTextCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn minimumSizeHint(self: TextCustomEditor__PlainTextEditor) QSize {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superMinimumSizeHint(self: TextCustomEditor__PlainTextEditor) QSize {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextCustomEditor__PlainTextEditor_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn sizeHint(self: TextCustomEditor__PlainTextEditor) QSize {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superSizeHint(self: TextCustomEditor__PlainTextEditor) QSize {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextCustomEditor__PlainTextEditor_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn setupViewport(self: TextCustomEditor__PlainTextEditor, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.TextCustomEditor__PlainTextEditor_SetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn superSetupViewport(self: TextCustomEditor__PlainTextEditor, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.TextCustomEditor__PlainTextEditor_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, viewport: QWidget) callconv(.c) void `
    ///
    pub fn onSetupViewport(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QWidget) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn eventFilter(self: TextCustomEditor__PlainTextEditor, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextEditor_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn superEventFilter(self: TextCustomEditor__PlainTextEditor, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextEditor_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditor_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QEvent `
    ///
    pub fn viewportEvent(self: TextCustomEditor__PlainTextEditor, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextEditor_ViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superViewportEvent(self: TextCustomEditor__PlainTextEditor, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextEditor_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onViewportEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditor_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn viewportSizeHint(self: TextCustomEditor__PlainTextEditor) QSize {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_ViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superViewportSizeHint(self: TextCustomEditor__PlainTextEditor) QSize {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportSizeHint(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextCustomEditor__PlainTextEditor_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn initStyleOption(self: TextCustomEditor__PlainTextEditor, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.TextCustomEditor__PlainTextEditor_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn superInitStyleOption(self: TextCustomEditor__PlainTextEditor, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.TextCustomEditor__PlainTextEditor_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn onInitStyleOption(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QStyleOptionFrame) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn devType(self: TextCustomEditor__PlainTextEditor) i32 {
        return qtc.TextCustomEditor__PlainTextEditor_DevType(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superDevType(self: TextCustomEditor__PlainTextEditor) i32 {
        return qtc.TextCustomEditor__PlainTextEditor_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextEditor_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: TextCustomEditor__PlainTextEditor, visible: bool) void {
        qtc.TextCustomEditor__PlainTextEditor_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: TextCustomEditor__PlainTextEditor, visible: bool) void {
        qtc.TextCustomEditor__PlainTextEditor_SuperSetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: TextCustomEditor__PlainTextEditor, param1: i32) i32 {
        return qtc.TextCustomEditor__PlainTextEditor_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: TextCustomEditor__PlainTextEditor, param1: i32) i32 {
        return qtc.TextCustomEditor__PlainTextEditor_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, i32) callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextEditor_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn hasHeightForWidth(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superHasHeightForWidth(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditor_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn paintEngine(self: TextCustomEditor__PlainTextEditor) QPaintEngine {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superPaintEngine(self: TextCustomEditor__PlainTextEditor) QPaintEngine {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.TextCustomEditor__PlainTextEditor_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.TextCustomEditor__PlainTextEditor_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QEnterEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextCustomEditor__PlainTextEditor_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.TextCustomEditor__PlainTextEditor_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QMoveEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.TextCustomEditor__PlainTextEditor_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QCloseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.TextCustomEditor__PlainTextEditor_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QTabletEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.TextCustomEditor__PlainTextEditor_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QActionEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.TextCustomEditor__PlainTextEditor_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QHideEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: TextCustomEditor__PlainTextEditor, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextCustomEditor__PlainTextEditor_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: TextCustomEditor__PlainTextEditor, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextCustomEditor__PlainTextEditor_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditor_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: TextCustomEditor__PlainTextEditor, param1: i32) i32 {
        return qtc.TextCustomEditor__PlainTextEditor_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: TextCustomEditor__PlainTextEditor, param1: i32) i32 {
        return qtc.TextCustomEditor__PlainTextEditor_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, i32) callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextEditor_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: TextCustomEditor__PlainTextEditor, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextCustomEditor__PlainTextEditor_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: TextCustomEditor__PlainTextEditor, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextCustomEditor__PlainTextEditor_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QPainter) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: TextCustomEditor__PlainTextEditor, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: TextCustomEditor__PlainTextEditor, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QPoint) callconv(.c) QPaintDevice) void {
        qtc.TextCustomEditor__PlainTextEditor_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn sharedPainter(self: TextCustomEditor__PlainTextEditor) QPainter {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superSharedPainter(self: TextCustomEditor__PlainTextEditor) QPainter {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) QPainter) void {
        qtc.TextCustomEditor__PlainTextEditor_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextCustomEditor__PlainTextEditor_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QChildEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextCustomEditor__PlainTextEditor_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: TextCustomEditor__PlainTextEditor, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextCustomEditor__PlainTextEditor_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: TextCustomEditor__PlainTextEditor, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__PlainTextEditor_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: TextCustomEditor__PlainTextEditor, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__PlainTextEditor_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QMetaMethod) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: TextCustomEditor__PlainTextEditor, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__PlainTextEditor_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: TextCustomEditor__PlainTextEditor, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__PlainTextEditor_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QMetaMethod) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `firstVisibleBlock` instead
    ///
    pub const FirstVisibleBlock = firstVisibleBlock;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn firstVisibleBlock(self: TextCustomEditor__PlainTextEditor) QTextBlock {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_FirstVisibleBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superFirstVisibleBlock` instead
    ///
    pub const SuperFirstVisibleBlock = superFirstVisibleBlock;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superFirstVisibleBlock(self: TextCustomEditor__PlainTextEditor) QTextBlock {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperFirstVisibleBlock(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onFirstVisibleBlock` instead
    ///
    pub const OnFirstVisibleBlock = onFirstVisibleBlock;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#firstVisibleBlock)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) QTextBlock `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onFirstVisibleBlock(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) QTextBlock) void {
        qtc.TextCustomEditor__PlainTextEditor_OnFirstVisibleBlock(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contentOffset` instead
    ///
    pub const ContentOffset = contentOffset;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn contentOffset(self: TextCustomEditor__PlainTextEditor) QPointF {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_ContentOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superContentOffset` instead
    ///
    pub const SuperContentOffset = superContentOffset;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superContentOffset(self: TextCustomEditor__PlainTextEditor) QPointF {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperContentOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onContentOffset` instead
    ///
    pub const OnContentOffset = onContentOffset;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#contentOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) QPointF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onContentOffset(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) QPointF) void {
        qtc.TextCustomEditor__PlainTextEditor_OnContentOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockBoundingRect` instead
    ///
    pub const BlockBoundingRect = blockBoundingRect;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn blockBoundingRect(self: TextCustomEditor__PlainTextEditor, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_BlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `superBlockBoundingRect` instead
    ///
    pub const SuperBlockBoundingRect = superBlockBoundingRect;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn superBlockBoundingRect(self: TextCustomEditor__PlainTextEditor, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperBlockBoundingRect(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `onBlockBoundingRect` instead
    ///
    pub const OnBlockBoundingRect = onBlockBoundingRect;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, block: QTextBlock) callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBlockBoundingRect(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QTextBlock) callconv(.c) QRectF) void {
        qtc.TextCustomEditor__PlainTextEditor_OnBlockBoundingRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `blockBoundingGeometry` instead
    ///
    pub const BlockBoundingGeometry = blockBoundingGeometry;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn blockBoundingGeometry(self: TextCustomEditor__PlainTextEditor, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_BlockBoundingGeometry(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `superBlockBoundingGeometry` instead
    ///
    pub const SuperBlockBoundingGeometry = superBlockBoundingGeometry;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` block: QTextBlock `
    ///
    pub fn superBlockBoundingGeometry(self: TextCustomEditor__PlainTextEditor, block: anytype) QRectF {
        comptime _ = @TypeOf(block)._is_QTextBlock;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperBlockBoundingGeometry(@ptrCast(self.ptr), @ptrCast(block.ptr)) };
    }

    /// ### DEPRECATED: Use `onBlockBoundingGeometry` instead
    ///
    pub const OnBlockBoundingGeometry = onBlockBoundingGeometry;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#blockBoundingGeometry)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, block: QTextBlock) callconv(.c) QRectF `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onBlockBoundingGeometry(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QTextBlock) callconv(.c) QRectF) void {
        qtc.TextCustomEditor__PlainTextEditor_OnBlockBoundingGeometry(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `getPaintContext` instead
    ///
    pub const GetPaintContext = getPaintContext;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn getPaintContext(self: TextCustomEditor__PlainTextEditor) QAbstractTextDocumentLayout__PaintContext {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_GetPaintContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superGetPaintContext` instead
    ///
    pub const SuperGetPaintContext = superGetPaintContext;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superGetPaintContext(self: TextCustomEditor__PlainTextEditor) QAbstractTextDocumentLayout__PaintContext {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperGetPaintContext(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onGetPaintContext` instead
    ///
    pub const OnGetPaintContext = onGetPaintContext;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#getPaintContext)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) QAbstractTextDocumentLayout__PaintContext `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onGetPaintContext(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) QAbstractTextDocumentLayout__PaintContext) void {
        qtc.TextCustomEditor__PlainTextEditor_OnGetPaintContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `zoomInF` instead
    ///
    pub const ZoomInF = zoomInF;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` range: f32 `
    ///
    pub fn zoomInF(self: TextCustomEditor__PlainTextEditor, range: f32) void {
        qtc.TextCustomEditor__PlainTextEditor_ZoomInF(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `superZoomInF` instead
    ///
    pub const SuperZoomInF = superZoomInF;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` range: f32 `
    ///
    pub fn superZoomInF(self: TextCustomEditor__PlainTextEditor, range: f32) void {
        qtc.TextCustomEditor__PlainTextEditor_SuperZoomInF(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `onZoomInF` instead
    ///
    pub const OnZoomInF = onZoomInF;

    /// Inherited from QPlainTextEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qplaintextedit.html#zoomInF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, range: f32) callconv(.c) void `
    ///
    pub fn onZoomInF(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, f32) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnZoomInF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setViewportMargins(self: TextCustomEditor__PlainTextEditor, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.TextCustomEditor__PlainTextEditor_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn superSetViewportMargins(self: TextCustomEditor__PlainTextEditor, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.TextCustomEditor__PlainTextEditor_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn onSetViewportMargins(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn viewportMargins(self: TextCustomEditor__PlainTextEditor) QMargins {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superViewportMargins(self: TextCustomEditor__PlainTextEditor) QMargins {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportMargins(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) QMargins) void {
        qtc.TextCustomEditor__PlainTextEditor_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QPainter `
    ///
    pub fn drawFrame(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.TextCustomEditor__PlainTextEditor_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` param1: QPainter `
    ///
    pub fn superDrawFrame(self: TextCustomEditor__PlainTextEditor, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.TextCustomEditor__PlainTextEditor_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, param1: QPainter) callconv(.c) void `
    ///
    pub fn onDrawFrame(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QPainter) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn updateMicroFocus(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superUpdateMicroFocus(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn create(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_Create(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superCreate(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn destroy(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_Destroy(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superDestroy(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditor_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn focusNextChild(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superFocusNextChild(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditor_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn focusPreviousChild(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superFocusPreviousChild(self: TextCustomEditor__PlainTextEditor) bool {
        return qtc.TextCustomEditor__PlainTextEditor_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditor_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn sender(self: TextCustomEditor__PlainTextEditor) QObject {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superSender(self: TextCustomEditor__PlainTextEditor) QObject {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditor_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextCustomEditor__PlainTextEditor_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn senderSignalIndex(self: TextCustomEditor__PlainTextEditor) i32 {
        return qtc.TextCustomEditor__PlainTextEditor_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn superSenderSignalIndex(self: TextCustomEditor__PlainTextEditor) i32 {
        return qtc.TextCustomEditor__PlainTextEditor_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: TextCustomEditor__PlainTextEditor, callback: *const fn () callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextEditor_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: TextCustomEditor__PlainTextEditor, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextCustomEditor__PlainTextEditor_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: TextCustomEditor__PlainTextEditor, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextCustomEditor__PlainTextEditor_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextEditor_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: TextCustomEditor__PlainTextEditor, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextCustomEditor__PlainTextEditor_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: TextCustomEditor__PlainTextEditor, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextCustomEditor__PlainTextEditor_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, QMetaMethod) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditor_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: TextCustomEditor__PlainTextEditor, metricA: i32, metricB: i32) f64 {
        return qtc.TextCustomEditor__PlainTextEditor_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: TextCustomEditor__PlainTextEditor, metricA: i32, metricB: i32) f64 {
        return qtc.TextCustomEditor__PlainTextEditor_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextCustomEditor__PlainTextEditor`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, i32, i32) callconv(.c) f64) void {
        qtc.TextCustomEditor__PlainTextEditor_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditor, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: TextCustomEditor__PlainTextEditor, callback: *const fn (TextCustomEditor__PlainTextEditor, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditor.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextCustomEditor__PlainTextEditor `
    ///
    pub fn delete(self: TextCustomEditor__PlainTextEditor) void {
        qtc.TextCustomEditor__PlainTextEditor_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const SupportFeature = enum(i32) {
        pub const None: i32 = 0;
        pub const Search: i32 = 1;
        pub const SpellChecking: i32 = 2;
        pub const TextToSpeech: i32 = 4;
        pub const AllowWebShortcut: i32 = 8;
        pub const Emoji: i32 = 16;
    };
};
