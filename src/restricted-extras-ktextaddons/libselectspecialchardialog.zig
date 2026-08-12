const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QChar = @import("libqt6").QChar;
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

/// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
pub const TextAddonsWidgets__SelectSpecialCharDialog = extern struct {
    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.TextAddonsWidgets__SelectSpecialCharDialog,

    pub const _is_TextAddonsWidgets__SelectSpecialCharDialog = {};
    pub const _is_QDialog = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new TextAddonsWidgets::SelectSpecialCharDialog object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) TextAddonsWidgets__SelectSpecialCharDialog {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn metaObject(self: TextAddonsWidgets__SelectSpecialCharDialog) QMetaObject {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMetaObject` instead
    ///
    pub const OnMetaObject = onMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetaObject` instead
    ///
    pub const SuperMetaObject = superMetaObject;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superMetaObject(self: TextAddonsWidgets__SelectSpecialCharDialog) QMetaObject {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setCurrentChar` instead
    ///
    pub const SetCurrentChar = setCurrentChar;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` c: QChar `
    ///
    pub fn setCurrentChar(self: TextAddonsWidgets__SelectSpecialCharDialog, c: anytype) void {
        comptime _ = @TypeOf(c)._is_QChar;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SetCurrentChar(@ptrCast(self.ptr), @ptrCast(c.ptr));
    }

    /// ### DEPRECATED: Use `currentChar` instead
    ///
    pub const CurrentChar = currentChar;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn currentChar(self: TextAddonsWidgets__SelectSpecialCharDialog) QChar {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_CurrentChar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setOkButtonText` instead
    ///
    pub const SetOkButtonText = setOkButtonText;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` text: []const u8 `
    ///
    pub fn setOkButtonText(self: TextAddonsWidgets__SelectSpecialCharDialog, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SetOkButtonText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `showSelectButton` instead
    ///
    pub const ShowSelectButton = showSelectButton;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _show: bool `
    ///
    pub fn showSelectButton(self: TextAddonsWidgets__SelectSpecialCharDialog, _show: bool) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_ShowSelectButton(@ptrCast(self.ptr), _show);
    }

    /// ### DEPRECATED: Use `autoInsertChar` instead
    ///
    pub const AutoInsertChar = autoInsertChar;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn autoInsertChar(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_AutoInsertChar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `charSelected` instead
    ///
    pub const CharSelected = charSelected;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QChar `
    ///
    pub fn charSelected(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QChar;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_CharSelected(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onCharSelected` instead
    ///
    pub const OnCharSelected = onCharSelected;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: QChar) callconv(.c) void `
    ///
    pub fn onCharSelected(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QChar) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_Connect_CharSelected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `result` instead
    ///
    pub const Result = result;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn result(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
        return qtc.QDialog_Result(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSizeGripEnabled` instead
    ///
    pub const SetSizeGripEnabled = setSizeGripEnabled;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` sizeGripEnabled: bool `
    ///
    pub fn setSizeGripEnabled(self: TextAddonsWidgets__SelectSpecialCharDialog, sizeGripEnabled: bool) void {
        qtc.QDialog_SetSizeGripEnabled(@ptrCast(self.ptr), sizeGripEnabled);
    }

    /// ### DEPRECATED: Use `isSizeGripEnabled` instead
    ///
    pub const IsSizeGripEnabled = isSizeGripEnabled;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isSizeGripEnabled(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
        return qtc.QDialog_IsSizeGripEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setModal` instead
    ///
    pub const SetModal = setModal;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` modal: bool `
    ///
    pub fn setModal(self: TextAddonsWidgets__SelectSpecialCharDialog, modal: bool) void {
        qtc.QDialog_SetModal(@ptrCast(self.ptr), modal);
    }

    /// ### DEPRECATED: Use `setResult` instead
    ///
    pub const SetResult = setResult;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` r: i32 `
    ///
    pub fn setResult(self: TextAddonsWidgets__SelectSpecialCharDialog, r: i32) void {
        qtc.QDialog_SetResult(@ptrCast(self.ptr), @bitCast(r));
    }

    /// ### DEPRECATED: Use `finished` instead
    ///
    pub const Finished = finished;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _result: i32 `
    ///
    pub fn finished(self: TextAddonsWidgets__SelectSpecialCharDialog, _result: i32) void {
        qtc.QDialog_Finished(@ptrCast(self.ptr), @bitCast(_result));
    }

    /// ### DEPRECATED: Use `onFinished` instead
    ///
    pub const OnFinished = onFinished;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, result: i32) callconv(.c) void `
    ///
    pub fn onFinished(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, i32) callconv(.c) void) void {
        qtc.QDialog_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `accepted` instead
    ///
    pub const Accepted = accepted;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn accepted(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.QDialog_Accepted(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAccepted` instead
    ///
    pub const OnAccepted = onAccepted;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog) callconv(.c) void `
    ///
    pub fn onAccepted(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog) callconv(.c) void) void {
        qtc.QDialog_Connect_Accepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rejected` instead
    ///
    pub const Rejected = rejected;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn rejected(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.QDialog_Rejected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onRejected` instead
    ///
    pub const OnRejected = onRejected;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog) callconv(.c) void `
    ///
    pub fn onRejected(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog) callconv(.c) void) void {
        qtc.QDialog_Connect_Rejected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn winId(self: TextAddonsWidgets__SelectSpecialCharDialog) usize {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn createWinId(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn internalWinId(self: TextAddonsWidgets__SelectSpecialCharDialog) usize {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn effectiveWinId(self: TextAddonsWidgets__SelectSpecialCharDialog) usize {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn style(self: TextAddonsWidgets__SelectSpecialCharDialog) QStyle {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: TextAddonsWidgets__SelectSpecialCharDialog, _style: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isTopLevel(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isWindow(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isModal(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: TextAddonsWidgets__SelectSpecialCharDialog, _windowModality: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isEnabled(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: TextAddonsWidgets__SelectSpecialCharDialog, enabled: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: TextAddonsWidgets__SelectSpecialCharDialog, disabled: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: TextAddonsWidgets__SelectSpecialCharDialog, windowModified: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn frameGeometry(self: TextAddonsWidgets__SelectSpecialCharDialog) QRect {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn geometry(self: TextAddonsWidgets__SelectSpecialCharDialog) QRect {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn normalGeometry(self: TextAddonsWidgets__SelectSpecialCharDialog) QRect {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn x(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn y(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn pos(self: TextAddonsWidgets__SelectSpecialCharDialog) QPoint {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn frameSize(self: TextAddonsWidgets__SelectSpecialCharDialog) QSize {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn size(self: TextAddonsWidgets__SelectSpecialCharDialog) QSize {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn width(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn height(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn rect(self: TextAddonsWidgets__SelectSpecialCharDialog) QRect {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn childrenRect(self: TextAddonsWidgets__SelectSpecialCharDialog) QRect {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn childrenRegion(self: TextAddonsWidgets__SelectSpecialCharDialog) QRegion {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn minimumSize(self: TextAddonsWidgets__SelectSpecialCharDialog) QSize {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn maximumSize(self: TextAddonsWidgets__SelectSpecialCharDialog) QSize {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn minimumWidth(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn minimumHeight(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn maximumWidth(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn maximumHeight(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: TextAddonsWidgets__SelectSpecialCharDialog, _minimumSize: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: TextAddonsWidgets__SelectSpecialCharDialog, minw: i32, minh: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: TextAddonsWidgets__SelectSpecialCharDialog, _maximumSize: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: TextAddonsWidgets__SelectSpecialCharDialog, maxw: i32, maxh: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: TextAddonsWidgets__SelectSpecialCharDialog, minw: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: TextAddonsWidgets__SelectSpecialCharDialog, minh: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: TextAddonsWidgets__SelectSpecialCharDialog, maxw: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: TextAddonsWidgets__SelectSpecialCharDialog, maxh: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn sizeIncrement(self: TextAddonsWidgets__SelectSpecialCharDialog) QSize {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: TextAddonsWidgets__SelectSpecialCharDialog, _sizeIncrement: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: TextAddonsWidgets__SelectSpecialCharDialog, w: i32, h: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn baseSize(self: TextAddonsWidgets__SelectSpecialCharDialog) QSize {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: TextAddonsWidgets__SelectSpecialCharDialog, _baseSize: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: TextAddonsWidgets__SelectSpecialCharDialog, basew: i32, baseh: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: TextAddonsWidgets__SelectSpecialCharDialog, fixedSize: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: TextAddonsWidgets__SelectSpecialCharDialog, w: i32, h: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: TextAddonsWidgets__SelectSpecialCharDialog, w: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: TextAddonsWidgets__SelectSpecialCharDialog, h: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) QPointF {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) QPoint {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) QPointF {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) QPoint {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) QPointF {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) QPoint {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) QPointF {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) QPoint {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn window(self: TextAddonsWidgets__SelectSpecialCharDialog) QWidget {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn nativeParentWidget(self: TextAddonsWidgets__SelectSpecialCharDialog) QWidget {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn topLevelWidget(self: TextAddonsWidgets__SelectSpecialCharDialog) QWidget {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn palette(self: TextAddonsWidgets__SelectSpecialCharDialog) QPalette {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: TextAddonsWidgets__SelectSpecialCharDialog, _palette: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: TextAddonsWidgets__SelectSpecialCharDialog, _backgroundRole: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: TextAddonsWidgets__SelectSpecialCharDialog, _foregroundRole: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn font(self: TextAddonsWidgets__SelectSpecialCharDialog) QFont {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: TextAddonsWidgets__SelectSpecialCharDialog, _font: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn fontMetrics(self: TextAddonsWidgets__SelectSpecialCharDialog) QFontMetrics {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn fontInfo(self: TextAddonsWidgets__SelectSpecialCharDialog) QFontInfo {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn cursor(self: TextAddonsWidgets__SelectSpecialCharDialog) QCursor {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: TextAddonsWidgets__SelectSpecialCharDialog, _cursor: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn unsetCursor(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: TextAddonsWidgets__SelectSpecialCharDialog, enable: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn hasMouseTracking(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn underMouse(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: TextAddonsWidgets__SelectSpecialCharDialog, enable: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn hasTabletTracking(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: TextAddonsWidgets__SelectSpecialCharDialog, _mask: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: TextAddonsWidgets__SelectSpecialCharDialog, _mask: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn mask(self: TextAddonsWidgets__SelectSpecialCharDialog) QRegion {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn clearMask(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: TextAddonsWidgets__SelectSpecialCharDialog, target: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: TextAddonsWidgets__SelectSpecialCharDialog, painter: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn grab(self: TextAddonsWidgets__SelectSpecialCharDialog) QPixmap {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn graphicsEffect(self: TextAddonsWidgets__SelectSpecialCharDialog) QGraphicsEffect {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: TextAddonsWidgets__SelectSpecialCharDialog, effect: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: TextAddonsWidgets__SelectSpecialCharDialog, typeVal: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: TextAddonsWidgets__SelectSpecialCharDialog, typeVal: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: TextAddonsWidgets__SelectSpecialCharDialog, _windowTitle: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: TextAddonsWidgets__SelectSpecialCharDialog, _styleSheet: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.styleSheet: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.windowTitle: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` icon: QIcon `
    ///
    pub fn setWindowIcon(self: TextAddonsWidgets__SelectSpecialCharDialog, icon: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn windowIcon(self: TextAddonsWidgets__SelectSpecialCharDialog) QIcon {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: TextAddonsWidgets__SelectSpecialCharDialog, _windowIconText: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.windowIconText: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: TextAddonsWidgets__SelectSpecialCharDialog, _windowRole: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.windowRole: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: TextAddonsWidgets__SelectSpecialCharDialog, filePath: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.windowFilePath: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: TextAddonsWidgets__SelectSpecialCharDialog, level: f64) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn windowOpacity(self: TextAddonsWidgets__SelectSpecialCharDialog) f64 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isWindowModified(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: TextAddonsWidgets__SelectSpecialCharDialog, _toolTip: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.toolTip: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: TextAddonsWidgets__SelectSpecialCharDialog, msec: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn toolTipDuration(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: TextAddonsWidgets__SelectSpecialCharDialog, _statusTip: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.statusTip: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: TextAddonsWidgets__SelectSpecialCharDialog, _whatsThis: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.whatsThis: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.accessibleName: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: TextAddonsWidgets__SelectSpecialCharDialog, name: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.accessibleDescription: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: TextAddonsWidgets__SelectSpecialCharDialog, description: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: TextAddonsWidgets__SelectSpecialCharDialog, direction: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn unsetLayoutDirection(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: TextAddonsWidgets__SelectSpecialCharDialog, _locale: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn locale(self: TextAddonsWidgets__SelectSpecialCharDialog) QLocale {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn unsetLocale(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isRightToLeft(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isLeftToRight(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn setFocus(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isActiveWindow(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn activateWindow(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn clearFocus(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: TextAddonsWidgets__SelectSpecialCharDialog, reason: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: TextAddonsWidgets__SelectSpecialCharDialog, policy: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn hasFocus(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: TextAddonsWidgets__SelectSpecialCharDialog, _focusProxy: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn focusProxy(self: TextAddonsWidgets__SelectSpecialCharDialog) QWidget {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: TextAddonsWidgets__SelectSpecialCharDialog, policy: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn grabMouse(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn releaseMouse(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn grabKeyboard(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn releaseKeyboard(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: TextAddonsWidgets__SelectSpecialCharDialog, key: anytype) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: TextAddonsWidgets__SelectSpecialCharDialog, id: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: TextAddonsWidgets__SelectSpecialCharDialog, id: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: TextAddonsWidgets__SelectSpecialCharDialog, id: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn updatesEnabled(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: TextAddonsWidgets__SelectSpecialCharDialog, enable: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn graphicsProxyWidget(self: TextAddonsWidgets__SelectSpecialCharDialog) QGraphicsProxyWidget {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn update(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn repaint(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: TextAddonsWidgets__SelectSpecialCharDialog, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: TextAddonsWidgets__SelectSpecialCharDialog, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: TextAddonsWidgets__SelectSpecialCharDialog, hidden: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn show(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn hide(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn showMinimized(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn showMaximized(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn showFullScreen(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn showNormal(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn close(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn raise(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn lower(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: TextAddonsWidgets__SelectSpecialCharDialog, _x: i32, _y: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: TextAddonsWidgets__SelectSpecialCharDialog, w: i32, h: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: TextAddonsWidgets__SelectSpecialCharDialog, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: TextAddonsWidgets__SelectSpecialCharDialog, _geometry: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.saveGeometry: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: TextAddonsWidgets__SelectSpecialCharDialog, _geometry: []u8) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn adjustSize(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isVisible(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isHidden(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isMinimized(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isMaximized(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isFullScreen(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: TextAddonsWidgets__SelectSpecialCharDialog, state: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: TextAddonsWidgets__SelectSpecialCharDialog, state: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn sizePolicy(self: TextAddonsWidgets__SelectSpecialCharDialog) QSizePolicy {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: TextAddonsWidgets__SelectSpecialCharDialog, _sizePolicy: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: TextAddonsWidgets__SelectSpecialCharDialog, horizontal: i32, vertical: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn visibleRegion(self: TextAddonsWidgets__SelectSpecialCharDialog) QRegion {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: TextAddonsWidgets__SelectSpecialCharDialog, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: TextAddonsWidgets__SelectSpecialCharDialog, margins: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn contentsMargins(self: TextAddonsWidgets__SelectSpecialCharDialog) QMargins {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn contentsRect(self: TextAddonsWidgets__SelectSpecialCharDialog) QRect {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn layout(self: TextAddonsWidgets__SelectSpecialCharDialog) QLayout {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: TextAddonsWidgets__SelectSpecialCharDialog, _layout: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn updateGeometry(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: TextAddonsWidgets__SelectSpecialCharDialog, _parent: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: TextAddonsWidgets__SelectSpecialCharDialog, _parent: anytype, f: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: TextAddonsWidgets__SelectSpecialCharDialog, dx: i32, dy: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: TextAddonsWidgets__SelectSpecialCharDialog, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn focusWidget(self: TextAddonsWidgets__SelectSpecialCharDialog) QWidget {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn nextInFocusChain(self: TextAddonsWidgets__SelectSpecialCharDialog) QWidget {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn previousInFocusChain(self: TextAddonsWidgets__SelectSpecialCharDialog) QWidget {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn acceptDrops(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: TextAddonsWidgets__SelectSpecialCharDialog, on: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: TextAddonsWidgets__SelectSpecialCharDialog, action: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: TextAddonsWidgets__SelectSpecialCharDialog, _actions: []QAction) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: TextAddonsWidgets__SelectSpecialCharDialog, before: anytype, _actions: []QAction) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: TextAddonsWidgets__SelectSpecialCharDialog, before: anytype, action: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: TextAddonsWidgets__SelectSpecialCharDialog, action: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.actions: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction2(self: TextAddonsWidgets__SelectSpecialCharDialog, text: []const u8) QAction {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn addAction3(self: TextAddonsWidgets__SelectSpecialCharDialog, icon: anytype, text: []const u8) QAction {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: TextAddonsWidgets__SelectSpecialCharDialog, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: TextAddonsWidgets__SelectSpecialCharDialog, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn parentWidget(self: TextAddonsWidgets__SelectSpecialCharDialog) QWidget {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: TextAddonsWidgets__SelectSpecialCharDialog, typeVal: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: TextAddonsWidgets__SelectSpecialCharDialog, typeVal: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: TextAddonsWidgets__SelectSpecialCharDialog, _x: i32, _y: i32) QWidget {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: TextAddonsWidgets__SelectSpecialCharDialog, p: anytype) QWidget {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: TextAddonsWidgets__SelectSpecialCharDialog, p: anytype) QWidget {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn ensurePolished(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: TextAddonsWidgets__SelectSpecialCharDialog, child: anytype) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn autoFillBackground(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: TextAddonsWidgets__SelectSpecialCharDialog, enabled: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn backingStore(self: TextAddonsWidgets__SelectSpecialCharDialog) QBackingStore {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn windowHandle(self: TextAddonsWidgets__SelectSpecialCharDialog) QWindow {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn screen(self: TextAddonsWidgets__SelectSpecialCharDialog) QScreen {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: TextAddonsWidgets__SelectSpecialCharDialog, _screen: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: TextAddonsWidgets__SelectSpecialCharDialog, title: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` icon: QIcon `
    ///
    pub fn windowIconChanged(self: TextAddonsWidgets__SelectSpecialCharDialog, icon: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QIcon) callconv(.c) void) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: TextAddonsWidgets__SelectSpecialCharDialog, iconText: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: TextAddonsWidgets__SelectSpecialCharDialog, _pos: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QPoint) callconv(.c) void) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: TextAddonsWidgets__SelectSpecialCharDialog, hints: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: TextAddonsWidgets__SelectSpecialCharDialog, target: anytype, targetOffset: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: TextAddonsWidgets__SelectSpecialCharDialog, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render4(self: TextAddonsWidgets__SelectSpecialCharDialog, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: TextAddonsWidgets__SelectSpecialCharDialog, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: TextAddonsWidgets__SelectSpecialCharDialog, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render42(self: TextAddonsWidgets__SelectSpecialCharDialog, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: TextAddonsWidgets__SelectSpecialCharDialog, rectangle: anytype) QPixmap {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: TextAddonsWidgets__SelectSpecialCharDialog, typeVal: i32, flags: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: TextAddonsWidgets__SelectSpecialCharDialog, key: anytype, context: i32) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: TextAddonsWidgets__SelectSpecialCharDialog, id: i32, enable: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: TextAddonsWidgets__SelectSpecialCharDialog, id: i32, enable: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32, on: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32, on: bool) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.objectName: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: TextAddonsWidgets__SelectSpecialCharDialog, name: []const u8) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isWidgetType(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isWindowType(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn isQuickItemType(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn signalsBlocked(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: TextAddonsWidgets__SelectSpecialCharDialog, b: bool) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn thread(self: TextAddonsWidgets__SelectSpecialCharDialog) QThread {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: TextAddonsWidgets__SelectSpecialCharDialog, _thread: anytype) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: TextAddonsWidgets__SelectSpecialCharDialog, interval: i32) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: TextAddonsWidgets__SelectSpecialCharDialog, time: i64) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: TextAddonsWidgets__SelectSpecialCharDialog, id: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: TextAddonsWidgets__SelectSpecialCharDialog, id: i32) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.children: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: TextAddonsWidgets__SelectSpecialCharDialog, filterObj: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: TextAddonsWidgets__SelectSpecialCharDialog, obj: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: TextAddonsWidgets__SelectSpecialCharDialog, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn disconnect3(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: TextAddonsWidgets__SelectSpecialCharDialog, receiver: anytype) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn dumpObjectTree(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn dumpObjectInfo(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: TextAddonsWidgets__SelectSpecialCharDialog, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: TextAddonsWidgets__SelectSpecialCharDialog, name: [:0]const u8) QVariant {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: TextAddonsWidgets__SelectSpecialCharDialog, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("TextAddonsWidgets__SelectSpecialCharDialog.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn bindingStorage(self: TextAddonsWidgets__SelectSpecialCharDialog) QBindingStorage {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn bindingStorage2(self: TextAddonsWidgets__SelectSpecialCharDialog) QBindingStorage {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn destroyed(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog) callconv(.c) void `
    ///
    pub fn onDestroyed(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog) callconv(.c) void) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn parent(self: TextAddonsWidgets__SelectSpecialCharDialog) QObject {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: TextAddonsWidgets__SelectSpecialCharDialog, classname: [:0]const u8) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn deleteLater(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: TextAddonsWidgets__SelectSpecialCharDialog, interval: i32, timerType: i32) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: TextAddonsWidgets__SelectSpecialCharDialog, time: i64, timerType: i32) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: TextAddonsWidgets__SelectSpecialCharDialog, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: TextAddonsWidgets__SelectSpecialCharDialog, signal: [:0]const u8) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: TextAddonsWidgets__SelectSpecialCharDialog, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: TextAddonsWidgets__SelectSpecialCharDialog, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: TextAddonsWidgets__SelectSpecialCharDialog, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QObject) callconv(.c) void) void {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn paintingActive(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn widthMM(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn heightMM(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn logicalDpiX(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn logicalDpiY(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn physicalDpiX(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn physicalDpiY(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn devicePixelRatio(self: TextAddonsWidgets__SelectSpecialCharDialog) f64 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn devicePixelRatioF(self: TextAddonsWidgets__SelectSpecialCharDialog) f64 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn colorCount(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn depth(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
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

    /// ### DEPRECATED: Use `setVisible` instead
    ///
    pub const SetVisible = setVisible;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: TextAddonsWidgets__SelectSpecialCharDialog, visible: bool) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `superSetVisible` instead
    ///
    pub const SuperSetVisible = superSetVisible;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: TextAddonsWidgets__SelectSpecialCharDialog, visible: bool) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `onSetVisible` instead
    ///
    pub const OnSetVisible = onSetVisible;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, bool) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn sizeHint(self: TextAddonsWidgets__SelectSpecialCharDialog) QSize {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superSizeHint` instead
    ///
    pub const SuperSizeHint = superSizeHint;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superSizeHint(self: TextAddonsWidgets__SelectSpecialCharDialog) QSize {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onSizeHint` instead
    ///
    pub const OnSizeHint = onSizeHint;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `minimumSizeHint` instead
    ///
    pub const MinimumSizeHint = minimumSizeHint;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn minimumSizeHint(self: TextAddonsWidgets__SelectSpecialCharDialog) QSize {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superMinimumSizeHint` instead
    ///
    pub const SuperMinimumSizeHint = superMinimumSizeHint;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superMinimumSizeHint(self: TextAddonsWidgets__SelectSpecialCharDialog) QSize {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onMinimumSizeHint` instead
    ///
    pub const OnMinimumSizeHint = onMinimumSizeHint;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) QSize) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `open` instead
    ///
    pub const Open = open;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn open(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_Open(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superOpen` instead
    ///
    pub const SuperOpen = superOpen;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superOpen(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onOpen` instead
    ///
    pub const OnOpen = onOpen;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onOpen(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `exec` instead
    ///
    pub const Exec = exec;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn exec(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_Exec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superExec` instead
    ///
    pub const SuperExec = superExec;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superExec(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperExec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExec` instead
    ///
    pub const OnExec = onExec;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onExec(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) i32) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnExec(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `done` instead
    ///
    pub const Done = done;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: i32 `
    ///
    pub fn done(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_Done(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `superDone` instead
    ///
    pub const SuperDone = superDone;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: i32 `
    ///
    pub fn superDone(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperDone(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `onDone` instead
    ///
    pub const OnDone = onDone;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) callconv(.c) void `
    ///
    pub fn onDone(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, i32) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `accept` instead
    ///
    pub const Accept = accept;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn accept(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superAccept` instead
    ///
    pub const SuperAccept = superAccept;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superAccept(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperAccept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onAccept` instead
    ///
    pub const OnAccept = onAccept;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onAccept(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnAccept(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reject` instead
    ///
    pub const Reject = reject;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn reject(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_Reject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superReject` instead
    ///
    pub const SuperReject = superReject;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superReject(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperReject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReject` instead
    ///
    pub const OnReject = onReject;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onReject(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnReject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn keyPressEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QKeyEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QKeyEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEvent` instead
    ///
    pub const CloseEvent = closeEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn closeEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_CloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superCloseEvent` instead
    ///
    pub const SuperCloseEvent = superCloseEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QCloseEvent `
    ///
    pub fn superCloseEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCloseEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onCloseEvent` instead
    ///
    pub const OnCloseEvent = onCloseEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QCloseEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `showEvent` instead
    ///
    pub const ShowEvent = showEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn showEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_ShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superShowEvent` instead
    ///
    pub const SuperShowEvent = superShowEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QShowEvent `
    ///
    pub fn superShowEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QShowEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onShowEvent` instead
    ///
    pub const OnShowEvent = onShowEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QShowEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QResizeEvent `
    ///
    pub fn resizeEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QResizeEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_ResizeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QResizeEvent `
    ///
    pub fn superResizeEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QResizeEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: QResizeEvent) callconv(.c) void `
    ///
    pub fn onResizeEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QResizeEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn onContextMenuEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QContextMenuEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn eventFilter(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn superEventFilter(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QObject, QEvent) callconv(.c) bool) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn devType(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_DevType(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superDevType(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) i32) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) i32 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) i32 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, i32) callconv(.c) i32) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn hasHeightForWidth(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superHasHeightForWidth(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) bool) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn paintEngine(self: TextAddonsWidgets__SelectSpecialCharDialog) QPaintEngine {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superPaintEngine(self: TextAddonsWidgets__SelectSpecialCharDialog) QPaintEngine {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QEvent `
    ///
    pub fn event(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_Event(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QEvent) callconv(.c) bool) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QMouseEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QMouseEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QMouseEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QMouseEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn wheelEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_WheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QWheelEvent `
    ///
    pub fn superWheelEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QWheelEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QWheelEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QKeyEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QFocusEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QFocusEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QEnterEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QPaintEvent `
    ///
    pub fn paintEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_PaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QPaintEvent `
    ///
    pub fn superPaintEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QPaintEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn onPaintEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QPaintEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QMoveEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QTabletEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QActionEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QDragEnterEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragMoveEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QDragMoveEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragLeaveEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QDragLeaveEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn dropEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn superDropEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QDropEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QHideEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` _result: *isize `
    ///
    pub fn nativeEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, eventType: []u8, message: ?*anyopaque, _result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(_result));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` _result: *isize `
    ///
    pub fn superNativeEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, eventType: []u8, message: ?*anyopaque, _result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(_result));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QEvent `
    ///
    pub fn changeEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superChangeEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: QEvent) callconv(.c) void `
    ///
    pub fn onChangeEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) i32 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) i32 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, i32) callconv(.c) i32) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: TextAddonsWidgets__SelectSpecialCharDialog, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: TextAddonsWidgets__SelectSpecialCharDialog, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QPainter) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: TextAddonsWidgets__SelectSpecialCharDialog, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: TextAddonsWidgets__SelectSpecialCharDialog, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QPoint) callconv(.c) QPaintDevice) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn sharedPainter(self: TextAddonsWidgets__SelectSpecialCharDialog) QPainter {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superSharedPainter(self: TextAddonsWidgets__SelectSpecialCharDialog) QPainter {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) QPainter) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QInputMethodEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) QVariant {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: i32) QVariant {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, i32) callconv(.c) QVariant) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: TextAddonsWidgets__SelectSpecialCharDialog, next: bool) bool {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` next: bool `
    ///
    pub fn superFocusNextPrevChild(self: TextAddonsWidgets__SelectSpecialCharDialog, next: bool) bool {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, next: bool) callconv(.c) bool `
    ///
    pub fn onFocusNextPrevChild(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, bool) callconv(.c) bool) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn timerEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_TimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QTimerEvent `
    ///
    pub fn superTimerEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTimerEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QTimerEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QChildEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QEvent) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: TextAddonsWidgets__SelectSpecialCharDialog, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: TextAddonsWidgets__SelectSpecialCharDialog, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QMetaMethod) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: TextAddonsWidgets__SelectSpecialCharDialog, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: TextAddonsWidgets__SelectSpecialCharDialog, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QMetaMethod) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `adjustPosition` instead
    ///
    pub const AdjustPosition = adjustPosition;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn adjustPosition(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_AdjustPosition(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superAdjustPosition` instead
    ///
    pub const SuperAdjustPosition = superAdjustPosition;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` param1: QWidget `
    ///
    pub fn superAdjustPosition(self: TextAddonsWidgets__SelectSpecialCharDialog, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperAdjustPosition(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onAdjustPosition` instead
    ///
    pub const OnAdjustPosition = onAdjustPosition;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, param1: QWidget) callconv(.c) void `
    ///
    pub fn onAdjustPosition(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QWidget) callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnAdjustPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn updateMicroFocus(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superUpdateMicroFocus(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn create(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_Create(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superCreate(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn destroy(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_Destroy(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superDestroy(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) void) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn focusNextChild(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superFocusNextChild(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) bool) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn focusPreviousChild(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superFocusPreviousChild(self: TextAddonsWidgets__SelectSpecialCharDialog) bool {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) bool) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn sender(self: TextAddonsWidgets__SelectSpecialCharDialog) QObject {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superSender(self: TextAddonsWidgets__SelectSpecialCharDialog) QObject {
        return .{ .ptr = qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) QObject) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn senderSignalIndex(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn superSenderSignalIndex(self: TextAddonsWidgets__SelectSpecialCharDialog) i32 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn () callconv(.c) i32) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: TextAddonsWidgets__SelectSpecialCharDialog, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: TextAddonsWidgets__SelectSpecialCharDialog, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, [*:0]const u8) callconv(.c) i32) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: TextAddonsWidgets__SelectSpecialCharDialog, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: TextAddonsWidgets__SelectSpecialCharDialog, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, QMetaMethod) callconv(.c) bool) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: TextAddonsWidgets__SelectSpecialCharDialog, metricA: i32, metricB: i32) f64 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: TextAddonsWidgets__SelectSpecialCharDialog, metricA: i32, metricB: i32) f64 {
        return qtc.TextAddonsWidgets__SelectSpecialCharDialog_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog`
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, i32, i32) callconv(.c) f64) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    /// ` callback: *const fn (self: TextAddonsWidgets__SelectSpecialCharDialog, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: TextAddonsWidgets__SelectSpecialCharDialog, callback: *const fn (TextAddonsWidgets__SelectSpecialCharDialog, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/legacy/ktextaddons/html/classTextAddonsWidgets_1_1SelectSpecialCharDialog.html)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: TextAddonsWidgets__SelectSpecialCharDialog `
    ///
    pub fn delete(self: TextAddonsWidgets__SelectSpecialCharDialog) void {
        qtc.TextAddonsWidgets__SelectSpecialCharDialog_Delete(@ptrCast(self.ptr));
    }
};
