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
const texteditfindbarbase_enums = enums;

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
pub const TextCustomEditor__TextEditFindBarBase = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextCustomEditor__TextEditFindBarBase,

    pub const _is_TextCustomEditor__TextEditFindBarBase = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new TextCustomEditor::TextEditFindBarBase object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) TextCustomEditor__TextEditFindBarBase {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new TextCustomEditor::TextEditFindBarBase object.
    ///
    pub fn New2() TextCustomEditor__TextEditFindBarBase {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_new2() };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn MetaObject(self: TextCustomEditor__TextEditFindBarBase) QMetaObject {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperMetaObject(self: TextCustomEditor__TextEditFindBarBase) QMetaObject {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: TextCustomEditor__TextEditFindBarBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextCustomEditor__TextEditFindBarBase_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: TextCustomEditor__TextEditFindBarBase, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: TextCustomEditor__TextEditFindBarBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextCustomEditor__TextEditFindBarBase_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: TextCustomEditor__TextEditFindBarBase, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.TextCustomEditor__TextEditFindBarBase_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: TextCustomEditor__TextEditFindBarBase, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.TextCustomEditor__TextEditFindBarBase_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn FocusAndSetCursor(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_FocusAndSetCursor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ShowReplace(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_ShowReplace(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ShowFind(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_ShowFind(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` hide: bool `
    ///
    pub fn SetHideWhenClose(self: TextCustomEditor__TextEditFindBarBase, hide: bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SetHideWhenClose(@ptrCast(self.ptr), hide);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` message: []const u8 `
    ///
    pub fn DisplayMessageIndicator(self: TextCustomEditor__TextEditFindBarBase, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.TextCustomEditor__TextEditFindBarBase_DisplayMessageIndicator(@ptrCast(self.ptr), message_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnDisplayMessageIndicator(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, [*:0]const u8) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_Connect_DisplayMessageIndicator(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn HideFindBar(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_HideFindBar(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase) callconv(.c) void `
    ///
    pub fn OnHideFindBar(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_Connect_HideFindBar(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ViewIsReadOnly(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_ViewIsReadOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnViewIsReadOnly(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnViewIsReadOnly(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperViewIsReadOnly` instead
    ///
    pub const QBaseViewIsReadOnly = SuperViewIsReadOnly;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperViewIsReadOnly(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperViewIsReadOnly(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn DocumentIsEmpty(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_DocumentIsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnDocumentIsEmpty(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnDocumentIsEmpty(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDocumentIsEmpty` instead
    ///
    pub const QBaseDocumentIsEmpty = SuperDocumentIsEmpty;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperDocumentIsEmpty(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperDocumentIsEmpty(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` searchOptions: flag of texteditfindbarbase_enums.FindFlag `
    ///
    pub fn SearchInDocument(self: TextCustomEditor__TextEditFindBarBase, text: []const u8, searchOptions: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.TextCustomEditor__TextEditFindBarBase_SearchInDocument(@ptrCast(self.ptr), text_str, @bitCast(searchOptions));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, text: [*:0]const u8, searchOptions: flag of texteditfindbarbase_enums.FindFlag) callconv(.c) bool `
    ///
    pub fn OnSearchInDocument(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, [*:0]const u8, i32) callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnSearchInDocument(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSearchInDocument` instead
    ///
    pub const QBaseSearchInDocument = SuperSearchInDocument;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` searchOptions: flag of texteditfindbarbase_enums.FindFlag `
    ///
    pub fn SuperSearchInDocument(self: TextCustomEditor__TextEditFindBarBase, text: []const u8, searchOptions: i32) bool {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperSearchInDocument(@ptrCast(self.ptr), text_str, @bitCast(searchOptions));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` regExp: QRegularExpression `
    ///
    /// ` searchOptions: flag of texteditfindbarbase_enums.FindFlag `
    ///
    pub fn SearchInDocument2(self: TextCustomEditor__TextEditFindBarBase, regExp: anytype, searchOptions: i32) bool {
        comptime _ = @TypeOf(regExp)._is_QRegularExpression;
        return qtc.TextCustomEditor__TextEditFindBarBase_SearchInDocument2(@ptrCast(self.ptr), @ptrCast(regExp.ptr), @bitCast(searchOptions));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, regExp: QRegularExpression, searchOptions: flag of texteditfindbarbase_enums.FindFlag) callconv(.c) bool `
    ///
    pub fn OnSearchInDocument2(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QRegularExpression, i32) callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnSearchInDocument2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSearchInDocument2` instead
    ///
    pub const QBaseSearchInDocument2 = SuperSearchInDocument2;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` regExp: QRegularExpression `
    ///
    /// ` searchOptions: flag of texteditfindbarbase_enums.FindFlag `
    ///
    pub fn SuperSearchInDocument2(self: TextCustomEditor__TextEditFindBarBase, regExp: anytype, searchOptions: i32) bool {
        comptime _ = @TypeOf(regExp)._is_QRegularExpression;
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperSearchInDocument2(@ptrCast(self.ptr), @ptrCast(regExp.ptr), @bitCast(searchOptions));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn AutoSearchMoveCursor(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_AutoSearchMoveCursor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAutoSearchMoveCursor(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnAutoSearchMoveCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperAutoSearchMoveCursor` instead
    ///
    pub const QBaseAutoSearchMoveCursor = SuperAutoSearchMoveCursor;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperAutoSearchMoveCursor(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SuperAutoSearchMoveCursor(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: TextCustomEditor__TextEditFindBarBase, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.TextCustomEditor__TextEditFindBarBase_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: TextCustomEditor__TextEditFindBarBase, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ClearSelections(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_ClearSelections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnClearSelections(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnClearSelections(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClearSelections` instead
    ///
    pub const QBaseClearSelections = SuperClearSelections;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperClearSelections(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SuperClearSelections(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` backward: bool `
    ///
    /// ` isAutoSearch: bool `
    ///
    pub fn SearchText(self: TextCustomEditor__TextEditFindBarBase, backward: bool, isAutoSearch: bool) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_SearchText(@ptrCast(self.ptr), backward, isAutoSearch);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, backward: bool, isAutoSearch: bool) callconv(.c) bool `
    ///
    pub fn OnSearchText(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, bool, bool) callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnSearchText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSearchText` instead
    ///
    pub const QBaseSearchText = SuperSearchText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` backward: bool `
    ///
    /// ` isAutoSearch: bool `
    ///
    pub fn SuperSearchText(self: TextCustomEditor__TextEditFindBarBase, backward: bool, isAutoSearch: bool) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperSearchText(@ptrCast(self.ptr), backward, isAutoSearch);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` match: bool `
    ///
    pub fn SetFoundMatch(self: TextCustomEditor__TextEditFindBarBase, match: bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SetFoundMatch(@ptrCast(self.ptr), match);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, match: bool) callconv(.c) void `
    ///
    pub fn OnSetFoundMatch(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnSetFoundMatch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetFoundMatch` instead
    ///
    pub const QBaseSetFoundMatch = SuperSetFoundMatch;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` match: bool `
    ///
    pub fn SuperSetFoundMatch(self: TextCustomEditor__TextEditFindBarBase, match: bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SuperSetFoundMatch(@ptrCast(self.ptr), match);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` backward: bool `
    ///
    /// ` isAutoSearch: bool `
    ///
    /// ` found: bool `
    ///
    pub fn MessageInfo(self: TextCustomEditor__TextEditFindBarBase, backward: bool, isAutoSearch: bool, found: bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_MessageInfo(@ptrCast(self.ptr), backward, isAutoSearch, found);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, backward: bool, isAutoSearch: bool, found: bool) callconv(.c) void `
    ///
    pub fn OnMessageInfo(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, bool, bool, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnMessageInfo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMessageInfo` instead
    ///
    pub const QBaseMessageInfo = SuperMessageInfo;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` backward: bool `
    ///
    /// ` isAutoSearch: bool `
    ///
    /// ` found: bool `
    ///
    pub fn SuperMessageInfo(self: TextCustomEditor__TextEditFindBarBase, backward: bool, isAutoSearch: bool, found: bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SuperMessageInfo(@ptrCast(self.ptr), backward, isAutoSearch, found);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn FindNext(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_FindNext(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn FindPrev(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_FindPrev(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` str: []const u8 `
    ///
    pub fn AutoSearch(self: TextCustomEditor__TextEditFindBarBase, str: []const u8) void {
        const str_str = qtc.libqt_string{
            .len = str.len,
            .data = str.ptr,
        };
        qtc.TextCustomEditor__TextEditFindBarBase_AutoSearch(@ptrCast(self.ptr), str_str);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` backward: bool `
    ///
    /// ` isAutoSearch: bool `
    ///
    pub fn SlotSearchText(self: TextCustomEditor__TextEditFindBarBase, backward: bool, isAutoSearch: bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SlotSearchText(@ptrCast(self.ptr), backward, isAutoSearch);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, backward: bool, isAutoSearch: bool) callconv(.c) void `
    ///
    pub fn OnSlotSearchText(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, bool, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnSlotSearchText(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSlotSearchText` instead
    ///
    pub const QBaseSlotSearchText = SuperSlotSearchText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` backward: bool `
    ///
    /// ` isAutoSearch: bool `
    ///
    pub fn SuperSlotSearchText(self: TextCustomEditor__TextEditFindBarBase, backward: bool, isAutoSearch: bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SuperSlotSearchText(@ptrCast(self.ptr), backward, isAutoSearch);
    }

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn CloseBar(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_CloseBar(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn WinId(self: TextCustomEditor__TextEditFindBarBase) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn CreateWinId(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn InternalWinId(self: TextCustomEditor__TextEditFindBarBase) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn EffectiveWinId(self: TextCustomEditor__TextEditFindBarBase) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Style(self: TextCustomEditor__TextEditFindBarBase) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: TextCustomEditor__TextEditFindBarBase, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsTopLevel(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsWindow(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsModal(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: TextCustomEditor__TextEditFindBarBase, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsEnabled(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: TextCustomEditor__TextEditFindBarBase, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: TextCustomEditor__TextEditFindBarBase, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: TextCustomEditor__TextEditFindBarBase, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn FrameGeometry(self: TextCustomEditor__TextEditFindBarBase) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Geometry(self: TextCustomEditor__TextEditFindBarBase) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn NormalGeometry(self: TextCustomEditor__TextEditFindBarBase) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn X(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Y(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Pos(self: TextCustomEditor__TextEditFindBarBase) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn FrameSize(self: TextCustomEditor__TextEditFindBarBase) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Size(self: TextCustomEditor__TextEditFindBarBase) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Width(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Height(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Rect(self: TextCustomEditor__TextEditFindBarBase) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ChildrenRect(self: TextCustomEditor__TextEditFindBarBase) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ChildrenRegion(self: TextCustomEditor__TextEditFindBarBase) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn MinimumSize(self: TextCustomEditor__TextEditFindBarBase) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn MaximumSize(self: TextCustomEditor__TextEditFindBarBase) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn MinimumWidth(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn MinimumHeight(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn MaximumWidth(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn MaximumHeight(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: TextCustomEditor__TextEditFindBarBase, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: TextCustomEditor__TextEditFindBarBase, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: TextCustomEditor__TextEditFindBarBase, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: TextCustomEditor__TextEditFindBarBase, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: TextCustomEditor__TextEditFindBarBase, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: TextCustomEditor__TextEditFindBarBase, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: TextCustomEditor__TextEditFindBarBase, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: TextCustomEditor__TextEditFindBarBase, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SizeIncrement(self: TextCustomEditor__TextEditFindBarBase) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: TextCustomEditor__TextEditFindBarBase, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: TextCustomEditor__TextEditFindBarBase, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn BaseSize(self: TextCustomEditor__TextEditFindBarBase) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: TextCustomEditor__TextEditFindBarBase, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: TextCustomEditor__TextEditFindBarBase, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: TextCustomEditor__TextEditFindBarBase, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: TextCustomEditor__TextEditFindBarBase, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: TextCustomEditor__TextEditFindBarBase, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: TextCustomEditor__TextEditFindBarBase, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: TextCustomEditor__TextEditFindBarBase, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: TextCustomEditor__TextEditFindBarBase, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: TextCustomEditor__TextEditFindBarBase, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: TextCustomEditor__TextEditFindBarBase, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Window(self: TextCustomEditor__TextEditFindBarBase) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn NativeParentWidget(self: TextCustomEditor__TextEditFindBarBase) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn TopLevelWidget(self: TextCustomEditor__TextEditFindBarBase) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Palette(self: TextCustomEditor__TextEditFindBarBase) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: TextCustomEditor__TextEditFindBarBase, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: TextCustomEditor__TextEditFindBarBase, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: TextCustomEditor__TextEditFindBarBase, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Font(self: TextCustomEditor__TextEditFindBarBase) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: TextCustomEditor__TextEditFindBarBase, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn FontMetrics(self: TextCustomEditor__TextEditFindBarBase) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn FontInfo(self: TextCustomEditor__TextEditFindBarBase) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Cursor(self: TextCustomEditor__TextEditFindBarBase) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: TextCustomEditor__TextEditFindBarBase, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn UnsetCursor(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: TextCustomEditor__TextEditFindBarBase, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn HasMouseTracking(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn UnderMouse(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: TextCustomEditor__TextEditFindBarBase, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn HasTabletTracking(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: TextCustomEditor__TextEditFindBarBase, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: TextCustomEditor__TextEditFindBarBase, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Mask(self: TextCustomEditor__TextEditFindBarBase) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ClearMask(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: TextCustomEditor__TextEditFindBarBase, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: TextCustomEditor__TextEditFindBarBase, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Grab(self: TextCustomEditor__TextEditFindBarBase) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn GraphicsEffect(self: TextCustomEditor__TextEditFindBarBase) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: TextCustomEditor__TextEditFindBarBase, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: TextCustomEditor__TextEditFindBarBase, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: TextCustomEditor__TextEditFindBarBase, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: TextCustomEditor__TextEditFindBarBase, windowTitle: []const u8) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: TextCustomEditor__TextEditFindBarBase, styleSheet: []const u8) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: TextCustomEditor__TextEditFindBarBase, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn WindowIcon(self: TextCustomEditor__TextEditFindBarBase) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: TextCustomEditor__TextEditFindBarBase, windowIconText: []const u8) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: TextCustomEditor__TextEditFindBarBase, windowRole: []const u8) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: TextCustomEditor__TextEditFindBarBase, filePath: []const u8) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: TextCustomEditor__TextEditFindBarBase, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn WindowOpacity(self: TextCustomEditor__TextEditFindBarBase) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsWindowModified(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: TextCustomEditor__TextEditFindBarBase, toolTip: []const u8) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: TextCustomEditor__TextEditFindBarBase, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ToolTipDuration(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: TextCustomEditor__TextEditFindBarBase, statusTip: []const u8) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: TextCustomEditor__TextEditFindBarBase, whatsThis: []const u8) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: TextCustomEditor__TextEditFindBarBase, name: []const u8) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: TextCustomEditor__TextEditFindBarBase, description: []const u8) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: TextCustomEditor__TextEditFindBarBase, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn UnsetLayoutDirection(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: TextCustomEditor__TextEditFindBarBase, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Locale(self: TextCustomEditor__TextEditFindBarBase) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn UnsetLocale(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsRightToLeft(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsLeftToRight(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SetFocus(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsActiveWindow(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ActivateWindow(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ClearFocus(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: TextCustomEditor__TextEditFindBarBase, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: TextCustomEditor__TextEditFindBarBase, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn HasFocus(self: TextCustomEditor__TextEditFindBarBase) bool {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: TextCustomEditor__TextEditFindBarBase, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn FocusProxy(self: TextCustomEditor__TextEditFindBarBase) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: TextCustomEditor__TextEditFindBarBase, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn GrabMouse(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ReleaseMouse(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn GrabKeyboard(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ReleaseKeyboard(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: TextCustomEditor__TextEditFindBarBase, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: TextCustomEditor__TextEditFindBarBase, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: TextCustomEditor__TextEditFindBarBase, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: TextCustomEditor__TextEditFindBarBase, id: i32) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn UpdatesEnabled(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: TextCustomEditor__TextEditFindBarBase, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn GraphicsProxyWidget(self: TextCustomEditor__TextEditFindBarBase) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Update(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Repaint(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: TextCustomEditor__TextEditFindBarBase, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: TextCustomEditor__TextEditFindBarBase, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: TextCustomEditor__TextEditFindBarBase, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Show(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Hide(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ShowMinimized(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ShowMaximized(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ShowFullScreen(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ShowNormal(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Close(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Raise(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Lower(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: TextCustomEditor__TextEditFindBarBase, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: TextCustomEditor__TextEditFindBarBase, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: TextCustomEditor__TextEditFindBarBase, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: TextCustomEditor__TextEditFindBarBase, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("textcustomeditor__texteditfindbarbase.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: TextCustomEditor__TextEditFindBarBase, geometry: []u8) bool {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn AdjustSize(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsVisible(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsHidden(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsMinimized(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsMaximized(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsFullScreen(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: TextCustomEditor__TextEditFindBarBase, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: TextCustomEditor__TextEditFindBarBase, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SizePolicy(self: TextCustomEditor__TextEditFindBarBase) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: TextCustomEditor__TextEditFindBarBase, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: TextCustomEditor__TextEditFindBarBase, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn VisibleRegion(self: TextCustomEditor__TextEditFindBarBase) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: TextCustomEditor__TextEditFindBarBase, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: TextCustomEditor__TextEditFindBarBase, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ContentsMargins(self: TextCustomEditor__TextEditFindBarBase) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ContentsRect(self: TextCustomEditor__TextEditFindBarBase) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Layout(self: TextCustomEditor__TextEditFindBarBase) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: TextCustomEditor__TextEditFindBarBase, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn UpdateGeometry(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: TextCustomEditor__TextEditFindBarBase, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: TextCustomEditor__TextEditFindBarBase, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: TextCustomEditor__TextEditFindBarBase, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: TextCustomEditor__TextEditFindBarBase, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn FocusWidget(self: TextCustomEditor__TextEditFindBarBase) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn NextInFocusChain(self: TextCustomEditor__TextEditFindBarBase) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn PreviousInFocusChain(self: TextCustomEditor__TextEditFindBarBase) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn AcceptDrops(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: TextCustomEditor__TextEditFindBarBase, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: TextCustomEditor__TextEditFindBarBase, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: TextCustomEditor__TextEditFindBarBase, actions: []QAction) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: TextCustomEditor__TextEditFindBarBase, before: anytype, actions: []QAction) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: TextCustomEditor__TextEditFindBarBase, before: anytype, action: anytype) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: TextCustomEditor__TextEditFindBarBase, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("textcustomeditor__texteditfindbarbase.Actions: Memory allocation failed");
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: TextCustomEditor__TextEditFindBarBase, text: []const u8) QAction {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: TextCustomEditor__TextEditFindBarBase, icon: anytype, text: []const u8) QAction {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: TextCustomEditor__TextEditFindBarBase, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: TextCustomEditor__TextEditFindBarBase, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ParentWidget(self: TextCustomEditor__TextEditFindBarBase) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: TextCustomEditor__TextEditFindBarBase, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: TextCustomEditor__TextEditFindBarBase, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: TextCustomEditor__TextEditFindBarBase, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: TextCustomEditor__TextEditFindBarBase) i32 {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: TextCustomEditor__TextEditFindBarBase, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: TextCustomEditor__TextEditFindBarBase, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: TextCustomEditor__TextEditFindBarBase, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: TextCustomEditor__TextEditFindBarBase, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: TextCustomEditor__TextEditFindBarBase, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn EnsurePolished(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: TextCustomEditor__TextEditFindBarBase, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn AutoFillBackground(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: TextCustomEditor__TextEditFindBarBase, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn BackingStore(self: TextCustomEditor__TextEditFindBarBase) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn WindowHandle(self: TextCustomEditor__TextEditFindBarBase) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Screen(self: TextCustomEditor__TextEditFindBarBase) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: TextCustomEditor__TextEditFindBarBase, screen: anytype) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: TextCustomEditor__TextEditFindBarBase, title: []const u8) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: TextCustomEditor__TextEditFindBarBase, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: TextCustomEditor__TextEditFindBarBase, iconText: []const u8) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: TextCustomEditor__TextEditFindBarBase, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: TextCustomEditor__TextEditFindBarBase, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: TextCustomEditor__TextEditFindBarBase, target: anytype, targetOffset: anytype) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: TextCustomEditor__TextEditFindBarBase, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: TextCustomEditor__TextEditFindBarBase, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: TextCustomEditor__TextEditFindBarBase, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: TextCustomEditor__TextEditFindBarBase, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: TextCustomEditor__TextEditFindBarBase, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: TextCustomEditor__TextEditFindBarBase, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: TextCustomEditor__TextEditFindBarBase, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: TextCustomEditor__TextEditFindBarBase, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: TextCustomEditor__TextEditFindBarBase, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: TextCustomEditor__TextEditFindBarBase, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: TextCustomEditor__TextEditFindBarBase, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: TextCustomEditor__TextEditFindBarBase, param1: i32, on: bool) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("textcustomeditor__texteditfindbarbase.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: TextCustomEditor__TextEditFindBarBase, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsWidgetType(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsWindowType(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn IsQuickItemType(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SignalsBlocked(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: TextCustomEditor__TextEditFindBarBase, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Thread(self: TextCustomEditor__TextEditFindBarBase) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: TextCustomEditor__TextEditFindBarBase, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: TextCustomEditor__TextEditFindBarBase, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: TextCustomEditor__TextEditFindBarBase, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: TextCustomEditor__TextEditFindBarBase, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: TextCustomEditor__TextEditFindBarBase, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("textcustomeditor__texteditfindbarbase.Children: Memory allocation failed");
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: TextCustomEditor__TextEditFindBarBase, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: TextCustomEditor__TextEditFindBarBase, obj: anytype) void {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: TextCustomEditor__TextEditFindBarBase, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Disconnect3(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: TextCustomEditor__TextEditFindBarBase, receiver: anytype) bool {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn DumpObjectTree(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn DumpObjectInfo(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: TextCustomEditor__TextEditFindBarBase, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: TextCustomEditor__TextEditFindBarBase, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: TextCustomEditor__TextEditFindBarBase, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("textcustomeditor__texteditfindbarbase.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("textcustomeditor__texteditfindbarbase.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn BindingStorage(self: TextCustomEditor__TextEditFindBarBase) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn BindingStorage2(self: TextCustomEditor__TextEditFindBarBase) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Destroyed(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Parent(self: TextCustomEditor__TextEditFindBarBase) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: TextCustomEditor__TextEditFindBarBase, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn DeleteLater(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: TextCustomEditor__TextEditFindBarBase, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: TextCustomEditor__TextEditFindBarBase, time: i64, timerType: i32) i32 {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: TextCustomEditor__TextEditFindBarBase, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: TextCustomEditor__TextEditFindBarBase, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: TextCustomEditor__TextEditFindBarBase, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: TextCustomEditor__TextEditFindBarBase, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: TextCustomEditor__TextEditFindBarBase, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn PaintingActive(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn WidthMM(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn HeightMM(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn LogicalDpiX(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn LogicalDpiY(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn PhysicalDpiX(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn PhysicalDpiY(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn DevicePixelRatio(self: TextCustomEditor__TextEditFindBarBase) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn DevicePixelRatioF(self: TextCustomEditor__TextEditFindBarBase) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn ColorCount(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Depth(self: TextCustomEditor__TextEditFindBarBase) i32 {
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn DevType(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.TextCustomEditor__TextEditFindBarBase_DevType(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperDevType(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) i32) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: TextCustomEditor__TextEditFindBarBase, visible: bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: TextCustomEditor__TextEditFindBarBase, visible: bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, bool) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SizeHint(self: TextCustomEditor__TextEditFindBarBase) QSize {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperSizeHint(self: TextCustomEditor__TextEditFindBarBase) QSize {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn MinimumSizeHint(self: TextCustomEditor__TextEditFindBarBase) QSize {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperMinimumSizeHint(self: TextCustomEditor__TextEditFindBarBase) QSize {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: TextCustomEditor__TextEditFindBarBase, param1: i32) i32 {
        return qtc.TextCustomEditor__TextEditFindBarBase_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: TextCustomEditor__TextEditFindBarBase, param1: i32) i32 {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, i32) callconv(.c) i32) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn HasHeightForWidth(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperHasHeightForWidth(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn PaintEngine(self: TextCustomEditor__TextEditFindBarBase) QPaintEngine {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperPaintEngine(self: TextCustomEditor__TextEditFindBarBase) QPaintEngine {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QMouseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QWheelEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QKeyEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QKeyEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QFocusEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QFocusEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QEnterEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QPaintEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QMoveEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QResizeEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QCloseEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QContextMenuEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QContextMenuEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QTabletEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QActionEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QDragEnterEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QDragMoveEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QDragLeaveEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QDropEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QShowEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QHideEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: TextCustomEditor__TextEditFindBarBase, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextCustomEditor__TextEditFindBarBase_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: TextCustomEditor__TextEditFindBarBase, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QEvent `
    ///
    pub fn ChangeEvent(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QEvent `
    ///
    pub fn SuperChangeEvent(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, param1: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: TextCustomEditor__TextEditFindBarBase, param1: i32) i32 {
        return qtc.TextCustomEditor__TextEditFindBarBase_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: TextCustomEditor__TextEditFindBarBase, param1: i32) i32 {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, i32) callconv(.c) i32) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: TextCustomEditor__TextEditFindBarBase, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextCustomEditor__TextEditFindBarBase_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: TextCustomEditor__TextEditFindBarBase, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QPainter) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: TextCustomEditor__TextEditFindBarBase, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: TextCustomEditor__TextEditFindBarBase, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QPoint) callconv(.c) QPaintDevice) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SharedPainter(self: TextCustomEditor__TextEditFindBarBase) QPainter {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperSharedPainter(self: TextCustomEditor__TextEditFindBarBase) QPainter {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) QPainter) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: TextCustomEditor__TextEditFindBarBase, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QInputMethodEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: TextCustomEditor__TextEditFindBarBase, param1: i32) QVariant {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: TextCustomEditor__TextEditFindBarBase, param1: i32) QVariant {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, i32) callconv(.c) QVariant) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: TextCustomEditor__TextEditFindBarBase, next: bool) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: TextCustomEditor__TextEditFindBarBase, next: bool) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, bool) callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: TextCustomEditor__TextEditFindBarBase, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextCustomEditor__TextEditFindBarBase_EventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` watched: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: TextCustomEditor__TextEditFindBarBase, watched: anytype, event: anytype) bool {
        comptime _ = @TypeOf(watched)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(watched.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, watched: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QTimerEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QChildEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: TextCustomEditor__TextEditFindBarBase, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QEvent) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: TextCustomEditor__TextEditFindBarBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__TextEditFindBarBase_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: TextCustomEditor__TextEditFindBarBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QMetaMethod) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: TextCustomEditor__TextEditFindBarBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__TextEditFindBarBase_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: TextCustomEditor__TextEditFindBarBase, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextCustomEditor__TextEditFindBarBase_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QMetaMethod) callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn UpdateMicroFocus(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperUpdateMicroFocus(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Create(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_Create(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperCreate(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Destroy(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_Destroy(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperDestroy(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) void) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn FocusNextChild(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperFocusNextChild(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn FocusPreviousChild(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperFocusPreviousChild(self: TextCustomEditor__TextEditFindBarBase) bool {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Sender(self: TextCustomEditor__TextEditFindBarBase) QObject {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperSender(self: TextCustomEditor__TextEditFindBarBase) QObject {
        return .{ .ptr = qtc.TextCustomEditor__TextEditFindBarBase_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SenderSignalIndex(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.TextCustomEditor__TextEditFindBarBase_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn SuperSenderSignalIndex(self: TextCustomEditor__TextEditFindBarBase) i32 {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn () callconv(.c) i32) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: TextCustomEditor__TextEditFindBarBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextCustomEditor__TextEditFindBarBase_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: TextCustomEditor__TextEditFindBarBase, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: TextCustomEditor__TextEditFindBarBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextCustomEditor__TextEditFindBarBase_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: TextCustomEditor__TextEditFindBarBase, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, QMetaMethod) callconv(.c) bool) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: TextCustomEditor__TextEditFindBarBase, metricA: i32, metricB: i32) f64 {
        return qtc.TextCustomEditor__TextEditFindBarBase_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: TextCustomEditor__TextEditFindBarBase, metricA: i32, metricB: i32) f64 {
        return qtc.TextCustomEditor__TextEditFindBarBase_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase`
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, i32, i32) callconv(.c) f64) void {
        qtc.TextCustomEditor__TextEditFindBarBase_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    /// ` callback: *const fn (self: TextCustomEditor__TextEditFindBarBase, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: TextCustomEditor__TextEditFindBarBase, callback: *const fn (TextCustomEditor__TextEditFindBarBase, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextCustomEditor_1_1TextEditFindBarBase.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: TextCustomEditor__TextEditFindBarBase `
    ///
    pub fn Delete(self: TextCustomEditor__TextEditFindBarBase) void {
        qtc.TextCustomEditor__TextEditFindBarBase_Delete(@ptrCast(self.ptr));
    }
};

pub const enums = struct {
    pub const FindFlag = enum(i32) {
        pub const FindBackward: i32 = 1;
        pub const FindCaseSensitively: i32 = 2;
        pub const FindWholeWords: i32 = 4;
        pub const FindRespectDiacritics: i32 = 8;
    };
};
