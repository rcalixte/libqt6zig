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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QsciScintilla object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) QsciScintilla {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QsciScintilla_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QsciScintilla object in C++ memory
    ///
    pub fn new2() QsciScintilla {
        return .{ .ptr = qtc.QsciScintilla_new2() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn metaObject(self: QsciScintilla) QMetaObject {
        return .{ .ptr = qtc.QsciScintilla_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QsciScintilla, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QsciScintilla_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn superMetaObject(self: QsciScintilla) QMetaObject {
        return .{ .ptr = qtc.QsciScintilla_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QsciScintilla, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciScintilla_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QsciScintilla_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QsciScintilla, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QsciScintilla_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

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
    pub fn metacall(self: QsciScintilla, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciScintilla_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QsciScintilla_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

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
    pub fn superMetacall(self: QsciScintilla, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QsciScintilla_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `apiContext` instead
    ///
    pub const ApiContext = apiContext;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _pos: i32 `
    ///
    /// ` context_start: *i32 `
    ///
    /// ` last_word_start: *i32 `
    ///
    pub fn apiContext(self: QsciScintilla, allocator: std.mem.Allocator, _pos: i32, context_start: *i32, last_word_start: *i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciScintilla_ApiContext(@ptrCast(self.ptr), @bitCast(_pos), @ptrCast(context_start), @ptrCast(last_word_start));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QsciScintilla.apiContext: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciScintilla.apiContext: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onApiContext` instead
    ///
    pub const OnApiContext = onApiContext;

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
    pub fn onApiContext(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, *i32, *i32) callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QsciScintilla_OnApiContext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superApiContext` instead
    ///
    pub const SuperApiContext = superApiContext;

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
    /// ` _pos: i32 `
    ///
    /// ` context_start: *i32 `
    ///
    /// ` last_word_start: *i32 `
    ///
    pub fn superApiContext(self: QsciScintilla, allocator: std.mem.Allocator, _pos: i32, context_start: *i32, last_word_start: *i32) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QsciScintilla_SuperApiContext(@ptrCast(self.ptr), @bitCast(_pos), @ptrCast(context_start), @ptrCast(last_word_start));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QsciScintilla.apiContext: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciScintilla.apiContext: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `annotate` instead
    ///
    pub const Annotate = annotate;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _style: i32 `
    ///
    pub fn annotate(self: QsciScintilla, line: i32, _text: []const u8, _style: i32) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QsciScintilla_Annotate(@ptrCast(self.ptr), @bitCast(line), text_str, @bitCast(_style));
    }

    /// ### DEPRECATED: Use `annotate2` instead
    ///
    pub const Annotate2 = annotate2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _style: QsciStyle `
    ///
    pub fn annotate2(self: QsciScintilla, line: i32, _text: []const u8, _style: anytype) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_style)._is_QsciStyle;
        qtc.QsciScintilla_Annotate2(@ptrCast(self.ptr), @bitCast(line), text_str, @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `annotate3` instead
    ///
    pub const Annotate3 = annotate3;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` _text: QsciStyledText `
    ///
    pub fn annotate3(self: QsciScintilla, line: i32, _text: anytype) void {
        comptime _ = @TypeOf(_text)._is_QsciStyledText;
        qtc.QsciScintilla_Annotate3(@ptrCast(self.ptr), @bitCast(line), @ptrCast(_text.ptr));
    }

    /// ### DEPRECATED: Use `annotation` instead
    ///
    pub const Annotation = annotation;

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
    pub fn annotation(self: QsciScintilla, allocator: std.mem.Allocator, line: i32) []const u8 {
        var _str = qtc.QsciScintilla_Annotation(@ptrCast(self.ptr), @bitCast(line));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.annotation: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `annotationDisplay` instead
    ///
    pub const AnnotationDisplay = annotationDisplay;

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
    pub fn annotationDisplay(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_AnnotationDisplay(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearAnnotations` instead
    ///
    pub const ClearAnnotations = clearAnnotations;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn clearAnnotations(self: QsciScintilla) void {
        qtc.QsciScintilla_ClearAnnotations(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoCompletionCaseSensitivity` instead
    ///
    pub const AutoCompletionCaseSensitivity = autoCompletionCaseSensitivity;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn autoCompletionCaseSensitivity(self: QsciScintilla) bool {
        return qtc.QsciScintilla_AutoCompletionCaseSensitivity(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoCompletionFillupsEnabled` instead
    ///
    pub const AutoCompletionFillupsEnabled = autoCompletionFillupsEnabled;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn autoCompletionFillupsEnabled(self: QsciScintilla) bool {
        return qtc.QsciScintilla_AutoCompletionFillupsEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoCompletionReplaceWord` instead
    ///
    pub const AutoCompletionReplaceWord = autoCompletionReplaceWord;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn autoCompletionReplaceWord(self: QsciScintilla) bool {
        return qtc.QsciScintilla_AutoCompletionReplaceWord(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoCompletionShowSingle` instead
    ///
    pub const AutoCompletionShowSingle = autoCompletionShowSingle;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn autoCompletionShowSingle(self: QsciScintilla) bool {
        return qtc.QsciScintilla_AutoCompletionShowSingle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoCompletionSource` instead
    ///
    pub const AutoCompletionSource = autoCompletionSource;

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
    pub fn autoCompletionSource(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_AutoCompletionSource(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoCompletionThreshold` instead
    ///
    pub const AutoCompletionThreshold = autoCompletionThreshold;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn autoCompletionThreshold(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_AutoCompletionThreshold(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoCompletionUseSingle` instead
    ///
    pub const AutoCompletionUseSingle = autoCompletionUseSingle;

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
    pub fn autoCompletionUseSingle(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_AutoCompletionUseSingle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoIndent` instead
    ///
    pub const AutoIndent = autoIndent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn autoIndent(self: QsciScintilla) bool {
        return qtc.QsciScintilla_AutoIndent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `backspaceUnindents` instead
    ///
    pub const BackspaceUnindents = backspaceUnindents;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn backspaceUnindents(self: QsciScintilla) bool {
        return qtc.QsciScintilla_BackspaceUnindents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `beginUndoAction` instead
    ///
    pub const BeginUndoAction = beginUndoAction;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn beginUndoAction(self: QsciScintilla) void {
        qtc.QsciScintilla_BeginUndoAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `braceMatching` instead
    ///
    pub const BraceMatching = braceMatching;

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
    pub fn braceMatching(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_BraceMatching(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `bytes` instead
    ///
    pub const Bytes = bytes;

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
    pub fn bytes(self: QsciScintilla, allocator: std.mem.Allocator, start: i32, end: i32) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QsciScintilla_Bytes(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciScintilla.bytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `callTipsPosition` instead
    ///
    pub const CallTipsPosition = callTipsPosition;

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
    pub fn callTipsPosition(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_CallTipsPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `callTipsStyle` instead
    ///
    pub const CallTipsStyle = callTipsStyle;

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
    pub fn callTipsStyle(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_CallTipsStyle(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `callTipsVisible` instead
    ///
    pub const CallTipsVisible = callTipsVisible;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn callTipsVisible(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_CallTipsVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cancelFind` instead
    ///
    pub const CancelFind = cancelFind;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn cancelFind(self: QsciScintilla) void {
        qtc.QsciScintilla_CancelFind(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cancelList` instead
    ///
    pub const CancelList = cancelList;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn cancelList(self: QsciScintilla) void {
        qtc.QsciScintilla_CancelList(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `caseSensitive` instead
    ///
    pub const CaseSensitive = caseSensitive;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn caseSensitive(self: QsciScintilla) bool {
        return qtc.QsciScintilla_CaseSensitive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearFolds` instead
    ///
    pub const ClearFolds = clearFolds;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn clearFolds(self: QsciScintilla) void {
        qtc.QsciScintilla_ClearFolds(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearIndicatorRange` instead
    ///
    pub const ClearIndicatorRange = clearIndicatorRange;

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
    pub fn clearIndicatorRange(self: QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32, indicatorNumber: i32) void {
        qtc.QsciScintilla_ClearIndicatorRange(@ptrCast(self.ptr), @bitCast(lineFrom), @bitCast(indexFrom), @bitCast(lineTo), @bitCast(indexTo), @bitCast(indicatorNumber));
    }

    /// ### DEPRECATED: Use `clearRegisteredImages` instead
    ///
    pub const ClearRegisteredImages = clearRegisteredImages;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn clearRegisteredImages(self: QsciScintilla) void {
        qtc.QsciScintilla_ClearRegisteredImages(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `color` instead
    ///
    pub const Color = color;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn color(self: QsciScintilla) QColor {
        return .{ .ptr = qtc.QsciScintilla_Color(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `contractedFolds` instead
    ///
    pub const ContractedFolds = contractedFolds;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn contractedFolds(self: QsciScintilla, allocator: std.mem.Allocator) []i32 {
        const _arr: qtc.libqt_list = qtc.QsciScintilla_ContractedFolds(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(i32, _arr.len) catch @panic("QsciScintilla.contractedFolds: Memory allocation failed");
        const _data_val: [*]i32 = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data_val[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `convertEols` instead
    ///
    pub const ConvertEols = convertEols;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.EolMode `
    ///
    pub fn convertEols(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_ConvertEols(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `createStandardContextMenu` instead
    ///
    pub const CreateStandardContextMenu = createStandardContextMenu;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn createStandardContextMenu(self: QsciScintilla) QMenu {
        return .{ .ptr = qtc.QsciScintilla_CreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `document` instead
    ///
    pub const Document = document;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn document(self: QsciScintilla) QsciDocument {
        return .{ .ptr = qtc.QsciScintilla_Document(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `endUndoAction` instead
    ///
    pub const EndUndoAction = endUndoAction;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn endUndoAction(self: QsciScintilla) void {
        qtc.QsciScintilla_EndUndoAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `edgeColor` instead
    ///
    pub const EdgeColor = edgeColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn edgeColor(self: QsciScintilla) QColor {
        return .{ .ptr = qtc.QsciScintilla_EdgeColor(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `edgeColumn` instead
    ///
    pub const EdgeColumn = edgeColumn;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn edgeColumn(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_EdgeColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `edgeMode` instead
    ///
    pub const EdgeMode = edgeMode;

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
    pub fn edgeMode(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_EdgeMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` f: QFont `
    ///
    pub fn setFont(self: QsciScintilla, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciScintilla_SetFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### DEPRECATED: Use `eolMode` instead
    ///
    pub const EolMode = eolMode;

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
    pub fn eolMode(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_EolMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `eolVisibility` instead
    ///
    pub const EolVisibility = eolVisibility;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn eolVisibility(self: QsciScintilla) bool {
        return qtc.QsciScintilla_EolVisibility(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `extraAscent` instead
    ///
    pub const ExtraAscent = extraAscent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn extraAscent(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_ExtraAscent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `extraDescent` instead
    ///
    pub const ExtraDescent = extraDescent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn extraDescent(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_ExtraDescent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `fillIndicatorRange` instead
    ///
    pub const FillIndicatorRange = fillIndicatorRange;

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
    pub fn fillIndicatorRange(self: QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32, indicatorNumber: i32) void {
        qtc.QsciScintilla_FillIndicatorRange(@ptrCast(self.ptr), @bitCast(lineFrom), @bitCast(indexFrom), @bitCast(lineTo), @bitCast(indexTo), @bitCast(indicatorNumber));
    }

    /// ### DEPRECATED: Use `findFirst` instead
    ///
    pub const FindFirst = findFirst;

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
    /// ` _show: bool `
    ///
    /// ` posix: bool `
    ///
    /// ` cxx11: bool `
    ///
    pub fn findFirst(self: QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, _show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = qtc.libqt_string{
            .len = expr.len,
            .data = expr.ptr,
        };
        return qtc.QsciScintilla_FindFirst(@ptrCast(self.ptr), expr_str, re, cs, wo, wrap, forward, @bitCast(line), @bitCast(index), _show, posix, cxx11);
    }

    /// ### DEPRECATED: Use `onFindFirst` instead
    ///
    pub const OnFindFirst = onFindFirst;

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
    pub fn onFindFirst(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8, bool, bool, bool, bool, bool, i32, i32, bool, bool, bool) callconv(.c) bool) void {
        qtc.QsciScintilla_OnFindFirst(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFindFirst` instead
    ///
    pub const SuperFindFirst = superFindFirst;

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
    /// ` _show: bool `
    ///
    /// ` posix: bool `
    ///
    /// ` cxx11: bool `
    ///
    pub fn superFindFirst(self: QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, wrap: bool, forward: bool, line: i32, index: i32, _show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = qtc.libqt_string{
            .len = expr.len,
            .data = expr.ptr,
        };
        return qtc.QsciScintilla_SuperFindFirst(@ptrCast(self.ptr), expr_str, re, cs, wo, wrap, forward, @bitCast(line), @bitCast(index), _show, posix, cxx11);
    }

    /// ### DEPRECATED: Use `findFirstInSelection` instead
    ///
    pub const FindFirstInSelection = findFirstInSelection;

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
    /// ` _show: bool `
    ///
    /// ` posix: bool `
    ///
    /// ` cxx11: bool `
    ///
    pub fn findFirstInSelection(self: QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, _show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = qtc.libqt_string{
            .len = expr.len,
            .data = expr.ptr,
        };
        return qtc.QsciScintilla_FindFirstInSelection(@ptrCast(self.ptr), expr_str, re, cs, wo, forward, _show, posix, cxx11);
    }

    /// ### DEPRECATED: Use `onFindFirstInSelection` instead
    ///
    pub const OnFindFirstInSelection = onFindFirstInSelection;

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
    pub fn onFindFirstInSelection(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8, bool, bool, bool, bool, bool, bool, bool) callconv(.c) bool) void {
        qtc.QsciScintilla_OnFindFirstInSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFindFirstInSelection` instead
    ///
    pub const SuperFindFirstInSelection = superFindFirstInSelection;

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
    /// ` _show: bool `
    ///
    /// ` posix: bool `
    ///
    /// ` cxx11: bool `
    ///
    pub fn superFindFirstInSelection(self: QsciScintilla, expr: []const u8, re: bool, cs: bool, wo: bool, forward: bool, _show: bool, posix: bool, cxx11: bool) bool {
        const expr_str = qtc.libqt_string{
            .len = expr.len,
            .data = expr.ptr,
        };
        return qtc.QsciScintilla_SuperFindFirstInSelection(@ptrCast(self.ptr), expr_str, re, cs, wo, forward, _show, posix, cxx11);
    }

    /// ### DEPRECATED: Use `findNext` instead
    ///
    pub const FindNext = findNext;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn findNext(self: QsciScintilla) bool {
        return qtc.QsciScintilla_FindNext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onFindNext` instead
    ///
    pub const OnFindNext = onFindNext;

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
    pub fn onFindNext(self: QsciScintilla, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintilla_OnFindNext(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFindNext` instead
    ///
    pub const SuperFindNext = superFindNext;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superFindNext(self: QsciScintilla) bool {
        return qtc.QsciScintilla_SuperFindNext(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `findMatchingBrace` instead
    ///
    pub const FindMatchingBrace = findMatchingBrace;

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
    pub fn findMatchingBrace(self: QsciScintilla, brace: *isize, other: *isize, mode: i32) bool {
        switch (builtin.target.os.tag) {
            .linux, .freebsd => {},
            else => @compileError("Unsupported operating system"),
        }

        return qtc.QsciScintilla_FindMatchingBrace(@ptrCast(self.ptr), @ptrCast(brace), @ptrCast(other), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `firstVisibleLine` instead
    ///
    pub const FirstVisibleLine = firstVisibleLine;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn firstVisibleLine(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_FirstVisibleLine(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `folding` instead
    ///
    pub const Folding = folding;

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
    pub fn folding(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_Folding(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `getCursorPosition` instead
    ///
    pub const GetCursorPosition = getCursorPosition;

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
    pub fn getCursorPosition(self: QsciScintilla, line: *i32, index: *i32) void {
        qtc.QsciScintilla_GetCursorPosition(@ptrCast(self.ptr), @ptrCast(line), @ptrCast(index));
    }

    /// ### DEPRECATED: Use `getSelection` instead
    ///
    pub const GetSelection = getSelection;

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
    pub fn getSelection(self: QsciScintilla, lineFrom: *i32, indexFrom: *i32, lineTo: *i32, indexTo: *i32) void {
        qtc.QsciScintilla_GetSelection(@ptrCast(self.ptr), @ptrCast(lineFrom), @ptrCast(indexFrom), @ptrCast(lineTo), @ptrCast(indexTo));
    }

    /// ### DEPRECATED: Use `hasSelectedText` instead
    ///
    pub const HasSelectedText = hasSelectedText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn hasSelectedText(self: QsciScintilla) bool {
        return qtc.QsciScintilla_HasSelectedText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indentation` instead
    ///
    pub const Indentation = indentation;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn indentation(self: QsciScintilla, line: i32) i32 {
        return qtc.QsciScintilla_Indentation(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `indentationGuides` instead
    ///
    pub const IndentationGuides = indentationGuides;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn indentationGuides(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IndentationGuides(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indentationsUseTabs` instead
    ///
    pub const IndentationsUseTabs = indentationsUseTabs;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn indentationsUseTabs(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IndentationsUseTabs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indentationWidth` instead
    ///
    pub const IndentationWidth = indentationWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn indentationWidth(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_IndentationWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indicatorDefine` instead
    ///
    pub const IndicatorDefine = indicatorDefine;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _style: qsciscintilla_enums.IndicatorStyle `
    ///
    pub fn indicatorDefine(self: QsciScintilla, _style: i32) i32 {
        return qtc.QsciScintilla_IndicatorDefine(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `indicatorDrawUnder` instead
    ///
    pub const IndicatorDrawUnder = indicatorDrawUnder;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn indicatorDrawUnder(self: QsciScintilla, indicatorNumber: i32) bool {
        return qtc.QsciScintilla_IndicatorDrawUnder(@ptrCast(self.ptr), @bitCast(indicatorNumber));
    }

    /// ### DEPRECATED: Use `isCallTipActive` instead
    ///
    pub const IsCallTipActive = isCallTipActive;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn isCallTipActive(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsCallTipActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isListActive` instead
    ///
    pub const IsListActive = isListActive;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn isListActive(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsListActive(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isModified` instead
    ///
    pub const IsModified = isModified;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn isModified(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsModified(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadOnly` instead
    ///
    pub const IsReadOnly = isReadOnly;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn isReadOnly(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsReadOnly(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRedoAvailable` instead
    ///
    pub const IsRedoAvailable = isRedoAvailable;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn isRedoAvailable(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsRedoAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUndoAvailable` instead
    ///
    pub const IsUndoAvailable = isUndoAvailable;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn isUndoAvailable(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsUndoAvailable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isUtf8` instead
    ///
    pub const IsUtf8 = isUtf8;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn isUtf8(self: QsciScintilla) bool {
        return qtc.QsciScintilla_IsUtf8(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isWordCharacter` instead
    ///
    pub const IsWordCharacter = isWordCharacter;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` ch: u8 `
    ///
    pub fn isWordCharacter(self: QsciScintilla, ch: u8) bool {
        return qtc.QsciScintilla_IsWordCharacter(@ptrCast(self.ptr), @bitCast(ch));
    }

    /// ### DEPRECATED: Use `lineAt` instead
    ///
    pub const LineAt = lineAt;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` point: QPoint `
    ///
    pub fn lineAt(self: QsciScintilla, point: anytype) i32 {
        comptime _ = @TypeOf(point)._is_QPoint;
        return qtc.QsciScintilla_LineAt(@ptrCast(self.ptr), @ptrCast(point.ptr));
    }

    /// ### DEPRECATED: Use `lineIndexFromPosition` instead
    ///
    pub const LineIndexFromPosition = lineIndexFromPosition;

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
    pub fn lineIndexFromPosition(self: QsciScintilla, position: i32, line: *i32, index: *i32) void {
        qtc.QsciScintilla_LineIndexFromPosition(@ptrCast(self.ptr), @bitCast(position), @ptrCast(line), @ptrCast(index));
    }

    /// ### DEPRECATED: Use `lineLength` instead
    ///
    pub const LineLength = lineLength;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn lineLength(self: QsciScintilla, line: i32) i32 {
        return qtc.QsciScintilla_LineLength(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `lines` instead
    ///
    pub const Lines = lines;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn lines(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_Lines(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `length` instead
    ///
    pub const Length = length;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn length(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_Length(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `lexer` instead
    ///
    pub const Lexer = lexer;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn lexer(self: QsciScintilla) QsciLexer {
        return .{ .ptr = qtc.QsciScintilla_Lexer(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `marginBackgroundColor` instead
    ///
    pub const MarginBackgroundColor = marginBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    pub fn marginBackgroundColor(self: QsciScintilla, margin: i32) QColor {
        return .{ .ptr = qtc.QsciScintilla_MarginBackgroundColor(@ptrCast(self.ptr), @bitCast(margin)) };
    }

    /// ### DEPRECATED: Use `marginLineNumbers` instead
    ///
    pub const MarginLineNumbers = marginLineNumbers;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    pub fn marginLineNumbers(self: QsciScintilla, margin: i32) bool {
        return qtc.QsciScintilla_MarginLineNumbers(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `marginMarkerMask` instead
    ///
    pub const MarginMarkerMask = marginMarkerMask;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    pub fn marginMarkerMask(self: QsciScintilla, margin: i32) i32 {
        return qtc.QsciScintilla_MarginMarkerMask(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `marginOptions` instead
    ///
    pub const MarginOptions = marginOptions;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn marginOptions(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_MarginOptions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `marginSensitivity` instead
    ///
    pub const MarginSensitivity = marginSensitivity;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    pub fn marginSensitivity(self: QsciScintilla, margin: i32) bool {
        return qtc.QsciScintilla_MarginSensitivity(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `marginType` instead
    ///
    pub const MarginType = marginType;

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
    pub fn marginType(self: QsciScintilla, margin: i32) i32 {
        return qtc.QsciScintilla_MarginType(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `marginWidth` instead
    ///
    pub const MarginWidth = marginWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    pub fn marginWidth(self: QsciScintilla, margin: i32) i32 {
        return qtc.QsciScintilla_MarginWidth(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `margins` instead
    ///
    pub const Margins = margins;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn margins(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_Margins(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `markerDefine` instead
    ///
    pub const MarkerDefine = markerDefine;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` sym: qsciscintilla_enums.MarkerSymbol `
    ///
    pub fn markerDefine(self: QsciScintilla, sym: i32) i32 {
        return qtc.QsciScintilla_MarkerDefine(@ptrCast(self.ptr), @bitCast(sym));
    }

    /// ### DEPRECATED: Use `markerDefine2` instead
    ///
    pub const MarkerDefine2 = markerDefine2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` ch: u8 `
    ///
    pub fn markerDefine2(self: QsciScintilla, ch: u8) i32 {
        return qtc.QsciScintilla_MarkerDefine2(@ptrCast(self.ptr), @bitCast(ch));
    }

    /// ### DEPRECATED: Use `markerDefine3` instead
    ///
    pub const MarkerDefine3 = markerDefine3;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` pm: QPixmap `
    ///
    pub fn markerDefine3(self: QsciScintilla, pm: anytype) i32 {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        return qtc.QsciScintilla_MarkerDefine3(@ptrCast(self.ptr), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `markerDefine4` instead
    ///
    pub const MarkerDefine4 = markerDefine4;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` im: QImage `
    ///
    pub fn markerDefine4(self: QsciScintilla, im: anytype) i32 {
        comptime _ = @TypeOf(im)._is_QImage;
        return qtc.QsciScintilla_MarkerDefine4(@ptrCast(self.ptr), @ptrCast(im.ptr));
    }

    /// ### DEPRECATED: Use `markerAdd` instead
    ///
    pub const MarkerAdd = markerAdd;

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
    pub fn markerAdd(self: QsciScintilla, linenr: i32, markerNumber: i32) i32 {
        return qtc.QsciScintilla_MarkerAdd(@ptrCast(self.ptr), @bitCast(linenr), @bitCast(markerNumber));
    }

    /// ### DEPRECATED: Use `markersAtLine` instead
    ///
    pub const MarkersAtLine = markersAtLine;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    pub fn markersAtLine(self: QsciScintilla, linenr: i32) u32 {
        return qtc.QsciScintilla_MarkersAtLine(@ptrCast(self.ptr), @bitCast(linenr));
    }

    /// ### DEPRECATED: Use `markerDelete` instead
    ///
    pub const MarkerDelete = markerDelete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    pub fn markerDelete(self: QsciScintilla, linenr: i32) void {
        qtc.QsciScintilla_MarkerDelete(@ptrCast(self.ptr), @bitCast(linenr));
    }

    /// ### DEPRECATED: Use `markerDeleteAll` instead
    ///
    pub const MarkerDeleteAll = markerDeleteAll;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn markerDeleteAll(self: QsciScintilla) void {
        qtc.QsciScintilla_MarkerDeleteAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `markerDeleteHandle` instead
    ///
    pub const MarkerDeleteHandle = markerDeleteHandle;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mhandle: i32 `
    ///
    pub fn markerDeleteHandle(self: QsciScintilla, mhandle: i32) void {
        qtc.QsciScintilla_MarkerDeleteHandle(@ptrCast(self.ptr), @bitCast(mhandle));
    }

    /// ### DEPRECATED: Use `markerLine` instead
    ///
    pub const MarkerLine = markerLine;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mhandle: i32 `
    ///
    pub fn markerLine(self: QsciScintilla, mhandle: i32) i32 {
        return qtc.QsciScintilla_MarkerLine(@ptrCast(self.ptr), @bitCast(mhandle));
    }

    /// ### DEPRECATED: Use `markerFindNext` instead
    ///
    pub const MarkerFindNext = markerFindNext;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    /// ` _mask: u32 `
    ///
    pub fn markerFindNext(self: QsciScintilla, linenr: i32, _mask: u32) i32 {
        return qtc.QsciScintilla_MarkerFindNext(@ptrCast(self.ptr), @bitCast(linenr), @bitCast(_mask));
    }

    /// ### DEPRECATED: Use `markerFindPrevious` instead
    ///
    pub const MarkerFindPrevious = markerFindPrevious;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    /// ` _mask: u32 `
    ///
    pub fn markerFindPrevious(self: QsciScintilla, linenr: i32, _mask: u32) i32 {
        return qtc.QsciScintilla_MarkerFindPrevious(@ptrCast(self.ptr), @bitCast(linenr), @bitCast(_mask));
    }

    /// ### DEPRECATED: Use `overwriteMode` instead
    ///
    pub const OverwriteMode = overwriteMode;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn overwriteMode(self: QsciScintilla) bool {
        return qtc.QsciScintilla_OverwriteMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paper` instead
    ///
    pub const Paper = paper;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn paper(self: QsciScintilla) QColor {
        return .{ .ptr = qtc.QsciScintilla_Paper(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `positionFromLineIndex` instead
    ///
    pub const PositionFromLineIndex = positionFromLineIndex;

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
    pub fn positionFromLineIndex(self: QsciScintilla, line: i32, index: i32) i32 {
        return qtc.QsciScintilla_PositionFromLineIndex(@ptrCast(self.ptr), @bitCast(line), @bitCast(index));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` io: QIODevice `
    ///
    pub fn read(self: QsciScintilla, io: anytype) bool {
        comptime _ = @TypeOf(io)._is_QIODevice;
        return qtc.QsciScintilla_Read(@ptrCast(self.ptr), @ptrCast(io.ptr));
    }

    /// ### DEPRECATED: Use `recolor` instead
    ///
    pub const Recolor = recolor;

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
    pub fn recolor(self: QsciScintilla, start: i32, end: i32) void {
        qtc.QsciScintilla_Recolor(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `onRecolor` instead
    ///
    pub const OnRecolor = onRecolor;

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
    pub fn onRecolor(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnRecolor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRecolor` instead
    ///
    pub const SuperRecolor = superRecolor;

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
    pub fn superRecolor(self: QsciScintilla, start: i32, end: i32) void {
        qtc.QsciScintilla_SuperRecolor(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `registerImage` instead
    ///
    pub const RegisterImage = registerImage;

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
    pub fn registerImage(self: QsciScintilla, id: i32, pm: anytype) void {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        qtc.QsciScintilla_RegisterImage(@ptrCast(self.ptr), @bitCast(id), @ptrCast(pm.ptr));
    }

    /// ### DEPRECATED: Use `registerImage2` instead
    ///
    pub const RegisterImage2 = registerImage2;

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
    pub fn registerImage2(self: QsciScintilla, id: i32, im: anytype) void {
        comptime _ = @TypeOf(im)._is_QImage;
        qtc.QsciScintilla_RegisterImage2(@ptrCast(self.ptr), @bitCast(id), @ptrCast(im.ptr));
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` replaceStr: []const u8 `
    ///
    pub fn replace(self: QsciScintilla, replaceStr: []const u8) void {
        const replaceStr_str = qtc.libqt_string{
            .len = replaceStr.len,
            .data = replaceStr.ptr,
        };
        qtc.QsciScintilla_Replace(@ptrCast(self.ptr), replaceStr_str);
    }

    /// ### DEPRECATED: Use `onReplace` instead
    ///
    pub const OnReplace = onReplace;

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
    pub fn onReplace(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnReplace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReplace` instead
    ///
    pub const SuperReplace = superReplace;

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
    pub fn superReplace(self: QsciScintilla, replaceStr: []const u8) void {
        const replaceStr_str = qtc.libqt_string{
            .len = replaceStr.len,
            .data = replaceStr.ptr,
        };
        qtc.QsciScintilla_SuperReplace(@ptrCast(self.ptr), replaceStr_str);
    }

    /// ### DEPRECATED: Use `resetFoldMarginColors` instead
    ///
    pub const ResetFoldMarginColors = resetFoldMarginColors;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn resetFoldMarginColors(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetFoldMarginColors(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetHotspotBackgroundColor` instead
    ///
    pub const ResetHotspotBackgroundColor = resetHotspotBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn resetHotspotBackgroundColor(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetHotspotBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetHotspotForegroundColor` instead
    ///
    pub const ResetHotspotForegroundColor = resetHotspotForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn resetHotspotForegroundColor(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetHotspotForegroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scrollWidth` instead
    ///
    pub const ScrollWidth = scrollWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn scrollWidth(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_ScrollWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scrollWidthTracking` instead
    ///
    pub const ScrollWidthTracking = scrollWidthTracking;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn scrollWidthTracking(self: QsciScintilla) bool {
        return qtc.QsciScintilla_ScrollWidthTracking(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFoldMarginColors` instead
    ///
    pub const SetFoldMarginColors = setFoldMarginColors;

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
    pub fn setFoldMarginColors(self: QsciScintilla, fore: anytype, back: anytype) void {
        comptime _ = @TypeOf(fore)._is_QColor;
        comptime _ = @TypeOf(back)._is_QColor;
        qtc.QsciScintilla_SetFoldMarginColors(@ptrCast(self.ptr), @ptrCast(fore.ptr), @ptrCast(back.ptr));
    }

    /// ### DEPRECATED: Use `setAnnotationDisplay` instead
    ///
    pub const SetAnnotationDisplay = setAnnotationDisplay;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` display: qsciscintilla_enums.AnnotationDisplay `
    ///
    pub fn setAnnotationDisplay(self: QsciScintilla, display: i32) void {
        qtc.QsciScintilla_SetAnnotationDisplay(@ptrCast(self.ptr), @bitCast(display));
    }

    /// ### DEPRECATED: Use `setAutoCompletionFillupsEnabled` instead
    ///
    pub const SetAutoCompletionFillupsEnabled = setAutoCompletionFillupsEnabled;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoCompletionFillupsEnabled(self: QsciScintilla, enabled: bool) void {
        qtc.QsciScintilla_SetAutoCompletionFillupsEnabled(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setAutoCompletionFillups` instead
    ///
    pub const SetAutoCompletionFillups = setAutoCompletionFillups;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` fillups: [:0]const u8 `
    ///
    pub fn setAutoCompletionFillups(self: QsciScintilla, fillups: [:0]const u8) void {
        const fillups_Cstring = fillups.ptr;
        qtc.QsciScintilla_SetAutoCompletionFillups(@ptrCast(self.ptr), fillups_Cstring);
    }

    /// ### DEPRECATED: Use `setAutoCompletionWordSeparators` instead
    ///
    pub const SetAutoCompletionWordSeparators = setAutoCompletionWordSeparators;

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
    pub fn setAutoCompletionWordSeparators(self: QsciScintilla, allocator: std.mem.Allocator, separators: []const []const u8) void {
        const separators_arr = allocator.alloc(qtc.libqt_string, separators.len) catch @panic("QsciScintilla.setAutoCompletionWordSeparators: Memory allocation failed");
        defer allocator.free(separators_arr);
        for (separators, 0..separators.len) |str_item, i|
            separators_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const separators_list = qtc.libqt_list{
            .len = separators.len,
            .data = separators_arr.ptr,
        };
        qtc.QsciScintilla_SetAutoCompletionWordSeparators(@ptrCast(self.ptr), separators_list);
    }

    /// ### DEPRECATED: Use `setCallTipsBackgroundColor` instead
    ///
    pub const SetCallTipsBackgroundColor = setCallTipsBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setCallTipsBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetCallTipsBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setCallTipsForegroundColor` instead
    ///
    pub const SetCallTipsForegroundColor = setCallTipsForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setCallTipsForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetCallTipsForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setCallTipsHighlightColor` instead
    ///
    pub const SetCallTipsHighlightColor = setCallTipsHighlightColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setCallTipsHighlightColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetCallTipsHighlightColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setCallTipsPosition` instead
    ///
    pub const SetCallTipsPosition = setCallTipsPosition;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` position: qsciscintilla_enums.CallTipsPosition `
    ///
    pub fn setCallTipsPosition(self: QsciScintilla, position: i32) void {
        qtc.QsciScintilla_SetCallTipsPosition(@ptrCast(self.ptr), @bitCast(position));
    }

    /// ### DEPRECATED: Use `setCallTipsStyle` instead
    ///
    pub const SetCallTipsStyle = setCallTipsStyle;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _style: qsciscintilla_enums.CallTipsStyle `
    ///
    pub fn setCallTipsStyle(self: QsciScintilla, _style: i32) void {
        qtc.QsciScintilla_SetCallTipsStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `setCallTipsVisible` instead
    ///
    pub const SetCallTipsVisible = setCallTipsVisible;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` nr: i32 `
    ///
    pub fn setCallTipsVisible(self: QsciScintilla, nr: i32) void {
        qtc.QsciScintilla_SetCallTipsVisible(@ptrCast(self.ptr), @bitCast(nr));
    }

    /// ### DEPRECATED: Use `setContractedFolds` instead
    ///
    pub const SetContractedFolds = setContractedFolds;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` folds: []i32 `
    ///
    pub fn setContractedFolds(self: QsciScintilla, folds: []i32) void {
        const folds_list = qtc.libqt_list{
            .len = folds.len,
            .data = folds.ptr,
        };
        qtc.QsciScintilla_SetContractedFolds(@ptrCast(self.ptr), folds_list);
    }

    /// ### DEPRECATED: Use `setDocument` instead
    ///
    pub const SetDocument = setDocument;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _document: QsciDocument `
    ///
    pub fn setDocument(self: QsciScintilla, _document: anytype) void {
        comptime _ = @TypeOf(_document)._is_QsciDocument;
        qtc.QsciScintilla_SetDocument(@ptrCast(self.ptr), @ptrCast(_document.ptr));
    }

    /// ### DEPRECATED: Use `addEdgeColumn` instead
    ///
    pub const AddEdgeColumn = addEdgeColumn;

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
    pub fn addEdgeColumn(self: QsciScintilla, colnr: i32, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_AddEdgeColumn(@ptrCast(self.ptr), @bitCast(colnr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `clearEdgeColumns` instead
    ///
    pub const ClearEdgeColumns = clearEdgeColumns;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn clearEdgeColumns(self: QsciScintilla) void {
        qtc.QsciScintilla_ClearEdgeColumns(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setEdgeColor` instead
    ///
    pub const SetEdgeColor = setEdgeColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setEdgeColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetEdgeColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setEdgeColumn` instead
    ///
    pub const SetEdgeColumn = setEdgeColumn;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` colnr: i32 `
    ///
    pub fn setEdgeColumn(self: QsciScintilla, colnr: i32) void {
        qtc.QsciScintilla_SetEdgeColumn(@ptrCast(self.ptr), @bitCast(colnr));
    }

    /// ### DEPRECATED: Use `setEdgeMode` instead
    ///
    pub const SetEdgeMode = setEdgeMode;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.EdgeMode `
    ///
    pub fn setEdgeMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SetEdgeMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setFirstVisibleLine` instead
    ///
    pub const SetFirstVisibleLine = setFirstVisibleLine;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    pub fn setFirstVisibleLine(self: QsciScintilla, linenr: i32) void {
        qtc.QsciScintilla_SetFirstVisibleLine(@ptrCast(self.ptr), @bitCast(linenr));
    }

    /// ### DEPRECATED: Use `setIndicatorDrawUnder` instead
    ///
    pub const SetIndicatorDrawUnder = setIndicatorDrawUnder;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` under: bool `
    ///
    pub fn setIndicatorDrawUnder(self: QsciScintilla, under: bool) void {
        qtc.QsciScintilla_SetIndicatorDrawUnder(@ptrCast(self.ptr), under);
    }

    /// ### DEPRECATED: Use `setIndicatorForegroundColor` instead
    ///
    pub const SetIndicatorForegroundColor = setIndicatorForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setIndicatorForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndicatorForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setIndicatorHoverForegroundColor` instead
    ///
    pub const SetIndicatorHoverForegroundColor = setIndicatorHoverForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setIndicatorHoverForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndicatorHoverForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setIndicatorHoverStyle` instead
    ///
    pub const SetIndicatorHoverStyle = setIndicatorHoverStyle;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _style: qsciscintilla_enums.IndicatorStyle `
    ///
    pub fn setIndicatorHoverStyle(self: QsciScintilla, _style: i32) void {
        qtc.QsciScintilla_SetIndicatorHoverStyle(@ptrCast(self.ptr), @bitCast(_style));
    }

    /// ### DEPRECATED: Use `setIndicatorOutlineColor` instead
    ///
    pub const SetIndicatorOutlineColor = setIndicatorOutlineColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setIndicatorOutlineColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndicatorOutlineColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setMarginBackgroundColor` instead
    ///
    pub const SetMarginBackgroundColor = setMarginBackgroundColor;

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
    pub fn setMarginBackgroundColor(self: QsciScintilla, margin: i32, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarginBackgroundColor(@ptrCast(self.ptr), @bitCast(margin), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setMarginOptions` instead
    ///
    pub const SetMarginOptions = setMarginOptions;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` options: i32 `
    ///
    pub fn setMarginOptions(self: QsciScintilla, options: i32) void {
        qtc.QsciScintilla_SetMarginOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### DEPRECATED: Use `setMarginText` instead
    ///
    pub const SetMarginText = setMarginText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _style: i32 `
    ///
    pub fn setMarginText(self: QsciScintilla, line: i32, _text: []const u8, _style: i32) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QsciScintilla_SetMarginText(@ptrCast(self.ptr), @bitCast(line), text_str, @bitCast(_style));
    }

    /// ### DEPRECATED: Use `setMarginText2` instead
    ///
    pub const SetMarginText2 = setMarginText2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _style: QsciStyle `
    ///
    pub fn setMarginText2(self: QsciScintilla, line: i32, _text: []const u8, _style: anytype) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_style)._is_QsciStyle;
        qtc.QsciScintilla_SetMarginText2(@ptrCast(self.ptr), @bitCast(line), text_str, @ptrCast(_style.ptr));
    }

    /// ### DEPRECATED: Use `setMarginText3` instead
    ///
    pub const SetMarginText3 = setMarginText3;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` _text: QsciStyledText `
    ///
    pub fn setMarginText3(self: QsciScintilla, line: i32, _text: anytype) void {
        comptime _ = @TypeOf(_text)._is_QsciStyledText;
        qtc.QsciScintilla_SetMarginText3(@ptrCast(self.ptr), @bitCast(line), @ptrCast(_text.ptr));
    }

    /// ### DEPRECATED: Use `setMarginType` instead
    ///
    pub const SetMarginType = setMarginType;

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
    pub fn setMarginType(self: QsciScintilla, margin: i32, typeVal: i32) void {
        qtc.QsciScintilla_SetMarginType(@ptrCast(self.ptr), @bitCast(margin), @bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `clearMarginText` instead
    ///
    pub const ClearMarginText = clearMarginText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn clearMarginText(self: QsciScintilla) void {
        qtc.QsciScintilla_ClearMarginText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setMargins` instead
    ///
    pub const SetMargins = setMargins;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _margins: i32 `
    ///
    pub fn setMargins(self: QsciScintilla, _margins: i32) void {
        qtc.QsciScintilla_SetMargins(@ptrCast(self.ptr), @bitCast(_margins));
    }

    /// ### DEPRECATED: Use `setMarkerBackgroundColor` instead
    ///
    pub const SetMarkerBackgroundColor = setMarkerBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setMarkerBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarkerBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setMarkerForegroundColor` instead
    ///
    pub const SetMarkerForegroundColor = setMarkerForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setMarkerForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarkerForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setMatchedBraceBackgroundColor` instead
    ///
    pub const SetMatchedBraceBackgroundColor = setMatchedBraceBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setMatchedBraceBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMatchedBraceBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setMatchedBraceForegroundColor` instead
    ///
    pub const SetMatchedBraceForegroundColor = setMatchedBraceForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setMatchedBraceForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMatchedBraceForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setMatchedBraceIndicator` instead
    ///
    pub const SetMatchedBraceIndicator = setMatchedBraceIndicator;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn setMatchedBraceIndicator(self: QsciScintilla, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetMatchedBraceIndicator(@ptrCast(self.ptr), @bitCast(indicatorNumber));
    }

    /// ### DEPRECATED: Use `resetMatchedBraceIndicator` instead
    ///
    pub const ResetMatchedBraceIndicator = resetMatchedBraceIndicator;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn resetMatchedBraceIndicator(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetMatchedBraceIndicator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setScrollWidth` instead
    ///
    pub const SetScrollWidth = setScrollWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` pixelWidth: i32 `
    ///
    pub fn setScrollWidth(self: QsciScintilla, pixelWidth: i32) void {
        qtc.QsciScintilla_SetScrollWidth(@ptrCast(self.ptr), @bitCast(pixelWidth));
    }

    /// ### DEPRECATED: Use `setScrollWidthTracking` instead
    ///
    pub const SetScrollWidthTracking = setScrollWidthTracking;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enabled: bool `
    ///
    pub fn setScrollWidthTracking(self: QsciScintilla, enabled: bool) void {
        qtc.QsciScintilla_SetScrollWidthTracking(@ptrCast(self.ptr), enabled);
    }

    /// ### DEPRECATED: Use `setTabDrawMode` instead
    ///
    pub const SetTabDrawMode = setTabDrawMode;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.TabDrawMode `
    ///
    pub fn setTabDrawMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SetTabDrawMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setUnmatchedBraceBackgroundColor` instead
    ///
    pub const SetUnmatchedBraceBackgroundColor = setUnmatchedBraceBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setUnmatchedBraceBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetUnmatchedBraceBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setUnmatchedBraceForegroundColor` instead
    ///
    pub const SetUnmatchedBraceForegroundColor = setUnmatchedBraceForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setUnmatchedBraceForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetUnmatchedBraceForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setUnmatchedBraceIndicator` instead
    ///
    pub const SetUnmatchedBraceIndicator = setUnmatchedBraceIndicator;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn setUnmatchedBraceIndicator(self: QsciScintilla, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetUnmatchedBraceIndicator(@ptrCast(self.ptr), @bitCast(indicatorNumber));
    }

    /// ### DEPRECATED: Use `resetUnmatchedBraceIndicator` instead
    ///
    pub const ResetUnmatchedBraceIndicator = resetUnmatchedBraceIndicator;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn resetUnmatchedBraceIndicator(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetUnmatchedBraceIndicator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWrapVisualFlags` instead
    ///
    pub const SetWrapVisualFlags = setWrapVisualFlags;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` endFlag: qsciscintilla_enums.WrapVisualFlag `
    ///
    pub fn setWrapVisualFlags(self: QsciScintilla, endFlag: i32) void {
        qtc.QsciScintilla_SetWrapVisualFlags(@ptrCast(self.ptr), @bitCast(endFlag));
    }

    /// ### DEPRECATED: Use `selectedText` instead
    ///
    pub const SelectedText = selectedText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedText(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QsciScintilla_SelectedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.selectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `selectionToEol` instead
    ///
    pub const SelectionToEol = selectionToEol;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn selectionToEol(self: QsciScintilla) bool {
        return qtc.QsciScintilla_SelectionToEol(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHotspotBackgroundColor` instead
    ///
    pub const SetHotspotBackgroundColor = setHotspotBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setHotspotBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetHotspotBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setHotspotForegroundColor` instead
    ///
    pub const SetHotspotForegroundColor = setHotspotForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setHotspotForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetHotspotForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setHotspotUnderline` instead
    ///
    pub const SetHotspotUnderline = setHotspotUnderline;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn setHotspotUnderline(self: QsciScintilla, enable: bool) void {
        qtc.QsciScintilla_SetHotspotUnderline(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `setHotspotWrap` instead
    ///
    pub const SetHotspotWrap = setHotspotWrap;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn setHotspotWrap(self: QsciScintilla, enable: bool) void {
        qtc.QsciScintilla_SetHotspotWrap(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `setSelectionToEol` instead
    ///
    pub const SetSelectionToEol = setSelectionToEol;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` filled: bool `
    ///
    pub fn setSelectionToEol(self: QsciScintilla, filled: bool) void {
        qtc.QsciScintilla_SetSelectionToEol(@ptrCast(self.ptr), filled);
    }

    /// ### DEPRECATED: Use `setExtraAscent` instead
    ///
    pub const SetExtraAscent = setExtraAscent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` extra: i32 `
    ///
    pub fn setExtraAscent(self: QsciScintilla, extra: i32) void {
        qtc.QsciScintilla_SetExtraAscent(@ptrCast(self.ptr), @bitCast(extra));
    }

    /// ### DEPRECATED: Use `setExtraDescent` instead
    ///
    pub const SetExtraDescent = setExtraDescent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` extra: i32 `
    ///
    pub fn setExtraDescent(self: QsciScintilla, extra: i32) void {
        qtc.QsciScintilla_SetExtraDescent(@ptrCast(self.ptr), @bitCast(extra));
    }

    /// ### DEPRECATED: Use `setOverwriteMode` instead
    ///
    pub const SetOverwriteMode = setOverwriteMode;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` overwrite: bool `
    ///
    pub fn setOverwriteMode(self: QsciScintilla, overwrite: bool) void {
        qtc.QsciScintilla_SetOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// ### DEPRECATED: Use `setWhitespaceBackgroundColor` instead
    ///
    pub const SetWhitespaceBackgroundColor = setWhitespaceBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setWhitespaceBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetWhitespaceBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setWhitespaceForegroundColor` instead
    ///
    pub const SetWhitespaceForegroundColor = setWhitespaceForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setWhitespaceForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetWhitespaceForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setWhitespaceSize` instead
    ///
    pub const SetWhitespaceSize = setWhitespaceSize;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _size: i32 `
    ///
    pub fn setWhitespaceSize(self: QsciScintilla, _size: i32) void {
        qtc.QsciScintilla_SetWhitespaceSize(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `setWrapIndentMode` instead
    ///
    pub const SetWrapIndentMode = setWrapIndentMode;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.WrapIndentMode `
    ///
    pub fn setWrapIndentMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SetWrapIndentMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `showUserList` instead
    ///
    pub const ShowUserList = showUserList;

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
    pub fn showUserList(self: QsciScintilla, allocator: std.mem.Allocator, id: i32, list: []const []const u8) void {
        const list_arr = allocator.alloc(qtc.libqt_string, list.len) catch @panic("QsciScintilla.showUserList: Memory allocation failed");
        defer allocator.free(list_arr);
        for (list, 0..list.len) |str_item, i|
            list_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const list_list = qtc.libqt_list{
            .len = list.len,
            .data = list_arr.ptr,
        };
        qtc.QsciScintilla_ShowUserList(@ptrCast(self.ptr), @bitCast(id), list_list);
    }

    /// ### DEPRECATED: Use `standardCommands` instead
    ///
    pub const StandardCommands = standardCommands;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn standardCommands(self: QsciScintilla) QsciCommandSet {
        return .{ .ptr = qtc.QsciScintilla_StandardCommands(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `tabDrawMode` instead
    ///
    pub const TabDrawMode = tabDrawMode;

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
    pub fn tabDrawMode(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_TabDrawMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tabIndents` instead
    ///
    pub const TabIndents = tabIndents;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn tabIndents(self: QsciScintilla) bool {
        return qtc.QsciScintilla_TabIndents(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `tabWidth` instead
    ///
    pub const TabWidth = tabWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn tabWidth(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_TabWidth(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QsciScintilla_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `text2` instead
    ///
    pub const Text2 = text2;

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
    pub fn text2(self: QsciScintilla, allocator: std.mem.Allocator, line: i32) []const u8 {
        var _str = qtc.QsciScintilla_Text2(@ptrCast(self.ptr), @bitCast(line));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.text2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `text3` instead
    ///
    pub const Text3 = text3;

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
    pub fn text3(self: QsciScintilla, allocator: std.mem.Allocator, start: i32, end: i32) []const u8 {
        var _str = qtc.QsciScintilla_Text3(@ptrCast(self.ptr), @bitCast(start), @bitCast(end));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.text3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `textHeight` instead
    ///
    pub const TextHeight = textHeight;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` linenr: i32 `
    ///
    pub fn textHeight(self: QsciScintilla, linenr: i32) i32 {
        return qtc.QsciScintilla_TextHeight(@ptrCast(self.ptr), @bitCast(linenr));
    }

    /// ### DEPRECATED: Use `whitespaceSize` instead
    ///
    pub const WhitespaceSize = whitespaceSize;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn whitespaceSize(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_WhitespaceSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `whitespaceVisibility` instead
    ///
    pub const WhitespaceVisibility = whitespaceVisibility;

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
    pub fn whitespaceVisibility(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_WhitespaceVisibility(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `wordAtLineIndex` instead
    ///
    pub const WordAtLineIndex = wordAtLineIndex;

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
    pub fn wordAtLineIndex(self: QsciScintilla, allocator: std.mem.Allocator, line: i32, index: i32) []const u8 {
        var _str = qtc.QsciScintilla_WordAtLineIndex(@ptrCast(self.ptr), @bitCast(line), @bitCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.wordAtLineIndex: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `wordAtPoint` instead
    ///
    pub const WordAtPoint = wordAtPoint;

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
    pub fn wordAtPoint(self: QsciScintilla, allocator: std.mem.Allocator, point: anytype) []const u8 {
        comptime _ = @TypeOf(point)._is_QPoint;
        var _str = qtc.QsciScintilla_WordAtPoint(@ptrCast(self.ptr), @ptrCast(point.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.wordAtPoint: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `wordCharacters` instead
    ///
    pub const WordCharacters = wordCharacters;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn wordCharacters(self: QsciScintilla) [:0]const u8 {
        const _ret = qtc.QsciScintilla_WordCharacters(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `wrapMode` instead
    ///
    pub const WrapMode = wrapMode;

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
    pub fn wrapMode(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_WrapMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `wrapIndentMode` instead
    ///
    pub const WrapIndentMode = wrapIndentMode;

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
    pub fn wrapIndentMode(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_WrapIndentMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` io: QIODevice `
    ///
    pub fn write(self: QsciScintilla, io: anytype) bool {
        comptime _ = @TypeOf(io)._is_QIODevice;
        return qtc.QsciScintilla_Write(@ptrCast(self.ptr), @ptrCast(io.ptr));
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn append(self: QsciScintilla, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QsciScintilla_Append(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onAppend` instead
    ///
    pub const OnAppend = onAppend;

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
    pub fn onAppend(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnAppend(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAppend` instead
    ///
    pub const SuperAppend = superAppend;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn superAppend(self: QsciScintilla, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QsciScintilla_SuperAppend(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `autoCompleteFromAll` instead
    ///
    pub const AutoCompleteFromAll = autoCompleteFromAll;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn autoCompleteFromAll(self: QsciScintilla) void {
        qtc.QsciScintilla_AutoCompleteFromAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAutoCompleteFromAll` instead
    ///
    pub const OnAutoCompleteFromAll = onAutoCompleteFromAll;

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
    pub fn onAutoCompleteFromAll(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnAutoCompleteFromAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAutoCompleteFromAll` instead
    ///
    pub const SuperAutoCompleteFromAll = superAutoCompleteFromAll;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superAutoCompleteFromAll(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperAutoCompleteFromAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoCompleteFromAPIs` instead
    ///
    pub const AutoCompleteFromAPIs = autoCompleteFromAPIs;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn autoCompleteFromAPIs(self: QsciScintilla) void {
        qtc.QsciScintilla_AutoCompleteFromAPIs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAutoCompleteFromAPIs` instead
    ///
    pub const OnAutoCompleteFromAPIs = onAutoCompleteFromAPIs;

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
    pub fn onAutoCompleteFromAPIs(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnAutoCompleteFromAPIs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAutoCompleteFromAPIs` instead
    ///
    pub const SuperAutoCompleteFromAPIs = superAutoCompleteFromAPIs;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superAutoCompleteFromAPIs(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperAutoCompleteFromAPIs(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `autoCompleteFromDocument` instead
    ///
    pub const AutoCompleteFromDocument = autoCompleteFromDocument;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn autoCompleteFromDocument(self: QsciScintilla) void {
        qtc.QsciScintilla_AutoCompleteFromDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAutoCompleteFromDocument` instead
    ///
    pub const OnAutoCompleteFromDocument = onAutoCompleteFromDocument;

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
    pub fn onAutoCompleteFromDocument(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnAutoCompleteFromDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superAutoCompleteFromDocument` instead
    ///
    pub const SuperAutoCompleteFromDocument = superAutoCompleteFromDocument;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superAutoCompleteFromDocument(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperAutoCompleteFromDocument(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `callTip` instead
    ///
    pub const CallTip = callTip;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn callTip(self: QsciScintilla) void {
        qtc.QsciScintilla_CallTip(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCallTip` instead
    ///
    pub const OnCallTip = onCallTip;

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
    pub fn onCallTip(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnCallTip(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCallTip` instead
    ///
    pub const SuperCallTip = superCallTip;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superCallTip(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperCallTip(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn clear(self: QsciScintilla) void {
        qtc.QsciScintilla_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onClear` instead
    ///
    pub const OnClear = onClear;

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
    pub fn onClear(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnClear(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClear` instead
    ///
    pub const SuperClear = superClear;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superClear(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperClear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `copy` instead
    ///
    pub const Copy = copy;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn copy(self: QsciScintilla) void {
        qtc.QsciScintilla_Copy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCopy` instead
    ///
    pub const OnCopy = onCopy;

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
    pub fn onCopy(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnCopy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCopy` instead
    ///
    pub const SuperCopy = superCopy;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superCopy(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperCopy(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `cut` instead
    ///
    pub const Cut = cut;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn cut(self: QsciScintilla) void {
        qtc.QsciScintilla_Cut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onCut` instead
    ///
    pub const OnCut = onCut;

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
    pub fn onCut(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnCut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superCut` instead
    ///
    pub const SuperCut = superCut;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superCut(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperCut(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ensureCursorVisible` instead
    ///
    pub const EnsureCursorVisible = ensureCursorVisible;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn ensureCursorVisible(self: QsciScintilla) void {
        qtc.QsciScintilla_EnsureCursorVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEnsureCursorVisible` instead
    ///
    pub const OnEnsureCursorVisible = onEnsureCursorVisible;

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
    pub fn onEnsureCursorVisible(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnEnsureCursorVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEnsureCursorVisible` instead
    ///
    pub const SuperEnsureCursorVisible = superEnsureCursorVisible;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superEnsureCursorVisible(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperEnsureCursorVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `ensureLineVisible` instead
    ///
    pub const EnsureLineVisible = ensureLineVisible;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn ensureLineVisible(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_EnsureLineVisible(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `onEnsureLineVisible` instead
    ///
    pub const OnEnsureLineVisible = onEnsureLineVisible;

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
    pub fn onEnsureLineVisible(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnEnsureLineVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEnsureLineVisible` instead
    ///
    pub const SuperEnsureLineVisible = superEnsureLineVisible;

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
    pub fn superEnsureLineVisible(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_SuperEnsureLineVisible(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `foldAll` instead
    ///
    pub const FoldAll = foldAll;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _children: bool `
    ///
    pub fn foldAll(self: QsciScintilla, _children: bool) void {
        qtc.QsciScintilla_FoldAll(@ptrCast(self.ptr), _children);
    }

    /// ### DEPRECATED: Use `onFoldAll` instead
    ///
    pub const OnFoldAll = onFoldAll;

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
    pub fn onFoldAll(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnFoldAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFoldAll` instead
    ///
    pub const SuperFoldAll = superFoldAll;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _children: bool `
    ///
    pub fn superFoldAll(self: QsciScintilla, _children: bool) void {
        qtc.QsciScintilla_SuperFoldAll(@ptrCast(self.ptr), _children);
    }

    /// ### DEPRECATED: Use `foldLine` instead
    ///
    pub const FoldLine = foldLine;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn foldLine(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_FoldLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `onFoldLine` instead
    ///
    pub const OnFoldLine = onFoldLine;

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
    pub fn onFoldLine(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnFoldLine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superFoldLine` instead
    ///
    pub const SuperFoldLine = superFoldLine;

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
    pub fn superFoldLine(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_SuperFoldLine(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `indent` instead
    ///
    pub const Indent = indent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn indent(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_Indent(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `onIndent` instead
    ///
    pub const OnIndent = onIndent;

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
    pub fn onIndent(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnIndent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superIndent` instead
    ///
    pub const SuperIndent = superIndent;

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
    pub fn superIndent(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_SuperIndent(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `insert` instead
    ///
    pub const Insert = insert;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn insert(self: QsciScintilla, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QsciScintilla_Insert(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onInsert` instead
    ///
    pub const OnInsert = onInsert;

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
    pub fn onInsert(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnInsert(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInsert` instead
    ///
    pub const SuperInsert = superInsert;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn superInsert(self: QsciScintilla, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QsciScintilla_SuperInsert(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `insertAt` instead
    ///
    pub const InsertAt = insertAt;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    pub fn insertAt(self: QsciScintilla, _text: []const u8, line: i32, index: i32) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QsciScintilla_InsertAt(@ptrCast(self.ptr), text_str, @bitCast(line), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onInsertAt` instead
    ///
    pub const OnInsertAt = onInsertAt;

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
    pub fn onInsertAt(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnInsertAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superInsertAt` instead
    ///
    pub const SuperInsertAt = superInsertAt;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` line: i32 `
    ///
    /// ` index: i32 `
    ///
    pub fn superInsertAt(self: QsciScintilla, _text: []const u8, line: i32, index: i32) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QsciScintilla_SuperInsertAt(@ptrCast(self.ptr), text_str, @bitCast(line), @bitCast(index));
    }

    /// ### DEPRECATED: Use `moveToMatchingBrace` instead
    ///
    pub const MoveToMatchingBrace = moveToMatchingBrace;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn moveToMatchingBrace(self: QsciScintilla) void {
        qtc.QsciScintilla_MoveToMatchingBrace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onMoveToMatchingBrace` instead
    ///
    pub const OnMoveToMatchingBrace = onMoveToMatchingBrace;

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
    pub fn onMoveToMatchingBrace(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnMoveToMatchingBrace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMoveToMatchingBrace` instead
    ///
    pub const SuperMoveToMatchingBrace = superMoveToMatchingBrace;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superMoveToMatchingBrace(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperMoveToMatchingBrace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `paste` instead
    ///
    pub const Paste = paste;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn paste(self: QsciScintilla) void {
        qtc.QsciScintilla_Paste(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onPaste` instead
    ///
    pub const OnPaste = onPaste;

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
    pub fn onPaste(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnPaste(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superPaste` instead
    ///
    pub const SuperPaste = superPaste;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superPaste(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperPaste(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `redo` instead
    ///
    pub const Redo = redo;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn redo(self: QsciScintilla) void {
        qtc.QsciScintilla_Redo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRedo` instead
    ///
    pub const OnRedo = onRedo;

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
    pub fn onRedo(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnRedo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRedo` instead
    ///
    pub const SuperRedo = superRedo;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superRedo(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperRedo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `removeSelectedText` instead
    ///
    pub const RemoveSelectedText = removeSelectedText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn removeSelectedText(self: QsciScintilla) void {
        qtc.QsciScintilla_RemoveSelectedText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRemoveSelectedText` instead
    ///
    pub const OnRemoveSelectedText = onRemoveSelectedText;

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
    pub fn onRemoveSelectedText(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnRemoveSelectedText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRemoveSelectedText` instead
    ///
    pub const SuperRemoveSelectedText = superRemoveSelectedText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superRemoveSelectedText(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperRemoveSelectedText(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `replaceSelectedText` instead
    ///
    pub const ReplaceSelectedText = replaceSelectedText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn replaceSelectedText(self: QsciScintilla, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QsciScintilla_ReplaceSelectedText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onReplaceSelectedText` instead
    ///
    pub const OnReplaceSelectedText = onReplaceSelectedText;

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
    pub fn onReplaceSelectedText(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnReplaceSelectedText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superReplaceSelectedText` instead
    ///
    pub const SuperReplaceSelectedText = superReplaceSelectedText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn superReplaceSelectedText(self: QsciScintilla, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QsciScintilla_SuperReplaceSelectedText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `resetSelectionBackgroundColor` instead
    ///
    pub const ResetSelectionBackgroundColor = resetSelectionBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn resetSelectionBackgroundColor(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetSelectionBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResetSelectionBackgroundColor` instead
    ///
    pub const OnResetSelectionBackgroundColor = onResetSelectionBackgroundColor;

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
    pub fn onResetSelectionBackgroundColor(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnResetSelectionBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResetSelectionBackgroundColor` instead
    ///
    pub const SuperResetSelectionBackgroundColor = superResetSelectionBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superResetSelectionBackgroundColor(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperResetSelectionBackgroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetSelectionForegroundColor` instead
    ///
    pub const ResetSelectionForegroundColor = resetSelectionForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn resetSelectionForegroundColor(self: QsciScintilla) void {
        qtc.QsciScintilla_ResetSelectionForegroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onResetSelectionForegroundColor` instead
    ///
    pub const OnResetSelectionForegroundColor = onResetSelectionForegroundColor;

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
    pub fn onResetSelectionForegroundColor(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnResetSelectionForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superResetSelectionForegroundColor` instead
    ///
    pub const SuperResetSelectionForegroundColor = superResetSelectionForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superResetSelectionForegroundColor(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperResetSelectionForegroundColor(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `selectAll` instead
    ///
    pub const SelectAll = selectAll;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` select: bool `
    ///
    pub fn selectAll(self: QsciScintilla, select: bool) void {
        qtc.QsciScintilla_SelectAll(@ptrCast(self.ptr), select);
    }

    /// ### DEPRECATED: Use `onSelectAll` instead
    ///
    pub const OnSelectAll = onSelectAll;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, select: bool) callconv(.c) void `
    ///
    pub fn onSelectAll(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSelectAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelectAll` instead
    ///
    pub const SuperSelectAll = superSelectAll;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` select: bool `
    ///
    pub fn superSelectAll(self: QsciScintilla, select: bool) void {
        qtc.QsciScintilla_SuperSelectAll(@ptrCast(self.ptr), select);
    }

    /// ### DEPRECATED: Use `selectToMatchingBrace` instead
    ///
    pub const SelectToMatchingBrace = selectToMatchingBrace;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn selectToMatchingBrace(self: QsciScintilla) void {
        qtc.QsciScintilla_SelectToMatchingBrace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectToMatchingBrace` instead
    ///
    pub const OnSelectToMatchingBrace = onSelectToMatchingBrace;

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
    pub fn onSelectToMatchingBrace(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnSelectToMatchingBrace(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSelectToMatchingBrace` instead
    ///
    pub const SuperSelectToMatchingBrace = superSelectToMatchingBrace;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superSelectToMatchingBrace(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperSelectToMatchingBrace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoCompletionCaseSensitivity` instead
    ///
    pub const SetAutoCompletionCaseSensitivity = setAutoCompletionCaseSensitivity;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` cs: bool `
    ///
    pub fn setAutoCompletionCaseSensitivity(self: QsciScintilla, cs: bool) void {
        qtc.QsciScintilla_SetAutoCompletionCaseSensitivity(@ptrCast(self.ptr), cs);
    }

    /// ### DEPRECATED: Use `onSetAutoCompletionCaseSensitivity` instead
    ///
    pub const OnSetAutoCompletionCaseSensitivity = onSetAutoCompletionCaseSensitivity;

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
    pub fn onSetAutoCompletionCaseSensitivity(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionCaseSensitivity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAutoCompletionCaseSensitivity` instead
    ///
    pub const SuperSetAutoCompletionCaseSensitivity = superSetAutoCompletionCaseSensitivity;

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
    pub fn superSetAutoCompletionCaseSensitivity(self: QsciScintilla, cs: bool) void {
        qtc.QsciScintilla_SuperSetAutoCompletionCaseSensitivity(@ptrCast(self.ptr), cs);
    }

    /// ### DEPRECATED: Use `setAutoCompletionReplaceWord` instead
    ///
    pub const SetAutoCompletionReplaceWord = setAutoCompletionReplaceWord;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _replace: bool `
    ///
    pub fn setAutoCompletionReplaceWord(self: QsciScintilla, _replace: bool) void {
        qtc.QsciScintilla_SetAutoCompletionReplaceWord(@ptrCast(self.ptr), _replace);
    }

    /// ### DEPRECATED: Use `onSetAutoCompletionReplaceWord` instead
    ///
    pub const OnSetAutoCompletionReplaceWord = onSetAutoCompletionReplaceWord;

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
    pub fn onSetAutoCompletionReplaceWord(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionReplaceWord(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAutoCompletionReplaceWord` instead
    ///
    pub const SuperSetAutoCompletionReplaceWord = superSetAutoCompletionReplaceWord;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _replace: bool `
    ///
    pub fn superSetAutoCompletionReplaceWord(self: QsciScintilla, _replace: bool) void {
        qtc.QsciScintilla_SuperSetAutoCompletionReplaceWord(@ptrCast(self.ptr), _replace);
    }

    /// ### DEPRECATED: Use `setAutoCompletionShowSingle` instead
    ///
    pub const SetAutoCompletionShowSingle = setAutoCompletionShowSingle;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` single: bool `
    ///
    pub fn setAutoCompletionShowSingle(self: QsciScintilla, single: bool) void {
        qtc.QsciScintilla_SetAutoCompletionShowSingle(@ptrCast(self.ptr), single);
    }

    /// ### DEPRECATED: Use `onSetAutoCompletionShowSingle` instead
    ///
    pub const OnSetAutoCompletionShowSingle = onSetAutoCompletionShowSingle;

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
    pub fn onSetAutoCompletionShowSingle(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionShowSingle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAutoCompletionShowSingle` instead
    ///
    pub const SuperSetAutoCompletionShowSingle = superSetAutoCompletionShowSingle;

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
    pub fn superSetAutoCompletionShowSingle(self: QsciScintilla, single: bool) void {
        qtc.QsciScintilla_SuperSetAutoCompletionShowSingle(@ptrCast(self.ptr), single);
    }

    /// ### DEPRECATED: Use `setAutoCompletionSource` instead
    ///
    pub const SetAutoCompletionSource = setAutoCompletionSource;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` source: qsciscintilla_enums.AutoCompletionSource `
    ///
    pub fn setAutoCompletionSource(self: QsciScintilla, source: i32) void {
        qtc.QsciScintilla_SetAutoCompletionSource(@ptrCast(self.ptr), @bitCast(source));
    }

    /// ### DEPRECATED: Use `onSetAutoCompletionSource` instead
    ///
    pub const OnSetAutoCompletionSource = onSetAutoCompletionSource;

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
    pub fn onSetAutoCompletionSource(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionSource(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAutoCompletionSource` instead
    ///
    pub const SuperSetAutoCompletionSource = superSetAutoCompletionSource;

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
    pub fn superSetAutoCompletionSource(self: QsciScintilla, source: i32) void {
        qtc.QsciScintilla_SuperSetAutoCompletionSource(@ptrCast(self.ptr), @bitCast(source));
    }

    /// ### DEPRECATED: Use `setAutoCompletionThreshold` instead
    ///
    pub const SetAutoCompletionThreshold = setAutoCompletionThreshold;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` thresh: i32 `
    ///
    pub fn setAutoCompletionThreshold(self: QsciScintilla, thresh: i32) void {
        qtc.QsciScintilla_SetAutoCompletionThreshold(@ptrCast(self.ptr), @bitCast(thresh));
    }

    /// ### DEPRECATED: Use `onSetAutoCompletionThreshold` instead
    ///
    pub const OnSetAutoCompletionThreshold = onSetAutoCompletionThreshold;

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
    pub fn onSetAutoCompletionThreshold(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionThreshold(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAutoCompletionThreshold` instead
    ///
    pub const SuperSetAutoCompletionThreshold = superSetAutoCompletionThreshold;

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
    pub fn superSetAutoCompletionThreshold(self: QsciScintilla, thresh: i32) void {
        qtc.QsciScintilla_SuperSetAutoCompletionThreshold(@ptrCast(self.ptr), @bitCast(thresh));
    }

    /// ### DEPRECATED: Use `setAutoCompletionUseSingle` instead
    ///
    pub const SetAutoCompletionUseSingle = setAutoCompletionUseSingle;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` single: qsciscintilla_enums.AutoCompletionUseSingle `
    ///
    pub fn setAutoCompletionUseSingle(self: QsciScintilla, single: i32) void {
        qtc.QsciScintilla_SetAutoCompletionUseSingle(@ptrCast(self.ptr), @bitCast(single));
    }

    /// ### DEPRECATED: Use `onSetAutoCompletionUseSingle` instead
    ///
    pub const OnSetAutoCompletionUseSingle = onSetAutoCompletionUseSingle;

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
    pub fn onSetAutoCompletionUseSingle(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoCompletionUseSingle(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAutoCompletionUseSingle` instead
    ///
    pub const SuperSetAutoCompletionUseSingle = superSetAutoCompletionUseSingle;

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
    pub fn superSetAutoCompletionUseSingle(self: QsciScintilla, single: i32) void {
        qtc.QsciScintilla_SuperSetAutoCompletionUseSingle(@ptrCast(self.ptr), @bitCast(single));
    }

    /// ### DEPRECATED: Use `setAutoIndent` instead
    ///
    pub const SetAutoIndent = setAutoIndent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` autoindent: bool `
    ///
    pub fn setAutoIndent(self: QsciScintilla, autoindent: bool) void {
        qtc.QsciScintilla_SetAutoIndent(@ptrCast(self.ptr), autoindent);
    }

    /// ### DEPRECATED: Use `onSetAutoIndent` instead
    ///
    pub const OnSetAutoIndent = onSetAutoIndent;

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
    pub fn onSetAutoIndent(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetAutoIndent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetAutoIndent` instead
    ///
    pub const SuperSetAutoIndent = superSetAutoIndent;

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
    pub fn superSetAutoIndent(self: QsciScintilla, autoindent: bool) void {
        qtc.QsciScintilla_SuperSetAutoIndent(@ptrCast(self.ptr), autoindent);
    }

    /// ### DEPRECATED: Use `setBraceMatching` instead
    ///
    pub const SetBraceMatching = setBraceMatching;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` bm: qsciscintilla_enums.BraceMatch `
    ///
    pub fn setBraceMatching(self: QsciScintilla, bm: i32) void {
        qtc.QsciScintilla_SetBraceMatching(@ptrCast(self.ptr), @bitCast(bm));
    }

    /// ### DEPRECATED: Use `onSetBraceMatching` instead
    ///
    pub const OnSetBraceMatching = onSetBraceMatching;

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
    pub fn onSetBraceMatching(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetBraceMatching(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetBraceMatching` instead
    ///
    pub const SuperSetBraceMatching = superSetBraceMatching;

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
    pub fn superSetBraceMatching(self: QsciScintilla, bm: i32) void {
        qtc.QsciScintilla_SuperSetBraceMatching(@ptrCast(self.ptr), @bitCast(bm));
    }

    /// ### DEPRECATED: Use `setBackspaceUnindents` instead
    ///
    pub const SetBackspaceUnindents = setBackspaceUnindents;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _unindent: bool `
    ///
    pub fn setBackspaceUnindents(self: QsciScintilla, _unindent: bool) void {
        qtc.QsciScintilla_SetBackspaceUnindents(@ptrCast(self.ptr), _unindent);
    }

    /// ### DEPRECATED: Use `onSetBackspaceUnindents` instead
    ///
    pub const OnSetBackspaceUnindents = onSetBackspaceUnindents;

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
    pub fn onSetBackspaceUnindents(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetBackspaceUnindents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetBackspaceUnindents` instead
    ///
    pub const SuperSetBackspaceUnindents = superSetBackspaceUnindents;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _unindent: bool `
    ///
    pub fn superSetBackspaceUnindents(self: QsciScintilla, _unindent: bool) void {
        qtc.QsciScintilla_SuperSetBackspaceUnindents(@ptrCast(self.ptr), _unindent);
    }

    /// ### DEPRECATED: Use `setCaretForegroundColor` instead
    ///
    pub const SetCaretForegroundColor = setCaretForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setCaretForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetCaretForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `onSetCaretForegroundColor` instead
    ///
    pub const OnSetCaretForegroundColor = onSetCaretForegroundColor;

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
    pub fn onSetCaretForegroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCaretForegroundColor` instead
    ///
    pub const SuperSetCaretForegroundColor = superSetCaretForegroundColor;

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
    pub fn superSetCaretForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetCaretForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setCaretLineBackgroundColor` instead
    ///
    pub const SetCaretLineBackgroundColor = setCaretLineBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setCaretLineBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetCaretLineBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `onSetCaretLineBackgroundColor` instead
    ///
    pub const OnSetCaretLineBackgroundColor = onSetCaretLineBackgroundColor;

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
    pub fn onSetCaretLineBackgroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretLineBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCaretLineBackgroundColor` instead
    ///
    pub const SuperSetCaretLineBackgroundColor = superSetCaretLineBackgroundColor;

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
    pub fn superSetCaretLineBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetCaretLineBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setCaretLineFrameWidth` instead
    ///
    pub const SetCaretLineFrameWidth = setCaretLineFrameWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _width: i32 `
    ///
    pub fn setCaretLineFrameWidth(self: QsciScintilla, _width: i32) void {
        qtc.QsciScintilla_SetCaretLineFrameWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `onSetCaretLineFrameWidth` instead
    ///
    pub const OnSetCaretLineFrameWidth = onSetCaretLineFrameWidth;

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
    pub fn onSetCaretLineFrameWidth(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretLineFrameWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCaretLineFrameWidth` instead
    ///
    pub const SuperSetCaretLineFrameWidth = superSetCaretLineFrameWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _width: i32 `
    ///
    pub fn superSetCaretLineFrameWidth(self: QsciScintilla, _width: i32) void {
        qtc.QsciScintilla_SuperSetCaretLineFrameWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `setCaretLineVisible` instead
    ///
    pub const SetCaretLineVisible = setCaretLineVisible;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn setCaretLineVisible(self: QsciScintilla, enable: bool) void {
        qtc.QsciScintilla_SetCaretLineVisible(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onSetCaretLineVisible` instead
    ///
    pub const OnSetCaretLineVisible = onSetCaretLineVisible;

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
    pub fn onSetCaretLineVisible(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretLineVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCaretLineVisible` instead
    ///
    pub const SuperSetCaretLineVisible = superSetCaretLineVisible;

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
    pub fn superSetCaretLineVisible(self: QsciScintilla, enable: bool) void {
        qtc.QsciScintilla_SuperSetCaretLineVisible(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `setCaretWidth` instead
    ///
    pub const SetCaretWidth = setCaretWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _width: i32 `
    ///
    pub fn setCaretWidth(self: QsciScintilla, _width: i32) void {
        qtc.QsciScintilla_SetCaretWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `onSetCaretWidth` instead
    ///
    pub const OnSetCaretWidth = onSetCaretWidth;

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
    pub fn onSetCaretWidth(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCaretWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCaretWidth` instead
    ///
    pub const SuperSetCaretWidth = superSetCaretWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _width: i32 `
    ///
    pub fn superSetCaretWidth(self: QsciScintilla, _width: i32) void {
        qtc.QsciScintilla_SuperSetCaretWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `setColor` instead
    ///
    pub const SetColor = setColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` c: QColor `
    ///
    pub fn setColor(self: QsciScintilla, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciScintilla_SetColor(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `onSetColor` instead
    ///
    pub const OnSetColor = onSetColor;

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
    pub fn onSetColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetColor` instead
    ///
    pub const SuperSetColor = superSetColor;

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
    pub fn superSetColor(self: QsciScintilla, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciScintilla_SuperSetColor(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `setCursorPosition` instead
    ///
    pub const SetCursorPosition = setCursorPosition;

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
    pub fn setCursorPosition(self: QsciScintilla, line: i32, index: i32) void {
        qtc.QsciScintilla_SetCursorPosition(@ptrCast(self.ptr), @bitCast(line), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onSetCursorPosition` instead
    ///
    pub const OnSetCursorPosition = onSetCursorPosition;

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
    pub fn onSetCursorPosition(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetCursorPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetCursorPosition` instead
    ///
    pub const SuperSetCursorPosition = superSetCursorPosition;

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
    pub fn superSetCursorPosition(self: QsciScintilla, line: i32, index: i32) void {
        qtc.QsciScintilla_SuperSetCursorPosition(@ptrCast(self.ptr), @bitCast(line), @bitCast(index));
    }

    /// ### DEPRECATED: Use `setEolMode` instead
    ///
    pub const SetEolMode = setEolMode;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.EolMode `
    ///
    pub fn setEolMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SetEolMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onSetEolMode` instead
    ///
    pub const OnSetEolMode = onSetEolMode;

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
    pub fn onSetEolMode(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetEolMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetEolMode` instead
    ///
    pub const SuperSetEolMode = superSetEolMode;

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
    pub fn superSetEolMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SuperSetEolMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setEolVisibility` instead
    ///
    pub const SetEolVisibility = setEolVisibility;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` visible: bool `
    ///
    pub fn setEolVisibility(self: QsciScintilla, visible: bool) void {
        qtc.QsciScintilla_SetEolVisibility(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onSetEolVisibility` instead
    ///
    pub const OnSetEolVisibility = onSetEolVisibility;

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
    pub fn onSetEolVisibility(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetEolVisibility(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetEolVisibility` instead
    ///
    pub const SuperSetEolVisibility = superSetEolVisibility;

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
    pub fn superSetEolVisibility(self: QsciScintilla, visible: bool) void {
        qtc.QsciScintilla_SuperSetEolVisibility(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `setFolding` instead
    ///
    pub const SetFolding = setFolding;

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
    pub fn setFolding(self: QsciScintilla, fold: i32, margin: i32) void {
        qtc.QsciScintilla_SetFolding(@ptrCast(self.ptr), @bitCast(fold), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `onSetFolding` instead
    ///
    pub const OnSetFolding = onSetFolding;

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
    pub fn onSetFolding(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetFolding(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetFolding` instead
    ///
    pub const SuperSetFolding = superSetFolding;

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
    pub fn superSetFolding(self: QsciScintilla, fold: i32, margin: i32) void {
        qtc.QsciScintilla_SuperSetFolding(@ptrCast(self.ptr), @bitCast(fold), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `setIndentation` instead
    ///
    pub const SetIndentation = setIndentation;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    /// ` _indentation: i32 `
    ///
    pub fn setIndentation(self: QsciScintilla, line: i32, _indentation: i32) void {
        qtc.QsciScintilla_SetIndentation(@ptrCast(self.ptr), @bitCast(line), @bitCast(_indentation));
    }

    /// ### DEPRECATED: Use `onSetIndentation` instead
    ///
    pub const OnSetIndentation = onSetIndentation;

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
    pub fn onSetIndentation(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentation(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIndentation` instead
    ///
    pub const SuperSetIndentation = superSetIndentation;

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
    /// ` _indentation: i32 `
    ///
    pub fn superSetIndentation(self: QsciScintilla, line: i32, _indentation: i32) void {
        qtc.QsciScintilla_SuperSetIndentation(@ptrCast(self.ptr), @bitCast(line), @bitCast(_indentation));
    }

    /// ### DEPRECATED: Use `setIndentationGuides` instead
    ///
    pub const SetIndentationGuides = setIndentationGuides;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn setIndentationGuides(self: QsciScintilla, enable: bool) void {
        qtc.QsciScintilla_SetIndentationGuides(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `onSetIndentationGuides` instead
    ///
    pub const OnSetIndentationGuides = onSetIndentationGuides;

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
    pub fn onSetIndentationGuides(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationGuides(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIndentationGuides` instead
    ///
    pub const SuperSetIndentationGuides = superSetIndentationGuides;

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
    pub fn superSetIndentationGuides(self: QsciScintilla, enable: bool) void {
        qtc.QsciScintilla_SuperSetIndentationGuides(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `setIndentationGuidesBackgroundColor` instead
    ///
    pub const SetIndentationGuidesBackgroundColor = setIndentationGuidesBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setIndentationGuidesBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndentationGuidesBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `onSetIndentationGuidesBackgroundColor` instead
    ///
    pub const OnSetIndentationGuidesBackgroundColor = onSetIndentationGuidesBackgroundColor;

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
    pub fn onSetIndentationGuidesBackgroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationGuidesBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIndentationGuidesBackgroundColor` instead
    ///
    pub const SuperSetIndentationGuidesBackgroundColor = superSetIndentationGuidesBackgroundColor;

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
    pub fn superSetIndentationGuidesBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetIndentationGuidesBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setIndentationGuidesForegroundColor` instead
    ///
    pub const SetIndentationGuidesForegroundColor = setIndentationGuidesForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setIndentationGuidesForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndentationGuidesForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `onSetIndentationGuidesForegroundColor` instead
    ///
    pub const OnSetIndentationGuidesForegroundColor = onSetIndentationGuidesForegroundColor;

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
    pub fn onSetIndentationGuidesForegroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationGuidesForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIndentationGuidesForegroundColor` instead
    ///
    pub const SuperSetIndentationGuidesForegroundColor = superSetIndentationGuidesForegroundColor;

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
    pub fn superSetIndentationGuidesForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetIndentationGuidesForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setIndentationsUseTabs` instead
    ///
    pub const SetIndentationsUseTabs = setIndentationsUseTabs;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` tabs: bool `
    ///
    pub fn setIndentationsUseTabs(self: QsciScintilla, tabs: bool) void {
        qtc.QsciScintilla_SetIndentationsUseTabs(@ptrCast(self.ptr), tabs);
    }

    /// ### DEPRECATED: Use `onSetIndentationsUseTabs` instead
    ///
    pub const OnSetIndentationsUseTabs = onSetIndentationsUseTabs;

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
    pub fn onSetIndentationsUseTabs(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationsUseTabs(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIndentationsUseTabs` instead
    ///
    pub const SuperSetIndentationsUseTabs = superSetIndentationsUseTabs;

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
    pub fn superSetIndentationsUseTabs(self: QsciScintilla, tabs: bool) void {
        qtc.QsciScintilla_SuperSetIndentationsUseTabs(@ptrCast(self.ptr), tabs);
    }

    /// ### DEPRECATED: Use `setIndentationWidth` instead
    ///
    pub const SetIndentationWidth = setIndentationWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _width: i32 `
    ///
    pub fn setIndentationWidth(self: QsciScintilla, _width: i32) void {
        qtc.QsciScintilla_SetIndentationWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `onSetIndentationWidth` instead
    ///
    pub const OnSetIndentationWidth = onSetIndentationWidth;

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
    pub fn onSetIndentationWidth(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetIndentationWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetIndentationWidth` instead
    ///
    pub const SuperSetIndentationWidth = superSetIndentationWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _width: i32 `
    ///
    pub fn superSetIndentationWidth(self: QsciScintilla, _width: i32) void {
        qtc.QsciScintilla_SuperSetIndentationWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `setLexer` instead
    ///
    pub const SetLexer = setLexer;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _lexer: QsciLexer `
    ///
    pub fn setLexer(self: QsciScintilla, _lexer: anytype) void {
        comptime _ = @TypeOf(_lexer)._is_QsciLexer;
        qtc.QsciScintilla_SetLexer(@ptrCast(self.ptr), @ptrCast(_lexer.ptr));
    }

    /// ### DEPRECATED: Use `onSetLexer` instead
    ///
    pub const OnSetLexer = onSetLexer;

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
    pub fn onSetLexer(self: QsciScintilla, callback: *const fn (QsciScintilla, QsciLexer) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetLexer(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetLexer` instead
    ///
    pub const SuperSetLexer = superSetLexer;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _lexer: QsciLexer `
    ///
    pub fn superSetLexer(self: QsciScintilla, _lexer: anytype) void {
        comptime _ = @TypeOf(_lexer)._is_QsciLexer;
        qtc.QsciScintilla_SuperSetLexer(@ptrCast(self.ptr), @ptrCast(_lexer.ptr));
    }

    /// ### DEPRECATED: Use `setMarginsBackgroundColor` instead
    ///
    pub const SetMarginsBackgroundColor = setMarginsBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setMarginsBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarginsBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `onSetMarginsBackgroundColor` instead
    ///
    pub const OnSetMarginsBackgroundColor = onSetMarginsBackgroundColor;

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
    pub fn onSetMarginsBackgroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginsBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMarginsBackgroundColor` instead
    ///
    pub const SuperSetMarginsBackgroundColor = superSetMarginsBackgroundColor;

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
    pub fn superSetMarginsBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetMarginsBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setMarginsFont` instead
    ///
    pub const SetMarginsFont = setMarginsFont;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` f: QFont `
    ///
    pub fn setMarginsFont(self: QsciScintilla, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciScintilla_SetMarginsFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### DEPRECATED: Use `onSetMarginsFont` instead
    ///
    pub const OnSetMarginsFont = onSetMarginsFont;

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
    pub fn onSetMarginsFont(self: QsciScintilla, callback: *const fn (QsciScintilla, QFont) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginsFont(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMarginsFont` instead
    ///
    pub const SuperSetMarginsFont = superSetMarginsFont;

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
    pub fn superSetMarginsFont(self: QsciScintilla, f: anytype) void {
        comptime _ = @TypeOf(f)._is_QFont;
        qtc.QsciScintilla_SuperSetMarginsFont(@ptrCast(self.ptr), @ptrCast(f.ptr));
    }

    /// ### DEPRECATED: Use `setMarginsForegroundColor` instead
    ///
    pub const SetMarginsForegroundColor = setMarginsForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setMarginsForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarginsForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `onSetMarginsForegroundColor` instead
    ///
    pub const OnSetMarginsForegroundColor = onSetMarginsForegroundColor;

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
    pub fn onSetMarginsForegroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginsForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMarginsForegroundColor` instead
    ///
    pub const SuperSetMarginsForegroundColor = superSetMarginsForegroundColor;

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
    pub fn superSetMarginsForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetMarginsForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setMarginLineNumbers` instead
    ///
    pub const SetMarginLineNumbers = setMarginLineNumbers;

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
    pub fn setMarginLineNumbers(self: QsciScintilla, margin: i32, lnrs: bool) void {
        qtc.QsciScintilla_SetMarginLineNumbers(@ptrCast(self.ptr), @bitCast(margin), lnrs);
    }

    /// ### DEPRECATED: Use `onSetMarginLineNumbers` instead
    ///
    pub const OnSetMarginLineNumbers = onSetMarginLineNumbers;

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
    pub fn onSetMarginLineNumbers(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginLineNumbers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMarginLineNumbers` instead
    ///
    pub const SuperSetMarginLineNumbers = superSetMarginLineNumbers;

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
    pub fn superSetMarginLineNumbers(self: QsciScintilla, margin: i32, lnrs: bool) void {
        qtc.QsciScintilla_SuperSetMarginLineNumbers(@ptrCast(self.ptr), @bitCast(margin), lnrs);
    }

    /// ### DEPRECATED: Use `setMarginMarkerMask` instead
    ///
    pub const SetMarginMarkerMask = setMarginMarkerMask;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` _mask: i32 `
    ///
    pub fn setMarginMarkerMask(self: QsciScintilla, margin: i32, _mask: i32) void {
        qtc.QsciScintilla_SetMarginMarkerMask(@ptrCast(self.ptr), @bitCast(margin), @bitCast(_mask));
    }

    /// ### DEPRECATED: Use `onSetMarginMarkerMask` instead
    ///
    pub const OnSetMarginMarkerMask = onSetMarginMarkerMask;

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
    pub fn onSetMarginMarkerMask(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginMarkerMask(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMarginMarkerMask` instead
    ///
    pub const SuperSetMarginMarkerMask = superSetMarginMarkerMask;

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
    /// ` _mask: i32 `
    ///
    pub fn superSetMarginMarkerMask(self: QsciScintilla, margin: i32, _mask: i32) void {
        qtc.QsciScintilla_SuperSetMarginMarkerMask(@ptrCast(self.ptr), @bitCast(margin), @bitCast(_mask));
    }

    /// ### DEPRECATED: Use `setMarginSensitivity` instead
    ///
    pub const SetMarginSensitivity = setMarginSensitivity;

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
    pub fn setMarginSensitivity(self: QsciScintilla, margin: i32, sens: bool) void {
        qtc.QsciScintilla_SetMarginSensitivity(@ptrCast(self.ptr), @bitCast(margin), sens);
    }

    /// ### DEPRECATED: Use `onSetMarginSensitivity` instead
    ///
    pub const OnSetMarginSensitivity = onSetMarginSensitivity;

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
    pub fn onSetMarginSensitivity(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginSensitivity(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMarginSensitivity` instead
    ///
    pub const SuperSetMarginSensitivity = superSetMarginSensitivity;

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
    pub fn superSetMarginSensitivity(self: QsciScintilla, margin: i32, sens: bool) void {
        qtc.QsciScintilla_SuperSetMarginSensitivity(@ptrCast(self.ptr), @bitCast(margin), sens);
    }

    /// ### DEPRECATED: Use `setMarginWidth` instead
    ///
    pub const SetMarginWidth = setMarginWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` margin: i32 `
    ///
    /// ` _width: i32 `
    ///
    pub fn setMarginWidth(self: QsciScintilla, margin: i32, _width: i32) void {
        qtc.QsciScintilla_SetMarginWidth(@ptrCast(self.ptr), @bitCast(margin), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `onSetMarginWidth` instead
    ///
    pub const OnSetMarginWidth = onSetMarginWidth;

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
    pub fn onSetMarginWidth(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMarginWidth` instead
    ///
    pub const SuperSetMarginWidth = superSetMarginWidth;

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
    /// ` _width: i32 `
    ///
    pub fn superSetMarginWidth(self: QsciScintilla, margin: i32, _width: i32) void {
        qtc.QsciScintilla_SuperSetMarginWidth(@ptrCast(self.ptr), @bitCast(margin), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `setMarginWidth2` instead
    ///
    pub const SetMarginWidth2 = setMarginWidth2;

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
    pub fn setMarginWidth2(self: QsciScintilla, margin: i32, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QsciScintilla_SetMarginWidth2(@ptrCast(self.ptr), @bitCast(margin), s_str);
    }

    /// ### DEPRECATED: Use `onSetMarginWidth2` instead
    ///
    pub const OnSetMarginWidth2 = onSetMarginWidth2;

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
    pub fn onSetMarginWidth2(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetMarginWidth2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetMarginWidth2` instead
    ///
    pub const SuperSetMarginWidth2 = superSetMarginWidth2;

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
    pub fn superSetMarginWidth2(self: QsciScintilla, margin: i32, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.QsciScintilla_SuperSetMarginWidth2(@ptrCast(self.ptr), @bitCast(margin), s_str);
    }

    /// ### DEPRECATED: Use `setModified` instead
    ///
    pub const SetModified = setModified;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` m: bool `
    ///
    pub fn setModified(self: QsciScintilla, m: bool) void {
        qtc.QsciScintilla_SetModified(@ptrCast(self.ptr), m);
    }

    /// ### DEPRECATED: Use `onSetModified` instead
    ///
    pub const OnSetModified = onSetModified;

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
    pub fn onSetModified(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetModified(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetModified` instead
    ///
    pub const SuperSetModified = superSetModified;

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
    pub fn superSetModified(self: QsciScintilla, m: bool) void {
        qtc.QsciScintilla_SuperSetModified(@ptrCast(self.ptr), m);
    }

    /// ### DEPRECATED: Use `setPaper` instead
    ///
    pub const SetPaper = setPaper;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` c: QColor `
    ///
    pub fn setPaper(self: QsciScintilla, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciScintilla_SetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `onSetPaper` instead
    ///
    pub const OnSetPaper = onSetPaper;

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
    pub fn onSetPaper(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetPaper(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetPaper` instead
    ///
    pub const SuperSetPaper = superSetPaper;

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
    pub fn superSetPaper(self: QsciScintilla, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QColor;
        qtc.QsciScintilla_SuperSetPaper(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `setReadOnly` instead
    ///
    pub const SetReadOnly = setReadOnly;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` ro: bool `
    ///
    pub fn setReadOnly(self: QsciScintilla, ro: bool) void {
        qtc.QsciScintilla_SetReadOnly(@ptrCast(self.ptr), ro);
    }

    /// ### DEPRECATED: Use `onSetReadOnly` instead
    ///
    pub const OnSetReadOnly = onSetReadOnly;

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
    pub fn onSetReadOnly(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetReadOnly(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetReadOnly` instead
    ///
    pub const SuperSetReadOnly = superSetReadOnly;

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
    pub fn superSetReadOnly(self: QsciScintilla, ro: bool) void {
        qtc.QsciScintilla_SuperSetReadOnly(@ptrCast(self.ptr), ro);
    }

    /// ### DEPRECATED: Use `setSelection` instead
    ///
    pub const SetSelection = setSelection;

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
    pub fn setSelection(self: QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32) void {
        qtc.QsciScintilla_SetSelection(@ptrCast(self.ptr), @bitCast(lineFrom), @bitCast(indexFrom), @bitCast(lineTo), @bitCast(indexTo));
    }

    /// ### DEPRECATED: Use `onSetSelection` instead
    ///
    pub const OnSetSelection = onSetSelection;

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
    pub fn onSetSelection(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSelection` instead
    ///
    pub const SuperSetSelection = superSetSelection;

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
    pub fn superSetSelection(self: QsciScintilla, lineFrom: i32, indexFrom: i32, lineTo: i32, indexTo: i32) void {
        qtc.QsciScintilla_SuperSetSelection(@ptrCast(self.ptr), @bitCast(lineFrom), @bitCast(indexFrom), @bitCast(lineTo), @bitCast(indexTo));
    }

    /// ### DEPRECATED: Use `setSelectionBackgroundColor` instead
    ///
    pub const SetSelectionBackgroundColor = setSelectionBackgroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setSelectionBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetSelectionBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `onSetSelectionBackgroundColor` instead
    ///
    pub const OnSetSelectionBackgroundColor = onSetSelectionBackgroundColor;

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
    pub fn onSetSelectionBackgroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetSelectionBackgroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSelectionBackgroundColor` instead
    ///
    pub const SuperSetSelectionBackgroundColor = superSetSelectionBackgroundColor;

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
    pub fn superSetSelectionBackgroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetSelectionBackgroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setSelectionForegroundColor` instead
    ///
    pub const SetSelectionForegroundColor = setSelectionForegroundColor;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` col: QColor `
    ///
    pub fn setSelectionForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetSelectionForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `onSetSelectionForegroundColor` instead
    ///
    pub const OnSetSelectionForegroundColor = onSetSelectionForegroundColor;

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
    pub fn onSetSelectionForegroundColor(self: QsciScintilla, callback: *const fn (QsciScintilla, QColor) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetSelectionForegroundColor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSelectionForegroundColor` instead
    ///
    pub const SuperSetSelectionForegroundColor = superSetSelectionForegroundColor;

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
    pub fn superSetSelectionForegroundColor(self: QsciScintilla, col: anytype) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SuperSetSelectionForegroundColor(@ptrCast(self.ptr), @ptrCast(col.ptr));
    }

    /// ### DEPRECATED: Use `setTabIndents` instead
    ///
    pub const SetTabIndents = setTabIndents;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _indent: bool `
    ///
    pub fn setTabIndents(self: QsciScintilla, _indent: bool) void {
        qtc.QsciScintilla_SetTabIndents(@ptrCast(self.ptr), _indent);
    }

    /// ### DEPRECATED: Use `onSetTabIndents` instead
    ///
    pub const OnSetTabIndents = onSetTabIndents;

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
    pub fn onSetTabIndents(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetTabIndents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTabIndents` instead
    ///
    pub const SuperSetTabIndents = superSetTabIndents;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _indent: bool `
    ///
    pub fn superSetTabIndents(self: QsciScintilla, _indent: bool) void {
        qtc.QsciScintilla_SuperSetTabIndents(@ptrCast(self.ptr), _indent);
    }

    /// ### DEPRECATED: Use `setTabWidth` instead
    ///
    pub const SetTabWidth = setTabWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _width: i32 `
    ///
    pub fn setTabWidth(self: QsciScintilla, _width: i32) void {
        qtc.QsciScintilla_SetTabWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `onSetTabWidth` instead
    ///
    pub const OnSetTabWidth = onSetTabWidth;

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
    pub fn onSetTabWidth(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetTabWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetTabWidth` instead
    ///
    pub const SuperSetTabWidth = superSetTabWidth;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _width: i32 `
    ///
    pub fn superSetTabWidth(self: QsciScintilla, _width: i32) void {
        qtc.QsciScintilla_SuperSetTabWidth(@ptrCast(self.ptr), @bitCast(_width));
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QsciScintilla, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QsciScintilla_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `onSetText` instead
    ///
    pub const OnSetText = onSetText;

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
    pub fn onSetText(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetText` instead
    ///
    pub const SuperSetText = superSetText;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn superSetText(self: QsciScintilla, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QsciScintilla_SuperSetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `setUtf8` instead
    ///
    pub const SetUtf8 = setUtf8;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` cp: bool `
    ///
    pub fn setUtf8(self: QsciScintilla, cp: bool) void {
        qtc.QsciScintilla_SetUtf8(@ptrCast(self.ptr), cp);
    }

    /// ### DEPRECATED: Use `onSetUtf8` instead
    ///
    pub const OnSetUtf8 = onSetUtf8;

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
    pub fn onSetUtf8(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetUtf8(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetUtf8` instead
    ///
    pub const SuperSetUtf8 = superSetUtf8;

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
    pub fn superSetUtf8(self: QsciScintilla, cp: bool) void {
        qtc.QsciScintilla_SuperSetUtf8(@ptrCast(self.ptr), cp);
    }

    /// ### DEPRECATED: Use `setWhitespaceVisibility` instead
    ///
    pub const SetWhitespaceVisibility = setWhitespaceVisibility;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.WhitespaceVisibility `
    ///
    pub fn setWhitespaceVisibility(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SetWhitespaceVisibility(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onSetWhitespaceVisibility` instead
    ///
    pub const OnSetWhitespaceVisibility = onSetWhitespaceVisibility;

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
    pub fn onSetWhitespaceVisibility(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetWhitespaceVisibility(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetWhitespaceVisibility` instead
    ///
    pub const SuperSetWhitespaceVisibility = superSetWhitespaceVisibility;

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
    pub fn superSetWhitespaceVisibility(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SuperSetWhitespaceVisibility(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `setWrapMode` instead
    ///
    pub const SetWrapMode = setWrapMode;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` mode: qsciscintilla_enums.WrapMode `
    ///
    pub fn setWrapMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SetWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `onSetWrapMode` instead
    ///
    pub const OnSetWrapMode = onSetWrapMode;

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
    pub fn onSetWrapMode(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetWrapMode(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetWrapMode` instead
    ///
    pub const SuperSetWrapMode = superSetWrapMode;

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
    pub fn superSetWrapMode(self: QsciScintilla, mode: i32) void {
        qtc.QsciScintilla_SuperSetWrapMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `undo` instead
    ///
    pub const Undo = undo;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn undo(self: QsciScintilla) void {
        qtc.QsciScintilla_Undo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUndo` instead
    ///
    pub const OnUndo = onUndo;

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
    pub fn onUndo(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnUndo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUndo` instead
    ///
    pub const SuperUndo = superUndo;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superUndo(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperUndo(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `unindent` instead
    ///
    pub const Unindent = unindent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn unindent(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_Unindent(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `onUnindent` instead
    ///
    pub const OnUnindent = onUnindent;

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
    pub fn onUnindent(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnUnindent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superUnindent` instead
    ///
    pub const SuperUnindent = superUnindent;

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
    pub fn superUnindent(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_SuperUnindent(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `zoomIn` instead
    ///
    pub const ZoomIn = zoomIn;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` range: i32 `
    ///
    pub fn zoomIn(self: QsciScintilla, range: i32) void {
        qtc.QsciScintilla_ZoomIn(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `onZoomIn` instead
    ///
    pub const OnZoomIn = onZoomIn;

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
    pub fn onZoomIn(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomIn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superZoomIn` instead
    ///
    pub const SuperZoomIn = superZoomIn;

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
    pub fn superZoomIn(self: QsciScintilla, range: i32) void {
        qtc.QsciScintilla_SuperZoomIn(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `zoomIn2` instead
    ///
    pub const ZoomIn2 = zoomIn2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn zoomIn2(self: QsciScintilla) void {
        qtc.QsciScintilla_ZoomIn2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onZoomIn2` instead
    ///
    pub const OnZoomIn2 = onZoomIn2;

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
    pub fn onZoomIn2(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomIn2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superZoomIn2` instead
    ///
    pub const SuperZoomIn2 = superZoomIn2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superZoomIn2(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperZoomIn2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomOut` instead
    ///
    pub const ZoomOut = zoomOut;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` range: i32 `
    ///
    pub fn zoomOut(self: QsciScintilla, range: i32) void {
        qtc.QsciScintilla_ZoomOut(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `onZoomOut` instead
    ///
    pub const OnZoomOut = onZoomOut;

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
    pub fn onZoomOut(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomOut(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superZoomOut` instead
    ///
    pub const SuperZoomOut = superZoomOut;

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
    pub fn superZoomOut(self: QsciScintilla, range: i32) void {
        qtc.QsciScintilla_SuperZoomOut(@ptrCast(self.ptr), @bitCast(range));
    }

    /// ### DEPRECATED: Use `zoomOut2` instead
    ///
    pub const ZoomOut2 = zoomOut2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn zoomOut2(self: QsciScintilla) void {
        qtc.QsciScintilla_ZoomOut2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onZoomOut2` instead
    ///
    pub const OnZoomOut2 = onZoomOut2;

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
    pub fn onZoomOut2(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomOut2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superZoomOut2` instead
    ///
    pub const SuperZoomOut2 = superZoomOut2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn superZoomOut2(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperZoomOut2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `zoomTo` instead
    ///
    pub const ZoomTo = zoomTo;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _size: i32 `
    ///
    pub fn zoomTo(self: QsciScintilla, _size: i32) void {
        qtc.QsciScintilla_ZoomTo(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `onZoomTo` instead
    ///
    pub const OnZoomTo = onZoomTo;

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
    pub fn onZoomTo(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnZoomTo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superZoomTo` instead
    ///
    pub const SuperZoomTo = superZoomTo;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _size: i32 `
    ///
    pub fn superZoomTo(self: QsciScintilla, _size: i32) void {
        qtc.QsciScintilla_SuperZoomTo(@ptrCast(self.ptr), @bitCast(_size));
    }

    /// ### DEPRECATED: Use `cursorPositionChanged` instead
    ///
    pub const CursorPositionChanged = cursorPositionChanged;

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
    pub fn cursorPositionChanged(self: QsciScintilla, line: i32, index: i32) void {
        qtc.QsciScintilla_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(line), @bitCast(index));
    }

    /// ### DEPRECATED: Use `onCursorPositionChanged` instead
    ///
    pub const OnCursorPositionChanged = onCursorPositionChanged;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, line: i32, index: i32) callconv(.c) void `
    ///
    pub fn onCursorPositionChanged(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `copyAvailable` instead
    ///
    pub const CopyAvailable = copyAvailable;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` yes: bool `
    ///
    pub fn copyAvailable(self: QsciScintilla, yes: bool) void {
        qtc.QsciScintilla_CopyAvailable(@ptrCast(self.ptr), yes);
    }

    /// ### DEPRECATED: Use `onCopyAvailable` instead
    ///
    pub const OnCopyAvailable = onCopyAvailable;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, yes: bool) callconv(.c) void `
    ///
    pub fn onCopyAvailable(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_CopyAvailable(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indicatorClicked` instead
    ///
    pub const IndicatorClicked = indicatorClicked;

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
    pub fn indicatorClicked(self: QsciScintilla, line: i32, index: i32, state: i32) void {
        qtc.QsciScintilla_IndicatorClicked(@ptrCast(self.ptr), @bitCast(line), @bitCast(index), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onIndicatorClicked` instead
    ///
    pub const OnIndicatorClicked = onIndicatorClicked;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, line: i32, index: i32, state: flag of qnamespace_enums.KeyboardModifier) callconv(.c) void `
    ///
    pub fn onIndicatorClicked(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_IndicatorClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indicatorReleased` instead
    ///
    pub const IndicatorReleased = indicatorReleased;

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
    pub fn indicatorReleased(self: QsciScintilla, line: i32, index: i32, state: i32) void {
        qtc.QsciScintilla_IndicatorReleased(@ptrCast(self.ptr), @bitCast(line), @bitCast(index), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onIndicatorReleased` instead
    ///
    pub const OnIndicatorReleased = onIndicatorReleased;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, line: i32, index: i32, state: flag of qnamespace_enums.KeyboardModifier) callconv(.c) void `
    ///
    pub fn onIndicatorReleased(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_IndicatorReleased(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `linesChanged` instead
    ///
    pub const LinesChanged = linesChanged;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn linesChanged(self: QsciScintilla) void {
        qtc.QsciScintilla_LinesChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onLinesChanged` instead
    ///
    pub const OnLinesChanged = onLinesChanged;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla) callconv(.c) void `
    ///
    pub fn onLinesChanged(self: QsciScintilla, callback: *const fn (QsciScintilla) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_LinesChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `marginClicked` instead
    ///
    pub const MarginClicked = marginClicked;

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
    pub fn marginClicked(self: QsciScintilla, margin: i32, line: i32, state: i32) void {
        qtc.QsciScintilla_MarginClicked(@ptrCast(self.ptr), @bitCast(margin), @bitCast(line), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onMarginClicked` instead
    ///
    pub const OnMarginClicked = onMarginClicked;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, margin: i32, line: i32, state: flag of qnamespace_enums.KeyboardModifier) callconv(.c) void `
    ///
    pub fn onMarginClicked(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_MarginClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `marginRightClicked` instead
    ///
    pub const MarginRightClicked = marginRightClicked;

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
    pub fn marginRightClicked(self: QsciScintilla, margin: i32, line: i32, state: i32) void {
        qtc.QsciScintilla_MarginRightClicked(@ptrCast(self.ptr), @bitCast(margin), @bitCast(line), @bitCast(state));
    }

    /// ### DEPRECATED: Use `onMarginRightClicked` instead
    ///
    pub const OnMarginRightClicked = onMarginRightClicked;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, margin: i32, line: i32, state: flag of qnamespace_enums.KeyboardModifier) callconv(.c) void `
    ///
    pub fn onMarginRightClicked(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_MarginRightClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modificationAttempted` instead
    ///
    pub const ModificationAttempted = modificationAttempted;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn modificationAttempted(self: QsciScintilla) void {
        qtc.QsciScintilla_ModificationAttempted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onModificationAttempted` instead
    ///
    pub const OnModificationAttempted = onModificationAttempted;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla) callconv(.c) void `
    ///
    pub fn onModificationAttempted(self: QsciScintilla, callback: *const fn (QsciScintilla) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_ModificationAttempted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `modificationChanged` instead
    ///
    pub const ModificationChanged = modificationChanged;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` m: bool `
    ///
    pub fn modificationChanged(self: QsciScintilla, m: bool) void {
        qtc.QsciScintilla_ModificationChanged(@ptrCast(self.ptr), m);
    }

    /// ### DEPRECATED: Use `onModificationChanged` instead
    ///
    pub const OnModificationChanged = onModificationChanged;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, m: bool) callconv(.c) void `
    ///
    pub fn onModificationChanged(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_ModificationChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn selectionChanged(self: QsciScintilla) void {
        qtc.QsciScintilla_SelectionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla) callconv(.c) void `
    ///
    pub fn onSelectionChanged(self: QsciScintilla, callback: *const fn (QsciScintilla) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textChanged` instead
    ///
    pub const TextChanged = textChanged;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn textChanged(self: QsciScintilla) void {
        qtc.QsciScintilla_TextChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onTextChanged` instead
    ///
    pub const OnTextChanged = onTextChanged;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla) callconv(.c) void `
    ///
    pub fn onTextChanged(self: QsciScintilla, callback: *const fn (QsciScintilla) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `userListActivated` instead
    ///
    pub const UserListActivated = userListActivated;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    /// ` string: []const u8 `
    ///
    pub fn userListActivated(self: QsciScintilla, id: i32, string: []const u8) void {
        const string_str = qtc.libqt_string{
            .len = string.len,
            .data = string.ptr,
        };
        qtc.QsciScintilla_UserListActivated(@ptrCast(self.ptr), @bitCast(id), string_str);
    }

    /// ### DEPRECATED: Use `onUserListActivated` instead
    ///
    pub const OnUserListActivated = onUserListActivated;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, id: i32, string: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onUserListActivated(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QsciScintilla_Connect_UserListActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QEvent `
    ///
    pub fn event(self: QsciScintilla, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QsciScintilla_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

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
    pub fn onEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QEvent) callconv(.c) bool) void {
        qtc.QsciScintilla_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

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
    pub fn superEvent(self: QsciScintilla, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QsciScintilla_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QEvent `
    ///
    pub fn changeEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QsciScintilla_ChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

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
    pub fn onChangeEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

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
    pub fn superChangeEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QEvent;
        qtc.QsciScintilla_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QsciScintilla_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

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
    pub fn onContextMenuEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QContextMenuEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

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
    pub fn superContextMenuEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QContextMenuEvent;
        qtc.QsciScintilla_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn wheelEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.QsciScintilla_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

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
    pub fn onWheelEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QWheelEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

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
    pub fn superWheelEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.QsciScintilla_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `clearAnnotations1` instead
    ///
    pub const ClearAnnotations1 = clearAnnotations1;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn clearAnnotations1(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_ClearAnnotations1(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `indicatorDefine2` instead
    ///
    pub const IndicatorDefine2 = indicatorDefine2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _style: qsciscintilla_enums.IndicatorStyle `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn indicatorDefine2(self: QsciScintilla, _style: i32, indicatorNumber: i32) i32 {
        return qtc.QsciScintilla_IndicatorDefine2(@ptrCast(self.ptr), @bitCast(_style), @bitCast(indicatorNumber));
    }

    /// ### DEPRECATED: Use `markerDefine22` instead
    ///
    pub const MarkerDefine22 = markerDefine22;

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
    pub fn markerDefine22(self: QsciScintilla, sym: i32, markerNumber: i32) i32 {
        return qtc.QsciScintilla_MarkerDefine22(@ptrCast(self.ptr), @bitCast(sym), @bitCast(markerNumber));
    }

    /// ### DEPRECATED: Use `markerDefine23` instead
    ///
    pub const MarkerDefine23 = markerDefine23;

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
    pub fn markerDefine23(self: QsciScintilla, ch: u8, markerNumber: i32) i32 {
        return qtc.QsciScintilla_MarkerDefine23(@ptrCast(self.ptr), @bitCast(ch), @bitCast(markerNumber));
    }

    /// ### DEPRECATED: Use `markerDefine24` instead
    ///
    pub const MarkerDefine24 = markerDefine24;

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
    pub fn markerDefine24(self: QsciScintilla, pm: anytype, markerNumber: i32) i32 {
        comptime _ = @TypeOf(pm)._is_QPixmap;
        return qtc.QsciScintilla_MarkerDefine24(@ptrCast(self.ptr), @ptrCast(pm.ptr), @bitCast(markerNumber));
    }

    /// ### DEPRECATED: Use `markerDefine25` instead
    ///
    pub const MarkerDefine25 = markerDefine25;

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
    pub fn markerDefine25(self: QsciScintilla, im: anytype, markerNumber: i32) i32 {
        comptime _ = @TypeOf(im)._is_QImage;
        return qtc.QsciScintilla_MarkerDefine25(@ptrCast(self.ptr), @ptrCast(im.ptr), @bitCast(markerNumber));
    }

    /// ### DEPRECATED: Use `markerDelete2` instead
    ///
    pub const MarkerDelete2 = markerDelete2;

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
    pub fn markerDelete2(self: QsciScintilla, linenr: i32, markerNumber: i32) void {
        qtc.QsciScintilla_MarkerDelete2(@ptrCast(self.ptr), @bitCast(linenr), @bitCast(markerNumber));
    }

    /// ### DEPRECATED: Use `markerDeleteAll1` instead
    ///
    pub const MarkerDeleteAll1 = markerDeleteAll1;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` markerNumber: i32 `
    ///
    pub fn markerDeleteAll1(self: QsciScintilla, markerNumber: i32) void {
        qtc.QsciScintilla_MarkerDeleteAll1(@ptrCast(self.ptr), @bitCast(markerNumber));
    }

    /// ### DEPRECATED: Use `setIndicatorDrawUnder2` instead
    ///
    pub const SetIndicatorDrawUnder2 = setIndicatorDrawUnder2;

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
    pub fn setIndicatorDrawUnder2(self: QsciScintilla, under: bool, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetIndicatorDrawUnder2(@ptrCast(self.ptr), under, @bitCast(indicatorNumber));
    }

    /// ### DEPRECATED: Use `setIndicatorForegroundColor2` instead
    ///
    pub const SetIndicatorForegroundColor2 = setIndicatorForegroundColor2;

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
    pub fn setIndicatorForegroundColor2(self: QsciScintilla, col: anytype, indicatorNumber: i32) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndicatorForegroundColor2(@ptrCast(self.ptr), @ptrCast(col.ptr), @bitCast(indicatorNumber));
    }

    /// ### DEPRECATED: Use `setIndicatorHoverForegroundColor2` instead
    ///
    pub const SetIndicatorHoverForegroundColor2 = setIndicatorHoverForegroundColor2;

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
    pub fn setIndicatorHoverForegroundColor2(self: QsciScintilla, col: anytype, indicatorNumber: i32) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndicatorHoverForegroundColor2(@ptrCast(self.ptr), @ptrCast(col.ptr), @bitCast(indicatorNumber));
    }

    /// ### DEPRECATED: Use `setIndicatorHoverStyle2` instead
    ///
    pub const SetIndicatorHoverStyle2 = setIndicatorHoverStyle2;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` _style: qsciscintilla_enums.IndicatorStyle `
    ///
    /// ` indicatorNumber: i32 `
    ///
    pub fn setIndicatorHoverStyle2(self: QsciScintilla, _style: i32, indicatorNumber: i32) void {
        qtc.QsciScintilla_SetIndicatorHoverStyle2(@ptrCast(self.ptr), @bitCast(_style), @bitCast(indicatorNumber));
    }

    /// ### DEPRECATED: Use `setIndicatorOutlineColor2` instead
    ///
    pub const SetIndicatorOutlineColor2 = setIndicatorOutlineColor2;

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
    pub fn setIndicatorOutlineColor2(self: QsciScintilla, col: anytype, indicatorNumber: i32) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetIndicatorOutlineColor2(@ptrCast(self.ptr), @ptrCast(col.ptr), @bitCast(indicatorNumber));
    }

    /// ### DEPRECATED: Use `clearMarginText1` instead
    ///
    pub const ClearMarginText1 = clearMarginText1;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    /// ` line: i32 `
    ///
    pub fn clearMarginText1(self: QsciScintilla, line: i32) void {
        qtc.QsciScintilla_ClearMarginText1(@ptrCast(self.ptr), @bitCast(line));
    }

    /// ### DEPRECATED: Use `setMarkerBackgroundColor2` instead
    ///
    pub const SetMarkerBackgroundColor2 = setMarkerBackgroundColor2;

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
    pub fn setMarkerBackgroundColor2(self: QsciScintilla, col: anytype, markerNumber: i32) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarkerBackgroundColor2(@ptrCast(self.ptr), @ptrCast(col.ptr), @bitCast(markerNumber));
    }

    /// ### DEPRECATED: Use `setMarkerForegroundColor2` instead
    ///
    pub const SetMarkerForegroundColor2 = setMarkerForegroundColor2;

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
    pub fn setMarkerForegroundColor2(self: QsciScintilla, col: anytype, markerNumber: i32) void {
        comptime _ = @TypeOf(col)._is_QColor;
        qtc.QsciScintilla_SetMarkerForegroundColor2(@ptrCast(self.ptr), @ptrCast(col.ptr), @bitCast(markerNumber));
    }

    /// ### DEPRECATED: Use `setWrapVisualFlags2` instead
    ///
    pub const SetWrapVisualFlags2 = setWrapVisualFlags2;

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
    pub fn setWrapVisualFlags2(self: QsciScintilla, endFlag: i32, startFlag: i32) void {
        qtc.QsciScintilla_SetWrapVisualFlags2(@ptrCast(self.ptr), @bitCast(endFlag), @bitCast(startFlag));
    }

    /// ### DEPRECATED: Use `setWrapVisualFlags3` instead
    ///
    pub const SetWrapVisualFlags3 = setWrapVisualFlags3;

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
    /// ` _indent: i32 `
    ///
    pub fn setWrapVisualFlags3(self: QsciScintilla, endFlag: i32, startFlag: i32, _indent: i32) void {
        qtc.QsciScintilla_SetWrapVisualFlags3(@ptrCast(self.ptr), @bitCast(endFlag), @bitCast(startFlag), @bitCast(_indent));
    }

    /// ### DEPRECATED: Use `pool` instead
    ///
    pub const Pool = pool;

    /// Inherited from QsciScintillaBase
    ///
    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintillaBase.html)
    ///
    pub fn pool() QsciScintillaBase {
        return .{ .ptr = qtc.QsciScintillaBase_Pool() };
    }

    /// ### DEPRECATED: Use `replaceHorizontalScrollBar` instead
    ///
    pub const ReplaceHorizontalScrollBar = replaceHorizontalScrollBar;

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
    pub fn replaceHorizontalScrollBar(self: QsciScintilla, scrollBar: anytype) void {
        comptime _ = @TypeOf(scrollBar)._is_QScrollBar;
        qtc.QsciScintillaBase_ReplaceHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollBar.ptr));
    }

    /// ### DEPRECATED: Use `replaceVerticalScrollBar` instead
    ///
    pub const ReplaceVerticalScrollBar = replaceVerticalScrollBar;

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
    pub fn replaceVerticalScrollBar(self: QsciScintilla, scrollBar: anytype) void {
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

    /// ### DEPRECATED: Use `commandKey` instead
    ///
    pub const CommandKey = commandKey;

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
    pub fn commandKey(qt_key: i32, modifiers: *i32) i32 {
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
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn SCN_DWELLEND(self: QsciScintilla, position: i32, _x: i32, _y: i32) void {
        qtc.QsciScintillaBase_SCN_DWELLEND(@ptrCast(self.ptr), @bitCast(position), @bitCast(_x), @bitCast(_y));
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
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn SCN_DWELLSTART(self: QsciScintilla, position: i32, _x: i32, _y: i32) void {
        qtc.QsciScintillaBase_SCN_DWELLSTART(@ptrCast(self.ptr), @bitCast(position), @bitCast(_x), @bitCast(_y));
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

    /// ### DEPRECATED: Use `verticalScrollBarPolicy` instead
    ///
    pub const VerticalScrollBarPolicy = verticalScrollBarPolicy;

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
    pub fn verticalScrollBarPolicy(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setVerticalScrollBarPolicy(self: QsciScintilla, _verticalScrollBarPolicy: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn verticalScrollBar(self: QsciScintilla) QScrollBar {
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
    /// ` self: QsciScintilla `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setVerticalScrollBar(self: QsciScintilla, scrollbar: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn horizontalScrollBarPolicy(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setHorizontalScrollBarPolicy(self: QsciScintilla, _horizontalScrollBarPolicy: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn horizontalScrollBar(self: QsciScintilla) QScrollBar {
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
    /// ` self: QsciScintilla `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setHorizontalScrollBar(self: QsciScintilla, scrollbar: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn cornerWidget(self: QsciScintilla) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setCornerWidget(self: QsciScintilla, widget: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn addScrollBarWidget(self: QsciScintilla, widget: anytype, alignment: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn scrollBarWidgets(self: QsciScintilla, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("QsciScintilla.scrollBarWidgets: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    pub fn viewport(self: QsciScintilla) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setViewport(self: QsciScintilla, widget: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn maximumViewportSize(self: QsciScintilla) QSize {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn sizeAdjustPolicy(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn setSizeAdjustPolicy(self: QsciScintilla, policy: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn frameStyle(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _frameStyle: i32 `
    ///
    pub fn setFrameStyle(self: QsciScintilla, _frameStyle: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn frameWidth(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn frameShape(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _frameShape: qframe_enums.Shape `
    ///
    pub fn setFrameShape(self: QsciScintilla, _frameShape: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn frameShadow(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _frameShadow: qframe_enums.Shadow `
    ///
    pub fn setFrameShadow(self: QsciScintilla, _frameShadow: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn lineWidth(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: QsciScintilla, _lineWidth: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn midLineWidth(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: QsciScintilla, _midLineWidth: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn frameRect(self: QsciScintilla) QRect {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _frameRect: QRect `
    ///
    pub fn setFrameRect(self: QsciScintilla, _frameRect: anytype) void {
        comptime _ = @TypeOf(_frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(_frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// Upcasts to a QPaintDevice object
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn asQPaintDevice(self: QsciScintilla) QPaintDevice {
        return .{ .ptr = qtc.QWidget_AsQPaintDevice(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// Downcasts to a QsciScintilla object
    ///
    /// ## Parameter(s):
    ///
    /// ` _qpaintdevice: QPaintDevice `
    ///
    pub fn fromQPaintDevice(_qpaintdevice: anytype) QsciScintilla {
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
    /// ` self: QsciScintilla `
    ///
    pub fn winId(self: QsciScintilla) usize {
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
    /// ` self: QsciScintilla `
    ///
    pub fn createWinId(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn internalWinId(self: QsciScintilla) usize {
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
    /// ` self: QsciScintilla `
    ///
    pub fn effectiveWinId(self: QsciScintilla) usize {
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
    /// ` self: QsciScintilla `
    ///
    pub fn style(self: QsciScintilla) QStyle {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QsciScintilla, _style: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isTopLevel(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isWindow(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isModal(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: QsciScintilla, _windowModality: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isEnabled(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: QsciScintilla, param1: anytype) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QsciScintilla, enabled: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: QsciScintilla, disabled: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: QsciScintilla, windowModified: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn frameGeometry(self: QsciScintilla) QRect {
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
    /// ` self: QsciScintilla `
    ///
    pub fn geometry(self: QsciScintilla) QRect {
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
    /// ` self: QsciScintilla `
    ///
    pub fn normalGeometry(self: QsciScintilla) QRect {
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
    /// ` self: QsciScintilla `
    ///
    pub fn x(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn y(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn pos(self: QsciScintilla) QPoint {
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
    /// ` self: QsciScintilla `
    ///
    pub fn frameSize(self: QsciScintilla) QSize {
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
    /// ` self: QsciScintilla `
    ///
    pub fn size(self: QsciScintilla) QSize {
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
    /// ` self: QsciScintilla `
    ///
    pub fn width(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn height(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn rect(self: QsciScintilla) QRect {
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
    /// ` self: QsciScintilla `
    ///
    pub fn childrenRect(self: QsciScintilla) QRect {
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
    /// ` self: QsciScintilla `
    ///
    pub fn childrenRegion(self: QsciScintilla) QRegion {
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
    /// ` self: QsciScintilla `
    ///
    pub fn minimumSize(self: QsciScintilla) QSize {
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
    /// ` self: QsciScintilla `
    ///
    pub fn maximumSize(self: QsciScintilla) QSize {
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
    /// ` self: QsciScintilla `
    ///
    pub fn minimumWidth(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn minimumHeight(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn maximumWidth(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn maximumHeight(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: QsciScintilla, _minimumSize: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: QsciScintilla, minw: i32, minh: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: QsciScintilla, _maximumSize: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: QsciScintilla, maxw: i32, maxh: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: QsciScintilla, minw: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: QsciScintilla, minh: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: QsciScintilla, maxw: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: QsciScintilla, maxh: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn sizeIncrement(self: QsciScintilla) QSize {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: QsciScintilla, _sizeIncrement: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: QsciScintilla, w: i32, h: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn baseSize(self: QsciScintilla) QSize {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: QsciScintilla, _baseSize: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: QsciScintilla, basew: i32, baseh: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: QsciScintilla, fixedSize: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: QsciScintilla, w: i32, h: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: QsciScintilla, w: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: QsciScintilla, h: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: QsciScintilla, param1: anytype) QPointF {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: QsciScintilla, param1: anytype) QPoint {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: QsciScintilla, param1: anytype) QPointF {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: QsciScintilla, param1: anytype) QPoint {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: QsciScintilla, param1: anytype) QPointF {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: QsciScintilla, param1: anytype) QPoint {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: QsciScintilla, param1: anytype) QPointF {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: QsciScintilla, param1: anytype) QPoint {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: QsciScintilla, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: QsciScintilla, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: QsciScintilla, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: QsciScintilla, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QsciScintilla `
    ///
    pub fn window(self: QsciScintilla) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    pub fn nativeParentWidget(self: QsciScintilla) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    pub fn topLevelWidget(self: QsciScintilla) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    pub fn palette(self: QsciScintilla) QPalette {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QsciScintilla, _palette: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: QsciScintilla, _backgroundRole: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: QsciScintilla, _foregroundRole: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn font(self: QsciScintilla) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn fontMetrics(self: QsciScintilla) QFontMetrics {
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
    /// ` self: QsciScintilla `
    ///
    pub fn fontInfo(self: QsciScintilla) QFontInfo {
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
    /// ` self: QsciScintilla `
    ///
    pub fn cursor(self: QsciScintilla) QCursor {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QsciScintilla, _cursor: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn unsetCursor(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: QsciScintilla, enable: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn hasMouseTracking(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn underMouse(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: QsciScintilla, enable: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn hasTabletTracking(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: QsciScintilla, _mask: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: QsciScintilla, _mask: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn mask(self: QsciScintilla) QRegion {
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
    /// ` self: QsciScintilla `
    ///
    pub fn clearMask(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: QsciScintilla, target: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: QsciScintilla, painter: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn grab(self: QsciScintilla) QPixmap {
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
    /// ` self: QsciScintilla `
    ///
    pub fn graphicsEffect(self: QsciScintilla) QGraphicsEffect {
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
    /// ` self: QsciScintilla `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QsciScintilla, effect: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QsciScintilla, typeVal: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QsciScintilla, typeVal: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: QsciScintilla, _windowTitle: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: QsciScintilla, _styleSheet: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.styleSheet: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.windowTitle: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(self: QsciScintilla, icon: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn windowIcon(self: QsciScintilla) QIcon {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: QsciScintilla, _windowIconText: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.windowIconText: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: QsciScintilla, _windowRole: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.windowRole: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: QsciScintilla, filePath: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.windowFilePath: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: QsciScintilla, level: f64) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn windowOpacity(self: QsciScintilla) f64 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isWindowModified(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QsciScintilla, _toolTip: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.toolTip: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: QsciScintilla, msec: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn toolTipDuration(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QsciScintilla, _statusTip: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.statusTip: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QsciScintilla, _whatsThis: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.whatsThis: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.accessibleName: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: QsciScintilla, name: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.accessibleDescription: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: QsciScintilla, description: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QsciScintilla, direction: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn unsetLayoutDirection(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QsciScintilla, _locale: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn locale(self: QsciScintilla) QLocale {
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
    /// ` self: QsciScintilla `
    ///
    pub fn unsetLocale(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isRightToLeft(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isLeftToRight(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn setFocus(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isActiveWindow(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn activateWindow(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn clearFocus(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QsciScintilla, reason: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QsciScintilla, policy: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn hasFocus(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: QsciScintilla, _focusProxy: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn focusProxy(self: QsciScintilla) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: QsciScintilla, policy: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn grabMouse(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: QsciScintilla, param1: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn releaseMouse(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn grabKeyboard(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn releaseKeyboard(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: QsciScintilla, key: anytype) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: QsciScintilla, id: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: QsciScintilla, id: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: QsciScintilla, id: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn updatesEnabled(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: QsciScintilla, enable: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn graphicsProxyWidget(self: QsciScintilla) QGraphicsProxyWidget {
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
    /// ` self: QsciScintilla `
    ///
    pub fn update(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn repaint(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: QsciScintilla, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: QsciScintilla, param1: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: QsciScintilla, param1: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: QsciScintilla, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: QsciScintilla, param1: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: QsciScintilla, param1: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: QsciScintilla, hidden: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn show(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn hide(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn showMinimized(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn showMaximized(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn showFullScreen(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn showNormal(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn close(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn raise(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn lower(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: QsciScintilla, param1: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: QsciScintilla, _x: i32, _y: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: QsciScintilla, param1: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: QsciScintilla, w: i32, h: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: QsciScintilla, param1: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: QsciScintilla, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: QsciScintilla, _geometry: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: QsciScintilla, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciScintilla.saveGeometry: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: QsciScintilla, _geometry: []u8) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn adjustSize(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isVisible(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: QsciScintilla, param1: anytype) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isHidden(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isMinimized(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isMaximized(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isFullScreen(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: QsciScintilla, state: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: QsciScintilla, state: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn sizePolicy(self: QsciScintilla) QSizePolicy {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QsciScintilla, _sizePolicy: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QsciScintilla, horizontal: i32, vertical: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn visibleRegion(self: QsciScintilla) QRegion {
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
    pub fn setContentsMargins(self: QsciScintilla, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QsciScintilla, _margins: anytype) void {
        comptime _ = @TypeOf(_margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(_margins.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn contentsMargins(self: QsciScintilla) QMargins {
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
    /// ` self: QsciScintilla `
    ///
    pub fn contentsRect(self: QsciScintilla) QRect {
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
    /// ` self: QsciScintilla `
    ///
    pub fn layout(self: QsciScintilla) QLayout {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: QsciScintilla, _layout: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn updateGeometry(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: QsciScintilla, _parent: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: QsciScintilla, _parent: anytype, f: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: QsciScintilla, dx: i32, dy: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: QsciScintilla, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn focusWidget(self: QsciScintilla) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    pub fn nextInFocusChain(self: QsciScintilla) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    pub fn previousInFocusChain(self: QsciScintilla) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    pub fn acceptDrops(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QsciScintilla, on: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: QsciScintilla, action: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QsciScintilla, _actions: []QAction) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QsciScintilla, before: anytype, _actions: []QAction) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: QsciScintilla, before: anytype, action: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: QsciScintilla, action: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: QsciScintilla, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QsciScintilla.actions: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn addAction2(self: QsciScintilla, _text: []const u8) QAction {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
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
    /// ` self: QsciScintilla `
    ///
    /// ` icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn addAction3(self: QsciScintilla, icon: anytype, _text: []const u8) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
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
    /// ` self: QsciScintilla `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: QsciScintilla, _text: []const u8, shortcut: anytype) QAction {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
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
    /// ` self: QsciScintilla `
    ///
    /// ` icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: QsciScintilla, icon: anytype, _text: []const u8, shortcut: anytype) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
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
    /// ` self: QsciScintilla `
    ///
    pub fn parentWidget(self: QsciScintilla) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: QsciScintilla, typeVal: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: QsciScintilla, param1: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: QsciScintilla, typeVal: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: QsciScintilla, _x: i32, _y: i32) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: QsciScintilla, p: anytype) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: QsciScintilla, p: anytype) QWidget {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: QsciScintilla, param1: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: QsciScintilla, param1: i32) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn ensurePolished(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: QsciScintilla, child: anytype) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn autoFillBackground(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: QsciScintilla, enabled: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn backingStore(self: QsciScintilla) QBackingStore {
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
    /// ` self: QsciScintilla `
    ///
    pub fn windowHandle(self: QsciScintilla) QWindow {
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
    /// ` self: QsciScintilla `
    ///
    pub fn screen(self: QsciScintilla) QScreen {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QsciScintilla, _screen: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QsciScintilla, title: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` icon: QIcon `
    ///
    pub fn windowIconChanged(self: QsciScintilla, icon: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: QsciScintilla, callback: *const fn (QsciScintilla, QIcon) callconv(.c) void) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: QsciScintilla, iconText: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: QsciScintilla, _pos: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: QsciScintilla, callback: *const fn (QsciScintilla, QPoint) callconv(.c) void) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QsciScintilla, hints: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: QsciScintilla, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: QsciScintilla, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn render4(self: QsciScintilla, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: QsciScintilla, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: QsciScintilla, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    pub fn render42(self: QsciScintilla, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: QsciScintilla, rectangle: anytype) QPixmap {
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
    /// ` self: QsciScintilla `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QsciScintilla, typeVal: i32, flags: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: QsciScintilla, key: anytype, context: i32) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: QsciScintilla, id: i32, enable: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: QsciScintilla, id: i32, enable: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: QsciScintilla, param1: i32, on: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: QsciScintilla, param1: i32, on: bool) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QsciScintilla, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.objectName: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QsciScintilla, name: []const u8) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isWidgetType(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isWindowType(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn isQuickItemType(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn signalsBlocked(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QsciScintilla, b: bool) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn thread(self: QsciScintilla) QThread {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QsciScintilla, _thread: anytype) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QsciScintilla, interval: i32) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QsciScintilla, time: i64) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QsciScintilla, id: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QsciScintilla, id: i32) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QsciScintilla, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QsciScintilla.children: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QsciScintilla, filterObj: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QsciScintilla, obj: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QsciScintilla, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QsciScintilla `
    ///
    pub fn disconnect3(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QsciScintilla, receiver: anytype) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn dumpObjectTree(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn dumpObjectInfo(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QsciScintilla, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QsciScintilla, name: [:0]const u8) QVariant {
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
    /// ` self: QsciScintilla `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QsciScintilla, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QsciScintilla.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QsciScintilla.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QsciScintilla `
    ///
    pub fn bindingStorage(self: QsciScintilla) QBindingStorage {
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
    /// ` self: QsciScintilla `
    ///
    pub fn bindingStorage2(self: QsciScintilla) QBindingStorage {
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
    /// ` self: QsciScintilla `
    ///
    pub fn destroyed(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QsciScintilla, callback: *const fn (QsciScintilla) callconv(.c) void) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn parent(self: QsciScintilla) QObject {
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
    /// ` self: QsciScintilla `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QsciScintilla, classname: [:0]const u8) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn deleteLater(self: QsciScintilla) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QsciScintilla, interval: i32, timerType: i32) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QsciScintilla, time: i64, timerType: i32) i32 {
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
    /// ` self: QsciScintilla `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QsciScintilla, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QsciScintilla, signal: [:0]const u8) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QsciScintilla, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QsciScintilla, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QsciScintilla, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QsciScintilla, param1: anytype) void {
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
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QsciScintilla, callback: *const fn (QsciScintilla, QObject) callconv(.c) void) void {
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
    /// ` self: QsciScintilla `
    ///
    pub fn paintingActive(self: QsciScintilla) bool {
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
    /// ` self: QsciScintilla `
    ///
    pub fn widthMM(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn heightMM(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn logicalDpiX(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn logicalDpiY(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn physicalDpiX(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn physicalDpiY(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn devicePixelRatio(self: QsciScintilla) f64 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn devicePixelRatioF(self: QsciScintilla) f64 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn colorCount(self: QsciScintilla) i32 {
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
    /// ` self: QsciScintilla `
    ///
    pub fn depth(self: QsciScintilla) i32 {
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

    /// ### DEPRECATED: Use `canInsertFromMimeData` instead
    ///
    pub const CanInsertFromMimeData = canInsertFromMimeData;

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
    pub fn canInsertFromMimeData(self: QsciScintilla, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.QsciScintilla_CanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `superCanInsertFromMimeData` instead
    ///
    pub const SuperCanInsertFromMimeData = superCanInsertFromMimeData;

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
    pub fn superCanInsertFromMimeData(self: QsciScintilla, source: anytype) bool {
        comptime _ = @TypeOf(source)._is_QMimeData;
        return qtc.QsciScintilla_SuperCanInsertFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr));
    }

    /// ### DEPRECATED: Use `onCanInsertFromMimeData` instead
    ///
    pub const OnCanInsertFromMimeData = onCanInsertFromMimeData;

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
    pub fn onCanInsertFromMimeData(self: QsciScintilla, callback: *const fn (QsciScintilla, QMimeData) callconv(.c) bool) void {
        qtc.QsciScintilla_OnCanInsertFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `fromMimeData` instead
    ///
    pub const FromMimeData = fromMimeData;

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
    pub fn fromMimeData(self: QsciScintilla, allocator: std.mem.Allocator, source: anytype, rectangular: *bool) []u8 {
        comptime _ = @TypeOf(source)._is_QMimeData;
        var _bytearray: qtc.libqt_string = qtc.QsciScintilla_FromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr), @ptrCast(rectangular));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciScintilla.fromMimeData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superFromMimeData` instead
    ///
    pub const SuperFromMimeData = superFromMimeData;

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
    pub fn superFromMimeData(self: QsciScintilla, allocator: std.mem.Allocator, source: anytype, rectangular: *bool) []u8 {
        comptime _ = @TypeOf(source)._is_QMimeData;
        var _bytearray: qtc.libqt_string = qtc.QsciScintilla_SuperFromMimeData(@ptrCast(self.ptr), @ptrCast(source.ptr), @ptrCast(rectangular));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciScintilla.fromMimeData: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onFromMimeData` instead
    ///
    pub const OnFromMimeData = onFromMimeData;

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
    pub fn onFromMimeData(self: QsciScintilla, callback: *const fn (QsciScintilla, QMimeData, *bool) callconv(.c) qtc.libqt_string) void {
        qtc.QsciScintilla_OnFromMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `toMimeData` instead
    ///
    pub const ToMimeData = toMimeData;

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
    /// ` _text: []u8 `
    ///
    /// ` rectangular: bool `
    ///
    pub fn toMimeData(self: QsciScintilla, _text: []u8, rectangular: bool) QMimeData {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QsciScintilla_ToMimeData(@ptrCast(self.ptr), text_str, rectangular) };
    }

    /// ### DEPRECATED: Use `superToMimeData` instead
    ///
    pub const SuperToMimeData = superToMimeData;

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
    /// ` _text: []u8 `
    ///
    /// ` rectangular: bool `
    ///
    pub fn superToMimeData(self: QsciScintilla, _text: []u8, rectangular: bool) QMimeData {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QsciScintilla_SuperToMimeData(@ptrCast(self.ptr), text_str, rectangular) };
    }

    /// ### DEPRECATED: Use `onToMimeData` instead
    ///
    pub const OnToMimeData = onToMimeData;

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
    pub fn onToMimeData(self: QsciScintilla, callback: *const fn (QsciScintilla, qtc.libqt_string, bool) callconv(.c) QMimeData) void {
        qtc.QsciScintilla_OnToMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

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
    pub fn dragEnterEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.QsciScintilla_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

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
    pub fn superDragEnterEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragEnterEvent;
        qtc.QsciScintilla_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

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
    pub fn onDragEnterEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QDragEnterEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

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
    pub fn dragLeaveEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QsciScintilla_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

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
    pub fn superDragLeaveEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QsciScintilla_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

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
    pub fn onDragLeaveEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

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
    pub fn dragMoveEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QsciScintilla_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

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
    pub fn superDragMoveEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QsciScintilla_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

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
    pub fn onDragMoveEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QDragMoveEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

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
    pub fn dropEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.QsciScintilla_DropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

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
    pub fn superDropEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDropEvent;
        qtc.QsciScintilla_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

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
    pub fn onDropEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QDropEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

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
    pub fn focusInEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintilla_FocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

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
    pub fn superFocusInEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintilla_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

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
    pub fn onFocusInEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QFocusEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

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
    pub fn focusOutEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintilla_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

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
    pub fn superFocusOutEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QFocusEvent;
        qtc.QsciScintilla_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

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
    pub fn onFocusOutEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QFocusEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

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
    pub fn focusNextPrevChild(self: QsciScintilla, next: bool) bool {
        return qtc.QsciScintilla_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

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
    pub fn superFocusNextPrevChild(self: QsciScintilla, next: bool) bool {
        return qtc.QsciScintilla_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

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
    pub fn onFocusNextPrevChild(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) bool) void {
        qtc.QsciScintilla_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

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
    pub fn keyPressEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QsciScintilla_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

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
    pub fn superKeyPressEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QKeyEvent;
        qtc.QsciScintilla_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

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
    pub fn onKeyPressEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QKeyEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

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
    /// ` _event: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QsciScintilla_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

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
    /// ` _event: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QsciScintilla_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

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
    pub fn onInputMethodEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QInputMethodEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

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
    pub fn inputMethodQuery(self: QsciScintilla, query: i32) QVariant {
        return .{ .ptr = qtc.QsciScintilla_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

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
    pub fn superInputMethodQuery(self: QsciScintilla, query: i32) QVariant {
        return .{ .ptr = qtc.QsciScintilla_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

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
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) QVariant) void {
        qtc.QsciScintilla_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

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
    pub fn mouseDoubleClickEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

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
    pub fn superMouseDoubleClickEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

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
    pub fn onMouseDoubleClickEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

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
    pub fn mouseMoveEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

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
    pub fn superMouseMoveEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

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
    pub fn onMouseMoveEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

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
    pub fn mousePressEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_MousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

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
    pub fn superMousePressEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

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
    pub fn onMousePressEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

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
    pub fn mouseReleaseEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

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
    pub fn superMouseReleaseEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QsciScintilla_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

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
    pub fn onMouseReleaseEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QMouseEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

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
    pub fn paintEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QsciScintilla_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

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
    pub fn superPaintEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QsciScintilla_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

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
    pub fn onPaintEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QPaintEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

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
    pub fn resizeEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QsciScintilla_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

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
    pub fn superResizeEvent(self: QsciScintilla, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QsciScintilla_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

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
    pub fn onResizeEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QResizeEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollContentsBy` instead
    ///
    pub const ScrollContentsBy = scrollContentsBy;

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
    pub fn scrollContentsBy(self: QsciScintilla, dx: i32, dy: i32) void {
        qtc.QsciScintilla_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `superScrollContentsBy` instead
    ///
    pub const SuperScrollContentsBy = superScrollContentsBy;

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
    pub fn superScrollContentsBy(self: QsciScintilla, dx: i32, dy: i32) void {
        qtc.QsciScintilla_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onScrollContentsBy` instead
    ///
    pub const OnScrollContentsBy = onScrollContentsBy;

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
    pub fn onScrollContentsBy(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn minimumSizeHint(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QsciScintilla_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn superMinimumSizeHint(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QsciScintilla_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: QsciScintilla, callback: *const fn () callconv(.c) QSize) void {
        qtc.QsciScintilla_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn sizeHint(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QsciScintilla_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn superSizeHint(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QsciScintilla_SuperSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QsciScintilla, callback: *const fn () callconv(.c) QSize) void {
        qtc.QsciScintilla_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn setupViewport(self: QsciScintilla, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QsciScintilla_SetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn superSetupViewport(self: QsciScintilla, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QsciScintilla_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, viewport: QWidget) callconv(.c) void `
    ///
    pub fn onSetupViewport(self: QsciScintilla, callback: *const fn (QsciScintilla, QWidget) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn eventFilter(self: QsciScintilla, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QsciScintilla_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn superEventFilter(self: QsciScintilla, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QsciScintilla_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QsciScintilla, callback: *const fn (QsciScintilla, QObject, QEvent) callconv(.c) bool) void {
        qtc.QsciScintilla_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QEvent `
    ///
    pub fn viewportEvent(self: QsciScintilla, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QsciScintilla_ViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superViewportEvent(self: QsciScintilla, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QEvent;
        return qtc.QsciScintilla_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: QEvent) callconv(.c) bool `
    ///
    pub fn onViewportEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QEvent) callconv(.c) bool) void {
        qtc.QsciScintilla_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn viewportSizeHint(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QsciScintilla_ViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn superViewportSizeHint(self: QsciScintilla) QSize {
        return .{ .ptr = qtc.QsciScintilla_SuperViewportSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportSizeHint(self: QsciScintilla, callback: *const fn () callconv(.c) QSize) void {
        qtc.QsciScintilla_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn initStyleOption(self: QsciScintilla, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QsciScintilla_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn superInitStyleOption(self: QsciScintilla, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QsciScintilla_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn onInitStyleOption(self: QsciScintilla, callback: *const fn (QsciScintilla, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QsciScintilla_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn devType(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_DevType(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn superDevType(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QsciScintilla, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciScintilla_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QsciScintilla, visible: bool) void {
        qtc.QsciScintilla_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QsciScintilla `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: QsciScintilla, visible: bool) void {
        qtc.QsciScintilla_SuperSetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: QsciScintilla, callback: *const fn (QsciScintilla, bool) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QsciScintilla, param1: i32) i32 {
        return qtc.QsciScintilla_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QsciScintilla, param1: i32) i32 {
        return qtc.QsciScintilla_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) i32) void {
        qtc.QsciScintilla_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn hasHeightForWidth(self: QsciScintilla) bool {
        return qtc.QsciScintilla_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn superHasHeightForWidth(self: QsciScintilla) bool {
        return qtc.QsciScintilla_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QsciScintilla, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintilla_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn paintEngine(self: QsciScintilla) QPaintEngine {
        return .{ .ptr = qtc.QsciScintilla_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn superPaintEngine(self: QsciScintilla) QPaintEngine {
        return .{ .ptr = qtc.QsciScintilla_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QsciScintilla, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QsciScintilla_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QsciScintilla_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QsciScintilla_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QKeyEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QsciScintilla_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QsciScintilla_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QEnterEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciScintilla_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciScintilla_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QsciScintilla_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QsciScintilla_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QMoveEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QsciScintilla_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QsciScintilla_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QCloseEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QsciScintilla_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QsciScintilla_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QTabletEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QsciScintilla_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QsciScintilla_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QActionEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QsciScintilla_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QsciScintilla_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QShowEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QsciScintilla_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QsciScintilla_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QHideEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: QsciScintilla, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QsciScintilla_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QsciScintilla `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: QsciScintilla, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QsciScintilla_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QsciScintilla_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QsciScintilla, param1: i32) i32 {
        return qtc.QsciScintilla_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QsciScintilla, param1: i32) i32 {
        return qtc.QsciScintilla_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QsciScintilla, callback: *const fn (QsciScintilla, i32) callconv(.c) i32) void {
        qtc.QsciScintilla_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QsciScintilla, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QsciScintilla_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QsciScintilla, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QsciScintilla_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QsciScintilla, callback: *const fn (QsciScintilla, QPainter) callconv(.c) void) void {
        qtc.QsciScintilla_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QsciScintilla, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QsciScintilla_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QsciScintilla, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QsciScintilla_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QsciScintilla, callback: *const fn (QsciScintilla, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QsciScintilla_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn sharedPainter(self: QsciScintilla) QPainter {
        return .{ .ptr = qtc.QsciScintilla_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn superSharedPainter(self: QsciScintilla) QPainter {
        return .{ .ptr = qtc.QsciScintilla_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QsciScintilla, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QsciScintilla_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciScintilla_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.QsciScintilla_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QTimerEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciScintilla_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QsciScintilla_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QChildEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciScintilla_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QsciScintilla, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QsciScintilla_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QsciScintilla, callback: *const fn (QsciScintilla, QEvent) callconv(.c) void) void {
        qtc.QsciScintilla_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QsciScintilla, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintilla_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QsciScintilla, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintilla_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QsciScintilla, callback: *const fn (QsciScintilla, QMetaMethod) callconv(.c) void) void {
        qtc.QsciScintilla_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QsciScintilla, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintilla_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QsciScintilla, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QsciScintilla_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QsciScintilla, callback: *const fn (QsciScintilla, QMetaMethod) callconv(.c) void) void {
        qtc.QsciScintilla_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setScrollBars` instead
    ///
    pub const SetScrollBars = setScrollBars;

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
    pub fn setScrollBars(self: QsciScintilla) void {
        qtc.QsciScintilla_SetScrollBars(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSetScrollBars` instead
    ///
    pub const SuperSetScrollBars = superSetScrollBars;

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
    pub fn superSetScrollBars(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperSetScrollBars(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSetScrollBars` instead
    ///
    pub const OnSetScrollBars = onSetScrollBars;

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
    pub fn onSetScrollBars(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnSetScrollBars(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `textAsBytes` instead
    ///
    pub const TextAsBytes = textAsBytes;

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
    /// ` _text: []const u8 `
    ///
    pub fn textAsBytes(self: QsciScintilla, allocator: std.mem.Allocator, _text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciScintilla_TextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciScintilla.textAsBytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superTextAsBytes` instead
    ///
    pub const SuperTextAsBytes = superTextAsBytes;

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
    /// ` _text: []const u8 `
    ///
    pub fn superTextAsBytes(self: QsciScintilla, allocator: std.mem.Allocator, _text: []const u8) []u8 {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        var _bytearray: qtc.libqt_string = qtc.QsciScintilla_SuperTextAsBytes(@ptrCast(self.ptr), text_str);
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QsciScintilla.textAsBytes: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onTextAsBytes` instead
    ///
    pub const OnTextAsBytes = onTextAsBytes;

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
    /// ` callback: *const fn (self: QsciScintilla, text: [*:0]const u8) callconv(.c) qtc.libqt_string `
    ///
    pub fn onTextAsBytes(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) qtc.libqt_string) void {
        qtc.QsciScintilla_OnTextAsBytes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `bytesAsText` instead
    ///
    pub const BytesAsText = bytesAsText;

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
    /// ` _bytes: [:0]const u8 `
    ///
    /// ` _size: i32 `
    ///
    pub fn bytesAsText(self: QsciScintilla, allocator: std.mem.Allocator, _bytes: [:0]const u8, _size: i32) []const u8 {
        const bytes_Cstring = _bytes.ptr;
        var _str = qtc.QsciScintilla_BytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.bytesAsText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `superBytesAsText` instead
    ///
    pub const SuperBytesAsText = superBytesAsText;

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
    /// ` _bytes: [:0]const u8 `
    ///
    /// ` _size: i32 `
    ///
    pub fn superBytesAsText(self: QsciScintilla, allocator: std.mem.Allocator, _bytes: [:0]const u8, _size: i32) []const u8 {
        const bytes_Cstring = _bytes.ptr;
        var _str = qtc.QsciScintilla_SuperBytesAsText(@ptrCast(self.ptr), bytes_Cstring, @bitCast(_size));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QsciScintilla.bytesAsText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `onBytesAsText` instead
    ///
    pub const OnBytesAsText = onBytesAsText;

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
    /// ` callback: *const fn (self: QsciScintilla, bytes: [*:0]const u8, size: i32) callconv(.c) [*:0]const u8 `
    ///
    pub fn onBytesAsText(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8, i32) callconv(.c) [*:0]const u8) void {
        qtc.QsciScintilla_OnBytesAsText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contextMenuNeeded` instead
    ///
    pub const ContextMenuNeeded = contextMenuNeeded;

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
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn contextMenuNeeded(self: QsciScintilla, _x: i32, _y: i32) bool {
        return qtc.QsciScintilla_ContextMenuNeeded(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `superContextMenuNeeded` instead
    ///
    pub const SuperContextMenuNeeded = superContextMenuNeeded;

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
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn superContextMenuNeeded(self: QsciScintilla, _x: i32, _y: i32) bool {
        return qtc.QsciScintilla_SuperContextMenuNeeded(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y));
    }

    /// ### DEPRECATED: Use `onContextMenuNeeded` instead
    ///
    pub const OnContextMenuNeeded = onContextMenuNeeded;

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
    pub fn onContextMenuNeeded(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) bool) void {
        qtc.QsciScintilla_OnContextMenuNeeded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    pub fn setViewportMargins(self: QsciScintilla, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QsciScintilla_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    pub fn superSetViewportMargins(self: QsciScintilla, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QsciScintilla_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn onSetViewportMargins(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QsciScintilla_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn viewportMargins(self: QsciScintilla) QMargins {
        return .{ .ptr = qtc.QsciScintilla_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn superViewportMargins(self: QsciScintilla) QMargins {
        return .{ .ptr = qtc.QsciScintilla_SuperViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportMargins(self: QsciScintilla, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QsciScintilla_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPainter `
    ///
    pub fn drawFrame(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QsciScintilla_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` param1: QPainter `
    ///
    pub fn superDrawFrame(self: QsciScintilla, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QsciScintilla_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, param1: QPainter) callconv(.c) void `
    ///
    pub fn onDrawFrame(self: QsciScintilla, callback: *const fn (QsciScintilla, QPainter) callconv(.c) void) void {
        qtc.QsciScintilla_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn updateMicroFocus(self: QsciScintilla) void {
        qtc.QsciScintilla_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn superUpdateMicroFocus(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn create(self: QsciScintilla) void {
        qtc.QsciScintilla_Create(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn superCreate(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn destroy(self: QsciScintilla) void {
        qtc.QsciScintilla_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn superDestroy(self: QsciScintilla) void {
        qtc.QsciScintilla_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: QsciScintilla, callback: *const fn () callconv(.c) void) void {
        qtc.QsciScintilla_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn focusNextChild(self: QsciScintilla) bool {
        return qtc.QsciScintilla_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn superFocusNextChild(self: QsciScintilla) bool {
        return qtc.QsciScintilla_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: QsciScintilla, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintilla_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn focusPreviousChild(self: QsciScintilla) bool {
        return qtc.QsciScintilla_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn superFocusPreviousChild(self: QsciScintilla) bool {
        return qtc.QsciScintilla_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: QsciScintilla, callback: *const fn () callconv(.c) bool) void {
        qtc.QsciScintilla_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn sender(self: QsciScintilla) QObject {
        return .{ .ptr = qtc.QsciScintilla_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla `
    ///
    pub fn superSender(self: QsciScintilla) QObject {
        return .{ .ptr = qtc.QsciScintilla_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QsciScintilla, callback: *const fn () callconv(.c) QObject) void {
        qtc.QsciScintilla_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    pub fn senderSignalIndex(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla `
    ///
    pub fn superSenderSignalIndex(self: QsciScintilla) i32 {
        return qtc.QsciScintilla_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QsciScintilla, callback: *const fn () callconv(.c) i32) void {
        qtc.QsciScintilla_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QsciScintilla, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciScintilla_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QsciScintilla, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QsciScintilla_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) i32) void {
        qtc.QsciScintilla_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QsciScintilla, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciScintilla_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintilla `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QsciScintilla, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QsciScintilla_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QsciScintilla, callback: *const fn (QsciScintilla, QMetaMethod) callconv(.c) bool) void {
        qtc.QsciScintilla_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QsciScintilla, metricA: i32, metricB: i32) f64 {
        return qtc.QsciScintilla_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QsciScintilla `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QsciScintilla, metricA: i32, metricB: i32) f64 {
        return qtc.QsciScintilla_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QsciScintilla`
    ///
    /// ` callback: *const fn (self: QsciScintilla, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QsciScintilla, callback: *const fn (QsciScintilla, i32, i32) callconv(.c) f64) void {
        qtc.QsciScintilla_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QsciScintilla `
    ///
    /// ` callback: *const fn (self: QsciScintilla, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QsciScintilla, callback: *const fn (QsciScintilla, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://www.riverbankcomputing.com/static/Docs/QScintilla/classQsciScintilla.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QsciScintilla `
    ///
    pub fn delete(self: QsciScintilla) void {
        qtc.QsciScintilla_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const QsciScintilla = enum {
        pub const AiMaintain: i32 = 1;
        pub const AiOpening: i32 = 2;
        pub const AiClosing: i32 = 4;
        pub const MoNone: i32 = 0;
        pub const MoSublineSelect: i32 = 1;
    };

    pub const AnnotationDisplay = enum {
        pub const AnnotationHidden: i32 = 0;
        pub const AnnotationStandard: i32 = 1;
        pub const AnnotationBoxed: i32 = 2;
        pub const AnnotationIndented: i32 = 3;
    };

    pub const AutoCompletionUseSingle = enum {
        pub const AcusNever: i32 = 0;
        pub const AcusExplicit: i32 = 1;
        pub const AcusAlways: i32 = 2;
    };

    pub const AutoCompletionSource = enum {
        pub const AcsNone: i32 = 0;
        pub const AcsAll: i32 = 1;
        pub const AcsDocument: i32 = 2;
        pub const AcsAPIs: i32 = 3;
    };

    pub const BraceMatch = enum {
        pub const NoBraceMatch: i32 = 0;
        pub const StrictBraceMatch: i32 = 1;
        pub const SloppyBraceMatch: i32 = 2;
    };

    pub const CallTipsPosition = enum {
        pub const CallTipsBelowText: i32 = 0;
        pub const CallTipsAboveText: i32 = 1;
    };

    pub const CallTipsStyle = enum {
        pub const CallTipsNone: i32 = 0;
        pub const CallTipsNoContext: i32 = 1;
        pub const CallTipsNoAutoCompletionContext: i32 = 2;
        pub const CallTipsContext: i32 = 3;
    };

    pub const EdgeMode = enum {
        pub const EdgeNone: i32 = 0;
        pub const EdgeLine: i32 = 1;
        pub const EdgeBackground: i32 = 2;
        pub const EdgeMultipleLines: i32 = 3;
    };

    pub const EolMode = enum {
        pub const EolWindows: i32 = 0;
        pub const EolUnix: i32 = 2;
        pub const EolMac: i32 = 1;
    };

    pub const FoldStyle = enum {
        pub const NoFoldStyle: i32 = 0;
        pub const PlainFoldStyle: i32 = 1;
        pub const CircledFoldStyle: i32 = 2;
        pub const BoxedFoldStyle: i32 = 3;
        pub const CircledTreeFoldStyle: i32 = 4;
        pub const BoxedTreeFoldStyle: i32 = 5;
    };

    pub const IndicatorStyle = enum {
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

    pub const MarginType = enum {
        pub const SymbolMargin: i32 = 0;
        pub const SymbolMarginDefaultForegroundColor: i32 = 3;
        pub const SymbolMarginDefaultBackgroundColor: i32 = 2;
        pub const NumberMargin: i32 = 1;
        pub const TextMargin: i32 = 4;
        pub const TextMarginRightJustified: i32 = 5;
        pub const SymbolMarginColor: i32 = 6;
    };

    pub const MarkerSymbol = enum {
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

    pub const TabDrawMode = enum {
        pub const TabLongArrow: i32 = 0;
        pub const TabStrikeOut: i32 = 1;
    };

    pub const WhitespaceVisibility = enum {
        pub const WsInvisible: i32 = 0;
        pub const WsVisible: i32 = 1;
        pub const WsVisibleAfterIndent: i32 = 2;
        pub const WsVisibleOnlyInIndent: i32 = 3;
    };

    pub const WrapMode = enum {
        pub const WrapNone: i32 = 0;
        pub const WrapWord: i32 = 1;
        pub const WrapCharacter: i32 = 2;
        pub const WrapWhitespace: i32 = 3;
    };

    pub const WrapVisualFlag = enum {
        pub const WrapFlagNone: i32 = 0;
        pub const WrapFlagByText: i32 = 1;
        pub const WrapFlagByBorder: i32 = 2;
        pub const WrapFlagInMargin: i32 = 3;
    };

    pub const WrapIndentMode = enum {
        pub const WrapIndentFixed: i32 = 0;
        pub const WrapIndentSame: i32 = 1;
        pub const WrapIndentIndented: i32 = 2;
        pub const WrapIndentDeeplyIndented: i32 = 3;
    };
};
