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
const QIODevice = @import("libqt6").QIODevice;
const QIcon = @import("libqt6").QIcon;
const QImage = @import("libqt6").QImage;
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
const QsciCommandSet = @import("libqt6").QsciCommandSet;
const QsciDocument = @import("libqt6").QsciDocument;
const QsciLexer = @import("libqt6").QsciLexer;
const QsciScintillaBase = @import("libqt6").QsciScintillaBase;
const QsciStyle = @import("libqt6").QsciStyle;
const QsciStyledText = @import("libqt6").QsciStyledText;
const builtin = @import("builtin");
const qabstractscrollarea_enums = @import("../libqabstractscrollarea.zig").enums;
const qframe_enums = @import("../libqframe.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsciscintilla_enums = enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
pub const QsciScintilla = extern struct {
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QsciScintilla,

    pub const _is_QsciScintilla = {};
    pub const _is_QsciScintillaBase = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QsciScintilla object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QsciScintilla {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QsciScintilla_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QsciScintilla object.
    ///
    pub fn New2() QsciScintilla {
        return .{ .ptr = qtc.QsciScintilla_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MetaObject(self: QsciScintilla) QMetaObject {
        return .{ .ptr = qtc.QsciScintilla_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QsciScintilla, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QsciScintilla_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperMetaObject(self: QsciScintilla) QMetaObject {
        return .{ .ptr = qtc.QsciScintilla_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QsciScintilla, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciScintilla_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QsciScintilla_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QsciScintilla, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciScintilla_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QsciScintilla, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciScintilla_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QsciScintilla_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QsciScintilla, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciScintilla_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: i32 `
    ///
    /// ` context_start: *i32 `
    ///
    /// ` last_word_start: *i32 `
    ///
    pub fn ApiContext(self: QsciScintilla, allocator: std.mem.Allocator, pos: i32, context_start: *i32, last_word_start: *i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciScintilla_ApiContext(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(context_start), @ptrCast(last_word_start));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsciscintilla.ApiContext: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsciscintilla.ApiContext: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, pos: i32, context_start: *i32, last_word_start: *i32) callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnApiContext(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, *i32, *i32) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QsciScintilla_OnApiContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperApiContext` instead
    ///
    pub const QBaseApiContext = SuperApiContext;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` pos: i32 `
    ///
    /// ` context_start: *i32 `
    ///
    /// ` last_word_start: *i32 `
    ///
    pub fn SuperApiContext(self: QsciScintilla, allocator: std.mem.Allocator, pos: i32, context_start: *i32, last_word_start: *i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciScintilla_SuperApiContext(@ptrCast(self.ptr), @bitCast(pos), @ptrCast(context_start), @ptrCast(last_word_start));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qsciscintilla.ApiContext: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsciscintilla.ApiContext: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` style: i32 `
    ///
    pub fn Annotate(self: QsciScintilla, line: i32, text: []const u8, style: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_Annotate(@ptrCast(self.ptr), @bitCast(line), text_str, @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` style: QsciStyle `
    ///
    pub fn Annotate2(self: QsciScintilla, line: i32, text: []const u8, style: anytype) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(style)._is_QsciStyle;
        qtc.QsciScintilla_Annotate2(@ptrCast(self.ptr), @bitCast(line), text_str, @ptrCast(style.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` text: QsciStyledText `
    ///
    pub fn Annotate3(self: QsciScintilla, line: i32, text: anytype) void {
        comptime _ = @TypeOf(text)._is_QsciStyledText;
        qtc.QsciScintilla_Annotate3(@ptrCast(self.ptr), @bitCast(line), @ptrCast(text.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` line: i32 `
    ///
    pub fn Annotation(self: QsciScintilla, allocator: std.mem.Allocator, line: i32) []const u8 {
        var _str = qtc.QsciScintilla_Annotation(@ptrCast(self.ptr), @bitCast(line));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Annotation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.AnnotationDisplay `
    ///
    pub fn AnnotationDisplay(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_AnnotationDisplay(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ClearAnnotations(self: QsciScintilla) void {
        qtc.QsciScintilla_ClearAnnotations(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn AutoCompletionCaseSensitivity(self: QsciScintilla) bool {
        return qtc.QsciScintilla_AutoCompletionCaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn AutoCompletionFillupsEnabled(self: QsciScintilla) bool {
        return qtc.QsciScintilla_AutoCompletionFillupsEnabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn AutoCompletionReplaceWord(self: QsciScintilla) bool {
        return qtc.QsciScintilla_AutoCompletionReplaceWord(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn AutoCompletionShowSingle(self: QsciScintilla) bool {
        return qtc.QsciScintilla_AutoCompletionShowSingle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.AutoCompletionSource `
    ///
    pub fn AutoCompletionSource(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_AutoCompletionSource(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn AutoCompletionThreshold(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_AutoCompletionThreshold(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.AutoCompletionUseSingle `
    ///
    pub fn AutoCompletionUseSingle(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_AutoCompletionUseSingle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn AutoIndent(self: QsciScintilla) bool {
        return qtc.QsciScintilla_AutoIndent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn BackspaceUnindents(self: QsciScintilla) bool {
        return qtc.QsciScintilla_BackspaceUnindents(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn BeginUndoAction(self: QsciScintilla) void {
        qtc.QsciScintilla_BeginUndoAction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.BraceMatch `
    ///
    pub fn BraceMatching(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_BraceMatching(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn Bytes(self: QsciScintilla, allocator: std.mem.Allocator, start: i32, end: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QsciScintilla_Bytes(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintilla.Bytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.CallTipsPosition `
    ///
    pub fn CallTipsPosition(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_CallTipsPosition(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.CallTipsStyle `
    ///
    pub fn CallTipsStyle(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_CallTipsStyle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn CallTipsVisible(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_CallTipsVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn CancelFind(self: QsciScintilla) void {
        qtc.QsciScintilla_CancelFind(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn CancelList(self: QsciScintilla) void {
        qtc.QsciScintilla_CancelList(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn CaseSensitive(self: QsciScintilla) bool {
        return qtc.QsciScintilla_CaseSensitive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ClearFolds(self: QsciScintilla) void {
        qtc.QsciScintilla_ClearFolds(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` lineFrom: i32 `
    ///
    /// ` indexFrom: i32 `
    ///
    /// ` lineTo: i32 `
    ///
    /// ` indexTo: i32 `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn ClearIndicatorRange(self: QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32, indicatorNumber: i32) void {
        qtc.QsciScintilla_ClearIndicatorRange(@ptrCast(self.ptr), @bitCast(lineFrom), @bitCast(indexFrom), @bitCast(lineTo), @bitCast(indexTo), @bitCast(indicatorNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ClearRegisteredImages(self: QsciScintilla) void {
        qtc.QsciScintilla_ClearRegisteredImages(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Color(self: QsciScintilla) QColor {
        return .{ .ptr = qtc.QsciScintilla_Color(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ContractedFolds(self: QsciScintilla, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QsciScintilla_ContractedFolds(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("qsciscintilla.ContractedFolds: Memory allocation failed");
        const _data: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.EolMode `
    ///
    pub fn ConvertEols(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_ConvertEols(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn CreateStandardContextMenu(self: QsciScintilla) QMenu {
        return .{ .ptr = qtc.QsciScintilla_CreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Document(self: QsciScintilla) QsciDocument {
        return .{ .ptr = qtc.QsciScintilla_Document(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn EndUndoAction(self: QsciScintilla) void {
        qtc.QsciScintilla_EndUndoAction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn EdgeColor(self: QsciScintilla) QColor {
        return .{ .ptr = qtc.QsciScintilla_EdgeColor(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn EdgeColumn(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_EdgeColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.EdgeMode `
    ///
    pub fn EdgeMode(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_EdgeMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` f: QFont `
    ///
    pub fn SetFont(self: QsciScintilla, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciScintilla_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.EolMode `
    ///
    pub fn EolMode(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_EolMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn EolVisibility(self: QsciScintilla) bool {
        return qtc.QsciScintilla_EolVisibility(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ExtraAscent(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_ExtraAscent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ExtraDescent(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_ExtraDescent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` lineFrom: i32 `
    ///
    /// ` indexFrom: i32 `
    ///
    /// ` lineTo: i32 `
    ///
    /// ` indexTo: i32 `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn FillIndicatorRange(self: QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32, indicatorNumber: i32) void {
        qtc.QsciScintilla_FillIndicatorRange(@ptrCast(self.ptr), @bitCast(lineFrom), @bitCast(indexFrom), @bitCast(lineTo), @bitCast(indexTo), @bitCast(indicatorNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` expr: []const u8 `
    ///
    /// ` re: bool `
    ///
    /// ` cs: bool `
    ///
    /// ` wo: bool `
    ///
    /// ` wrap: bool `
    ///
    /// ` forward: bool `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    /// ` show: bool `
    ///
    /// ` posix: bool `
    ///
    /// ` cxx11: bool `
    ///
    pub fn FindFirst(self: QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = qtc.libqt_string{
            .len = expr.len,
            .data = expr.ptr,
        };
        return qtc.QsciScintilla_FindFirst(@ptrCast(self.ptr), expr_str, re, cs, wo, wrap, forward, @bitCast(line), @bitCast(index), show, posix, cxx11);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, expr: [*:0]const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, show: bool, posix: bool, cxx11: bool) callconv(.c) bool `
    ///
    pub fn OnFindFirst(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8, bool, bool, bool, bool, bool, i32, i32, bool, bool, bool) callconv(.c) bool) void {
        qtc.QsciScintilla_OnFindFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFindFirst` instead
    ///
    pub const QBaseFindFirst = SuperFindFirst;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` expr: []const u8 `
    ///
    /// ` re: bool `
    ///
    /// ` cs: bool `
    ///
    /// ` wo: bool `
    ///
    /// ` wrap: bool `
    ///
    /// ` forward: bool `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    /// ` show: bool `
    ///
    /// ` posix: bool `
    ///
    /// ` cxx11: bool `
    ///
    pub fn SuperFindFirst(self: QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = qtc.libqt_string{
            .len = expr.len,
            .data = expr.ptr,
        };
        return qtc.QsciScintilla_SuperFindFirst(@ptrCast(self.ptr), expr_str, re, cs, wo, wrap, forward, @bitCast(line), @bitCast(index), show, posix, cxx11);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` expr: []const u8 `
    ///
    /// ` re: bool `
    ///
    /// ` cs: bool `
    ///
    /// ` wo: bool `
    ///
    /// ` forward: bool `
    ///
    /// ` show: bool `
    ///
    /// ` posix: bool `
    ///
    /// ` cxx11: bool `
    ///
    pub fn FindFirstInSelection(self: QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = qtc.libqt_string{
            .len = expr.len,
            .data = expr.ptr,
        };
        return qtc.QsciScintilla_FindFirstInSelection(@ptrCast(self.ptr), expr_str, re, cs, wo, forward, show, posix, cxx11);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, expr: [*:0]const u8, re: bool, cs: bool, wo: bool, forward: bool, show: bool, posix: bool, cxx11: bool) callconv(.c) bool `
    ///
    pub fn OnFindFirstInSelection(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8, bool, bool, bool, bool, bool, bool, bool) callconv(.c) bool) void {
        qtc.QsciScintilla_OnFindFirstInSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFindFirstInSelection` instead
    ///
    pub const QBaseFindFirstInSelection = SuperFindFirstInSelection;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` expr: []const u8 `
    ///
    /// ` re: bool `
    ///
    /// ` cs: bool `
    ///
    /// ` wo: bool `
    ///
    /// ` forward: bool `
    ///
    /// ` show: bool `
    ///
    /// ` posix: bool `
    ///
    /// ` cxx11: bool `
    ///
    pub fn SuperFindFirstInSelection(self: QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = qtc.libqt_string{
            .len = expr.len,
            .data = expr.ptr,
        };
        return qtc.QsciScintilla_SuperFindFirstInSelection(@ptrCast(self.ptr), expr_str, re, cs, wo, forward, show, posix, cxx11);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FindNext(self: QsciScintilla) bool {
        return qtc.QsciScintilla_FindNext(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFindNext(self: QsciScintilla, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintilla_OnFindNext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFindNext` instead
    ///
    pub const QBaseFindNext = SuperFindNext;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperFindNext(self: QsciScintilla) bool {
        return qtc.QsciScintilla_SuperFindNext(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` brace: *isize `
    ///
    /// ` other: *isize `
    ///
    /// ` mode: qsciscintilla_enums.BraceMatch `
    ///
    pub fn FindMatchingBrace(self: QsciScintilla, brace: *isize, other: *isize, mode: i32) bool {
        switch (builtin.os.tag) {
            .linux, .freebsd => {},
            else => @compileError("Unsupported operating system"),
        }

        return qtc.QsciScintilla_FindMatchingBrace(@ptrCast(self.ptr), @ptrCast(brace), @ptrCast(other), @bitCast(mode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FirstVisibleLine(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_FirstVisibleLine(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.FoldStyle `
    ///
    pub fn Folding(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_Folding(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: *i32 `
    ///
    /// ` index: *i32 `
    ///
    pub fn GetCursorPosition(self: QsciScintilla, line: *i32, index: *i32) void {
        qtc.QsciScintilla_GetCursorPosition(@ptrCast(self.ptr), @ptrCast(line), @ptrCast(index));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` lineFrom: *i32 `
    ///
    /// ` indexFrom: *i32 `
    ///
    /// ` lineTo: *i32 `
    ///
    /// ` indexTo: *i32 `
    ///
    pub fn GetSelection(self: QsciScintilla, lineFrom: *i32, indexFrom: *i32, lineTo: *i32, indexTo: *i32) void {
        qtc.QsciScintilla_GetSelection(@ptrCast(self.ptr), @ptrCast(lineFrom), @ptrCast(indexFrom), @ptrCast(lineTo), @ptrCast(indexTo));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn HasSelectedText(self: QsciScintilla) bool {
        return qtc.QsciScintilla_HasSelectedText(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn Indentation(self: QsciScintilla, line: i32) i32 {
        return qtc.QsciScintilla_Indentation(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IndentationGuides(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IndentationGuides(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IndentationsUseTabs(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IndentationsUseTabs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IndentationWidth(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_IndentationWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` style: qsciscintilla_enums.IndicatorStyle `
    ///
    pub fn IndicatorDefine(self: QsciScintilla, style: i32) i32 {
        return qtc.QsciScintilla_IndicatorDefine(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn IndicatorDrawUnder(self: QsciScintilla, indicatorNumber: i32) bool {
        return qtc.QsciScintilla_IndicatorDrawUnder(@ptrCast(self.ptr), @bitCast(indicatorNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsCallTipActive(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsCallTipActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsListActive(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsListActive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsModified(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsModified(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsReadOnly(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsRedoAvailable(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsRedoAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsUndoAvailable(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsUndoAvailable(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsUtf8(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsUtf8(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` ch: u8 `
    ///
    pub fn IsWordCharacter(self: QsciScintilla, ch: u8) bool {
        return qtc.QsciScintilla_IsWordCharacter(@ptrCast(self.ptr), @bitCast(ch));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` point: QPoint `
    ///
    pub fn LineAt(self: QsciScintilla, point: anytype) i32 {
        comptime _ = @TypeOf(point)._is_QPoint;
        return qtc.QsciScintilla_LineAt(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: i32 `
    ///
    /// ` line: *i32 `
    ///
    /// ` index: *i32 `
    ///
    pub fn LineIndexFromPosition(self: QsciScintilla, position: i32, line: *i32, index: *i32) void {
        qtc.QsciScintilla_LineIndexFromPosition(@ptrCast(self.ptr), @bitCast(position), @ptrCast(line), @ptrCast(index));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn LineLength(self: QsciScintilla, line: i32) i32 {
        return qtc.QsciScintilla_LineLength(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Lines(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_Lines(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Length(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_Length(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Lexer(self: QsciScintilla) QsciLexer {
        return .{ .ptr = qtc.QsciScintilla_Lexer(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    pub fn MarginBackgroundColor(self: QsciScintilla, margin: i32) QColor {
        return .{ .ptr = qtc.QsciScintilla_MarginBackgroundColor(@ptrCast(self.ptr), @bitCast(margin)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    pub fn MarginLineNumbers(self: QsciScintilla, margin: i32) bool {
        return qtc.QsciScintilla_MarginLineNumbers(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    pub fn MarginMarkerMask(self: QsciScintilla, margin: i32) i32 {
        return qtc.QsciScintilla_MarginMarkerMask(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MarginOptions(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_MarginOptions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    pub fn MarginSensitivity(self: QsciScintilla, margin: i32) bool {
        return qtc.QsciScintilla_MarginSensitivity(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.MarginType `
    ///
    pub fn MarginType(self: QsciScintilla, margin: i32) i32 {
        return qtc.QsciScintilla_MarginType(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    pub fn MarginWidth(self: QsciScintilla, margin: i32) i32 {
        return qtc.QsciScintilla_MarginWidth(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Margins(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_Margins(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` sym: qsciscintilla_enums.MarkerSymbol `
    ///
    pub fn MarkerDefine(self: QsciScintilla, sym: i32) i32 {
        return qtc.QsciScintilla_MarkerDefine(@ptrCast(self.ptr), @bitCast(sym));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` ch: u8 `
    ///
    pub fn MarkerDefine2(self: QsciScintilla, ch: u8) i32 {
        return qtc.QsciScintilla_MarkerDefine2(@ptrCast(self.ptr), @bitCast(ch));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn MarkerDefine3(self: QsciScintilla, pm: anytype) i32 {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        return qtc.QsciScintilla_MarkerDefine3(@ptrCast(self.ptr), @ptrCast(pm.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` im: QImage `
    ///
    pub fn MarkerDefine4(self: QsciScintilla, im: anytype) i32 {
        comptime _ = @TypeOf(im)._is_QImage;
        return qtc.QsciScintilla_MarkerDefine4(@ptrCast(self.ptr), @ptrCast(im.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    /// ` markerNumber: i32 `
    ///
    pub fn MarkerAdd(self: QsciScintilla, linenr: i32, markerNumber: i32) i32 {
        return qtc.QsciScintilla_MarkerAdd(@ptrCast(self.ptr), @bitCast(linenr), @bitCast(markerNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    pub fn MarkersAtLine(self: QsciScintilla, linenr: i32) u32 {
        return qtc.QsciScintilla_MarkersAtLine(@ptrCast(self.ptr), @bitCast(linenr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    pub fn MarkerDelete(self: QsciScintilla, linenr: i32) void {
        qtc.QsciScintilla_MarkerDelete(@ptrCast(self.ptr), @bitCast(linenr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MarkerDeleteAll(self: QsciScintilla) void {
        qtc.QsciScintilla_MarkerDeleteAll(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mhandle: i32 `
    ///
    pub fn MarkerDeleteHandle(self: QsciScintilla, mhandle: i32) void {
        qtc.QsciScintilla_MarkerDeleteHandle(@ptrCast(self.ptr), @bitCast(mhandle));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mhandle: i32 `
    ///
    pub fn MarkerLine(self: QsciScintilla, mhandle: i32) i32 {
        return qtc.QsciScintilla_MarkerLine(@ptrCast(self.ptr), @bitCast(mhandle));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn MarkerFindNext(self: QsciScintilla, linenr: i32, mask: u32) i32 {
        return qtc.QsciScintilla_MarkerFindNext(@ptrCast(self.ptr), @bitCast(linenr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    /// ` mask: u32 `
    ///
    pub fn MarkerFindPrevious(self: QsciScintilla, linenr: i32, mask: u32) i32 {
        return qtc.QsciScintilla_MarkerFindPrevious(@ptrCast(self.ptr), @bitCast(linenr), @bitCast(mask));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn OverwriteMode(self: QsciScintilla) bool {
        return qtc.QsciScintilla_OverwriteMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Paper(self: QsciScintilla) QColor {
        return .{ .ptr = qtc.QsciScintilla_Paper(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    pub fn PositionFromLineIndex(self: QsciScintilla, line: i32, index: i32) i32 {
        return qtc.QsciScintilla_PositionFromLineIndex(@ptrCast(self.ptr), @bitCast(line), @bitCast(index));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` io: QIODevice `
    ///
    pub fn Read(self: QsciScintilla, io: anytype) bool {
        comptime _ = @TypeOf(io)._is_QIODevice;
        return qtc.QsciScintilla_Read(@ptrCast(self.ptr), @ptrCast(io.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn Recolor(self: QsciScintilla, start: i32, end: i32) void {
        qtc.QsciScintilla_Recolor(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn OnRecolor(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnRecolor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRecolor` instead
    ///
    pub const QBaseRecolor = SuperRecolor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRecolor(self: QsciScintilla, start: i32, end: i32) void {
        qtc.QsciScintilla_SuperRecolor(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn RegisterImage(self: QsciScintilla, id: i32, pm: anytype) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QsciScintilla_RegisterImage(@ptrCast(self.ptr), @bitCast(id), @ptrCast(pm.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    /// ` im: QImage `
    ///
    pub fn RegisterImage2(self: QsciScintilla, id: i32, im: anytype) void {
        comptime _ = @TypeOf(im)._is_QImage;
        qtc.QsciScintilla_RegisterImage2(@ptrCast(self.ptr), @bitCast(id), @ptrCast(im.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` replaceStr: []const u8 `
    ///
    pub fn Replace(self: QsciScintilla, replaceStr: []const u8) void {
        const replaceStr_str = qtc.libqt_string{
            .len = replaceStr.len,
            .data = replaceStr.ptr,
        };
        qtc.QsciScintilla_Replace(@ptrCast(self.ptr), replaceStr_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, replaceStr: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnReplace(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnReplace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReplace` instead
    ///
    pub const QBaseReplace = SuperReplace;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` replaceStr: []const u8 `
    ///
    pub fn SuperReplace(self: QsciScintilla, replaceStr: []const u8) void {
        const replaceStr_str = qtc.libqt_string{
            .len = replaceStr.len,
            .data = replaceStr.ptr,
        };
        qtc.QsciScintilla_SuperReplace(@ptrCast(self.ptr), replaceStr_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ResetFoldMarginColors(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetFoldMarginColors(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ResetHotspotBackgroundColor(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetHotspotBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ResetHotspotForegroundColor(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetHotspotForegroundColor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ScrollWidth(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_ScrollWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ScrollWidthTracking(self: QsciScintilla) bool {
        return qtc.QsciScintilla_ScrollWidthTracking(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` fore: QColor `
    ///
    /// ` back: QColor `
    ///
    pub fn SetFoldMarginColors(self: QsciScintilla, fore: anytype, back: anytype) void {
        comptime _ = @TypeOf(fore)._is_QColor;
        comptime _ = @TypeOf(back)._is_QColor;
        qtc.QsciScintilla_SetFoldMarginColors(@ptrCast(self.ptr), @ptrCast(fore.ptr), @ptrCast(back.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` display: qsciscintilla_enums.AnnotationDisplay `
    ///
    pub fn SetAnnotationDisplay(self: QsciScintilla, display: i32) void {
        qtc.QsciScintilla_SetAnnotationDisplay(@ptrCast(self.ptr), @bitCast(display));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoCompletionFillupsEnabled(self: QsciScintilla, enabled: bool) void {
        qtc.QsciScintilla_SetAutoCompletionFillupsEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` fillups: [:0]const u8 `
    ///
    pub fn SetAutoCompletionFillups(self: QsciScintilla, fillups: [:0]const u8) void {
        const fillups_Cstring = fillups.ptr;
        qtc.QsciScintilla_SetAutoCompletionFillups(@ptrCast(self.ptr), fillups_Cstring);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` separators: []const []const u8 `
    ///
    pub fn SetAutoCompletionWordSeparators(self: QsciScintilla, allocator: std.mem.Allocator, separators: []const []const u8) void {
        const separators_arr = allocator.alloc(qtc.libqt_string, separators.len) catch @panic("qsciscintilla.SetAutoCompletionWordSeparators: Memory allocation failed");
        defer allocator.free(separators_arr);
        for (separators, 0..separators.len) |item, i|
            separators_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const separators_list = qtc.libqt_list{
            .len = separators.len,
            .data = separators_arr.ptr,
        };
        qtc.QsciScintilla_SetAutoCompletionWordSeparators(@ptrCast(self.ptr), separators_list);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetCallTipsBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetCallTipsBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetCallTipsForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetCallTipsForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetCallTipsHighlightColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetCallTipsHighlightColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: qsciscintilla_enums.CallTipsPosition `
    ///
    pub fn SetCallTipsPosition(self: QsciScintilla, position: i32) void {
        qtc.QsciScintilla_SetCallTipsPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` style: qsciscintilla_enums.CallTipsStyle `
    ///
    pub fn SetCallTipsStyle(self: QsciScintilla, style: i32) void {
        qtc.QsciScintilla_SetCallTipsStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` nr: i32 `
    ///
    pub fn SetCallTipsVisible(self: QsciScintilla, nr: i32) void {
        qtc.QsciScintilla_SetCallTipsVisible(@ptrCast(self.ptr), @bitCast(nr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` folds: []i32 `
    ///
    pub fn SetContractedFolds(self: QsciScintilla, folds: []i32) void {
        const folds_list = qtc.libqt_list{
            .len = folds.len,
            .data = folds.ptr,
        };
        qtc.QsciScintilla_SetContractedFolds(@ptrCast(self.ptr), folds_list);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` document: QsciDocument `
    ///
    pub fn SetDocument(self: QsciScintilla, document: anytype) void {
        comptime _ = @TypeOf(document)._is_QsciDocument;
        qtc.QsciScintilla_SetDocument(@ptrCast(self.ptr), @ptrCast(document.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` colnr: i32 `
    ///
    /// ` col: QColor `
    ///
    pub fn AddEdgeColumn(self: QsciScintilla, colnr: i32, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_AddEdgeColumn(@ptrCast(self.ptr), @bitCast(colnr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ClearEdgeColumns(self: QsciScintilla) void {
        qtc.QsciScintilla_ClearEdgeColumns(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetEdgeColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetEdgeColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` colnr: i32 `
    ///
    pub fn SetEdgeColumn(self: QsciScintilla, colnr: i32) void {
        qtc.QsciScintilla_SetEdgeColumn(@ptrCast(self.ptr), @bitCast(colnr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.EdgeMode `
    ///
    pub fn SetEdgeMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SetEdgeMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    pub fn SetFirstVisibleLine(self: QsciScintilla, linenr: i32) void {
        qtc.QsciScintilla_SetFirstVisibleLine(@ptrCast(self.ptr), @bitCast(linenr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` under: bool `
    ///
    pub fn SetIndicatorDrawUnder(self: QsciScintilla, under: bool) void {
        qtc.QsciScintilla_SetIndicatorDrawUnder(@ptrCast(self.ptr), under);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetIndicatorForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndicatorForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetIndicatorHoverForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndicatorHoverForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` style: qsciscintilla_enums.IndicatorStyle `
    ///
    pub fn SetIndicatorHoverStyle(self: QsciScintilla, style: i32) void {
        qtc.QsciScintilla_SetIndicatorHoverStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetIndicatorOutlineColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndicatorOutlineColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` col: QColor `
    ///
    pub fn SetMarginBackgroundColor(self: QsciScintilla, margin: i32, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarginBackgroundColor(@ptrCast(self.ptr), @bitCast(margin), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` options: i32 `
    ///
    pub fn SetMarginOptions(self: QsciScintilla, options: i32) void {
        qtc.QsciScintilla_SetMarginOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` style: i32 `
    ///
    pub fn SetMarginText(self: QsciScintilla, line: i32, text: []const u8, style: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_SetMarginText(@ptrCast(self.ptr), @bitCast(line), text_str, @bitCast(style));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` style: QsciStyle `
    ///
    pub fn SetMarginText2(self: QsciScintilla, line: i32, text: []const u8, style: anytype) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(style)._is_QsciStyle;
        qtc.QsciScintilla_SetMarginText2(@ptrCast(self.ptr), @bitCast(line), text_str, @ptrCast(style.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` text: QsciStyledText `
    ///
    pub fn SetMarginText3(self: QsciScintilla, line: i32, text: anytype) void {
        comptime _ = @TypeOf(text)._is_QsciStyledText;
        qtc.QsciScintilla_SetMarginText3(@ptrCast(self.ptr), @bitCast(line), @ptrCast(text.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` typeVal: qsciscintilla_enums.MarginType `
    ///
    pub fn SetMarginType(self: QsciScintilla, margin: i32, typeVal: i32) void {
        qtc.QsciScintilla_SetMarginType(@ptrCast(self.ptr), @bitCast(margin), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ClearMarginText(self: QsciScintilla) void {
        qtc.QsciScintilla_ClearMarginText(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margins: i32 `
    ///
    pub fn SetMargins(self: QsciScintilla, margins: i32) void {
        qtc.QsciScintilla_SetMargins(@ptrCast(self.ptr), @bitCast(margins));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetMarkerBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarkerBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetMarkerForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarkerForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetMatchedBraceBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMatchedBraceBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetMatchedBraceForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMatchedBraceForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn SetMatchedBraceIndicator(self: QsciScintilla, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetMatchedBraceIndicator(@ptrCast(self.ptr), @bitCast(indicatorNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ResetMatchedBraceIndicator(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetMatchedBraceIndicator(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` pixelWidth: i32 `
    ///
    pub fn SetScrollWidth(self: QsciScintilla, pixelWidth: i32) void {
        qtc.QsciScintilla_SetScrollWidth(@ptrCast(self.ptr), @bitCast(pixelWidth));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetScrollWidthTracking(self: QsciScintilla, enabled: bool) void {
        qtc.QsciScintilla_SetScrollWidthTracking(@ptrCast(self.ptr), enabled);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.TabDrawMode `
    ///
    pub fn SetTabDrawMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SetTabDrawMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetUnmatchedBraceBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetUnmatchedBraceBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetUnmatchedBraceForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetUnmatchedBraceForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn SetUnmatchedBraceIndicator(self: QsciScintilla, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetUnmatchedBraceIndicator(@ptrCast(self.ptr), @bitCast(indicatorNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ResetUnmatchedBraceIndicator(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetUnmatchedBraceIndicator(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` endFlag: qsciscintilla_enums.WrapVisualFlag `
    ///
    pub fn SetWrapVisualFlags(self: QsciScintilla, endFlag: i32) void {
        qtc.QsciScintilla_SetWrapVisualFlags(@ptrCast(self.ptr), @bitCast(endFlag));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedText(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QsciScintilla_SelectedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SelectionToEol(self: QsciScintilla) bool {
        return qtc.QsciScintilla_SelectionToEol(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetHotspotBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetHotspotBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetHotspotForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetHotspotForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn SetHotspotUnderline(self: QsciScintilla, enable: bool) void {
        qtc.QsciScintilla_SetHotspotUnderline(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn SetHotspotWrap(self: QsciScintilla, enable: bool) void {
        qtc.QsciScintilla_SetHotspotWrap(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` filled: bool `
    ///
    pub fn SetSelectionToEol(self: QsciScintilla, filled: bool) void {
        qtc.QsciScintilla_SetSelectionToEol(@ptrCast(self.ptr), filled);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` extra: i32 `
    ///
    pub fn SetExtraAscent(self: QsciScintilla, extra: i32) void {
        qtc.QsciScintilla_SetExtraAscent(@ptrCast(self.ptr), @bitCast(extra));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` extra: i32 `
    ///
    pub fn SetExtraDescent(self: QsciScintilla, extra: i32) void {
        qtc.QsciScintilla_SetExtraDescent(@ptrCast(self.ptr), @bitCast(extra));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` overwrite: bool `
    ///
    pub fn SetOverwriteMode(self: QsciScintilla, overwrite: bool) void {
        qtc.QsciScintilla_SetOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetWhitespaceBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetWhitespaceBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetWhitespaceForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetWhitespaceForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` size: i32 `
    ///
    pub fn SetWhitespaceSize(self: QsciScintilla, size: i32) void {
        qtc.QsciScintilla_SetWhitespaceSize(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.WrapIndentMode `
    ///
    pub fn SetWrapIndentMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SetWrapIndentMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` id: i32 `
    ///
    /// ` list: []const []const u8 `
    ///
    pub fn ShowUserList(self: QsciScintilla, allocator: std.mem.Allocator, id: i32, list: []const []const u8) void {
        const list_arr = allocator.alloc(qtc.libqt_string, list.len) catch @panic("qsciscintilla.ShowUserList: Memory allocation failed");
        defer allocator.free(list_arr);
        for (list, 0..list.len) |item, i|
            list_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = list_arr.ptr,
        };
        qtc.QsciScintilla_ShowUserList(@ptrCast(self.ptr), @bitCast(id), list_list);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn StandardCommands(self: QsciScintilla) QsciCommandSet {
        return .{ .ptr = qtc.QsciScintilla_StandardCommands(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.TabDrawMode `
    ///
    pub fn TabDrawMode(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_TabDrawMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn TabIndents(self: QsciScintilla) bool {
        return qtc.QsciScintilla_TabIndents(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn TabWidth(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_TabWidth(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QsciScintilla_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` line: i32 `
    ///
    pub fn Text2(self: QsciScintilla, allocator: std.mem.Allocator, line: i32) []const u8 {
        var _str = qtc.QsciScintilla_Text2(@ptrCast(self.ptr), @bitCast(line));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Text2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn Text3(self: QsciScintilla, allocator: std.mem.Allocator, start: i32, end: i32) []const u8 {
        var _str = qtc.QsciScintilla_Text3(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Text3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    pub fn TextHeight(self: QsciScintilla, linenr: i32) i32 {
        return qtc.QsciScintilla_TextHeight(@ptrCast(self.ptr), @bitCast(linenr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn WhitespaceSize(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_WhitespaceSize(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.WhitespaceVisibility `
    ///
    pub fn WhitespaceVisibility(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_WhitespaceVisibility(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    pub fn WordAtLineIndex(self: QsciScintilla, allocator: std.mem.Allocator, line: i32, index: i32) []const u8 {
        var _str = qtc.QsciScintilla_WordAtLineIndex(@ptrCast(self.ptr), @bitCast(line), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WordAtLineIndex: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` point: QPoint `
    ///
    pub fn WordAtPoint(self: QsciScintilla, allocator: std.mem.Allocator, point: anytype) []const u8 {
        comptime _ = @TypeOf(point)._is_QPoint;
        var _str = qtc.QsciScintilla_WordAtPoint(@ptrCast(self.ptr), @ptrCast(point.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WordAtPoint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn WordCharacters(self: QsciScintilla) [:0]const u8 {
        const _ret = qtc.QsciScintilla_WordCharacters(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.WrapMode `
    ///
    pub fn WrapMode(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_WrapMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qsciscintilla_enums.WrapIndentMode `
    ///
    pub fn WrapIndentMode(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_WrapIndentMode(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` io: QIODevice `
    ///
    pub fn Write(self: QsciScintilla, io: anytype) bool {
        comptime _ = @TypeOf(io)._is_QIODevice;
        return qtc.QsciScintilla_Write(@ptrCast(self.ptr), @ptrCast(io.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Append(self: QsciScintilla, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_Append(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnAppend(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnAppend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAppend` instead
    ///
    pub const QBaseAppend = SuperAppend;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperAppend(self: QsciScintilla, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_SuperAppend(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn AutoCompleteFromAll(self: QsciScintilla) void {
        qtc.QsciScintilla_AutoCompleteFromAll(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAutoCompleteFromAll(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnAutoCompleteFromAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAutoCompleteFromAll` instead
    ///
    pub const QBaseAutoCompleteFromAll = SuperAutoCompleteFromAll;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperAutoCompleteFromAll(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperAutoCompleteFromAll(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn AutoCompleteFromAPIs(self: QsciScintilla) void {
        qtc.QsciScintilla_AutoCompleteFromAPIs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAutoCompleteFromAPIs(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnAutoCompleteFromAPIs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAutoCompleteFromAPIs` instead
    ///
    pub const QBaseAutoCompleteFromAPIs = SuperAutoCompleteFromAPIs;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperAutoCompleteFromAPIs(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperAutoCompleteFromAPIs(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn AutoCompleteFromDocument(self: QsciScintilla) void {
        qtc.QsciScintilla_AutoCompleteFromDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAutoCompleteFromDocument(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnAutoCompleteFromDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAutoCompleteFromDocument` instead
    ///
    pub const QBaseAutoCompleteFromDocument = SuperAutoCompleteFromDocument;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperAutoCompleteFromDocument(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperAutoCompleteFromDocument(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn CallTip(self: QsciScintilla) void {
        qtc.QsciScintilla_CallTip(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCallTip(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnCallTip(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCallTip` instead
    ///
    pub const QBaseCallTip = SuperCallTip;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperCallTip(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperCallTip(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Clear(self: QsciScintilla) void {
        qtc.QsciScintilla_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClear(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClear` instead
    ///
    pub const QBaseClear = SuperClear;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperClear(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperClear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Copy(self: QsciScintilla) void {
        qtc.QsciScintilla_Copy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCopy(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnCopy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCopy` instead
    ///
    pub const QBaseCopy = SuperCopy;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperCopy(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperCopy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Cut(self: QsciScintilla) void {
        qtc.QsciScintilla_Cut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCut(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnCut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCut` instead
    ///
    pub const QBaseCut = SuperCut;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperCut(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperCut(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn EnsureCursorVisible(self: QsciScintilla) void {
        qtc.QsciScintilla_EnsureCursorVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEnsureCursorVisible(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnEnsureCursorVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEnsureCursorVisible` instead
    ///
    pub const QBaseEnsureCursorVisible = SuperEnsureCursorVisible;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperEnsureCursorVisible(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperEnsureCursorVisible(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn EnsureLineVisible(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_EnsureLineVisible(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, line: i32) callconv(.c) void `
    ///
    pub fn OnEnsureLineVisible(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnEnsureLineVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEnsureLineVisible` instead
    ///
    pub const QBaseEnsureLineVisible = SuperEnsureLineVisible;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn SuperEnsureLineVisible(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_SuperEnsureLineVisible(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` children: bool `
    ///
    pub fn FoldAll(self: QsciScintilla, children: bool) void {
        qtc.QsciScintilla_FoldAll(@ptrCast(self.ptr), children);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, children: bool) callconv(.c) void `
    ///
    pub fn OnFoldAll(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnFoldAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFoldAll` instead
    ///
    pub const QBaseFoldAll = SuperFoldAll;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` children: bool `
    ///
    pub fn SuperFoldAll(self: QsciScintilla, children: bool) void {
        qtc.QsciScintilla_SuperFoldAll(@ptrCast(self.ptr), children);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn FoldLine(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_FoldLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, line: i32) callconv(.c) void `
    ///
    pub fn OnFoldLine(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnFoldLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFoldLine` instead
    ///
    pub const QBaseFoldLine = SuperFoldLine;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn SuperFoldLine(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_SuperFoldLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn Indent(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_Indent(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, line: i32) callconv(.c) void `
    ///
    pub fn OnIndent(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnIndent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndent` instead
    ///
    pub const QBaseIndent = SuperIndent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn SuperIndent(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_SuperIndent(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` text: []const u8 `
    ///
    pub fn Insert(self: QsciScintilla, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_Insert(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnInsert(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnInsert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsert` instead
    ///
    pub const QBaseInsert = SuperInsert;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperInsert(self: QsciScintilla, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_SuperInsert(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` text: []const u8 `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    pub fn InsertAt(self: QsciScintilla, text: []const u8, line: i32, index: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_InsertAt(@ptrCast(self.ptr), text_str, @bitCast(line), @bitCast(index));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, text: [*:0]const u8, line: i32, index: i32) callconv(.c) void `
    ///
    pub fn OnInsertAt(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnInsertAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperInsertAt` instead
    ///
    pub const QBaseInsertAt = SuperInsertAt;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` text: []const u8 `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperInsertAt(self: QsciScintilla, text: []const u8, line: i32, index: i32) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_SuperInsertAt(@ptrCast(self.ptr), text_str, @bitCast(line), @bitCast(index));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MoveToMatchingBrace(self: QsciScintilla) void {
        qtc.QsciScintilla_MoveToMatchingBrace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnMoveToMatchingBrace(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnMoveToMatchingBrace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMoveToMatchingBrace` instead
    ///
    pub const QBaseMoveToMatchingBrace = SuperMoveToMatchingBrace;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperMoveToMatchingBrace(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperMoveToMatchingBrace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Paste(self: QsciScintilla) void {
        qtc.QsciScintilla_Paste(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnPaste(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnPaste(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperPaste` instead
    ///
    pub const QBasePaste = SuperPaste;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperPaste(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperPaste(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Redo(self: QsciScintilla) void {
        qtc.QsciScintilla_Redo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRedo(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnRedo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRedo` instead
    ///
    pub const QBaseRedo = SuperRedo;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperRedo(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperRedo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn RemoveSelectedText(self: QsciScintilla) void {
        qtc.QsciScintilla_RemoveSelectedText(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRemoveSelectedText(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnRemoveSelectedText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemoveSelectedText` instead
    ///
    pub const QBaseRemoveSelectedText = SuperRemoveSelectedText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperRemoveSelectedText(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperRemoveSelectedText(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` text: []const u8 `
    ///
    pub fn ReplaceSelectedText(self: QsciScintilla, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_ReplaceSelectedText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnReplaceSelectedText(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnReplaceSelectedText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperReplaceSelectedText` instead
    ///
    pub const QBaseReplaceSelectedText = SuperReplaceSelectedText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperReplaceSelectedText(self: QsciScintilla, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_SuperReplaceSelectedText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ResetSelectionBackgroundColor(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetSelectionBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResetSelectionBackgroundColor(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnResetSelectionBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResetSelectionBackgroundColor` instead
    ///
    pub const QBaseResetSelectionBackgroundColor = SuperResetSelectionBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperResetSelectionBackgroundColor(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperResetSelectionBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ResetSelectionForegroundColor(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetSelectionForegroundColor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResetSelectionForegroundColor(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnResetSelectionForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResetSelectionForegroundColor` instead
    ///
    pub const QBaseResetSelectionForegroundColor = SuperResetSelectionForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperResetSelectionForegroundColor(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperResetSelectionForegroundColor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` selectVal: bool `
    ///
    pub fn SelectAll(self: QsciScintilla, selectVal: bool) void {
        qtc.QsciScintilla_SelectAll(@ptrCast(self.ptr), selectVal);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, selectVal: bool) callconv(.c) void `
    ///
    pub fn OnSelectAll(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSelectAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelectAll` instead
    ///
    pub const QBaseSelectAll = SuperSelectAll;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` selectVal: bool `
    ///
    pub fn SuperSelectAll(self: QsciScintilla, selectVal: bool) void {
        qtc.QsciScintilla_SuperSelectAll(@ptrCast(self.ptr), selectVal);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SelectToMatchingBrace(self: QsciScintilla) void {
        qtc.QsciScintilla_SelectToMatchingBrace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSelectToMatchingBrace(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnSelectToMatchingBrace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSelectToMatchingBrace` instead
    ///
    pub const QBaseSelectToMatchingBrace = SuperSelectToMatchingBrace;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperSelectToMatchingBrace(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperSelectToMatchingBrace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` cs: bool `
    ///
    pub fn SetAutoCompletionCaseSensitivity(self: QsciScintilla, cs: bool) void {
        qtc.QsciScintilla_SetAutoCompletionCaseSensitivity(@ptrCast(self.ptr), cs);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, cs: bool) callconv(.c) void `
    ///
    pub fn OnSetAutoCompletionCaseSensitivity(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionCaseSensitivity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAutoCompletionCaseSensitivity` instead
    ///
    pub const QBaseSetAutoCompletionCaseSensitivity = SuperSetAutoCompletionCaseSensitivity;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` cs: bool `
    ///
    pub fn SuperSetAutoCompletionCaseSensitivity(self: QsciScintilla, cs: bool) void {
        qtc.QsciScintilla_SuperSetAutoCompletionCaseSensitivity(@ptrCast(self.ptr), cs);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` replace: bool `
    ///
    pub fn SetAutoCompletionReplaceWord(self: QsciScintilla, replace: bool) void {
        qtc.QsciScintilla_SetAutoCompletionReplaceWord(@ptrCast(self.ptr), replace);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, replace: bool) callconv(.c) void `
    ///
    pub fn OnSetAutoCompletionReplaceWord(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionReplaceWord(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAutoCompletionReplaceWord` instead
    ///
    pub const QBaseSetAutoCompletionReplaceWord = SuperSetAutoCompletionReplaceWord;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` replace: bool `
    ///
    pub fn SuperSetAutoCompletionReplaceWord(self: QsciScintilla, replace: bool) void {
        qtc.QsciScintilla_SuperSetAutoCompletionReplaceWord(@ptrCast(self.ptr), replace);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` single: bool `
    ///
    pub fn SetAutoCompletionShowSingle(self: QsciScintilla, single: bool) void {
        qtc.QsciScintilla_SetAutoCompletionShowSingle(@ptrCast(self.ptr), single);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, single: bool) callconv(.c) void `
    ///
    pub fn OnSetAutoCompletionShowSingle(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionShowSingle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAutoCompletionShowSingle` instead
    ///
    pub const QBaseSetAutoCompletionShowSingle = SuperSetAutoCompletionShowSingle;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` single: bool `
    ///
    pub fn SuperSetAutoCompletionShowSingle(self: QsciScintilla, single: bool) void {
        qtc.QsciScintilla_SuperSetAutoCompletionShowSingle(@ptrCast(self.ptr), single);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` source: qsciscintilla_enums.AutoCompletionSource `
    ///
    pub fn SetAutoCompletionSource(self: QsciScintilla, source: i32) void {
        qtc.QsciScintilla_SetAutoCompletionSource(@ptrCast(self.ptr), @bitCast(source));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, source: qsciscintilla_enums.AutoCompletionSource) callconv(.c) void `
    ///
    pub fn OnSetAutoCompletionSource(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAutoCompletionSource` instead
    ///
    pub const QBaseSetAutoCompletionSource = SuperSetAutoCompletionSource;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` source: qsciscintilla_enums.AutoCompletionSource `
    ///
    pub fn SuperSetAutoCompletionSource(self: QsciScintilla, source: i32) void {
        qtc.QsciScintilla_SuperSetAutoCompletionSource(@ptrCast(self.ptr), @bitCast(source));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` thresh: i32 `
    ///
    pub fn SetAutoCompletionThreshold(self: QsciScintilla, thresh: i32) void {
        qtc.QsciScintilla_SetAutoCompletionThreshold(@ptrCast(self.ptr), @bitCast(thresh));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, thresh: i32) callconv(.c) void `
    ///
    pub fn OnSetAutoCompletionThreshold(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionThreshold(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAutoCompletionThreshold` instead
    ///
    pub const QBaseSetAutoCompletionThreshold = SuperSetAutoCompletionThreshold;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` thresh: i32 `
    ///
    pub fn SuperSetAutoCompletionThreshold(self: QsciScintilla, thresh: i32) void {
        qtc.QsciScintilla_SuperSetAutoCompletionThreshold(@ptrCast(self.ptr), @bitCast(thresh));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` single: qsciscintilla_enums.AutoCompletionUseSingle `
    ///
    pub fn SetAutoCompletionUseSingle(self: QsciScintilla, single: i32) void {
        qtc.QsciScintilla_SetAutoCompletionUseSingle(@ptrCast(self.ptr), @bitCast(single));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, single: qsciscintilla_enums.AutoCompletionUseSingle) callconv(.c) void `
    ///
    pub fn OnSetAutoCompletionUseSingle(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionUseSingle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAutoCompletionUseSingle` instead
    ///
    pub const QBaseSetAutoCompletionUseSingle = SuperSetAutoCompletionUseSingle;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` single: qsciscintilla_enums.AutoCompletionUseSingle `
    ///
    pub fn SuperSetAutoCompletionUseSingle(self: QsciScintilla, single: i32) void {
        qtc.QsciScintilla_SuperSetAutoCompletionUseSingle(@ptrCast(self.ptr), @bitCast(single));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` autoindent: bool `
    ///
    pub fn SetAutoIndent(self: QsciScintilla, autoindent: bool) void {
        qtc.QsciScintilla_SetAutoIndent(@ptrCast(self.ptr), autoindent);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, autoindent: bool) callconv(.c) void `
    ///
    pub fn OnSetAutoIndent(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoIndent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetAutoIndent` instead
    ///
    pub const QBaseSetAutoIndent = SuperSetAutoIndent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` autoindent: bool `
    ///
    pub fn SuperSetAutoIndent(self: QsciScintilla, autoindent: bool) void {
        qtc.QsciScintilla_SuperSetAutoIndent(@ptrCast(self.ptr), autoindent);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` bm: qsciscintilla_enums.BraceMatch `
    ///
    pub fn SetBraceMatching(self: QsciScintilla, bm: i32) void {
        qtc.QsciScintilla_SetBraceMatching(@ptrCast(self.ptr), @bitCast(bm));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, bm: qsciscintilla_enums.BraceMatch) callconv(.c) void `
    ///
    pub fn OnSetBraceMatching(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetBraceMatching(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetBraceMatching` instead
    ///
    pub const QBaseSetBraceMatching = SuperSetBraceMatching;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` bm: qsciscintilla_enums.BraceMatch `
    ///
    pub fn SuperSetBraceMatching(self: QsciScintilla, bm: i32) void {
        qtc.QsciScintilla_SuperSetBraceMatching(@ptrCast(self.ptr), @bitCast(bm));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` unindent: bool `
    ///
    pub fn SetBackspaceUnindents(self: QsciScintilla, unindent: bool) void {
        qtc.QsciScintilla_SetBackspaceUnindents(@ptrCast(self.ptr), unindent);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, unindent: bool) callconv(.c) void `
    ///
    pub fn OnSetBackspaceUnindents(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetBackspaceUnindents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetBackspaceUnindents` instead
    ///
    pub const QBaseSetBackspaceUnindents = SuperSetBackspaceUnindents;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` unindent: bool `
    ///
    pub fn SuperSetBackspaceUnindents(self: QsciScintilla, unindent: bool) void {
        qtc.QsciScintilla_SuperSetBackspaceUnindents(@ptrCast(self.ptr), unindent);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetCaretForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetCaretForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, col: QColor) callconv(.c) void `
    ///
    pub fn OnSetCaretForegroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCaretForegroundColor` instead
    ///
    pub const QBaseSetCaretForegroundColor = SuperSetCaretForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SuperSetCaretForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetCaretForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetCaretLineBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetCaretLineBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, col: QColor) callconv(.c) void `
    ///
    pub fn OnSetCaretLineBackgroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretLineBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCaretLineBackgroundColor` instead
    ///
    pub const QBaseSetCaretLineBackgroundColor = SuperSetCaretLineBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SuperSetCaretLineBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetCaretLineBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` width: i32 `
    ///
    pub fn SetCaretLineFrameWidth(self: QsciScintilla, width: i32) void {
        qtc.QsciScintilla_SetCaretLineFrameWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, width: i32) callconv(.c) void `
    ///
    pub fn OnSetCaretLineFrameWidth(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretLineFrameWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCaretLineFrameWidth` instead
    ///
    pub const QBaseSetCaretLineFrameWidth = SuperSetCaretLineFrameWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` width: i32 `
    ///
    pub fn SuperSetCaretLineFrameWidth(self: QsciScintilla, width: i32) void {
        qtc.QsciScintilla_SuperSetCaretLineFrameWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn SetCaretLineVisible(self: QsciScintilla, enable: bool) void {
        qtc.QsciScintilla_SetCaretLineVisible(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, enable: bool) callconv(.c) void `
    ///
    pub fn OnSetCaretLineVisible(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretLineVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCaretLineVisible` instead
    ///
    pub const QBaseSetCaretLineVisible = SuperSetCaretLineVisible;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn SuperSetCaretLineVisible(self: QsciScintilla, enable: bool) void {
        qtc.QsciScintilla_SuperSetCaretLineVisible(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` width: i32 `
    ///
    pub fn SetCaretWidth(self: QsciScintilla, width: i32) void {
        qtc.QsciScintilla_SetCaretWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, width: i32) callconv(.c) void `
    ///
    pub fn OnSetCaretWidth(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCaretWidth` instead
    ///
    pub const QBaseSetCaretWidth = SuperSetCaretWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` width: i32 `
    ///
    pub fn SuperSetCaretWidth(self: QsciScintilla, width: i32) void {
        qtc.QsciScintilla_SuperSetCaretWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` c: QColor `
    ///
    pub fn SetColor(self: QsciScintilla, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciScintilla_SetColor(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, c: QColor) callconv(.c) void `
    ///
    pub fn OnSetColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetColor` instead
    ///
    pub const QBaseSetColor = SuperSetColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` c: QColor `
    ///
    pub fn SuperSetColor(self: QsciScintilla, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciScintilla_SuperSetColor(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    pub fn SetCursorPosition(self: QsciScintilla, line: i32, index: i32) void {
        qtc.QsciScintilla_SetCursorPosition(@ptrCast(self.ptr), @bitCast(line), @bitCast(index));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, line: i32, index: i32) callconv(.c) void `
    ///
    pub fn OnSetCursorPosition(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCursorPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetCursorPosition` instead
    ///
    pub const QBaseSetCursorPosition = SuperSetCursorPosition;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    pub fn SuperSetCursorPosition(self: QsciScintilla, line: i32, index: i32) void {
        qtc.QsciScintilla_SuperSetCursorPosition(@ptrCast(self.ptr), @bitCast(line), @bitCast(index));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.EolMode `
    ///
    pub fn SetEolMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SetEolMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, mode: qsciscintilla_enums.EolMode) callconv(.c) void `
    ///
    pub fn OnSetEolMode(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetEolMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetEolMode` instead
    ///
    pub const QBaseSetEolMode = SuperSetEolMode;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.EolMode `
    ///
    pub fn SuperSetEolMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SuperSetEolMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` visible: bool `
    ///
    pub fn SetEolVisibility(self: QsciScintilla, visible: bool) void {
        qtc.QsciScintilla_SetEolVisibility(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetEolVisibility(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetEolVisibility(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetEolVisibility` instead
    ///
    pub const QBaseSetEolVisibility = SuperSetEolVisibility;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetEolVisibility(self: QsciScintilla, visible: bool) void {
        qtc.QsciScintilla_SuperSetEolVisibility(@ptrCast(self.ptr), visible);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` fold: qsciscintilla_enums.FoldStyle `
    ///
    /// ` margin: i32 `
    ///
    pub fn SetFolding(self: QsciScintilla, fold: i32, margin: i32) void {
        qtc.QsciScintilla_SetFolding(@ptrCast(self.ptr), @bitCast(fold), @bitCast(margin));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, fold: qsciscintilla_enums.FoldStyle, margin: i32) callconv(.c) void `
    ///
    pub fn OnSetFolding(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetFolding(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFolding` instead
    ///
    pub const QBaseSetFolding = SuperSetFolding;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` fold: qsciscintilla_enums.FoldStyle `
    ///
    /// ` margin: i32 `
    ///
    pub fn SuperSetFolding(self: QsciScintilla, fold: i32, margin: i32) void {
        qtc.QsciScintilla_SuperSetFolding(@ptrCast(self.ptr), @bitCast(fold), @bitCast(margin));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` indentation: i32 `
    ///
    pub fn SetIndentation(self: QsciScintilla, line: i32, indentation: i32) void {
        qtc.QsciScintilla_SetIndentation(@ptrCast(self.ptr), @bitCast(line), @bitCast(indentation));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, line: i32, indentation: i32) callconv(.c) void `
    ///
    pub fn OnSetIndentation(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetIndentation` instead
    ///
    pub const QBaseSetIndentation = SuperSetIndentation;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` indentation: i32 `
    ///
    pub fn SuperSetIndentation(self: QsciScintilla, line: i32, indentation: i32) void {
        qtc.QsciScintilla_SuperSetIndentation(@ptrCast(self.ptr), @bitCast(line), @bitCast(indentation));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn SetIndentationGuides(self: QsciScintilla, enable: bool) void {
        qtc.QsciScintilla_SetIndentationGuides(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, enable: bool) callconv(.c) void `
    ///
    pub fn OnSetIndentationGuides(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationGuides(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetIndentationGuides` instead
    ///
    pub const QBaseSetIndentationGuides = SuperSetIndentationGuides;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn SuperSetIndentationGuides(self: QsciScintilla, enable: bool) void {
        qtc.QsciScintilla_SuperSetIndentationGuides(@ptrCast(self.ptr), enable);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetIndentationGuidesBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndentationGuidesBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, col: QColor) callconv(.c) void `
    ///
    pub fn OnSetIndentationGuidesBackgroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationGuidesBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetIndentationGuidesBackgroundColor` instead
    ///
    pub const QBaseSetIndentationGuidesBackgroundColor = SuperSetIndentationGuidesBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SuperSetIndentationGuidesBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetIndentationGuidesBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetIndentationGuidesForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndentationGuidesForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, col: QColor) callconv(.c) void `
    ///
    pub fn OnSetIndentationGuidesForegroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationGuidesForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetIndentationGuidesForegroundColor` instead
    ///
    pub const QBaseSetIndentationGuidesForegroundColor = SuperSetIndentationGuidesForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SuperSetIndentationGuidesForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetIndentationGuidesForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` tabs: bool `
    ///
    pub fn SetIndentationsUseTabs(self: QsciScintilla, tabs: bool) void {
        qtc.QsciScintilla_SetIndentationsUseTabs(@ptrCast(self.ptr), tabs);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, tabs: bool) callconv(.c) void `
    ///
    pub fn OnSetIndentationsUseTabs(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationsUseTabs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetIndentationsUseTabs` instead
    ///
    pub const QBaseSetIndentationsUseTabs = SuperSetIndentationsUseTabs;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` tabs: bool `
    ///
    pub fn SuperSetIndentationsUseTabs(self: QsciScintilla, tabs: bool) void {
        qtc.QsciScintilla_SuperSetIndentationsUseTabs(@ptrCast(self.ptr), tabs);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` width: i32 `
    ///
    pub fn SetIndentationWidth(self: QsciScintilla, width: i32) void {
        qtc.QsciScintilla_SetIndentationWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, width: i32) callconv(.c) void `
    ///
    pub fn OnSetIndentationWidth(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetIndentationWidth` instead
    ///
    pub const QBaseSetIndentationWidth = SuperSetIndentationWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` width: i32 `
    ///
    pub fn SuperSetIndentationWidth(self: QsciScintilla, width: i32) void {
        qtc.QsciScintilla_SuperSetIndentationWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` lexer: QsciLexer `
    ///
    pub fn SetLexer(self: QsciScintilla, lexer: anytype) void {
        comptime _ = @TypeOf(lexer)._is_QsciLexer;
        qtc.QsciScintilla_SetLexer(@ptrCast(self.ptr), @ptrCast(lexer.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, lexer: QsciLexer) callconv(.c) void `
    ///
    pub fn OnSetLexer(self: QsciScintilla, callback: *const fn (QsciScintilla, QsciLexer) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetLexer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetLexer` instead
    ///
    pub const QBaseSetLexer = SuperSetLexer;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` lexer: QsciLexer `
    ///
    pub fn SuperSetLexer(self: QsciScintilla, lexer: anytype) void {
        comptime _ = @TypeOf(lexer)._is_QsciLexer;
        qtc.QsciScintilla_SuperSetLexer(@ptrCast(self.ptr), @ptrCast(lexer.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetMarginsBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarginsBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, col: QColor) callconv(.c) void `
    ///
    pub fn OnSetMarginsBackgroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginsBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMarginsBackgroundColor` instead
    ///
    pub const QBaseSetMarginsBackgroundColor = SuperSetMarginsBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SuperSetMarginsBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetMarginsBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` f: QFont `
    ///
    pub fn SetMarginsFont(self: QsciScintilla, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciScintilla_SetMarginsFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, f: QFont) callconv(.c) void `
    ///
    pub fn OnSetMarginsFont(self: QsciScintilla, callback: *const fn (QsciScintilla, QFont) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginsFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMarginsFont` instead
    ///
    pub const QBaseSetMarginsFont = SuperSetMarginsFont;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` f: QFont `
    ///
    pub fn SuperSetMarginsFont(self: QsciScintilla, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciScintilla_SuperSetMarginsFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetMarginsForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarginsForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, col: QColor) callconv(.c) void `
    ///
    pub fn OnSetMarginsForegroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginsForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMarginsForegroundColor` instead
    ///
    pub const QBaseSetMarginsForegroundColor = SuperSetMarginsForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SuperSetMarginsForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetMarginsForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` lnrs: bool `
    ///
    pub fn SetMarginLineNumbers(self: QsciScintilla, margin: i32, lnrs: bool) void {
        qtc.QsciScintilla_SetMarginLineNumbers(@ptrCast(self.ptr), @bitCast(margin), lnrs);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, margin: i32, lnrs: bool) callconv(.c) void `
    ///
    pub fn OnSetMarginLineNumbers(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginLineNumbers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMarginLineNumbers` instead
    ///
    pub const QBaseSetMarginLineNumbers = SuperSetMarginLineNumbers;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` lnrs: bool `
    ///
    pub fn SuperSetMarginLineNumbers(self: QsciScintilla, margin: i32, lnrs: bool) void {
        qtc.QsciScintilla_SuperSetMarginLineNumbers(@ptrCast(self.ptr), @bitCast(margin), lnrs);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` mask: i32 `
    ///
    pub fn SetMarginMarkerMask(self: QsciScintilla, margin: i32, mask: i32) void {
        qtc.QsciScintilla_SetMarginMarkerMask(@ptrCast(self.ptr), @bitCast(margin), @bitCast(mask));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, margin: i32, mask: i32) callconv(.c) void `
    ///
    pub fn OnSetMarginMarkerMask(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginMarkerMask(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMarginMarkerMask` instead
    ///
    pub const QBaseSetMarginMarkerMask = SuperSetMarginMarkerMask;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` mask: i32 `
    ///
    pub fn SuperSetMarginMarkerMask(self: QsciScintilla, margin: i32, mask: i32) void {
        qtc.QsciScintilla_SuperSetMarginMarkerMask(@ptrCast(self.ptr), @bitCast(margin), @bitCast(mask));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` sens: bool `
    ///
    pub fn SetMarginSensitivity(self: QsciScintilla, margin: i32, sens: bool) void {
        qtc.QsciScintilla_SetMarginSensitivity(@ptrCast(self.ptr), @bitCast(margin), sens);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, margin: i32, sens: bool) callconv(.c) void `
    ///
    pub fn OnSetMarginSensitivity(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginSensitivity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMarginSensitivity` instead
    ///
    pub const QBaseSetMarginSensitivity = SuperSetMarginSensitivity;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` sens: bool `
    ///
    pub fn SuperSetMarginSensitivity(self: QsciScintilla, margin: i32, sens: bool) void {
        qtc.QsciScintilla_SuperSetMarginSensitivity(@ptrCast(self.ptr), @bitCast(margin), sens);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` width: i32 `
    ///
    pub fn SetMarginWidth(self: QsciScintilla, margin: i32, width: i32) void {
        qtc.QsciScintilla_SetMarginWidth(@ptrCast(self.ptr), @bitCast(margin), @bitCast(width));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, margin: i32, width: i32) callconv(.c) void `
    ///
    pub fn OnSetMarginWidth(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMarginWidth` instead
    ///
    pub const QBaseSetMarginWidth = SuperSetMarginWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` width: i32 `
    ///
    pub fn SuperSetMarginWidth(self: QsciScintilla, margin: i32, width: i32) void {
        qtc.QsciScintilla_SuperSetMarginWidth(@ptrCast(self.ptr), @bitCast(margin), @bitCast(width));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` s: []const u8 `
    ///
    pub fn SetMarginWidth2(self: QsciScintilla, margin: i32, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QsciScintilla_SetMarginWidth2(@ptrCast(self.ptr), @bitCast(margin), s_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, margin: i32, s: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetMarginWidth2(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginWidth2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetMarginWidth2` instead
    ///
    pub const QBaseSetMarginWidth2 = SuperSetMarginWidth2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` s: []const u8 `
    ///
    pub fn SuperSetMarginWidth2(self: QsciScintilla, margin: i32, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QsciScintilla_SuperSetMarginWidth2(@ptrCast(self.ptr), @bitCast(margin), s_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` m: bool `
    ///
    pub fn SetModified(self: QsciScintilla, m: bool) void {
        qtc.QsciScintilla_SetModified(@ptrCast(self.ptr), m);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, m: bool) callconv(.c) void `
    ///
    pub fn OnSetModified(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetModified(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetModified` instead
    ///
    pub const QBaseSetModified = SuperSetModified;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` m: bool `
    ///
    pub fn SuperSetModified(self: QsciScintilla, m: bool) void {
        qtc.QsciScintilla_SuperSetModified(@ptrCast(self.ptr), m);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` c: QColor `
    ///
    pub fn SetPaper(self: QsciScintilla, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciScintilla_SetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, c: QColor) callconv(.c) void `
    ///
    pub fn OnSetPaper(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetPaper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetPaper` instead
    ///
    pub const QBaseSetPaper = SuperSetPaper;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` c: QColor `
    ///
    pub fn SuperSetPaper(self: QsciScintilla, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciScintilla_SuperSetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` ro: bool `
    ///
    pub fn SetReadOnly(self: QsciScintilla, ro: bool) void {
        qtc.QsciScintilla_SetReadOnly(@ptrCast(self.ptr), ro);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, ro: bool) callconv(.c) void `
    ///
    pub fn OnSetReadOnly(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetReadOnly(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetReadOnly` instead
    ///
    pub const QBaseSetReadOnly = SuperSetReadOnly;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` ro: bool `
    ///
    pub fn SuperSetReadOnly(self: QsciScintilla, ro: bool) void {
        qtc.QsciScintilla_SuperSetReadOnly(@ptrCast(self.ptr), ro);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` lineFrom: i32 `
    ///
    /// ` indexFrom: i32 `
    ///
    /// ` lineTo: i32 `
    ///
    /// ` indexTo: i32 `
    ///
    pub fn SetSelection(self: QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32) void {
        qtc.QsciScintilla_SetSelection(@ptrCast(self.ptr), @bitCast(lineFrom), @bitCast(indexFrom), @bitCast(lineTo), @bitCast(indexTo));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32) callconv(.c) void `
    ///
    pub fn OnSetSelection(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSelection` instead
    ///
    pub const QBaseSetSelection = SuperSetSelection;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` lineFrom: i32 `
    ///
    /// ` indexFrom: i32 `
    ///
    /// ` lineTo: i32 `
    ///
    /// ` indexTo: i32 `
    ///
    pub fn SuperSetSelection(self: QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32) void {
        qtc.QsciScintilla_SuperSetSelection(@ptrCast(self.ptr), @bitCast(lineFrom), @bitCast(indexFrom), @bitCast(lineTo), @bitCast(indexTo));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetSelectionBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetSelectionBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, col: QColor) callconv(.c) void `
    ///
    pub fn OnSetSelectionBackgroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetSelectionBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSelectionBackgroundColor` instead
    ///
    pub const QBaseSetSelectionBackgroundColor = SuperSetSelectionBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SuperSetSelectionBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetSelectionBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SetSelectionForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetSelectionForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, col: QColor) callconv(.c) void `
    ///
    pub fn OnSetSelectionForegroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetSelectionForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSelectionForegroundColor` instead
    ///
    pub const QBaseSetSelectionForegroundColor = SuperSetSelectionForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn SuperSetSelectionForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetSelectionForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` indent: bool `
    ///
    pub fn SetTabIndents(self: QsciScintilla, indent: bool) void {
        qtc.QsciScintilla_SetTabIndents(@ptrCast(self.ptr), indent);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, indent: bool) callconv(.c) void `
    ///
    pub fn OnSetTabIndents(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetTabIndents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTabIndents` instead
    ///
    pub const QBaseSetTabIndents = SuperSetTabIndents;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` indent: bool `
    ///
    pub fn SuperSetTabIndents(self: QsciScintilla, indent: bool) void {
        qtc.QsciScintilla_SuperSetTabIndents(@ptrCast(self.ptr), indent);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` width: i32 `
    ///
    pub fn SetTabWidth(self: QsciScintilla, width: i32) void {
        qtc.QsciScintilla_SetTabWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, width: i32) callconv(.c) void `
    ///
    pub fn OnSetTabWidth(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetTabWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetTabWidth` instead
    ///
    pub const QBaseSetTabWidth = SuperSetTabWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` width: i32 `
    ///
    pub fn SuperSetTabWidth(self: QsciScintilla, width: i32) void {
        qtc.QsciScintilla_SuperSetTabWidth(@ptrCast(self.ptr), @bitCast(width));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QsciScintilla, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, text: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnSetText(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetText` instead
    ///
    pub const QBaseSetText = SuperSetText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SuperSetText(self: QsciScintilla, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QsciScintilla_SuperSetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` cp: bool `
    ///
    pub fn SetUtf8(self: QsciScintilla, cp: bool) void {
        qtc.QsciScintilla_SetUtf8(@ptrCast(self.ptr), cp);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, cp: bool) callconv(.c) void `
    ///
    pub fn OnSetUtf8(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetUtf8(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetUtf8` instead
    ///
    pub const QBaseSetUtf8 = SuperSetUtf8;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` cp: bool `
    ///
    pub fn SuperSetUtf8(self: QsciScintilla, cp: bool) void {
        qtc.QsciScintilla_SuperSetUtf8(@ptrCast(self.ptr), cp);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.WhitespaceVisibility `
    ///
    pub fn SetWhitespaceVisibility(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SetWhitespaceVisibility(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, mode: qsciscintilla_enums.WhitespaceVisibility) callconv(.c) void `
    ///
    pub fn OnSetWhitespaceVisibility(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetWhitespaceVisibility(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetWhitespaceVisibility` instead
    ///
    pub const QBaseSetWhitespaceVisibility = SuperSetWhitespaceVisibility;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.WhitespaceVisibility `
    ///
    pub fn SuperSetWhitespaceVisibility(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SuperSetWhitespaceVisibility(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.WrapMode `
    ///
    pub fn SetWrapMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SetWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, mode: qsciscintilla_enums.WrapMode) callconv(.c) void `
    ///
    pub fn OnSetWrapMode(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetWrapMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetWrapMode` instead
    ///
    pub const QBaseSetWrapMode = SuperSetWrapMode;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.WrapMode `
    ///
    pub fn SuperSetWrapMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SuperSetWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Undo(self: QsciScintilla) void {
        qtc.QsciScintilla_Undo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUndo(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnUndo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUndo` instead
    ///
    pub const QBaseUndo = SuperUndo;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperUndo(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperUndo(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn Unindent(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_Unindent(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, line: i32) callconv(.c) void `
    ///
    pub fn OnUnindent(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnUnindent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUnindent` instead
    ///
    pub const QBaseUnindent = SuperUnindent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn SuperUnindent(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_SuperUnindent(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` range: i32 `
    ///
    pub fn ZoomIn(self: QsciScintilla, range: i32) void {
        qtc.QsciScintilla_ZoomIn(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, range: i32) callconv(.c) void `
    ///
    pub fn OnZoomIn(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomIn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperZoomIn` instead
    ///
    pub const QBaseZoomIn = SuperZoomIn;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` range: i32 `
    ///
    pub fn SuperZoomIn(self: QsciScintilla, range: i32) void {
        qtc.QsciScintilla_SuperZoomIn(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ZoomIn2(self: QsciScintilla) void {
        qtc.QsciScintilla_ZoomIn2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnZoomIn2(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomIn2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperZoomIn2` instead
    ///
    pub const QBaseZoomIn2 = SuperZoomIn2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperZoomIn2(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperZoomIn2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` range: i32 `
    ///
    pub fn ZoomOut(self: QsciScintilla, range: i32) void {
        qtc.QsciScintilla_ZoomOut(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, range: i32) callconv(.c) void `
    ///
    pub fn OnZoomOut(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomOut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperZoomOut` instead
    ///
    pub const QBaseZoomOut = SuperZoomOut;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` range: i32 `
    ///
    pub fn SuperZoomOut(self: QsciScintilla, range: i32) void {
        qtc.QsciScintilla_SuperZoomOut(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ZoomOut2(self: QsciScintilla) void {
        qtc.QsciScintilla_ZoomOut2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnZoomOut2(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomOut2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperZoomOut2` instead
    ///
    pub const QBaseZoomOut2 = SuperZoomOut2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperZoomOut2(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperZoomOut2(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` size: i32 `
    ///
    pub fn ZoomTo(self: QsciScintilla, size: i32) void {
        qtc.QsciScintilla_ZoomTo(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, size: i32) callconv(.c) void `
    ///
    pub fn OnZoomTo(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomTo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperZoomTo` instead
    ///
    pub const QBaseZoomTo = SuperZoomTo;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` size: i32 `
    ///
    pub fn SuperZoomTo(self: QsciScintilla, size: i32) void {
        qtc.QsciScintilla_SuperZoomTo(@ptrCast(self.ptr), @bitCast(size));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    pub fn CursorPositionChanged(self: QsciScintilla, line: i32, index: i32) void {
        qtc.QsciScintilla_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(line), @bitCast(index));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, line: i32, index: i32) callconv(.c) void `
    ///
    pub fn OnCursorPositionChanged(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` yes: bool `
    ///
    pub fn CopyAvailable(self: QsciScintilla, yes: bool) void {
        qtc.QsciScintilla_CopyAvailable(@ptrCast(self.ptr), yes);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, yes: bool) callconv(.c) void `
    ///
    pub fn OnCopyAvailable(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_CopyAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    /// ` state: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn IndicatorClicked(self: QsciScintilla, line: i32, index: i32, state: i32) void {
        qtc.QsciScintilla_IndicatorClicked(@ptrCast(self.ptr), @bitCast(line), @bitCast(index), @bitCast(state));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, line: i32, index: i32, state: flag of qnamespace_enums.KeyboardModifier) callconv(.c) void `
    ///
    pub fn OnIndicatorClicked(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_IndicatorClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    /// ` state: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn IndicatorReleased(self: QsciScintilla, line: i32, index: i32, state: i32) void {
        qtc.QsciScintilla_IndicatorReleased(@ptrCast(self.ptr), @bitCast(line), @bitCast(index), @bitCast(state));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, line: i32, index: i32, state: flag of qnamespace_enums.KeyboardModifier) callconv(.c) void `
    ///
    pub fn OnIndicatorReleased(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_IndicatorReleased(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn LinesChanged(self: QsciScintilla) void {
        qtc.QsciScintilla_LinesChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla) callconv(.c) void `
    ///
    pub fn OnLinesChanged(self: QsciScintilla, callback: *const fn (QsciScintilla) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_LinesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` line: i32 `
    ///
    /// ` state: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn MarginClicked(self: QsciScintilla, margin: i32, line: i32, state: i32) void {
        qtc.QsciScintilla_MarginClicked(@ptrCast(self.ptr), @bitCast(margin), @bitCast(line), @bitCast(state));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, margin: i32, line: i32, state: flag of qnamespace_enums.KeyboardModifier) callconv(.c) void `
    ///
    pub fn OnMarginClicked(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_MarginClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` line: i32 `
    ///
    /// ` state: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn MarginRightClicked(self: QsciScintilla, margin: i32, line: i32, state: i32) void {
        qtc.QsciScintilla_MarginRightClicked(@ptrCast(self.ptr), @bitCast(margin), @bitCast(line), @bitCast(state));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, margin: i32, line: i32, state: flag of qnamespace_enums.KeyboardModifier) callconv(.c) void `
    ///
    pub fn OnMarginRightClicked(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_MarginRightClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ModificationAttempted(self: QsciScintilla) void {
        qtc.QsciScintilla_ModificationAttempted(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla) callconv(.c) void `
    ///
    pub fn OnModificationAttempted(self: QsciScintilla, callback: *const fn (QsciScintilla) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_ModificationAttempted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` m: bool `
    ///
    pub fn ModificationChanged(self: QsciScintilla, m: bool) void {
        qtc.QsciScintilla_ModificationChanged(@ptrCast(self.ptr), m);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, m: bool) callconv(.c) void `
    ///
    pub fn OnModificationChanged(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_ModificationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SelectionChanged(self: QsciScintilla) void {
        qtc.QsciScintilla_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: QsciScintilla, callback: *const fn (QsciScintilla) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn TextChanged(self: QsciScintilla) void {
        qtc.QsciScintilla_TextChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: QsciScintilla, callback: *const fn (QsciScintilla) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    /// ` stringVal: []const u8 `
    ///
    pub fn UserListActivated(self: QsciScintilla, id: i32, stringVal: []const u8) void {
        const stringVal_str = qtc.libqt_string{
            .len = stringVal.len,
            .data = stringVal.ptr,
        };
        qtc.QsciScintilla_UserListActivated(@ptrCast(self.ptr), @bitCast(id), stringVal_str);
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, id: i32, stringVal: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnUserListActivated(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_UserListActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: QsciScintilla, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QsciScintilla_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QEvent) callconv(.c) bool) void {
        qtc.QsciScintilla_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: QsciScintilla, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QsciScintilla_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QEvent `
    ///
    pub fn ChangeEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QsciScintilla_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperChangeEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QsciScintilla_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QsciScintilla_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QContextMenuEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QsciScintilla_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn WheelEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.QsciScintilla_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QWheelEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.QsciScintilla_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn ClearAnnotations1(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_ClearAnnotations1(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` style: qsciscintilla_enums.IndicatorStyle `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn IndicatorDefine2(self: QsciScintilla, style: i32, indicatorNumber: i32) i32 {
        return qtc.QsciScintilla_IndicatorDefine2(@ptrCast(self.ptr), @bitCast(style), @bitCast(indicatorNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` sym: qsciscintilla_enums.MarkerSymbol `
    ///
    /// ` markerNumber: i32 `
    ///
    pub fn MarkerDefine22(self: QsciScintilla, sym: i32, markerNumber: i32) i32 {
        return qtc.QsciScintilla_MarkerDefine22(@ptrCast(self.ptr), @bitCast(sym), @bitCast(markerNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` ch: u8 `
    ///
    /// ` markerNumber: i32 `
    ///
    pub fn MarkerDefine23(self: QsciScintilla, ch: u8, markerNumber: i32) i32 {
        return qtc.QsciScintilla_MarkerDefine23(@ptrCast(self.ptr), @bitCast(ch), @bitCast(markerNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` pm: QPixmap `
    ///
    /// ` markerNumber: i32 `
    ///
    pub fn MarkerDefine24(self: QsciScintilla, pm: anytype, markerNumber: i32) i32 {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        return qtc.QsciScintilla_MarkerDefine24(@ptrCast(self.ptr), @ptrCast(pm.ptr), @bitCast(markerNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` im: QImage `
    ///
    /// ` markerNumber: i32 `
    ///
    pub fn MarkerDefine25(self: QsciScintilla, im: anytype, markerNumber: i32) i32 {
        comptime _ = @TypeOf(im)._is_QImage;
        return qtc.QsciScintilla_MarkerDefine25(@ptrCast(self.ptr), @ptrCast(im.ptr), @bitCast(markerNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    /// ` markerNumber: i32 `
    ///
    pub fn MarkerDelete2(self: QsciScintilla, linenr: i32, markerNumber: i32) void {
        qtc.QsciScintilla_MarkerDelete2(@ptrCast(self.ptr), @bitCast(linenr), @bitCast(markerNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` markerNumber: i32 `
    ///
    pub fn MarkerDeleteAll1(self: QsciScintilla, markerNumber: i32) void {
        qtc.QsciScintilla_MarkerDeleteAll1(@ptrCast(self.ptr), @bitCast(markerNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` under: bool `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn SetIndicatorDrawUnder2(self: QsciScintilla, under: bool, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetIndicatorDrawUnder2(@ptrCast(self.ptr), under, @bitCast(indicatorNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn SetIndicatorForegroundColor2(self: QsciScintilla, col: anytype, indicatorNumber: i32) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndicatorForegroundColor2(@ptrCast(self.ptr), @ptrCast(col.ptr), @bitCast(indicatorNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn SetIndicatorHoverForegroundColor2(self: QsciScintilla, col: anytype, indicatorNumber: i32) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndicatorHoverForegroundColor2(@ptrCast(self.ptr), @ptrCast(col.ptr), @bitCast(indicatorNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` style: qsciscintilla_enums.IndicatorStyle `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn SetIndicatorHoverStyle2(self: QsciScintilla, style: i32, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetIndicatorHoverStyle2(@ptrCast(self.ptr), @bitCast(style), @bitCast(indicatorNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn SetIndicatorOutlineColor2(self: QsciScintilla, col: anytype, indicatorNumber: i32) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndicatorOutlineColor2(@ptrCast(self.ptr), @ptrCast(col.ptr), @bitCast(indicatorNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn ClearMarginText1(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_ClearMarginText1(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    /// ` markerNumber: i32 `
    ///
    pub fn SetMarkerBackgroundColor2(self: QsciScintilla, col: anytype, markerNumber: i32) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarkerBackgroundColor2(@ptrCast(self.ptr), @ptrCast(col.ptr), @bitCast(markerNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    /// ` markerNumber: i32 `
    ///
    pub fn SetMarkerForegroundColor2(self: QsciScintilla, col: anytype, markerNumber: i32) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarkerForegroundColor2(@ptrCast(self.ptr), @ptrCast(col.ptr), @bitCast(markerNumber));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` endFlag: qsciscintilla_enums.WrapVisualFlag `
    ///
    /// ` startFlag: qsciscintilla_enums.WrapVisualFlag `
    ///
    pub fn SetWrapVisualFlags2(self: QsciScintilla, endFlag: i32, startFlag: i32) void {
        qtc.QsciScintilla_SetWrapVisualFlags2(@ptrCast(self.ptr), @bitCast(endFlag), @bitCast(startFlag));
    }

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` endFlag: qsciscintilla_enums.WrapVisualFlag `
    ///
    /// ` startFlag: qsciscintilla_enums.WrapVisualFlag `
    ///
    /// ` indent: i32 `
    ///
    pub fn SetWrapVisualFlags3(self: QsciScintilla, endFlag: i32, startFlag: i32, indent: i32) void {
        qtc.QsciScintilla_SetWrapVisualFlags3(@ptrCast(self.ptr), @bitCast(endFlag), @bitCast(startFlag), @bitCast(indent));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    pub fn Pool() QsciScintillaBase {
        return .{ .ptr = qtc.QsciScintillaBase_Pool() };
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` scrollBar: QScrollBar `
    ///
    pub fn ReplaceHorizontalScrollBar(self: QsciScintilla, scrollBar: anytype) void {
        comptime _ = @TypeOf(scrollBar)._is_QScrollBar;
        qtc.QsciScintillaBase_ReplaceHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollBar.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` scrollBar: QScrollBar `
    ///
    pub fn ReplaceVerticalScrollBar(self: QsciScintilla, scrollBar: anytype) void {
        comptime _ = @TypeOf(scrollBar)._is_QScrollBar;
        qtc.QsciScintillaBase_ReplaceVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollBar.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    pub fn SendScintilla(self: QsciScintilla, msg: u32) isize {
        return qtc.QsciScintillaBase_SendScintilla(@ptrCast(self.ptr), @bitCast(msg));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` lParam: ?*anyopaque `
    ///
    pub fn SendScintilla2(self: QsciScintilla, msg: u32, wParam: usize, lParam: ?*anyopaque) isize {
        return qtc.QsciScintillaBase_SendScintilla2(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), @ptrCast(lParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` lParam: [:0]const u8 `
    ///
    pub fn SendScintilla3(self: QsciScintilla, msg: u32, wParam: usize, lParam: [:0]const u8) isize {
        const lParam_Cstring = lParam.ptr;
        return qtc.QsciScintillaBase_SendScintilla3(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), lParam_Cstring);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` lParam: [:0]const u8 `
    ///
    pub fn SendScintilla4(self: QsciScintilla, msg: u32, lParam: [:0]const u8) isize {
        const lParam_Cstring = lParam.ptr;
        return qtc.QsciScintillaBase_SendScintilla4(@ptrCast(self.ptr), @bitCast(msg), lParam_Cstring);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: [:0]const u8 `
    ///
    /// ` lParam: [:0]const u8 `
    ///
    pub fn SendScintilla5(self: QsciScintilla, msg: u32, wParam: [:0]const u8, lParam: [:0]const u8) isize {
        const wParam_Cstring = wParam.ptr;
        const lParam_Cstring = lParam.ptr;
        return qtc.QsciScintillaBase_SendScintilla5(@ptrCast(self.ptr), @bitCast(msg), wParam_Cstring, lParam_Cstring);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: isize `
    ///
    pub fn SendScintilla6(self: QsciScintilla, msg: u32, wParam: isize) isize {
        return qtc.QsciScintillaBase_SendScintilla6(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: i32 `
    ///
    pub fn SendScintilla7(self: QsciScintilla, msg: u32, wParam: i32) isize {
        return qtc.QsciScintillaBase_SendScintilla7(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` cpMin: isize `
    ///
    /// ` cpMax: isize `
    ///
    /// ` lpstrText: [:0]u8 `
    ///
    pub fn SendScintilla8(self: QsciScintilla, msg: u32, cpMin: isize, cpMax: isize, lpstrText: [:0]u8) isize {
        const lpstrText_Cstring = lpstrText.ptr;
        return qtc.QsciScintillaBase_SendScintilla8(@ptrCast(self.ptr), @bitCast(msg), @bitCast(cpMin), @bitCast(cpMax), lpstrText_Cstring);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` col: QColor `
    ///
    pub fn SendScintilla9(self: QsciScintilla, msg: u32, wParam: usize, col: anytype) isize {
        comptime _ = @TypeOf(col)._is_QColor;
        return qtc.QsciScintillaBase_SendScintilla9(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), @ptrCast(col.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` col: QColor `
    ///
    pub fn SendScintilla10(self: QsciScintilla, msg: u32, col: anytype) isize {
        comptime _ = @TypeOf(col)._is_QColor;
        return qtc.QsciScintillaBase_SendScintilla10(@ptrCast(self.ptr), @bitCast(msg), @ptrCast(col.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
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
    pub fn SendScintilla11(self: QsciScintilla, msg: u32, wParam: usize, hdc: anytype, rc: anytype, cpMin: isize, cpMax: isize) isize {
        comptime _ = @TypeOf(hdc)._is_QPainter;
        comptime _ = @TypeOf(rc)._is_QRect;
        return qtc.QsciScintillaBase_SendScintilla11(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), @ptrCast(hdc.ptr), @ptrCast(rc.ptr), @bitCast(cpMin), @bitCast(cpMax));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` lParam: QPixmap `
    ///
    pub fn SendScintilla12(self: QsciScintilla, msg: u32, wParam: usize, lParam: anytype) isize {
        comptime _ = @TypeOf(lParam)._is_QPixmap;
        return qtc.QsciScintillaBase_SendScintilla12(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), @ptrCast(lParam.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` lParam: QImage `
    ///
    pub fn SendScintilla13(self: QsciScintilla, msg: u32, wParam: usize, lParam: anytype) isize {
        comptime _ = @TypeOf(lParam)._is_QImage;
        return qtc.QsciScintillaBase_SendScintilla13(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), @ptrCast(lParam.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    pub fn SendScintillaPtrResult(self: QsciScintilla, msg: u32) ?*anyopaque {
        return qtc.QsciScintillaBase_SendScintillaPtrResult(@ptrCast(self.ptr), @bitCast(msg));
    }

    /// Inherited from QsciScintillaBase
    ///
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

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` yes: bool `
    ///
    pub fn QSCN_SELCHANGED(self: QsciScintilla, yes: bool) void {
        qtc.QsciScintillaBase_QSCN_SELCHANGED(@ptrCast(self.ptr), yes);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SCN_AUTOCCANCELLED(self: QsciScintilla) void {
        qtc.QsciScintillaBase_SCN_AUTOCCANCELLED(@ptrCast(self.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SCN_AUTOCCHARDELETED(self: QsciScintilla) void {
        qtc.QsciScintillaBase_SCN_AUTOCCHARDELETED(@ptrCast(self.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` position: i32 `
    ///
    /// ` ch: i32 `
    ///
    /// ` method: i32 `
    ///
    pub fn SCN_AUTOCCOMPLETED(self: QsciScintilla, selection: [:0]const u8, position: i32, ch: i32, method: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCCOMPLETED(@ptrCast(self.ptr), selection_Cstring, @bitCast(position), @bitCast(ch), @bitCast(method));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` position: i32 `
    ///
    /// ` ch: i32 `
    ///
    /// ` method: i32 `
    ///
    pub fn SCN_AUTOCSELECTION(self: QsciScintilla, selection: [:0]const u8, position: i32, ch: i32, method: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCSELECTION(@ptrCast(self.ptr), selection_Cstring, @bitCast(position), @bitCast(ch), @bitCast(method));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` position: i32 `
    ///
    pub fn SCN_AUTOCSELECTION2(self: QsciScintilla, selection: [:0]const u8, position: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCSELECTION2(@ptrCast(self.ptr), selection_Cstring, @bitCast(position));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` id: i32 `
    ///
    /// ` position: i32 `
    ///
    pub fn SCN_AUTOCSELECTIONCHANGE(self: QsciScintilla, selection: [:0]const u8, id: i32, position: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_AUTOCSELECTIONCHANGE(@ptrCast(self.ptr), selection_Cstring, @bitCast(id), @bitCast(position));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SCEN_CHANGE(self: QsciScintilla) void {
        qtc.QsciScintillaBase_SCEN_CHANGE(@ptrCast(self.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` direction: i32 `
    ///
    pub fn SCN_CALLTIPCLICK(self: QsciScintilla, direction: i32) void {
        qtc.QsciScintillaBase_SCN_CALLTIPCLICK(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` charadded: i32 `
    ///
    pub fn SCN_CHARADDED(self: QsciScintilla, charadded: i32) void {
        qtc.QsciScintillaBase_SCN_CHARADDED(@ptrCast(self.ptr), @bitCast(charadded));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: i32 `
    ///
    /// ` line: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn SCN_DOUBLECLICK(self: QsciScintilla, position: i32, line: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_DOUBLECLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(line), @bitCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SCN_DWELLEND(self: QsciScintilla, position: i32, x: i32, y: i32) void {
        qtc.QsciScintillaBase_SCN_DWELLEND(@ptrCast(self.ptr), @bitCast(position), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: i32 `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SCN_DWELLSTART(self: QsciScintilla, position: i32, x: i32, y: i32) void {
        qtc.QsciScintillaBase_SCN_DWELLSTART(@ptrCast(self.ptr), @bitCast(position), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SCN_FOCUSIN(self: QsciScintilla) void {
        qtc.QsciScintillaBase_SCN_FOCUSIN(@ptrCast(self.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SCN_FOCUSOUT(self: QsciScintilla) void {
        qtc.QsciScintillaBase_SCN_FOCUSOUT(@ptrCast(self.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn SCN_HOTSPOTCLICK(self: QsciScintilla, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_HOTSPOTCLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn SCN_HOTSPOTDOUBLECLICK(self: QsciScintilla, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_HOTSPOTDOUBLECLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn SCN_HOTSPOTRELEASECLICK(self: QsciScintilla, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_HOTSPOTRELEASECLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn SCN_INDICATORCLICK(self: QsciScintilla, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_INDICATORCLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    pub fn SCN_INDICATORRELEASE(self: QsciScintilla, position: i32, modifiers: i32) void {
        qtc.QsciScintillaBase_SCN_INDICATORRELEASE(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: u32 `
    ///
    /// ` param2: usize `
    ///
    /// ` param3: ?*anyopaque `
    ///
    pub fn SCN_MACRORECORD(self: QsciScintilla, param1: u32, param2: usize, param3: ?*anyopaque) void {
        qtc.QsciScintillaBase_SCN_MACRORECORD(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    /// ` margin: i32 `
    ///
    pub fn SCN_MARGINCLICK(self: QsciScintilla, position: i32, modifiers: i32, margin: i32) void {
        qtc.QsciScintillaBase_SCN_MARGINCLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers), @bitCast(margin));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: i32 `
    ///
    /// ` modifiers: i32 `
    ///
    /// ` margin: i32 `
    ///
    pub fn SCN_MARGINRIGHTCLICK(self: QsciScintilla, position: i32, modifiers: i32, margin: i32) void {
        qtc.QsciScintillaBase_SCN_MARGINRIGHTCLICK(@ptrCast(self.ptr), @bitCast(position), @bitCast(modifiers), @bitCast(margin));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
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
    pub fn SCN_MODIFIED(self: QsciScintilla, param1: i32, param2: i32, param3: [:0]const u8, param4: i32, param5: i32, param6: i32, param7: i32, param8: i32, param9: i32, param10: i32) void {
        const param3_Cstring = param3.ptr;
        qtc.QsciScintillaBase_SCN_MODIFIED(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), param3_Cstring, @bitCast(param4), @bitCast(param5), @bitCast(param6), @bitCast(param7), @bitCast(param8), @bitCast(param9), @bitCast(param10));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SCN_MODIFYATTEMPTRO(self: QsciScintilla) void {
        qtc.QsciScintillaBase_SCN_MODIFYATTEMPTRO(@ptrCast(self.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: i32 `
    ///
    pub fn SCN_NEEDSHOWN(self: QsciScintilla, param1: i32, param2: i32) void {
        qtc.QsciScintillaBase_SCN_NEEDSHOWN(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SCN_PAINTED(self: QsciScintilla) void {
        qtc.QsciScintillaBase_SCN_PAINTED(@ptrCast(self.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SCN_SAVEPOINTLEFT(self: QsciScintilla) void {
        qtc.QsciScintillaBase_SCN_SAVEPOINTLEFT(@ptrCast(self.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SCN_SAVEPOINTREACHED(self: QsciScintilla) void {
        qtc.QsciScintillaBase_SCN_SAVEPOINTREACHED(@ptrCast(self.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: i32 `
    ///
    pub fn SCN_STYLENEEDED(self: QsciScintilla, position: i32) void {
        qtc.QsciScintillaBase_SCN_STYLENEEDED(@ptrCast(self.ptr), @bitCast(position));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` url: QUrl `
    ///
    pub fn SCN_URIDROPPED(self: QsciScintilla, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.QsciScintillaBase_SCN_URIDROPPED(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` updated: i32 `
    ///
    pub fn SCN_UPDATEUI(self: QsciScintilla, updated: i32) void {
        qtc.QsciScintillaBase_SCN_UPDATEUI(@ptrCast(self.ptr), @bitCast(updated));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
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
    pub fn SCN_USERLISTSELECTION(self: QsciScintilla, selection: [:0]const u8, id: i32, ch: i32, method: i32, position: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_USERLISTSELECTION(@ptrCast(self.ptr), selection_Cstring, @bitCast(id), @bitCast(ch), @bitCast(method), @bitCast(position));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` id: i32 `
    ///
    /// ` ch: i32 `
    ///
    /// ` method: i32 `
    ///
    pub fn SCN_USERLISTSELECTION2(self: QsciScintilla, selection: [:0]const u8, id: i32, ch: i32, method: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_USERLISTSELECTION2(@ptrCast(self.ptr), selection_Cstring, @bitCast(id), @bitCast(ch), @bitCast(method));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` selection: [:0]const u8 `
    ///
    /// ` id: i32 `
    ///
    pub fn SCN_USERLISTSELECTION3(self: QsciScintilla, selection: [:0]const u8, id: i32) void {
        const selection_Cstring = selection.ptr;
        qtc.QsciScintillaBase_SCN_USERLISTSELECTION3(@ptrCast(self.ptr), selection_Cstring, @bitCast(id));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SCN_ZOOM(self: QsciScintilla) void {
        qtc.QsciScintillaBase_SCN_ZOOM(@ptrCast(self.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    pub fn SendScintilla22(self: QsciScintilla, msg: u32, wParam: usize) isize {
        return qtc.QsciScintillaBase_SendScintilla22(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msg: u32 `
    ///
    /// ` wParam: usize `
    ///
    /// ` lParam: isize `
    ///
    pub fn SendScintilla32(self: QsciScintilla, msg: u32, wParam: usize, lParam: isize) isize {
        return qtc.QsciScintillaBase_SendScintilla32(@ptrCast(self.ptr), @bitCast(msg), @bitCast(wParam), @bitCast(lParam));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: QsciScintilla) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: QsciScintilla, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn VerticalScrollBar(self: QsciScintilla) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: QsciScintilla, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: QsciScintilla) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: QsciScintilla, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn HorizontalScrollBar(self: QsciScintilla) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: QsciScintilla, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn CornerWidget(self: QsciScintilla) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCornerWidget(self: QsciScintilla, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: QsciScintilla, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ScrollBarWidgets(self: QsciScintilla, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qsciscintilla.ScrollBarWidgets: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    pub fn Viewport(self: QsciScintilla) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetViewport(self: QsciScintilla, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MaximumViewportSize(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: QsciScintilla) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: QsciScintilla, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FrameStyle(self: QsciScintilla) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: QsciScintilla, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FrameWidth(self: QsciScintilla) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: QsciScintilla) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: QsciScintilla, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: QsciScintilla) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: QsciScintilla, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn LineWidth(self: QsciScintilla) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: QsciScintilla, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MidLineWidth(self: QsciScintilla) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: QsciScintilla, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FrameRect(self: QsciScintilla) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` frameRect: QRect `
    ///
    pub fn SetFrameRect(self: QsciScintilla, frameRect: anytype) void {
        comptime _ = @TypeOf(frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn WinId(self: QsciScintilla) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn CreateWinId(self: QsciScintilla) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn InternalWinId(self: QsciScintilla) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn EffectiveWinId(self: QsciScintilla) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Style(self: QsciScintilla) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QsciScintilla, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsTopLevel(self: QsciScintilla) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsWindow(self: QsciScintilla) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsModal(self: QsciScintilla) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QsciScintilla) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QsciScintilla, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsEnabled(self: QsciScintilla) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QsciScintilla, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QsciScintilla, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QsciScintilla, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QsciScintilla, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FrameGeometry(self: QsciScintilla) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Geometry(self: QsciScintilla) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn NormalGeometry(self: QsciScintilla) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn X(self: QsciScintilla) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Y(self: QsciScintilla) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Pos(self: QsciScintilla) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FrameSize(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Size(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Width(self: QsciScintilla) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Height(self: QsciScintilla) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Rect(self: QsciScintilla) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ChildrenRect(self: QsciScintilla) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ChildrenRegion(self: QsciScintilla) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MinimumSize(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MaximumSize(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MinimumWidth(self: QsciScintilla) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MinimumHeight(self: QsciScintilla) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MaximumWidth(self: QsciScintilla) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MaximumHeight(self: QsciScintilla) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QsciScintilla, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QsciScintilla, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QsciScintilla, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QsciScintilla, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QsciScintilla, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QsciScintilla, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QsciScintilla, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QsciScintilla, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SizeIncrement(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QsciScintilla, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QsciScintilla, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn BaseSize(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QsciScintilla, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QsciScintilla, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QsciScintilla, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QsciScintilla, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QsciScintilla, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QsciScintilla, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QsciScintilla, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QsciScintilla, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QsciScintilla, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QsciScintilla, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QsciScintilla, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QsciScintilla, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QsciScintilla, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QsciScintilla, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QsciScintilla, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QsciScintilla, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QsciScintilla, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QsciScintilla, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QsciScintilla `
    ///
    pub fn Window(self: QsciScintilla) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn NativeParentWidget(self: QsciScintilla) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn TopLevelWidget(self: QsciScintilla) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Palette(self: QsciScintilla) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QsciScintilla, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QsciScintilla, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QsciScintilla) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QsciScintilla, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QsciScintilla) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Font(self: QsciScintilla) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FontMetrics(self: QsciScintilla) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FontInfo(self: QsciScintilla) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Cursor(self: QsciScintilla) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QsciScintilla, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn UnsetCursor(self: QsciScintilla) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QsciScintilla, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn HasMouseTracking(self: QsciScintilla) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn UnderMouse(self: QsciScintilla) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QsciScintilla, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn HasTabletTracking(self: QsciScintilla) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QsciScintilla, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QsciScintilla, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Mask(self: QsciScintilla) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ClearMask(self: QsciScintilla) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QsciScintilla, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QsciScintilla, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Grab(self: QsciScintilla) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn GraphicsEffect(self: QsciScintilla) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QsciScintilla, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QsciScintilla, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QsciScintilla, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QsciScintilla, windowTitle: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QsciScintilla, styleSheet: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QsciScintilla, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn WindowIcon(self: QsciScintilla) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QsciScintilla, windowIconText: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QsciScintilla, windowRole: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QsciScintilla, filePath: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QsciScintilla, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn WindowOpacity(self: QsciScintilla) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsWindowModified(self: QsciScintilla) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QsciScintilla, toolTip: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QsciScintilla, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ToolTipDuration(self: QsciScintilla) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QsciScintilla, statusTip: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QsciScintilla, whatsThis: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QsciScintilla, name: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QsciScintilla, description: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QsciScintilla, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QsciScintilla) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn UnsetLayoutDirection(self: QsciScintilla) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QsciScintilla, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Locale(self: QsciScintilla) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn UnsetLocale(self: QsciScintilla) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsRightToLeft(self: QsciScintilla) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsLeftToRight(self: QsciScintilla) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SetFocus(self: QsciScintilla) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsActiveWindow(self: QsciScintilla) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ActivateWindow(self: QsciScintilla) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ClearFocus(self: QsciScintilla) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QsciScintilla, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QsciScintilla) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QsciScintilla, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn HasFocus(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QsciScintilla, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FocusProxy(self: QsciScintilla) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QsciScintilla) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QsciScintilla, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn GrabMouse(self: QsciScintilla) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ReleaseMouse(self: QsciScintilla) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn GrabKeyboard(self: QsciScintilla) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ReleaseKeyboard(self: QsciScintilla) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QsciScintilla, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QsciScintilla, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QsciScintilla, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QsciScintilla, id: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn UpdatesEnabled(self: QsciScintilla) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QsciScintilla, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn GraphicsProxyWidget(self: QsciScintilla) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Update(self: QsciScintilla) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Repaint(self: QsciScintilla) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QsciScintilla, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QsciScintilla, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QsciScintilla, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Show(self: QsciScintilla) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Hide(self: QsciScintilla) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ShowMinimized(self: QsciScintilla) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ShowMaximized(self: QsciScintilla) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ShowFullScreen(self: QsciScintilla) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ShowNormal(self: QsciScintilla) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Close(self: QsciScintilla) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Raise(self: QsciScintilla) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Lower(self: QsciScintilla) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QsciScintilla, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QsciScintilla, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QsciScintilla, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QsciScintilla, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QsciScintilla, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintilla.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QsciScintilla, geometry: []u8) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn AdjustSize(self: QsciScintilla) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsVisible(self: QsciScintilla) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QsciScintilla, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsHidden(self: QsciScintilla) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsMinimized(self: QsciScintilla) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsMaximized(self: QsciScintilla) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsFullScreen(self: QsciScintilla) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QsciScintilla) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QsciScintilla, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QsciScintilla, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SizePolicy(self: QsciScintilla) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QsciScintilla, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QsciScintilla, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn VisibleRegion(self: QsciScintilla) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QsciScintilla, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QsciScintilla, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ContentsMargins(self: QsciScintilla) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ContentsRect(self: QsciScintilla) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Layout(self: QsciScintilla) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QsciScintilla, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn UpdateGeometry(self: QsciScintilla) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QsciScintilla, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QsciScintilla, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QsciScintilla, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QsciScintilla, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FocusWidget(self: QsciScintilla) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn NextInFocusChain(self: QsciScintilla) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn PreviousInFocusChain(self: QsciScintilla) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn AcceptDrops(self: QsciScintilla) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QsciScintilla, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QsciScintilla, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QsciScintilla, actions: []QAction) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QsciScintilla, before: anytype, actions: []QAction) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QsciScintilla, before: anytype, action: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QsciScintilla, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QsciScintilla, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qsciscintilla.Actions: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QsciScintilla, text: []const u8) QAction {
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
    /// ` self: QsciScintilla `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QsciScintilla, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QsciScintilla `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QsciScintilla, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QsciScintilla `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QsciScintilla, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QsciScintilla `
    ///
    pub fn ParentWidget(self: QsciScintilla) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QsciScintilla, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QsciScintilla) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QsciScintilla, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QsciScintilla, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QsciScintilla, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QsciScintilla, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QsciScintilla, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QsciScintilla, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QsciScintilla, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn EnsurePolished(self: QsciScintilla) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QsciScintilla, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn AutoFillBackground(self: QsciScintilla) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QsciScintilla, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn BackingStore(self: QsciScintilla) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn WindowHandle(self: QsciScintilla) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Screen(self: QsciScintilla) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QsciScintilla, screen: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QsciScintilla, title: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QsciScintilla, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QsciScintilla, callback: *const fn (QsciScintilla, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QsciScintilla, iconText: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QsciScintilla, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QsciScintilla, callback: *const fn (QsciScintilla, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QsciScintilla) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QsciScintilla, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QsciScintilla, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QsciScintilla, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QsciScintilla, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QsciScintilla, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QsciScintilla, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QsciScintilla, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QsciScintilla, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QsciScintilla, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QsciScintilla, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QsciScintilla, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QsciScintilla, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QsciScintilla, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QsciScintilla, param1: i32, on: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qsciscintilla.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QsciScintilla, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsWidgetType(self: QsciScintilla) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsWindowType(self: QsciScintilla) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn IsQuickItemType(self: QsciScintilla) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SignalsBlocked(self: QsciScintilla) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QsciScintilla, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Thread(self: QsciScintilla) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QsciScintilla, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QsciScintilla, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QsciScintilla, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QsciScintilla, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QsciScintilla, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QsciScintilla, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qsciscintilla.Children: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QsciScintilla, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QsciScintilla, obj: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QsciScintilla, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QsciScintilla `
    ///
    pub fn Disconnect3(self: QsciScintilla) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QsciScintilla, receiver: anytype) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn DumpObjectTree(self: QsciScintilla) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn DumpObjectInfo(self: QsciScintilla) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QsciScintilla, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QsciScintilla, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QsciScintilla, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qsciscintilla.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qsciscintilla.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    pub fn BindingStorage(self: QsciScintilla) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn BindingStorage2(self: QsciScintilla) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Destroyed(self: QsciScintilla) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QsciScintilla, callback: *const fn (QsciScintilla) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Parent(self: QsciScintilla) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QsciScintilla, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn DeleteLater(self: QsciScintilla) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QsciScintilla, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QsciScintilla, time: i64, timerType: i32) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QsciScintilla, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QsciScintilla, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QsciScintilla, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QsciScintilla, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QsciScintilla, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QsciScintilla, callback: *const fn (QsciScintilla, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn PaintingActive(self: QsciScintilla) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn WidthMM(self: QsciScintilla) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn HeightMM(self: QsciScintilla) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn LogicalDpiX(self: QsciScintilla) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn LogicalDpiY(self: QsciScintilla) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn PhysicalDpiX(self: QsciScintilla) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn PhysicalDpiY(self: QsciScintilla) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn DevicePixelRatio(self: QsciScintilla) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn DevicePixelRatioF(self: QsciScintilla) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ColorCount(self: QsciScintilla) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Depth(self: QsciScintilla) i32 {
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

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` source: QMimeData `
    ///
    pub fn CanInsertFromMimeData(self: QsciScintilla, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.QsciScintilla_CanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `SuperCanInsertFromMimeData` instead
    ///
    pub const QBaseCanInsertFromMimeData = SuperCanInsertFromMimeData;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` source: QMimeData `
    ///
    pub fn SuperCanInsertFromMimeData(self: QsciScintilla, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.QsciScintilla_SuperCanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, source: QMimeData) callconv(.c) bool `
    ///
    pub fn OnCanInsertFromMimeData(self: QsciScintilla, callback: *const fn (QsciScintilla, QMimeData) callconv(.c) bool) void {
        qtc.QsciScintilla_OnCanInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` source: QMimeData `
    ///
    /// ` rectangular: *bool `
    ///
    pub fn FromMimeData(self: QsciScintilla, allocator: std.mem.Allocator, source: anytype, rectangular: *bool) []u8 {
        comptime _ = @TypeOf(source)._is_QMimeData;
        var _bytearray: qtc.libqt_string = qtc.QsciScintilla_FromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr), @ptrCast(rectangular));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintilla.FromMimeData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperFromMimeData` instead
    ///
    pub const QBaseFromMimeData = SuperFromMimeData;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` source: QMimeData `
    ///
    /// ` rectangular: *bool `
    ///
    pub fn SuperFromMimeData(self: QsciScintilla, allocator: std.mem.Allocator, source: anytype, rectangular: *bool) []u8 {
        comptime _ = @TypeOf(source)._is_QMimeData;
        var _bytearray: qtc.libqt_string = qtc.QsciScintilla_SuperFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr), @ptrCast(rectangular));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsciscintilla.FromMimeData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, source: QMimeData, rectangular: *bool) callconv(.c) qtc.libqt_string `
    ///
    pub fn OnFromMimeData(self: QsciScintilla, callback: *const fn (QsciScintilla, QMimeData, *bool) callconv(.c) qtc.libqt_string) void {
        qtc.QsciScintilla_OnFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` text: []u8 `
    ///
    /// ` rectangular: bool `
    ///
    pub fn ToMimeData(self: QsciScintilla, text: []u8, rectangular: bool) QMimeData {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QsciScintilla_ToMimeData(@ptrCast(self.ptr), text_str, rectangular) };
    }

    /// ### DEPRECATED: Use `SuperToMimeData` instead
    ///
    pub const QBaseToMimeData = SuperToMimeData;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` text: []u8 `
    ///
    /// ` rectangular: bool `
    ///
    pub fn SuperToMimeData(self: QsciScintilla, text: []u8, rectangular: bool) QMimeData {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QsciScintilla_SuperToMimeData(@ptrCast(self.ptr), text_str, rectangular) };
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, text: qtc.libqt_string, rectangular: bool) callconv(.c) QMimeData `
    ///
    pub fn OnToMimeData(self: QsciScintilla, callback: *const fn (QsciScintilla, qtc.libqt_string, bool) callconv(.c) QMimeData) void {
        qtc.QsciScintilla_OnToMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.QsciScintilla_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.QsciScintilla_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QDragEnterEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QsciScintilla_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QsciScintilla_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QsciScintilla_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QsciScintilla_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QDragMoveEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn DropEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.QsciScintilla_DropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.QsciScintilla_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QDropEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintilla_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintilla_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QFocusEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintilla_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintilla_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QFocusEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QsciScintilla, next: bool) bool {
        return qtc.QsciScintilla_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QsciScintilla, next: bool) bool {
        return qtc.QsciScintilla_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) bool) void {
        qtc.QsciScintilla_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QsciScintilla_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QsciScintilla_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QKeyEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QsciScintilla_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QsciScintilla_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QInputMethodEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QsciScintilla, query: i32) QVariant {
        return .{ .ptr = qtc.QsciScintilla_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QsciScintilla, query: i32) QVariant {
        return .{ .ptr = qtc.QsciScintilla_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) QVariant) void {
        qtc.QsciScintilla_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn PaintEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QsciScintilla_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QsciScintilla_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QPaintEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QsciScintilla_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QsciScintilla_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, e: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QResizeEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: QsciScintilla, dx: i32, dy: i32) void {
        qtc.QsciScintilla_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: QsciScintilla, dx: i32, dy: i32) void {
        qtc.QsciScintilla_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn MinimumSizeHint(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QsciScintilla_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperMinimumSizeHint(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QsciScintilla_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QsciScintilla, callback: *const fn () callconv(.c) QSize) void {
        qtc.QsciScintilla_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SizeHint(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QsciScintilla_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperSizeHint(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QsciScintilla_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QsciScintilla, callback: *const fn () callconv(.c) QSize) void {
        qtc.QsciScintilla_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SetupViewport(self: QsciScintilla, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.QsciScintilla_SetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SuperSetupViewport(self: QsciScintilla, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.QsciScintilla_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, viewport: QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: QsciScintilla, callback: *const fn (QsciScintilla, QWidget) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn EventFilter(self: QsciScintilla, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QsciScintilla_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperEventFilter(self: QsciScintilla, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QsciScintilla_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QsciScintilla, callback: *const fn (QsciScintilla, QObject, QEvent) callconv(.c) bool) void {
        qtc.QsciScintilla_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ViewportEvent(self: QsciScintilla, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QsciScintilla_ViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperViewportEvent(self: QsciScintilla, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QsciScintilla_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QEvent) callconv(.c) bool) void {
        qtc.QsciScintilla_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ViewportSizeHint(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QsciScintilla_ViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperViewportSizeHint(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QsciScintilla_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnViewportSizeHint(self: QsciScintilla, callback: *const fn () callconv(.c) QSize) void {
        qtc.QsciScintilla_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: QsciScintilla, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QsciScintilla_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: QsciScintilla, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QsciScintilla_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QsciScintilla, callback: *const fn (QsciScintilla, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QsciScintilla_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn DevType(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_DevType(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperDevType(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QsciScintilla, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciScintilla_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QsciScintilla, visible: bool) void {
        qtc.QsciScintilla_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QsciScintilla `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QsciScintilla, visible: bool) void {
        qtc.QsciScintilla_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QsciScintilla, param1: i32) i32 {
        return qtc.QsciScintilla_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QsciScintilla, param1: i32) i32 {
        return qtc.QsciScintilla_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) i32) void {
        qtc.QsciScintilla_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn HasHeightForWidth(self: QsciScintilla) bool {
        return qtc.QsciScintilla_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperHasHeightForWidth(self: QsciScintilla) bool {
        return qtc.QsciScintilla_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QsciScintilla, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintilla_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn PaintEngine(self: QsciScintilla) QPaintEngine {
        return .{ .ptr = qtc.QsciScintilla_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperPaintEngine(self: QsciScintilla) QPaintEngine {
        return .{ .ptr = qtc.QsciScintilla_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QsciScintilla, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QsciScintilla_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QsciScintilla_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QsciScintilla_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QKeyEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QsciScintilla_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QsciScintilla_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QEnterEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QsciScintilla_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QsciScintilla_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QsciScintilla_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QsciScintilla_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QMoveEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QsciScintilla_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QsciScintilla_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QCloseEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QsciScintilla_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QsciScintilla_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QTabletEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QsciScintilla_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QsciScintilla_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QActionEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QsciScintilla_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QsciScintilla_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QShowEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QsciScintilla_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QsciScintilla_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QHideEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QsciScintilla, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QsciScintilla_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QsciScintilla `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QsciScintilla, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QsciScintilla_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QsciScintilla_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QsciScintilla, param1: i32) i32 {
        return qtc.QsciScintilla_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QsciScintilla, param1: i32) i32 {
        return qtc.QsciScintilla_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) i32) void {
        qtc.QsciScintilla_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QsciScintilla, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QsciScintilla_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QsciScintilla, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QsciScintilla_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QsciScintilla, callback: *const fn (QsciScintilla, QPainter) callconv(.c) void) void {
        qtc.QsciScintilla_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QsciScintilla, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QsciScintilla_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QsciScintilla, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QsciScintilla_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QsciScintilla, callback: *const fn (QsciScintilla, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QsciScintilla_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SharedPainter(self: QsciScintilla) QPainter {
        return .{ .ptr = qtc.QsciScintilla_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperSharedPainter(self: QsciScintilla) QPainter {
        return .{ .ptr = qtc.QsciScintilla_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QsciScintilla, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QsciScintilla_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QsciScintilla_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QsciScintilla_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QTimerEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QsciScintilla_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QsciScintilla_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QChildEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QsciScintilla_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QsciScintilla, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QsciScintilla_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QsciScintilla, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintilla_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QsciScintilla, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintilla_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QsciScintilla, callback: *const fn (QsciScintilla, QMetaMethod) callconv(.c) void) void {
        qtc.QsciScintilla_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QsciScintilla, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintilla_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QsciScintilla, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintilla_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QsciScintilla, callback: *const fn (QsciScintilla, QMetaMethod) callconv(.c) void) void {
        qtc.QsciScintilla_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SetScrollBars(self: QsciScintilla) void {
        qtc.QsciScintilla_SetScrollBars(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetScrollBars` instead
    ///
    pub const QBaseSetScrollBars = SuperSetScrollBars;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SuperSetScrollBars(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperSetScrollBars(@ptrCast(self.ptr));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSetScrollBars(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnSetScrollBars(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ContextMenuNeeded(self: QsciScintilla, x: i32, y: i32) bool {
        return qtc.QsciScintilla_ContextMenuNeeded(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// ### DEPRECATED: Use `SuperContextMenuNeeded` instead
    ///
    pub const QBaseContextMenuNeeded = SuperContextMenuNeeded;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn SuperContextMenuNeeded(self: QsciScintilla, x: i32, y: i32) bool {
        return qtc.QsciScintilla_SuperContextMenuNeeded(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, x: i32, y: i32) callconv(.c) bool `
    ///
    pub fn OnContextMenuNeeded(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) bool) void {
        qtc.QsciScintilla_OnContextMenuNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: QsciScintilla, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QsciScintilla_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QsciScintilla `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: QsciScintilla, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QsciScintilla_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ViewportMargins(self: QsciScintilla) QMargins {
        return .{ .ptr = qtc.QsciScintilla_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperViewportMargins(self: QsciScintilla) QMargins {
        return .{ .ptr = qtc.QsciScintilla_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    pub fn OnViewportMargins(self: QsciScintilla, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QsciScintilla_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPainter `
    ///
    pub fn DrawFrame(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QsciScintilla_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPainter `
    ///
    pub fn SuperDrawFrame(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QsciScintilla_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: QsciScintilla, callback: *const fn (QsciScintilla, QPainter) callconv(.c) void) void {
        qtc.QsciScintilla_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn UpdateMicroFocus(self: QsciScintilla) void {
        qtc.QsciScintilla_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperUpdateMicroFocus(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Create(self: QsciScintilla) void {
        qtc.QsciScintilla_Create(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperCreate(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Destroy(self: QsciScintilla) void {
        qtc.QsciScintilla_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperDestroy(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FocusNextChild(self: QsciScintilla) bool {
        return qtc.QsciScintilla_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperFocusNextChild(self: QsciScintilla) bool {
        return qtc.QsciScintilla_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QsciScintilla, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintilla_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn FocusPreviousChild(self: QsciScintilla) bool {
        return qtc.QsciScintilla_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperFocusPreviousChild(self: QsciScintilla) bool {
        return qtc.QsciScintilla_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QsciScintilla, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintilla_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Sender(self: QsciScintilla) QObject {
        return .{ .ptr = qtc.QsciScintilla_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperSender(self: QsciScintilla) QObject {
        return .{ .ptr = qtc.QsciScintilla_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QsciScintilla, callback: *const fn () callconv(.c) QObject) void {
        qtc.QsciScintilla_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn SenderSignalIndex(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn SuperSenderSignalIndex(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QsciScintilla, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciScintilla_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QsciScintilla, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciScintilla_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QsciScintilla, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciScintilla_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) i32) void {
        qtc.QsciScintilla_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QsciScintilla, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciScintilla_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QsciScintilla, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciScintilla_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QsciScintilla, callback: *const fn (QsciScintilla, QMetaMethod) callconv(.c) bool) void {
        qtc.QsciScintilla_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QsciScintilla, metricA: i32, metricB: i32) f64 {
        return qtc.QsciScintilla_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QsciScintilla `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QsciScintilla, metricA: i32, metricB: i32) f64 {
        return qtc.QsciScintilla_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) f64) void {
        qtc.QsciScintilla_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn Delete(self: QsciScintilla) void {
        qtc.QsciScintilla_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const QsciScintilla = enum(i32) {
        pub const AiMaintain: i32 = 1;
        pub const AiOpening: i32 = 2;
        pub const AiClosing: i32 = 4;
        pub const MoNone: i32 = 0;
        pub const MoSublineSelect: i32 = 1;
    };

    pub const AnnotationDisplay = enum(i32) {
        pub const AnnotationHidden: i32 = 0;
        pub const AnnotationStandard: i32 = 1;
        pub const AnnotationBoxed: i32 = 2;
        pub const AnnotationIndented: i32 = 3;
    };

    pub const AutoCompletionUseSingle = enum(i32) {
        pub const AcusNever: i32 = 0;
        pub const AcusExplicit: i32 = 1;
        pub const AcusAlways: i32 = 2;
    };

    pub const AutoCompletionSource = enum(i32) {
        pub const AcsNone: i32 = 0;
        pub const AcsAll: i32 = 1;
        pub const AcsDocument: i32 = 2;
        pub const AcsAPIs: i32 = 3;
    };

    pub const BraceMatch = enum(i32) {
        pub const NoBraceMatch: i32 = 0;
        pub const StrictBraceMatch: i32 = 1;
        pub const SloppyBraceMatch: i32 = 2;
    };

    pub const CallTipsPosition = enum(i32) {
        pub const CallTipsBelowText: i32 = 0;
        pub const CallTipsAboveText: i32 = 1;
    };

    pub const CallTipsStyle = enum(i32) {
        pub const CallTipsNone: i32 = 0;
        pub const CallTipsNoContext: i32 = 1;
        pub const CallTipsNoAutoCompletionContext: i32 = 2;
        pub const CallTipsContext: i32 = 3;
    };

    pub const EdgeMode = enum(i32) {
        pub const EdgeNone: i32 = 0;
        pub const EdgeLine: i32 = 1;
        pub const EdgeBackground: i32 = 2;
        pub const EdgeMultipleLines: i32 = 3;
    };

    pub const EolMode = enum(i32) {
        pub const EolWindows: i32 = 0;
        pub const EolUnix: i32 = 2;
        pub const EolMac: i32 = 1;
    };

    pub const FoldStyle = enum(i32) {
        pub const NoFoldStyle: i32 = 0;
        pub const PlainFoldStyle: i32 = 1;
        pub const CircledFoldStyle: i32 = 2;
        pub const BoxedFoldStyle: i32 = 3;
        pub const CircledTreeFoldStyle: i32 = 4;
        pub const BoxedTreeFoldStyle: i32 = 5;
    };

    pub const IndicatorStyle = enum(i32) {
        pub const PlainIndicator: i32 = 0;
        pub const SquiggleIndicator: i32 = 1;
        pub const TTIndicator: i32 = 2;
        pub const DiagonalIndicator: i32 = 3;
        pub const StrikeIndicator: i32 = 4;
        pub const HiddenIndicator: i32 = 5;
        pub const BoxIndicator: i32 = 6;
        pub const RoundBoxIndicator: i32 = 7;
        pub const StraightBoxIndicator: i32 = 8;
        pub const FullBoxIndicator: i32 = 16;
        pub const DashesIndicator: i32 = 9;
        pub const DotsIndicator: i32 = 10;
        pub const SquiggleLowIndicator: i32 = 11;
        pub const DotBoxIndicator: i32 = 12;
        pub const SquigglePixmapIndicator: i32 = 13;
        pub const ThickCompositionIndicator: i32 = 14;
        pub const ThinCompositionIndicator: i32 = 15;
        pub const TextColorIndicator: i32 = 17;
        pub const TriangleIndicator: i32 = 18;
        pub const TriangleCharacterIndicator: i32 = 19;
        pub const GradientIndicator: i32 = 20;
        pub const CentreGradientIndicator: i32 = 21;
    };

    pub const MarginType = enum(i32) {
        pub const SymbolMargin: i32 = 0;
        pub const SymbolMarginDefaultForegroundColor: i32 = 3;
        pub const SymbolMarginDefaultBackgroundColor: i32 = 2;
        pub const NumberMargin: i32 = 1;
        pub const TextMargin: i32 = 4;
        pub const TextMarginRightJustified: i32 = 5;
        pub const SymbolMarginColor: i32 = 6;
    };

    pub const MarkerSymbol = enum(i32) {
        pub const Circle: i32 = 0;
        pub const Rectangle: i32 = 1;
        pub const RightTriangle: i32 = 2;
        pub const SmallRectangle: i32 = 3;
        pub const RightArrow: i32 = 4;
        pub const Invisible: i32 = 5;
        pub const DownTriangle: i32 = 6;
        pub const Minus: i32 = 7;
        pub const Plus: i32 = 8;
        pub const VerticalLine: i32 = 9;
        pub const BottomLeftCorner: i32 = 10;
        pub const LeftSideSplitter: i32 = 11;
        pub const BoxedPlus: i32 = 12;
        pub const BoxedPlusConnected: i32 = 13;
        pub const BoxedMinus: i32 = 14;
        pub const BoxedMinusConnected: i32 = 15;
        pub const RoundedBottomLeftCorner: i32 = 16;
        pub const LeftSideRoundedSplitter: i32 = 17;
        pub const CircledPlus: i32 = 18;
        pub const CircledPlusConnected: i32 = 19;
        pub const CircledMinus: i32 = 20;
        pub const CircledMinusConnected: i32 = 21;
        pub const Background: i32 = 22;
        pub const ThreeDots: i32 = 23;
        pub const ThreeRightArrows: i32 = 24;
        pub const FullRectangle: i32 = 26;
        pub const LeftRectangle: i32 = 27;
        pub const Underline: i32 = 29;
        pub const Bookmark: i32 = 31;
    };

    pub const TabDrawMode = enum(i32) {
        pub const TabLongArrow: i32 = 0;
        pub const TabStrikeOut: i32 = 1;
    };

    pub const WhitespaceVisibility = enum(i32) {
        pub const WsInvisible: i32 = 0;
        pub const WsVisible: i32 = 1;
        pub const WsVisibleAfterIndent: i32 = 2;
        pub const WsVisibleOnlyInIndent: i32 = 3;
    };

    pub const WrapMode = enum(i32) {
        pub const WrapNone: i32 = 0;
        pub const WrapWord: i32 = 1;
        pub const WrapCharacter: i32 = 2;
        pub const WrapWhitespace: i32 = 3;
    };

    pub const WrapVisualFlag = enum(i32) {
        pub const WrapFlagNone: i32 = 0;
        pub const WrapFlagByText: i32 = 1;
        pub const WrapFlagByBorder: i32 = 2;
        pub const WrapFlagInMargin: i32 = 3;
    };

    pub const WrapIndentMode = enum(i32) {
        pub const WrapIndentFixed: i32 = 0;
        pub const WrapIndentSame: i32 = 1;
        pub const WrapIndentIndented: i32 = 2;
        pub const WrapIndentDeeplyIndented: i32 = 3;
    };
};
