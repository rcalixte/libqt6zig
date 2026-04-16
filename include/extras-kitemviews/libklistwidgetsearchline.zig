const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QCompleter = @import("libqt6").QCompleter;
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
const QListWidget = @import("libqt6").QListWidget;
const QListWidgetItem = @import("libqt6").QListWidgetItem;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMenu = @import("libqt6").QMenu;
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
const QPoint = @import("libqt6").QPoint;
const QPointF = @import("libqt6").QPointF;
const QRect = @import("libqt6").QRect;
const QRegion = @import("libqt6").QRegion;
const QResizeEvent = @import("libqt6").QResizeEvent;
const QScreen = @import("libqt6").QScreen;
const QShowEvent = @import("libqt6").QShowEvent;
const QSize = @import("libqt6").QSize;
const QSizePolicy = @import("libqt6").QSizePolicy;
const QStyle = @import("libqt6").QStyle;
const QStyleOptionFrame = @import("libqt6").QStyleOptionFrame;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QValidator = @import("libqt6").QValidator;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qlineedit_enums = @import("../libqlineedit.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("../libqpaintdevice.zig").enums;
const qpalette_enums = @import("../libqpalette.zig").enums;
const qsizepolicy_enums = @import("../libqsizepolicy.zig").enums;
const qwidget_enums = @import("../libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html)
pub const KListWidgetSearchLine = extern struct {
    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KListWidgetSearchLine,

    pub const _is_KListWidgetSearchLine = {};
    pub const _is_QLineEdit = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new KListWidgetSearchLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) KListWidgetSearchLine {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.KListWidgetSearchLine_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new KListWidgetSearchLine object.
    ///
    pub fn New2() KListWidgetSearchLine {
        return .{ .ptr = qtc.KListWidgetSearchLine_new2() };
    }

    /// New3 constructs a new KListWidgetSearchLine object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` listWidget: QListWidget `
    ///
    pub fn New3(parent: anytype, listWidget: anytype) KListWidgetSearchLine {
        comptime _ = @TypeOf(parent)._is_QWidget;
        comptime _ = @TypeOf(listWidget)._is_QListWidget;
        return .{ .ptr = qtc.KListWidgetSearchLine_new3(@ptrCast(parent.ptr), @ptrCast(listWidget.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn MetaObject(self: KListWidgetSearchLine) QMetaObject {
        return .{ .ptr = qtc.KListWidgetSearchLine_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.KListWidgetSearchLine_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperMetaObject(self: KListWidgetSearchLine) QMetaObject {
        return .{ .ptr = qtc.KListWidgetSearchLine_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: KListWidgetSearchLine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KListWidgetSearchLine_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KListWidgetSearchLine_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: KListWidgetSearchLine, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KListWidgetSearchLine_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: KListWidgetSearchLine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KListWidgetSearchLine_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KListWidgetSearchLine_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: KListWidgetSearchLine, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KListWidgetSearchLine_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#caseSensitive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CaseSensitivity `
    ///
    pub fn CaseSensitive(self: KListWidgetSearchLine) i32 {
        return qtc.KListWidgetSearchLine_CaseSensitive(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#listWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ListWidget(self: KListWidgetSearchLine) QListWidget {
        return .{ .ptr = qtc.KListWidgetSearchLine_ListWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#updateSearch)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` s: []const u8 `
    ///
    pub fn UpdateSearch(self: KListWidgetSearchLine, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.KListWidgetSearchLine_UpdateSearch(@ptrCast(self.ptr), s_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#updateSearch)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, s: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnUpdateSearch(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnUpdateSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperUpdateSearch` instead
    ///
    pub const QBaseUpdateSearch = SuperUpdateSearch;

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#updateSearch)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` s: []const u8 `
    ///
    pub fn SuperUpdateSearch(self: KListWidgetSearchLine, s: []const u8) void {
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        qtc.KListWidgetSearchLine_SuperUpdateSearch(@ptrCast(self.ptr), s_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#setCaseSensitivity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` cs: qnamespace_enums.CaseSensitivity `
    ///
    pub fn SetCaseSensitivity(self: KListWidgetSearchLine, cs: i32) void {
        qtc.KListWidgetSearchLine_SetCaseSensitivity(@ptrCast(self.ptr), @bitCast(cs));
    }

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#setListWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` lv: QListWidget `
    ///
    pub fn SetListWidget(self: KListWidgetSearchLine, lv: anytype) void {
        comptime _ = @TypeOf(lv)._is_QListWidget;
        qtc.KListWidgetSearchLine_SetListWidget(@ptrCast(self.ptr), @ptrCast(lv.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Clear(self: KListWidgetSearchLine) void {
        qtc.KListWidgetSearchLine_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#itemMatches)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` item: QListWidgetItem `
    ///
    /// ` s: []const u8 `
    ///
    pub fn ItemMatches(self: KListWidgetSearchLine, item: anytype, s: []const u8) bool {
        comptime _ = @TypeOf(item)._is_QListWidgetItem;
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.KListWidgetSearchLine_ItemMatches(@ptrCast(self.ptr), @ptrCast(item.ptr), s_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#itemMatches)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, item: QListWidgetItem, s: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnItemMatches(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QListWidgetItem, [*:0]const u8) callconv(.c) bool) void {
        qtc.KListWidgetSearchLine_OnItemMatches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperItemMatches` instead
    ///
    pub const QBaseItemMatches = SuperItemMatches;

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#itemMatches)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` item: QListWidgetItem `
    ///
    /// ` s: []const u8 `
    ///
    pub fn SuperItemMatches(self: KListWidgetSearchLine, item: anytype, s: []const u8) bool {
        comptime _ = @TypeOf(item)._is_QListWidgetItem;
        const s_str = qtc.libqt_string{
            .len = s.len,
            .data = s.ptr,
        };
        return qtc.KListWidgetSearchLine_SuperItemMatches(@ptrCast(self.ptr), @ptrCast(item.ptr), s_str);
    }

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QEvent `
    ///
    pub fn Event(self: KListWidgetSearchLine, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KListWidgetSearchLine_Event(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QEvent) callconv(.c) bool) void {
        qtc.KListWidgetSearchLine_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEvent(self: KListWidgetSearchLine, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KListWidgetSearchLine_SuperEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#displayText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DisplayText(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_DisplayText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.DisplayText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#placeholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PlaceholderText(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_PlaceholderText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.PlaceholderText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setPlaceholderText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` placeholderText: []const u8 `
    ///
    pub fn SetPlaceholderText(self: KListWidgetSearchLine, placeholderText: []const u8) void {
        const placeholderText_str = qtc.libqt_string{
            .len = placeholderText.len,
            .data = placeholderText.ptr,
        };
        qtc.QLineEdit_SetPlaceholderText(@ptrCast(self.ptr), placeholderText_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#maxLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn MaxLength(self: KListWidgetSearchLine) i32 {
        return qtc.QLineEdit_MaxLength(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setMaxLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` maxLength: i32 `
    ///
    pub fn SetMaxLength(self: KListWidgetSearchLine, maxLength: i32) void {
        qtc.QLineEdit_SetMaxLength(@ptrCast(self.ptr), @bitCast(maxLength));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` frame: bool `
    ///
    pub fn SetFrame(self: KListWidgetSearchLine, frame: bool) void {
        qtc.QLineEdit_SetFrame(@ptrCast(self.ptr), frame);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasFrame)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn HasFrame(self: KListWidgetSearchLine) bool {
        return qtc.QLineEdit_HasFrame(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setClearButtonEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` enable: bool `
    ///
    pub fn SetClearButtonEnabled(self: KListWidgetSearchLine, enable: bool) void {
        qtc.QLineEdit_SetClearButtonEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isClearButtonEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsClearButtonEnabled(self: KListWidgetSearchLine) bool {
        return qtc.QLineEdit_IsClearButtonEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#echoMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qlineedit_enums.EchoMode `
    ///
    pub fn EchoMode(self: KListWidgetSearchLine) i32 {
        return qtc.QLineEdit_EchoMode(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setEchoMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` echoMode: qlineedit_enums.EchoMode `
    ///
    pub fn SetEchoMode(self: KListWidgetSearchLine, echoMode: i32) void {
        qtc.QLineEdit_SetEchoMode(@ptrCast(self.ptr), @bitCast(echoMode));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsReadOnly(self: KListWidgetSearchLine) bool {
        return qtc.QLineEdit_IsReadOnly(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setReadOnly)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` readOnly: bool `
    ///
    pub fn SetReadOnly(self: KListWidgetSearchLine, readOnly: bool) void {
        qtc.QLineEdit_SetReadOnly(@ptrCast(self.ptr), readOnly);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setValidator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` validator: QValidator `
    ///
    pub fn SetValidator(self: KListWidgetSearchLine, validator: anytype) void {
        comptime _ = @TypeOf(validator)._is_QValidator;
        qtc.QLineEdit_SetValidator(@ptrCast(self.ptr), @ptrCast(validator.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#validator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Validator(self: KListWidgetSearchLine) QValidator {
        return .{ .ptr = qtc.QLineEdit_Validator(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCompleter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` completer: QCompleter `
    ///
    pub fn SetCompleter(self: KListWidgetSearchLine, completer: anytype) void {
        comptime _ = @TypeOf(completer)._is_QCompleter;
        qtc.QLineEdit_SetCompleter(@ptrCast(self.ptr), @ptrCast(completer.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#completer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Completer(self: KListWidgetSearchLine) QCompleter {
        return .{ .ptr = qtc.QLineEdit_Completer(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn CursorPosition(self: KListWidgetSearchLine) i32 {
        return qtc.QLineEdit_CursorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` cursorPosition: i32 `
    ///
    pub fn SetCursorPosition(self: KListWidgetSearchLine, cursorPosition: i32) void {
        qtc.QLineEdit_SetCursorPosition(@ptrCast(self.ptr), @bitCast(cursorPosition));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CursorPositionAt(self: KListWidgetSearchLine, pos: anytype) i32 {
        comptime _ = @TypeOf(pos)._is_QPoint;
        return qtc.QLineEdit_CursorPositionAt(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` flag: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetAlignment(self: KListWidgetSearchLine, flag: i32) void {
        qtc.QLineEdit_SetAlignment(@ptrCast(self.ptr), @bitCast(flag));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#alignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn Alignment(self: KListWidgetSearchLine) i32 {
        return qtc.QLineEdit_Alignment(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    pub fn CursorForward(self: KListWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_CursorForward(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    pub fn CursorBackward(self: KListWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_CursorBackward(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorWordForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    pub fn CursorWordForward(self: KListWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_CursorWordForward(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorWordBackward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    pub fn CursorWordBackward(self: KListWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_CursorWordBackward(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#backspace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Backspace(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_Backspace(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#del)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Del(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_Del(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#home)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    pub fn Home(self: KListWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_Home(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#end)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    pub fn End(self: KListWidgetSearchLine, mark: bool) void {
        qtc.QLineEdit_End(@ptrCast(self.ptr), mark);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsModified(self: KListWidgetSearchLine) bool {
        return qtc.QLineEdit_IsModified(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` modified: bool `
    ///
    pub fn SetModified(self: KListWidgetSearchLine, modified: bool) void {
        qtc.QLineEdit_SetModified(@ptrCast(self.ptr), modified);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: i32 `
    ///
    pub fn SetSelection(self: KListWidgetSearchLine, param1: i32, param2: i32) void {
        qtc.QLineEdit_SetSelection(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasSelectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn HasSelectedText(self: KListWidgetSearchLine) bool {
        return qtc.QLineEdit_HasSelectedText(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedText(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_SelectedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.SelectedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionStart)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SelectionStart(self: KListWidgetSearchLine) i32 {
        return qtc.QLineEdit_SelectionStart(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionEnd)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SelectionEnd(self: KListWidgetSearchLine) i32 {
        return qtc.QLineEdit_SelectionEnd(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionLength)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SelectionLength(self: KListWidgetSearchLine) i32 {
        return qtc.QLineEdit_SelectionLength(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isUndoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsUndoAvailable(self: KListWidgetSearchLine) bool {
        return qtc.QLineEdit_IsUndoAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#isRedoAvailable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsRedoAvailable(self: KListWidgetSearchLine) bool {
        return qtc.QLineEdit_IsRedoAvailable(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` b: bool `
    ///
    pub fn SetDragEnabled(self: KListWidgetSearchLine, b: bool) void {
        qtc.QLineEdit_SetDragEnabled(@ptrCast(self.ptr), b);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn DragEnabled(self: KListWidgetSearchLine) bool {
        return qtc.QLineEdit_DragEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setCursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` style: qnamespace_enums.CursorMoveStyle `
    ///
    pub fn SetCursorMoveStyle(self: KListWidgetSearchLine, style: i32) void {
        qtc.QLineEdit_SetCursorMoveStyle(@ptrCast(self.ptr), @bitCast(style));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorMoveStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CursorMoveStyle `
    ///
    pub fn CursorMoveStyle(self: KListWidgetSearchLine) i32 {
        return qtc.QLineEdit_CursorMoveStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InputMask(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QLineEdit_InputMask(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.InputMask: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setInputMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` inputMask: []const u8 `
    ///
    pub fn SetInputMask(self: KListWidgetSearchLine, inputMask: []const u8) void {
        const inputMask_str = qtc.libqt_string{
            .len = inputMask.len,
            .data = inputMask.ptr,
        };
        qtc.QLineEdit_SetInputMask(@ptrCast(self.ptr), inputMask_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#hasAcceptableInput)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn HasAcceptableInput(self: KListWidgetSearchLine) bool {
        return qtc.QLineEdit_HasAcceptableInput(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetTextMargins(self: KListWidgetSearchLine, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QLineEdit_SetTextMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setTextMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetTextMargins2(self: KListWidgetSearchLine, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QLineEdit_SetTextMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn TextMargins(self: KListWidgetSearchLine) QMargins {
        return .{ .ptr = qtc.QLineEdit_TextMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` action: QAction `
    ///
    /// ` position: qlineedit_enums.ActionPosition `
    ///
    pub fn AddAction(self: KListWidgetSearchLine, action: anytype, position: i32) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QLineEdit_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr), @bitCast(position));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` icon: QIcon `
    ///
    /// ` position: qlineedit_enums.ActionPosition `
    ///
    pub fn AddAction2(self: KListWidgetSearchLine, icon: anytype, position: i32) QAction {
        comptime _ = @TypeOf(icon)._is_QIcon;
        return .{ .ptr = qtc.QLineEdit_AddAction2(@ptrCast(self.ptr), @ptrCast(icon.ptr), @bitCast(position)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: KListWidgetSearchLine, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QLineEdit_SetText(@ptrCast(self.ptr), text_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SelectAll(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_SelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#undo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Undo(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_Undo(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#redo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Redo(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_Redo(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Cut(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_Cut(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#copy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Copy(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_Copy(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paste)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Paste(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_Paste(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#deselect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Deselect(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_Deselect(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#insert)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn Insert(self: KListWidgetSearchLine, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QLineEdit_Insert(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#createStandardContextMenu)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn CreateStandardContextMenu(self: KListWidgetSearchLine) QMenu {
        return .{ .ptr = qtc.QLineEdit_CreateStandardContextMenu(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextChanged(self: KListWidgetSearchLine, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QLineEdit_TextChanged(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextChanged(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QLineEdit_Connect_TextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: []const u8 `
    ///
    pub fn TextEdited(self: KListWidgetSearchLine, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
            .len = param1.len,
            .data = param1.ptr,
        };
        qtc.QLineEdit_TextEdited(@ptrCast(self.ptr), param1_str);
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#textEdited)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnTextEdited(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QLineEdit_Connect_TextEdited(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: i32 `
    ///
    /// ` param2: i32 `
    ///
    pub fn CursorPositionChanged(self: KListWidgetSearchLine, param1: i32, param2: i32) void {
        qtc.QLineEdit_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorPositionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: i32, param2: i32) callconv(.c) void `
    ///
    pub fn OnCursorPositionChanged(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, i32, i32) callconv(.c) void) void {
        qtc.QLineEdit_Connect_CursorPositionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ReturnPressed(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_ReturnPressed(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#returnPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine) callconv(.c) void `
    ///
    pub fn OnReturnPressed(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine) callconv(.c) void) void {
        qtc.QLineEdit_Connect_ReturnPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn EditingFinished(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_EditingFinished(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#editingFinished)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine) callconv(.c) void `
    ///
    pub fn OnEditingFinished(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine) callconv(.c) void) void {
        qtc.QLineEdit_Connect_EditingFinished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SelectionChanged(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_SelectionChanged(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#selectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine) callconv(.c) void) void {
        qtc.QLineEdit_Connect_SelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn InputRejected(self: KListWidgetSearchLine) void {
        qtc.QLineEdit_InputRejected(@ptrCast(self.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputRejected)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine) callconv(.c) void `
    ///
    pub fn OnInputRejected(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine) callconv(.c) void) void {
        qtc.QLineEdit_Connect_InputRejected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` property: qnamespace_enums.InputMethodQuery `
    ///
    /// ` argument: QVariant `
    ///
    pub fn InputMethodQuery2(self: KListWidgetSearchLine, property: i32, argument: anytype) QVariant {
        comptime _ = @TypeOf(argument)._is_QVariant;
        return .{ .ptr = qtc.QLineEdit_InputMethodQuery2(@ptrCast(self.ptr), @bitCast(property), @ptrCast(argument.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorForward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    /// ` steps: i32 `
    ///
    pub fn CursorForward2(self: KListWidgetSearchLine, mark: bool, steps: i32) void {
        qtc.QLineEdit_CursorForward2(@ptrCast(self.ptr), mark, @bitCast(steps));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorBackward)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` mark: bool `
    ///
    /// ` steps: i32 `
    ///
    pub fn CursorBackward2(self: KListWidgetSearchLine, mark: bool, steps: i32) void {
        qtc.QLineEdit_CursorBackward2(@ptrCast(self.ptr), mark, @bitCast(steps));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn WinId(self: KListWidgetSearchLine) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn CreateWinId(self: KListWidgetSearchLine) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn InternalWinId(self: KListWidgetSearchLine) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn EffectiveWinId(self: KListWidgetSearchLine) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Style(self: KListWidgetSearchLine) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: KListWidgetSearchLine, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsTopLevel(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsWindow(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsModal(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: KListWidgetSearchLine, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsEnabled(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: KListWidgetSearchLine, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: KListWidgetSearchLine, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: KListWidgetSearchLine, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: KListWidgetSearchLine, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn FrameGeometry(self: KListWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Geometry(self: KListWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn NormalGeometry(self: KListWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn X(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Y(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Pos(self: KListWidgetSearchLine) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn FrameSize(self: KListWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Size(self: KListWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Width(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Height(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Rect(self: KListWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ChildrenRect(self: KListWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ChildrenRegion(self: KListWidgetSearchLine) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn MinimumSize(self: KListWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn MaximumSize(self: KListWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn MinimumWidth(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn MinimumHeight(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn MaximumWidth(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn MaximumHeight(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: KListWidgetSearchLine, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: KListWidgetSearchLine, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: KListWidgetSearchLine, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: KListWidgetSearchLine, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: KListWidgetSearchLine, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: KListWidgetSearchLine, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: KListWidgetSearchLine, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: KListWidgetSearchLine, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SizeIncrement(self: KListWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: KListWidgetSearchLine, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: KListWidgetSearchLine, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn BaseSize(self: KListWidgetSearchLine) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: KListWidgetSearchLine, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: KListWidgetSearchLine, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: KListWidgetSearchLine, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: KListWidgetSearchLine, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: KListWidgetSearchLine, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: KListWidgetSearchLine, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: KListWidgetSearchLine, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: KListWidgetSearchLine, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: KListWidgetSearchLine, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: KListWidgetSearchLine, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: KListWidgetSearchLine, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: KListWidgetSearchLine, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: KListWidgetSearchLine, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: KListWidgetSearchLine, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: KListWidgetSearchLine, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: KListWidgetSearchLine, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: KListWidgetSearchLine, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: KListWidgetSearchLine, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Window(self: KListWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn NativeParentWidget(self: KListWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn TopLevelWidget(self: KListWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Palette(self: KListWidgetSearchLine) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: KListWidgetSearchLine, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: KListWidgetSearchLine, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: KListWidgetSearchLine, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Font(self: KListWidgetSearchLine) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: KListWidgetSearchLine, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn FontMetrics(self: KListWidgetSearchLine) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn FontInfo(self: KListWidgetSearchLine) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Cursor(self: KListWidgetSearchLine) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: KListWidgetSearchLine, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn UnsetCursor(self: KListWidgetSearchLine) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: KListWidgetSearchLine, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn HasMouseTracking(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn UnderMouse(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: KListWidgetSearchLine, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn HasTabletTracking(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: KListWidgetSearchLine, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: KListWidgetSearchLine, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Mask(self: KListWidgetSearchLine) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ClearMask(self: KListWidgetSearchLine) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: KListWidgetSearchLine, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: KListWidgetSearchLine, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Grab(self: KListWidgetSearchLine) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn GraphicsEffect(self: KListWidgetSearchLine) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: KListWidgetSearchLine, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: KListWidgetSearchLine, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: KListWidgetSearchLine, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: KListWidgetSearchLine, windowTitle: []const u8) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: KListWidgetSearchLine, styleSheet: []const u8) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: KListWidgetSearchLine, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn WindowIcon(self: KListWidgetSearchLine) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: KListWidgetSearchLine, windowIconText: []const u8) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: KListWidgetSearchLine, windowRole: []const u8) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: KListWidgetSearchLine, filePath: []const u8) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: KListWidgetSearchLine, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn WindowOpacity(self: KListWidgetSearchLine) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsWindowModified(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: KListWidgetSearchLine, toolTip: []const u8) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: KListWidgetSearchLine, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ToolTipDuration(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: KListWidgetSearchLine, statusTip: []const u8) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: KListWidgetSearchLine, whatsThis: []const u8) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: KListWidgetSearchLine, name: []const u8) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: KListWidgetSearchLine, description: []const u8) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: KListWidgetSearchLine, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn UnsetLayoutDirection(self: KListWidgetSearchLine) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: KListWidgetSearchLine, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Locale(self: KListWidgetSearchLine) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn UnsetLocale(self: KListWidgetSearchLine) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsRightToLeft(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsLeftToRight(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SetFocus(self: KListWidgetSearchLine) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsActiveWindow(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ActivateWindow(self: KListWidgetSearchLine) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ClearFocus(self: KListWidgetSearchLine) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: KListWidgetSearchLine, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: KListWidgetSearchLine, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn HasFocus(self: KListWidgetSearchLine) bool {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: KListWidgetSearchLine, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn FocusProxy(self: KListWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: KListWidgetSearchLine, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn GrabMouse(self: KListWidgetSearchLine) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ReleaseMouse(self: KListWidgetSearchLine) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn GrabKeyboard(self: KListWidgetSearchLine) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ReleaseKeyboard(self: KListWidgetSearchLine) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: KListWidgetSearchLine, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: KListWidgetSearchLine, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: KListWidgetSearchLine, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: KListWidgetSearchLine, id: i32) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn UpdatesEnabled(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: KListWidgetSearchLine, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn GraphicsProxyWidget(self: KListWidgetSearchLine) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Update(self: KListWidgetSearchLine) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Repaint(self: KListWidgetSearchLine) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: KListWidgetSearchLine, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: KListWidgetSearchLine, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: KListWidgetSearchLine, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Show(self: KListWidgetSearchLine) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Hide(self: KListWidgetSearchLine) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ShowMinimized(self: KListWidgetSearchLine) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ShowMaximized(self: KListWidgetSearchLine) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ShowFullScreen(self: KListWidgetSearchLine) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ShowNormal(self: KListWidgetSearchLine) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Close(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Raise(self: KListWidgetSearchLine) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Lower(self: KListWidgetSearchLine) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: KListWidgetSearchLine, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: KListWidgetSearchLine, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: KListWidgetSearchLine, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: KListWidgetSearchLine, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("klistwidgetsearchline.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: KListWidgetSearchLine, geometry: []u8) bool {
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn AdjustSize(self: KListWidgetSearchLine) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsVisible(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: KListWidgetSearchLine, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsHidden(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsMinimized(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsMaximized(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsFullScreen(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: KListWidgetSearchLine, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: KListWidgetSearchLine, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SizePolicy(self: KListWidgetSearchLine) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: KListWidgetSearchLine, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: KListWidgetSearchLine, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn VisibleRegion(self: KListWidgetSearchLine) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: KListWidgetSearchLine, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: KListWidgetSearchLine, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ContentsMargins(self: KListWidgetSearchLine) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ContentsRect(self: KListWidgetSearchLine) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Layout(self: KListWidgetSearchLine) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: KListWidgetSearchLine, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn UpdateGeometry(self: KListWidgetSearchLine) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: KListWidgetSearchLine, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: KListWidgetSearchLine, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: KListWidgetSearchLine, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: KListWidgetSearchLine, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn FocusWidget(self: KListWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn NextInFocusChain(self: KListWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn PreviousInFocusChain(self: KListWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn AcceptDrops(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: KListWidgetSearchLine, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: KListWidgetSearchLine, actions: []QAction) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: KListWidgetSearchLine, before: anytype, actions: []QAction) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: KListWidgetSearchLine, before: anytype, action: anytype) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: KListWidgetSearchLine, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("klistwidgetsearchline.Actions: Memory allocation failed");
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: KListWidgetSearchLine, icon: anytype, text: []const u8) QAction {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: KListWidgetSearchLine, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: KListWidgetSearchLine, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ParentWidget(self: KListWidgetSearchLine) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: KListWidgetSearchLine, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: KListWidgetSearchLine, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: KListWidgetSearchLine, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: KListWidgetSearchLine) i32 {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: KListWidgetSearchLine, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: KListWidgetSearchLine, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: KListWidgetSearchLine, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: KListWidgetSearchLine, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: KListWidgetSearchLine, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn EnsurePolished(self: KListWidgetSearchLine) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: KListWidgetSearchLine, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn AutoFillBackground(self: KListWidgetSearchLine) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: KListWidgetSearchLine, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn BackingStore(self: KListWidgetSearchLine) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn WindowHandle(self: KListWidgetSearchLine) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Screen(self: KListWidgetSearchLine) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: KListWidgetSearchLine, screen: anytype) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: KListWidgetSearchLine, title: []const u8) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: KListWidgetSearchLine, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: KListWidgetSearchLine, iconText: []const u8) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: KListWidgetSearchLine, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: KListWidgetSearchLine) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: KListWidgetSearchLine, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: KListWidgetSearchLine, target: anytype, targetOffset: anytype) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: KListWidgetSearchLine, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: KListWidgetSearchLine, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: KListWidgetSearchLine, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: KListWidgetSearchLine, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: KListWidgetSearchLine, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: KListWidgetSearchLine, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: KListWidgetSearchLine, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: KListWidgetSearchLine, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: KListWidgetSearchLine, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: KListWidgetSearchLine, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: KListWidgetSearchLine, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: KListWidgetSearchLine, param1: i32, on: bool) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("klistwidgetsearchline.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: KListWidgetSearchLine, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsWidgetType(self: KListWidgetSearchLine) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsWindowType(self: KListWidgetSearchLine) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn IsQuickItemType(self: KListWidgetSearchLine) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SignalsBlocked(self: KListWidgetSearchLine) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: KListWidgetSearchLine, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Thread(self: KListWidgetSearchLine) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: KListWidgetSearchLine, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: KListWidgetSearchLine, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: KListWidgetSearchLine, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: KListWidgetSearchLine, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: KListWidgetSearchLine, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: KListWidgetSearchLine, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("klistwidgetsearchline.Children: Memory allocation failed");
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: KListWidgetSearchLine, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: KListWidgetSearchLine, obj: anytype) void {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: KListWidgetSearchLine, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Disconnect3(self: KListWidgetSearchLine) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: KListWidgetSearchLine, receiver: anytype) bool {
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn DumpObjectTree(self: KListWidgetSearchLine) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn DumpObjectInfo(self: KListWidgetSearchLine) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: KListWidgetSearchLine, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: KListWidgetSearchLine, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: KListWidgetSearchLine, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("klistwidgetsearchline.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("klistwidgetsearchline.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn BindingStorage(self: KListWidgetSearchLine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn BindingStorage2(self: KListWidgetSearchLine) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Destroyed(self: KListWidgetSearchLine) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Parent(self: KListWidgetSearchLine) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: KListWidgetSearchLine, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn DeleteLater(self: KListWidgetSearchLine) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: KListWidgetSearchLine, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: KListWidgetSearchLine, time: i64, timerType: i32) i32 {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: KListWidgetSearchLine, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: KListWidgetSearchLine, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: KListWidgetSearchLine, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: KListWidgetSearchLine, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: KListWidgetSearchLine, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn PaintingActive(self: KListWidgetSearchLine) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn WidthMM(self: KListWidgetSearchLine) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn HeightMM(self: KListWidgetSearchLine) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn LogicalDpiX(self: KListWidgetSearchLine) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn LogicalDpiY(self: KListWidgetSearchLine) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn PhysicalDpiX(self: KListWidgetSearchLine) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn PhysicalDpiY(self: KListWidgetSearchLine) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn DevicePixelRatio(self: KListWidgetSearchLine) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn DevicePixelRatioF(self: KListWidgetSearchLine) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn ColorCount(self: KListWidgetSearchLine) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Depth(self: KListWidgetSearchLine) i32 {
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

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SizeHint(self: KListWidgetSearchLine) QSize {
        return .{ .ptr = qtc.KListWidgetSearchLine_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperSizeHint(self: KListWidgetSearchLine) QSize {
        return .{ .ptr = qtc.KListWidgetSearchLine_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) QSize) void {
        qtc.KListWidgetSearchLine_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn MinimumSizeHint(self: KListWidgetSearchLine) QSize {
        return .{ .ptr = qtc.KListWidgetSearchLine_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperMinimumSizeHint(self: KListWidgetSearchLine) QSize {
        return .{ .ptr = qtc.KListWidgetSearchLine_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) QSize) void {
        qtc.KListWidgetSearchLine_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MousePressEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KListWidgetSearchLine_MousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KListWidgetSearchLine_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QMouseEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KListWidgetSearchLine_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KListWidgetSearchLine_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QMouseEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KListWidgetSearchLine_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KListWidgetSearchLine_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QMouseEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KListWidgetSearchLine_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QMouseEvent;
        qtc.KListWidgetSearchLine_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QMouseEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KListWidgetSearchLine_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KListWidgetSearchLine_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QKeyEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KListWidgetSearchLine_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyReleaseEvent` instead
    ///
    pub const QBaseKeyReleaseEvent = SuperKeyReleaseEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.KListWidgetSearchLine_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QKeyEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn FocusInEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KListWidgetSearchLine_FocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KListWidgetSearchLine_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QFocusEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KListWidgetSearchLine_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QFocusEvent;
        qtc.KListWidgetSearchLine_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QFocusEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn PaintEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.KListWidgetSearchLine_PaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPaintEvent;
        qtc.KListWidgetSearchLine_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QPaintEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.KListWidgetSearchLine_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDragEnterEvent;
        qtc.KListWidgetSearchLine_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QDragEnterEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: KListWidgetSearchLine, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.KListWidgetSearchLine_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: KListWidgetSearchLine, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.KListWidgetSearchLine_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, e: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QDragMoveEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: KListWidgetSearchLine, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.KListWidgetSearchLine_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: KListWidgetSearchLine, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.KListWidgetSearchLine_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, e: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QDragLeaveEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn DropEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.KListWidgetSearchLine_DropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QDropEvent `
    ///
    pub fn SuperDropEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QDropEvent;
        qtc.KListWidgetSearchLine_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QDropEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KListWidgetSearchLine_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.KListWidgetSearchLine_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.KListWidgetSearchLine_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.KListWidgetSearchLine_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QContextMenuEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KListWidgetSearchLine_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.KListWidgetSearchLine_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QInputMethodEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: KListWidgetSearchLine, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.KListWidgetSearchLine_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitStyleOption` instead
    ///
    pub const QBaseInitStyleOption = SuperInitStyleOption;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: KListWidgetSearchLine, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.KListWidgetSearchLine_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QStyleOptionFrame) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: KListWidgetSearchLine, param1: i32) QVariant {
        return .{ .ptr = qtc.KListWidgetSearchLine_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: KListWidgetSearchLine, param1: i32) QVariant {
        return .{ .ptr = qtc.KListWidgetSearchLine_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, i32) callconv(.c) QVariant) void {
        qtc.KListWidgetSearchLine_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn TimerEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KListWidgetSearchLine_TimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: KListWidgetSearchLine, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTimerEvent;
        qtc.KListWidgetSearchLine_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QTimerEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn DevType(self: KListWidgetSearchLine) i32 {
        return qtc.KListWidgetSearchLine_DevType(@ptrCast(self.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperDevType(self: KListWidgetSearchLine) i32 {
        return qtc.KListWidgetSearchLine_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) i32) void {
        qtc.KListWidgetSearchLine_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: KListWidgetSearchLine, visible: bool) void {
        qtc.KListWidgetSearchLine_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: KListWidgetSearchLine, visible: bool) void {
        qtc.KListWidgetSearchLine_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, bool) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: KListWidgetSearchLine, param1: i32) i32 {
        return qtc.KListWidgetSearchLine_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: KListWidgetSearchLine, param1: i32) i32 {
        return qtc.KListWidgetSearchLine_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, i32) callconv(.c) i32) void {
        qtc.KListWidgetSearchLine_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn HasHeightForWidth(self: KListWidgetSearchLine) bool {
        return qtc.KListWidgetSearchLine_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperHasHeightForWidth(self: KListWidgetSearchLine) bool {
        return qtc.KListWidgetSearchLine_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) bool) void {
        qtc.KListWidgetSearchLine_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn PaintEngine(self: KListWidgetSearchLine) QPaintEngine {
        return .{ .ptr = qtc.KListWidgetSearchLine_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperPaintEngine(self: KListWidgetSearchLine) QPaintEngine {
        return .{ .ptr = qtc.KListWidgetSearchLine_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.KListWidgetSearchLine_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KListWidgetSearchLine_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.KListWidgetSearchLine_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QWheelEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KListWidgetSearchLine_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.KListWidgetSearchLine_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QEnterEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KListWidgetSearchLine_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KListWidgetSearchLine_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KListWidgetSearchLine_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.KListWidgetSearchLine_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QMoveEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KListWidgetSearchLine_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.KListWidgetSearchLine_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QResizeEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KListWidgetSearchLine_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.KListWidgetSearchLine_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QCloseEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KListWidgetSearchLine_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.KListWidgetSearchLine_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QTabletEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KListWidgetSearchLine_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.KListWidgetSearchLine_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QActionEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KListWidgetSearchLine_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.KListWidgetSearchLine_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QShowEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KListWidgetSearchLine_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.KListWidgetSearchLine_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QHideEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: KListWidgetSearchLine, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KListWidgetSearchLine_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: KListWidgetSearchLine, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.KListWidgetSearchLine_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.KListWidgetSearchLine_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: KListWidgetSearchLine, param1: i32) i32 {
        return qtc.KListWidgetSearchLine_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: KListWidgetSearchLine, param1: i32) i32 {
        return qtc.KListWidgetSearchLine_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, i32) callconv(.c) i32) void {
        qtc.KListWidgetSearchLine_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: KListWidgetSearchLine, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KListWidgetSearchLine_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: KListWidgetSearchLine, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.KListWidgetSearchLine_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QPainter) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: KListWidgetSearchLine, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KListWidgetSearchLine_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: KListWidgetSearchLine, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.KListWidgetSearchLine_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QPoint) callconv(.c) QPaintDevice) void {
        qtc.KListWidgetSearchLine_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SharedPainter(self: KListWidgetSearchLine) QPainter {
        return .{ .ptr = qtc.KListWidgetSearchLine_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperSharedPainter(self: KListWidgetSearchLine) QPainter {
        return .{ .ptr = qtc.KListWidgetSearchLine_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) QPainter) void {
        qtc.KListWidgetSearchLine_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: KListWidgetSearchLine, next: bool) bool {
        return qtc.KListWidgetSearchLine_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: KListWidgetSearchLine, next: bool) bool {
        return qtc.KListWidgetSearchLine_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, bool) callconv(.c) bool) void {
        qtc.KListWidgetSearchLine_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: KListWidgetSearchLine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KListWidgetSearchLine_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: KListWidgetSearchLine, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.KListWidgetSearchLine_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QObject, QEvent) callconv(.c) bool) void {
        qtc.KListWidgetSearchLine_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KListWidgetSearchLine_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.KListWidgetSearchLine_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QChildEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KListWidgetSearchLine_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: KListWidgetSearchLine, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.KListWidgetSearchLine_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QEvent) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: KListWidgetSearchLine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KListWidgetSearchLine_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: KListWidgetSearchLine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KListWidgetSearchLine_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QMetaMethod) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: KListWidgetSearchLine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KListWidgetSearchLine_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: KListWidgetSearchLine, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.KListWidgetSearchLine_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QMetaMethod) callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn CursorRect(self: KListWidgetSearchLine) QRect {
        return .{ .ptr = qtc.KListWidgetSearchLine_CursorRect(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperCursorRect` instead
    ///
    pub const QBaseCursorRect = SuperCursorRect;

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperCursorRect(self: KListWidgetSearchLine) QRect {
        return .{ .ptr = qtc.KListWidgetSearchLine_SuperCursorRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QLineEdit
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlineedit.html#cursorRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) QRect `
    ///
    pub fn OnCursorRect(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) QRect) void {
        qtc.KListWidgetSearchLine_OnCursorRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn UpdateMicroFocus(self: KListWidgetSearchLine) void {
        qtc.KListWidgetSearchLine_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperUpdateMicroFocus(self: KListWidgetSearchLine) void {
        qtc.KListWidgetSearchLine_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Create(self: KListWidgetSearchLine) void {
        qtc.KListWidgetSearchLine_Create(@ptrCast(self.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperCreate(self: KListWidgetSearchLine) void {
        qtc.KListWidgetSearchLine_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Destroy(self: KListWidgetSearchLine) void {
        qtc.KListWidgetSearchLine_Destroy(@ptrCast(self.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperDestroy(self: KListWidgetSearchLine) void {
        qtc.KListWidgetSearchLine_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) void) void {
        qtc.KListWidgetSearchLine_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn FocusNextChild(self: KListWidgetSearchLine) bool {
        return qtc.KListWidgetSearchLine_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperFocusNextChild(self: KListWidgetSearchLine) bool {
        return qtc.KListWidgetSearchLine_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) bool) void {
        qtc.KListWidgetSearchLine_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn FocusPreviousChild(self: KListWidgetSearchLine) bool {
        return qtc.KListWidgetSearchLine_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperFocusPreviousChild(self: KListWidgetSearchLine) bool {
        return qtc.KListWidgetSearchLine_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) bool) void {
        qtc.KListWidgetSearchLine_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Sender(self: KListWidgetSearchLine) QObject {
        return .{ .ptr = qtc.KListWidgetSearchLine_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperSender(self: KListWidgetSearchLine) QObject {
        return .{ .ptr = qtc.KListWidgetSearchLine_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) QObject) void {
        qtc.KListWidgetSearchLine_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SenderSignalIndex(self: KListWidgetSearchLine) i32 {
        return qtc.KListWidgetSearchLine_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn SuperSenderSignalIndex(self: KListWidgetSearchLine) i32 {
        return qtc.KListWidgetSearchLine_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: KListWidgetSearchLine, callback: *const fn () callconv(.c) i32) void {
        qtc.KListWidgetSearchLine_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: KListWidgetSearchLine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KListWidgetSearchLine_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: KListWidgetSearchLine, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KListWidgetSearchLine_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, [*:0]const u8) callconv(.c) i32) void {
        qtc.KListWidgetSearchLine_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: KListWidgetSearchLine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KListWidgetSearchLine_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: KListWidgetSearchLine, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.KListWidgetSearchLine_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, QMetaMethod) callconv(.c) bool) void {
        qtc.KListWidgetSearchLine_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: KListWidgetSearchLine, metricA: i32, metricB: i32) f64 {
        return qtc.KListWidgetSearchLine_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: KListWidgetSearchLine, metricA: i32, metricB: i32) f64 {
        return qtc.KListWidgetSearchLine_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine`
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, i32, i32) callconv(.c) f64) void {
        qtc.KListWidgetSearchLine_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    /// ` callback: *const fn (self: KListWidgetSearchLine, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: KListWidgetSearchLine, callback: *const fn (KListWidgetSearchLine, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/klistwidgetsearchline.html#dtor.KListWidgetSearchLine)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KListWidgetSearchLine `
    ///
    pub fn Delete(self: KListWidgetSearchLine) void {
        qtc.KListWidgetSearchLine_Delete(@ptrCast(self.ptr));
    }
};
