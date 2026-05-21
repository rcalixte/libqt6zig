const QtC = @import("qt6zig");
const qtc = @import("qt6c");
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
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMouseEvent = @import("libqt6").QMouseEvent;
const QMoveEvent = @import("libqt6").QMoveEvent;
const QObject = @import("libqt6").QObject;
const QPaintDevice = @import("libqt6").QPaintDevice;
const QPaintEngine = @import("libqt6").QPaintEngine;
const QPaintEvent = @import("libqt6").QPaintEvent;
const QPainter = @import("libqt6").QPainter;
const QPalette = @import("libqt6").QPalette;
const QPixmap = @import("libqt6").QPixmap;
const QPlainTextEdit = @import("libqt6").QPlainTextEdit;
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QRegularExpression = @import("libqt6").QRegularExpression;
const QResizeEvent = @import("libqt6").QResizeEvent;
const QScreen = @import("libqt6").QScreen;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");
const texteditfindbarbase_enums = @import("libtexteditfindbarbase.zig").enums;

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
pub const TextCustomEditor__PlainTextEditFindBar = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextCustomEditor__PlainTextEditFindBar,

    pub const _is_TextCustomEditor__PlainTextEditFindBar = {};
    pub const _is_TextCustomEditor__TextEditFindBarBase = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new TextCustomEditor::PlainTextEditFindBar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` view: QPlainTextEdit `
    ///
    pub fn New(view: anytype) TextCustomEditor__PlainTextEditFindBar {
        comptime _ = @TypeOf(view)._is_QPlainTextEdit;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_new(@ptrCast(view.ptr)) };
    }

    /// New2 constructs a new TextCustomEditor::PlainTextEditFindBar object.
    ///
    /// ## Parameter(s):
    ///
    /// ` view: QPlainTextEdit `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New2(view: anytype, parent: anytype) TextCustomEditor__PlainTextEditFindBar {
        comptime _ = @TypeOf(view)._is_QPlainTextEdit;
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_new2(@ptrCast(view.ptr), @ptrCast(parent.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn MetaObject(self: TextCustomEditor__PlainTextEditFindBar) QMetaObject {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperMetaObject(self: TextCustomEditor__PlainTextEditFindBar) QMetaObject {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextCustomEditor__PlainTextEditFindBar, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextCustomEditor__PlainTextEditFindBar_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextCustomEditor__PlainTextEditFindBar, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextCustomEditor__PlainTextEditFindBar, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextCustomEditor__PlainTextEditFindBar_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextCustomEditor__PlainTextEditFindBar, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ViewIsReadOnly(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_ViewIsReadOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnViewIsReadOnly(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnViewIsReadOnly(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperViewIsReadOnly` instead
    ///
    pub const QBaseViewIsReadOnly = SuperViewIsReadOnly;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperViewIsReadOnly(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperViewIsReadOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn DocumentIsEmpty(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_DocumentIsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDocumentIsEmpty(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnDocumentIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDocumentIsEmpty` instead
    ///
    pub const QBaseDocumentIsEmpty = SuperDocumentIsEmpty;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperDocumentIsEmpty(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperDocumentIsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` text: []const u8 `
    ///
    /// ` searchOptions: flag of texteditfindbarbase_enums.FindFlag `
    ///
    pub fn SearchInDocument(self: TextCustomEditor__PlainTextEditFindBar, text: []const u8, searchOptions: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.TextCustomEditor__PlainTextEditFindBar_SearchInDocument(@ptrCast(self.ptr), text_str, @bitCast(searchOptions));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, text: [*:0]const u8, searchOptions: flag of texteditfindbarbase_enums.FindFlag) callconv(.c) bool `
    ///
    pub fn OnSearchInDocument(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, [*:0]const u8, i32) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnSearchInDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSearchInDocument` instead
    ///
    pub const QBaseSearchInDocument = SuperSearchInDocument;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` text: []const u8 `
    ///
    /// ` searchOptions: flag of texteditfindbarbase_enums.FindFlag `
    ///
    pub fn SuperSearchInDocument(self: TextCustomEditor__PlainTextEditFindBar, text: []const u8, searchOptions: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperSearchInDocument(@ptrCast(self.ptr), text_str, @bitCast(searchOptions));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` regExp: QRegularExpression `
    ///
    /// ` searchOptions: flag of texteditfindbarbase_enums.FindFlag `
    ///
    pub fn SearchInDocument2(self: TextCustomEditor__PlainTextEditFindBar, regExp: anytype, searchOptions: i32) bool {
        comptime _ = @TypeOf(regExp)._is_QRegularExpression;
        return qtc.TextCustomEditor__PlainTextEditFindBar_SearchInDocument2(@ptrCast(self.ptr), @ptrCast(regExp.ptr), @bitCast(searchOptions));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, regExp: QRegularExpression, searchOptions: flag of texteditfindbarbase_enums.FindFlag) callconv(.c) bool `
    ///
    pub fn OnSearchInDocument2(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QRegularExpression, i32) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnSearchInDocument2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSearchInDocument2` instead
    ///
    pub const QBaseSearchInDocument2 = SuperSearchInDocument2;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` regExp: QRegularExpression `
    ///
    /// ` searchOptions: flag of texteditfindbarbase_enums.FindFlag `
    ///
    pub fn SuperSearchInDocument2(self: TextCustomEditor__PlainTextEditFindBar, regExp: anytype, searchOptions: i32) bool {
        comptime _ = @TypeOf(regExp)._is_QRegularExpression;
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperSearchInDocument2(@ptrCast(self.ptr), @ptrCast(regExp.ptr), @bitCast(searchOptions));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn AutoSearchMoveCursor(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_AutoSearchMoveCursor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAutoSearchMoveCursor(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnAutoSearchMoveCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAutoSearchMoveCursor` instead
    ///
    pub const QBaseAutoSearchMoveCursor = SuperAutoSearchMoveCursor;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperAutoSearchMoveCursor(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperAutoSearchMoveCursor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` backward: bool `
    ///
    /// ` isAutoSearch: bool `
    ///
    pub fn SlotSearchText(self: TextCustomEditor__PlainTextEditFindBar, backward: bool, isAutoSearch: bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_SlotSearchText(@ptrCast(self.ptr), backward, isAutoSearch);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, backward: bool, isAutoSearch: bool) callconv(.c) void `
    ///
    pub fn OnSlotSearchText(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, bool, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnSlotSearchText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotSearchText` instead
    ///
    pub const QBaseSlotSearchText = SuperSlotSearchText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` backward: bool `
    ///
    /// ` isAutoSearch: bool `
    ///
    pub fn SuperSlotSearchText(self: TextCustomEditor__PlainTextEditFindBar, backward: bool, isAutoSearch: bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperSlotSearchText(@ptrCast(self.ptr), backward, isAutoSearch);
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextCustomEditor__TextEditFindBarBase_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: TextCustomEditor__PlainTextEditFindBar, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.TextCustomEditor__TextEditFindBarBase_SetText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn FocusAndSetCursor(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__TextEditFindBarBase_FocusAndSetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ShowReplace(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__TextEditFindBarBase_ShowReplace(@ptrCast(self.ptr));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ShowFind(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__TextEditFindBarBase_ShowFind(@ptrCast(self.ptr));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` hide: bool `
    ///
    pub fn SetHideWhenClose(self: TextCustomEditor__PlainTextEditFindBar, hide: bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SetHideWhenClose(@ptrCast(self.ptr), hide);
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` message: []const u8 `
    ///
    pub fn DisplayMessageIndicator(self: TextCustomEditor__PlainTextEditFindBar, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.TextCustomEditor__TextEditFindBarBase_DisplayMessageIndicator(@ptrCast(self.ptr), message_str);
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnDisplayMessageIndicator(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, [*:0]const u8) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_Connect_DisplayMessageIndicator(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn HideFindBar(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__TextEditFindBarBase_HideFindBar(@ptrCast(self.ptr));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar) callconv(.c) void `
    ///
    pub fn OnHideFindBar(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_Connect_HideFindBar(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn FindNext(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__TextEditFindBarBase_FindNext(@ptrCast(self.ptr));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn FindPrev(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__TextEditFindBarBase_FindPrev(@ptrCast(self.ptr));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` str: []const u8 `
    ///
    pub fn AutoSearch(self: TextCustomEditor__PlainTextEditFindBar, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.TextCustomEditor__TextEditFindBarBase_AutoSearch(@ptrCast(self.ptr), str_str);
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn CloseBar(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__TextEditFindBarBase_CloseBar(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn WinId(self: TextCustomEditor__PlainTextEditFindBar) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn CreateWinId(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn InternalWinId(self: TextCustomEditor__PlainTextEditFindBar) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn EffectiveWinId(self: TextCustomEditor__PlainTextEditFindBar) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Style(self: TextCustomEditor__PlainTextEditFindBar) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: TextCustomEditor__PlainTextEditFindBar, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsTopLevel(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsWindow(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsModal(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: TextCustomEditor__PlainTextEditFindBar, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsEnabled(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: TextCustomEditor__PlainTextEditFindBar, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: TextCustomEditor__PlainTextEditFindBar, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: TextCustomEditor__PlainTextEditFindBar, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn FrameGeometry(self: TextCustomEditor__PlainTextEditFindBar) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Geometry(self: TextCustomEditor__PlainTextEditFindBar) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn NormalGeometry(self: TextCustomEditor__PlainTextEditFindBar) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn X(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Y(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Pos(self: TextCustomEditor__PlainTextEditFindBar) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn FrameSize(self: TextCustomEditor__PlainTextEditFindBar) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Size(self: TextCustomEditor__PlainTextEditFindBar) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Width(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Height(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Rect(self: TextCustomEditor__PlainTextEditFindBar) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ChildrenRect(self: TextCustomEditor__PlainTextEditFindBar) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ChildrenRegion(self: TextCustomEditor__PlainTextEditFindBar) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn MinimumSize(self: TextCustomEditor__PlainTextEditFindBar) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn MaximumSize(self: TextCustomEditor__PlainTextEditFindBar) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn MinimumWidth(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn MinimumHeight(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn MaximumWidth(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn MaximumHeight(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: TextCustomEditor__PlainTextEditFindBar, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: TextCustomEditor__PlainTextEditFindBar, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: TextCustomEditor__PlainTextEditFindBar, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: TextCustomEditor__PlainTextEditFindBar, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: TextCustomEditor__PlainTextEditFindBar, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: TextCustomEditor__PlainTextEditFindBar, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: TextCustomEditor__PlainTextEditFindBar, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: TextCustomEditor__PlainTextEditFindBar, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SizeIncrement(self: TextCustomEditor__PlainTextEditFindBar) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: TextCustomEditor__PlainTextEditFindBar, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: TextCustomEditor__PlainTextEditFindBar, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn BaseSize(self: TextCustomEditor__PlainTextEditFindBar) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: TextCustomEditor__PlainTextEditFindBar, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: TextCustomEditor__PlainTextEditFindBar, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: TextCustomEditor__PlainTextEditFindBar, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: TextCustomEditor__PlainTextEditFindBar, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: TextCustomEditor__PlainTextEditFindBar, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: TextCustomEditor__PlainTextEditFindBar, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Window(self: TextCustomEditor__PlainTextEditFindBar) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn NativeParentWidget(self: TextCustomEditor__PlainTextEditFindBar) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn TopLevelWidget(self: TextCustomEditor__PlainTextEditFindBar) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Palette(self: TextCustomEditor__PlainTextEditFindBar) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: TextCustomEditor__PlainTextEditFindBar, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: TextCustomEditor__PlainTextEditFindBar, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: TextCustomEditor__PlainTextEditFindBar, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Font(self: TextCustomEditor__PlainTextEditFindBar) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: TextCustomEditor__PlainTextEditFindBar, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn FontMetrics(self: TextCustomEditor__PlainTextEditFindBar) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn FontInfo(self: TextCustomEditor__PlainTextEditFindBar) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Cursor(self: TextCustomEditor__PlainTextEditFindBar) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: TextCustomEditor__PlainTextEditFindBar, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn UnsetCursor(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: TextCustomEditor__PlainTextEditFindBar, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn HasMouseTracking(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn UnderMouse(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: TextCustomEditor__PlainTextEditFindBar, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn HasTabletTracking(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: TextCustomEditor__PlainTextEditFindBar, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: TextCustomEditor__PlainTextEditFindBar, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Mask(self: TextCustomEditor__PlainTextEditFindBar) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ClearMask(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: TextCustomEditor__PlainTextEditFindBar, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: TextCustomEditor__PlainTextEditFindBar, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Grab(self: TextCustomEditor__PlainTextEditFindBar) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn GraphicsEffect(self: TextCustomEditor__PlainTextEditFindBar) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: TextCustomEditor__PlainTextEditFindBar, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: TextCustomEditor__PlainTextEditFindBar, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: TextCustomEditor__PlainTextEditFindBar, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: TextCustomEditor__PlainTextEditFindBar, windowTitle: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: TextCustomEditor__PlainTextEditFindBar, styleSheet: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: TextCustomEditor__PlainTextEditFindBar, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn WindowIcon(self: TextCustomEditor__PlainTextEditFindBar) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: TextCustomEditor__PlainTextEditFindBar, windowIconText: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: TextCustomEditor__PlainTextEditFindBar, windowRole: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: TextCustomEditor__PlainTextEditFindBar, filePath: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: TextCustomEditor__PlainTextEditFindBar, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn WindowOpacity(self: TextCustomEditor__PlainTextEditFindBar) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsWindowModified(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: TextCustomEditor__PlainTextEditFindBar, toolTip: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: TextCustomEditor__PlainTextEditFindBar, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ToolTipDuration(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: TextCustomEditor__PlainTextEditFindBar, statusTip: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: TextCustomEditor__PlainTextEditFindBar, whatsThis: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: TextCustomEditor__PlainTextEditFindBar, name: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: TextCustomEditor__PlainTextEditFindBar, description: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: TextCustomEditor__PlainTextEditFindBar, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn UnsetLayoutDirection(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: TextCustomEditor__PlainTextEditFindBar, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Locale(self: TextCustomEditor__PlainTextEditFindBar) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn UnsetLocale(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsRightToLeft(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsLeftToRight(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SetFocus(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsActiveWindow(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ActivateWindow(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ClearFocus(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: TextCustomEditor__PlainTextEditFindBar, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: TextCustomEditor__PlainTextEditFindBar, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn HasFocus(self: TextCustomEditor__PlainTextEditFindBar) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: TextCustomEditor__PlainTextEditFindBar, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn FocusProxy(self: TextCustomEditor__PlainTextEditFindBar) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: TextCustomEditor__PlainTextEditFindBar, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn GrabMouse(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ReleaseMouse(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn GrabKeyboard(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ReleaseKeyboard(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: TextCustomEditor__PlainTextEditFindBar, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: TextCustomEditor__PlainTextEditFindBar, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: TextCustomEditor__PlainTextEditFindBar, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: TextCustomEditor__PlainTextEditFindBar, id: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn UpdatesEnabled(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: TextCustomEditor__PlainTextEditFindBar, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn GraphicsProxyWidget(self: TextCustomEditor__PlainTextEditFindBar) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Update(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Repaint(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: TextCustomEditor__PlainTextEditFindBar, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: TextCustomEditor__PlainTextEditFindBar, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: TextCustomEditor__PlainTextEditFindBar, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Show(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Hide(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ShowMinimized(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ShowMaximized(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ShowFullScreen(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ShowNormal(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Close(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Raise(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Lower(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: TextCustomEditor__PlainTextEditFindBar, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: TextCustomEditor__PlainTextEditFindBar, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: TextCustomEditor__PlainTextEditFindBar, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: TextCustomEditor__PlainTextEditFindBar, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("textcustomeditor__plaintexteditfindbar.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: TextCustomEditor__PlainTextEditFindBar, geometry: []u8) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn AdjustSize(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsVisible(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsHidden(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsMinimized(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsMaximized(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsFullScreen(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: TextCustomEditor__PlainTextEditFindBar, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: TextCustomEditor__PlainTextEditFindBar, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SizePolicy(self: TextCustomEditor__PlainTextEditFindBar) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: TextCustomEditor__PlainTextEditFindBar, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: TextCustomEditor__PlainTextEditFindBar, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn VisibleRegion(self: TextCustomEditor__PlainTextEditFindBar) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: TextCustomEditor__PlainTextEditFindBar, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: TextCustomEditor__PlainTextEditFindBar, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ContentsMargins(self: TextCustomEditor__PlainTextEditFindBar) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ContentsRect(self: TextCustomEditor__PlainTextEditFindBar) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Layout(self: TextCustomEditor__PlainTextEditFindBar) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: TextCustomEditor__PlainTextEditFindBar, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn UpdateGeometry(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: TextCustomEditor__PlainTextEditFindBar, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: TextCustomEditor__PlainTextEditFindBar, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: TextCustomEditor__PlainTextEditFindBar, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: TextCustomEditor__PlainTextEditFindBar, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn FocusWidget(self: TextCustomEditor__PlainTextEditFindBar) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn NextInFocusChain(self: TextCustomEditor__PlainTextEditFindBar) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn PreviousInFocusChain(self: TextCustomEditor__PlainTextEditFindBar) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn AcceptDrops(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: TextCustomEditor__PlainTextEditFindBar, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: TextCustomEditor__PlainTextEditFindBar, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: TextCustomEditor__PlainTextEditFindBar, actions: []QAction) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: TextCustomEditor__PlainTextEditFindBar, before: anytype, actions: []QAction) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: TextCustomEditor__PlainTextEditFindBar, before: anytype, action: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: TextCustomEditor__PlainTextEditFindBar, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("textcustomeditor__plaintexteditfindbar.Actions: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: TextCustomEditor__PlainTextEditFindBar, text: []const u8) QAction {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: TextCustomEditor__PlainTextEditFindBar, icon: anytype, text: []const u8) QAction {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: TextCustomEditor__PlainTextEditFindBar, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: TextCustomEditor__PlainTextEditFindBar, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ParentWidget(self: TextCustomEditor__PlainTextEditFindBar) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: TextCustomEditor__PlainTextEditFindBar, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: TextCustomEditor__PlainTextEditFindBar, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: TextCustomEditor__PlainTextEditFindBar, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: TextCustomEditor__PlainTextEditFindBar) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: TextCustomEditor__PlainTextEditFindBar, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: TextCustomEditor__PlainTextEditFindBar, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: TextCustomEditor__PlainTextEditFindBar, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: TextCustomEditor__PlainTextEditFindBar, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: TextCustomEditor__PlainTextEditFindBar, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn EnsurePolished(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: TextCustomEditor__PlainTextEditFindBar, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn AutoFillBackground(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: TextCustomEditor__PlainTextEditFindBar, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn BackingStore(self: TextCustomEditor__PlainTextEditFindBar) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn WindowHandle(self: TextCustomEditor__PlainTextEditFindBar) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Screen(self: TextCustomEditor__PlainTextEditFindBar) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: TextCustomEditor__PlainTextEditFindBar, screen: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: TextCustomEditor__PlainTextEditFindBar, title: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: TextCustomEditor__PlainTextEditFindBar, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: TextCustomEditor__PlainTextEditFindBar, iconText: []const u8) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: TextCustomEditor__PlainTextEditFindBar, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: TextCustomEditor__PlainTextEditFindBar, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: TextCustomEditor__PlainTextEditFindBar, target: anytype, targetOffset: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: TextCustomEditor__PlainTextEditFindBar, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: TextCustomEditor__PlainTextEditFindBar, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: TextCustomEditor__PlainTextEditFindBar, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: TextCustomEditor__PlainTextEditFindBar, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: TextCustomEditor__PlainTextEditFindBar, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: TextCustomEditor__PlainTextEditFindBar, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: TextCustomEditor__PlainTextEditFindBar, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: TextCustomEditor__PlainTextEditFindBar, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: TextCustomEditor__PlainTextEditFindBar, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: TextCustomEditor__PlainTextEditFindBar, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: TextCustomEditor__PlainTextEditFindBar, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: TextCustomEditor__PlainTextEditFindBar, param1: i32, on: bool) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__plaintexteditfindbar.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextCustomEditor__PlainTextEditFindBar, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsWidgetType(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsWindowType(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn IsQuickItemType(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SignalsBlocked(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextCustomEditor__PlainTextEditFindBar, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Thread(self: TextCustomEditor__PlainTextEditFindBar) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextCustomEditor__PlainTextEditFindBar, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextCustomEditor__PlainTextEditFindBar, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextCustomEditor__PlainTextEditFindBar, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextCustomEditor__PlainTextEditFindBar, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextCustomEditor__PlainTextEditFindBar, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("textcustomeditor__plaintexteditfindbar.Children: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextCustomEditor__PlainTextEditFindBar, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextCustomEditor__PlainTextEditFindBar, obj: anytype) void {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextCustomEditor__PlainTextEditFindBar, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Disconnect3(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextCustomEditor__PlainTextEditFindBar, receiver: anytype) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn DumpObjectTree(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn DumpObjectInfo(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextCustomEditor__PlainTextEditFindBar, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextCustomEditor__PlainTextEditFindBar, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextCustomEditor__PlainTextEditFindBar, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("textcustomeditor__plaintexteditfindbar.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textcustomeditor__plaintexteditfindbar.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn BindingStorage(self: TextCustomEditor__PlainTextEditFindBar) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn BindingStorage2(self: TextCustomEditor__PlainTextEditFindBar) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Destroyed(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Parent(self: TextCustomEditor__PlainTextEditFindBar) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextCustomEditor__PlainTextEditFindBar, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn DeleteLater(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextCustomEditor__PlainTextEditFindBar, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextCustomEditor__PlainTextEditFindBar, time: i64, timerType: i32) i32 {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextCustomEditor__PlainTextEditFindBar, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextCustomEditor__PlainTextEditFindBar, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextCustomEditor__PlainTextEditFindBar, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextCustomEditor__PlainTextEditFindBar, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextCustomEditor__PlainTextEditFindBar, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn PaintingActive(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn WidthMM(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn HeightMM(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn LogicalDpiX(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn LogicalDpiY(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn PhysicalDpiX(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn PhysicalDpiY(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn DevicePixelRatio(self: TextCustomEditor__PlainTextEditFindBar) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn DevicePixelRatioF(self: TextCustomEditor__PlainTextEditFindBar) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ColorCount(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Depth(self: TextCustomEditor__PlainTextEditFindBar) i32 {
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

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: TextCustomEditor__PlainTextEditFindBar, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextEditFindBar_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: TextCustomEditor__PlainTextEditFindBar, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn DevType(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.TextCustomEditor__PlainTextEditFindBar_DevType(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperDevType(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: TextCustomEditor__PlainTextEditFindBar, visible: bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: TextCustomEditor__PlainTextEditFindBar, visible: bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SizeHint(self: TextCustomEditor__PlainTextEditFindBar) QSize {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperSizeHint(self: TextCustomEditor__PlainTextEditFindBar) QSize {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnSizeHint(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn MinimumSizeHint(self: TextCustomEditor__PlainTextEditFindBar) QSize {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperMinimumSizeHint(self: TextCustomEditor__PlainTextEditFindBar) QSize {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnMinimumSizeHint(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: TextCustomEditor__PlainTextEditFindBar, param1: i32) i32 {
        return qtc.TextCustomEditor__PlainTextEditFindBar_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: TextCustomEditor__PlainTextEditFindBar, param1: i32) i32 {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, i32) callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn HasHeightForWidth(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperHasHeightForWidth(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn PaintEngine(self: TextCustomEditor__PlainTextEditFindBar) QPaintEngine {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperPaintEngine(self: TextCustomEditor__PlainTextEditFindBar) QPaintEngine {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QWheelEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QKeyEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QKeyEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QFocusEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QFocusEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QEnterEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QPaintEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QMoveEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QResizeEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QCloseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QContextMenuEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QTabletEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QActionEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QDragEnterEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QDragMoveEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QDragLeaveEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QDropEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QShowEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QHideEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: TextCustomEditor__PlainTextEditFindBar, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextCustomEditor__PlainTextEditFindBar_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: TextCustomEditor__PlainTextEditFindBar, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: TextCustomEditor__PlainTextEditFindBar, param1: i32) i32 {
        return qtc.TextCustomEditor__PlainTextEditFindBar_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: TextCustomEditor__PlainTextEditFindBar, param1: i32) i32 {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, i32) callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: TextCustomEditor__PlainTextEditFindBar, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextCustomEditor__PlainTextEditFindBar_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: TextCustomEditor__PlainTextEditFindBar, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QPainter) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: TextCustomEditor__PlainTextEditFindBar, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: TextCustomEditor__PlainTextEditFindBar, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QPoint) callconv(.c) QPaintDevice) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SharedPainter(self: TextCustomEditor__PlainTextEditFindBar) QPainter {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperSharedPainter(self: TextCustomEditor__PlainTextEditFindBar) QPainter {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) QPainter) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: TextCustomEditor__PlainTextEditFindBar, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QInputMethodEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: TextCustomEditor__PlainTextEditFindBar, param1: i32) QVariant {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: TextCustomEditor__PlainTextEditFindBar, param1: i32) QVariant {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn OnInputMethodQuery(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, i32) callconv(.c) QVariant) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: TextCustomEditor__PlainTextEditFindBar, next: bool) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: TextCustomEditor__PlainTextEditFindBar, next: bool) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, bool) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: TextCustomEditor__PlainTextEditFindBar, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextEditFindBar_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: TextCustomEditor__PlainTextEditFindBar, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QTimerEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QChildEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextCustomEditor__PlainTextEditFindBar, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextCustomEditor__PlainTextEditFindBar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__PlainTextEditFindBar_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextCustomEditor__PlainTextEditFindBar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QMetaMethod) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextCustomEditor__PlainTextEditFindBar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__PlainTextEditFindBar_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextCustomEditor__PlainTextEditFindBar, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QMetaMethod) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn ClearSelections(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_ClearSelections(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperClearSelections` instead
    ///
    pub const QBaseClearSelections = SuperClearSelections;

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperClearSelections(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperClearSelections(@ptrCast(self.ptr));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClearSelections(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnClearSelections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` backward: bool `
    ///
    /// ` isAutoSearch: bool `
    ///
    pub fn SearchText(self: TextCustomEditor__PlainTextEditFindBar, backward: bool, isAutoSearch: bool) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SearchText(@ptrCast(self.ptr), backward, isAutoSearch);
    }

    /// ### DEPRECATED: Use `SuperSearchText` instead
    ///
    pub const QBaseSearchText = SuperSearchText;

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` backward: bool `
    ///
    /// ` isAutoSearch: bool `
    ///
    pub fn SuperSearchText(self: TextCustomEditor__PlainTextEditFindBar, backward: bool, isAutoSearch: bool) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperSearchText(@ptrCast(self.ptr), backward, isAutoSearch);
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, backward: bool, isAutoSearch: bool) callconv(.c) bool `
    ///
    pub fn OnSearchText(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, bool, bool) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnSearchText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` match: bool `
    ///
    pub fn SetFoundMatch(self: TextCustomEditor__PlainTextEditFindBar, match: bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_SetFoundMatch(@ptrCast(self.ptr), match);
    }

    /// ### DEPRECATED: Use `SuperSetFoundMatch` instead
    ///
    pub const QBaseSetFoundMatch = SuperSetFoundMatch;

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` match: bool `
    ///
    pub fn SuperSetFoundMatch(self: TextCustomEditor__PlainTextEditFindBar, match: bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperSetFoundMatch(@ptrCast(self.ptr), match);
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, match: bool) callconv(.c) void `
    ///
    pub fn OnSetFoundMatch(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnSetFoundMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` backward: bool `
    ///
    /// ` isAutoSearch: bool `
    ///
    /// ` found: bool `
    ///
    pub fn MessageInfo(self: TextCustomEditor__PlainTextEditFindBar, backward: bool, isAutoSearch: bool, found: bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_MessageInfo(@ptrCast(self.ptr), backward, isAutoSearch, found);
    }

    /// ### DEPRECATED: Use `SuperMessageInfo` instead
    ///
    pub const QBaseMessageInfo = SuperMessageInfo;

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` backward: bool `
    ///
    /// ` isAutoSearch: bool `
    ///
    /// ` found: bool `
    ///
    pub fn SuperMessageInfo(self: TextCustomEditor__PlainTextEditFindBar, backward: bool, isAutoSearch: bool, found: bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperMessageInfo(@ptrCast(self.ptr), backward, isAutoSearch, found);
    }

    /// Inherited from TextCustomEditor::TextEditFindBarBase
    ///
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, backward: bool, isAutoSearch: bool, found: bool) callconv(.c) void `
    ///
    pub fn OnMessageInfo(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, bool, bool, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnMessageInfo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn UpdateMicroFocus(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperUpdateMicroFocus(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Create(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_Create(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperCreate(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Destroy(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_Destroy(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperDestroy(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn FocusNextChild(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperFocusNextChild(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn FocusPreviousChild(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperFocusPreviousChild(self: TextCustomEditor__PlainTextEditFindBar) bool {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Sender(self: TextCustomEditor__PlainTextEditFindBar) QObject {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperSender(self: TextCustomEditor__PlainTextEditFindBar) QObject {
        return .{ .ptr = qtc.TextCustomEditor__PlainTextEditFindBar_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SenderSignalIndex(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn SuperSenderSignalIndex(self: TextCustomEditor__PlainTextEditFindBar) i32 {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn () callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextCustomEditor__PlainTextEditFindBar, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextCustomEditor__PlainTextEditFindBar_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextCustomEditor__PlainTextEditFindBar, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextCustomEditor__PlainTextEditFindBar, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextCustomEditor__PlainTextEditFindBar_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextCustomEditor__PlainTextEditFindBar, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, QMetaMethod) callconv(.c) bool) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: TextCustomEditor__PlainTextEditFindBar, metricA: i32, metricB: i32) f64 {
        return qtc.TextCustomEditor__PlainTextEditFindBar_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: TextCustomEditor__PlainTextEditFindBar, metricA: i32, metricB: i32) f64 {
        return qtc.TextCustomEditor__PlainTextEditFindBar_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, i32, i32) callconv(.c) f64) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__PlainTextEditFindBar, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextCustomEditor__PlainTextEditFindBar, callback: *const fn (TextCustomEditor__PlainTextEditFindBar, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1PlainTextEditFindBar.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextCustomEditor__PlainTextEditFindBar `
    ///
    pub fn Delete(self: TextCustomEditor__PlainTextEditFindBar) void {
        qtc.TextCustomEditor__PlainTextEditFindBar_Delete(@ptrCast(self.ptr));
    }
};
