const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractButton = @import("libqt6").QAbstractButton;
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QCheckBox = @import("libqt6").QCheckBox;
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
const QPushButton = @import("libqt6").QPushButton;
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
const qmessagebox_enums = enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html)
pub const QMessageBox = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMessageBox,

    pub const _is_QMessageBox = {};
    pub const _is_QDialog = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QMessageBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QMessageBox {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QMessageBox_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QMessageBox object.
    ///
    pub fn New2() QMessageBox {
        return .{ .ptr = qtc.QMessageBox_new2() };
    }

    /// New3 constructs a new QMessageBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: qmessagebox_enums.Icon `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn New3(icon: i32, title: []const u8, text: []const u8) QMessageBox {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QMessageBox_new3(@bitCast(icon), title_str, text_str) };
    }

    /// New4 constructs a new QMessageBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` icon: qmessagebox_enums.Icon `
    ///
    /// ` button0: i32 `
    ///
    /// ` button1: i32 `
    ///
    /// ` button2: i32 `
    ///
    pub fn New4(title: []const u8, text: []const u8, icon: i32, button0: i32, button1: i32, button2: i32) QMessageBox {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QMessageBox_new4(title_str, text_str, @bitCast(icon), @bitCast(button0), @bitCast(button1), @bitCast(button2)) };
    }

    /// New5 constructs a new QMessageBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: qmessagebox_enums.Icon `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` buttons: flag of qmessagebox_enums.StandardButton `
    ///
    pub fn New5(icon: i32, title: []const u8, text: []const u8, buttons: i32) QMessageBox {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QMessageBox_new5(@bitCast(icon), title_str, text_str, @bitCast(buttons)) };
    }

    /// New6 constructs a new QMessageBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: qmessagebox_enums.Icon `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` buttons: flag of qmessagebox_enums.StandardButton `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New6(icon: i32, title: []const u8, text: []const u8, buttons: i32, parent: anytype) QMessageBox {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QMessageBox_new6(@bitCast(icon), title_str, text_str, @bitCast(buttons), @ptrCast(parent.ptr)) };
    }

    /// New7 constructs a new QMessageBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: qmessagebox_enums.Icon `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` buttons: flag of qmessagebox_enums.StandardButton `
    ///
    /// ` parent: QWidget `
    ///
    /// ` flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn New7(icon: i32, title: []const u8, text: []const u8, buttons: i32, parent: anytype, flags: i32) QMessageBox {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QMessageBox_new7(@bitCast(icon), title_str, text_str, @bitCast(buttons), @ptrCast(parent.ptr), @bitCast(flags)) };
    }

    /// New8 constructs a new QMessageBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` icon: qmessagebox_enums.Icon `
    ///
    /// ` button0: i32 `
    ///
    /// ` button1: i32 `
    ///
    /// ` button2: i32 `
    ///
    /// ` parent: QWidget `
    ///
    pub fn New8(title: []const u8, text: []const u8, icon: i32, button0: i32, button1: i32, button2: i32, parent: anytype) QMessageBox {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QMessageBox_new8(title_str, text_str, @bitCast(icon), @bitCast(button0), @bitCast(button1), @bitCast(button2), @ptrCast(parent.ptr)) };
    }

    /// New9 constructs a new QMessageBox object.
    ///
    /// ## Parameter(s):
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` icon: qmessagebox_enums.Icon `
    ///
    /// ` button0: i32 `
    ///
    /// ` button1: i32 `
    ///
    /// ` button2: i32 `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn New9(title: []const u8, text: []const u8, icon: i32, button0: i32, button1: i32, button2: i32, parent: anytype, f: i32) QMessageBox {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QMessageBox_new9(title_str, text_str, @bitCast(icon), @bitCast(button0), @bitCast(button1), @bitCast(button2), @ptrCast(parent.ptr), @bitCast(f)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn MetaObject(self: QMessageBox) QMetaObject {
        return .{ .ptr = qtc.QMessageBox_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QMessageBox, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QMessageBox_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QMessageBox `
    ///
    pub fn SuperMetaObject(self: QMessageBox) QMetaObject {
        return .{ .ptr = qtc.QMessageBox_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QMessageBox, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMessageBox_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QMessageBox, callback: *const fn (QMessageBox, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QMessageBox_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QMessageBox, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QMessageBox_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QMessageBox, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMessageBox_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QMessageBox, callback: *const fn (QMessageBox, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QMessageBox_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QMessageBox, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QMessageBox_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#addButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` button: QAbstractButton `
    ///
    /// ` role: qmessagebox_enums.ButtonRole `
    ///
    pub fn AddButton(self: QMessageBox, button: anytype, role: i32) void {
        comptime _ = @TypeOf(button)._is_QAbstractButton;
        qtc.QMessageBox_AddButton(@ptrCast(self.ptr), @ptrCast(button.ptr), @bitCast(role));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#addButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` text: []const u8 `
    ///
    /// ` role: qmessagebox_enums.ButtonRole `
    ///
    pub fn AddButton2(self: QMessageBox, text: []const u8, role: i32) QPushButton {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.QMessageBox_AddButton2(@ptrCast(self.ptr), text_str, @bitCast(role)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#addButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` button: qmessagebox_enums.StandardButton `
    ///
    pub fn AddButton3(self: QMessageBox, button: i32) QPushButton {
        return .{ .ptr = qtc.QMessageBox_AddButton3(@ptrCast(self.ptr), @bitCast(button)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#removeButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` button: QAbstractButton `
    ///
    pub fn RemoveButton(self: QMessageBox, button: anytype) void {
        comptime _ = @TypeOf(button)._is_QAbstractButton;
        qtc.QMessageBox_RemoveButton(@ptrCast(self.ptr), @ptrCast(button.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#buttons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Buttons(self: QMessageBox, allocator: std.mem.Allocator) []QAbstractButton {
        const _arr: qtc.libqt_list = qtc.QMessageBox_Buttons(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAbstractButton, _arr.len) catch @panic("qmessagebox.Buttons: Memory allocation failed");
        const _data: [*]QtC.QAbstractButton = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#buttonRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` button: QAbstractButton `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.ButtonRole `
    ///
    pub fn ButtonRole(self: QMessageBox, button: anytype) i32 {
        comptime _ = @TypeOf(button)._is_QAbstractButton;
        return qtc.QMessageBox_ButtonRole(@ptrCast(self.ptr), @ptrCast(button.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setStandardButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` buttons: flag of qmessagebox_enums.StandardButton `
    ///
    pub fn SetStandardButtons(self: QMessageBox, buttons: i32) void {
        qtc.QMessageBox_SetStandardButtons(@ptrCast(self.ptr), @bitCast(buttons));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#standardButtons)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qmessagebox_enums.StandardButton `
    ///
    pub fn StandardButtons(self: QMessageBox) i32 {
        return qtc.QMessageBox_StandardButtons(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#standardButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` button: QAbstractButton `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn StandardButton(self: QMessageBox, button: anytype) i32 {
        comptime _ = @TypeOf(button)._is_QAbstractButton;
        return qtc.QMessageBox_StandardButton(@ptrCast(self.ptr), @ptrCast(button.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#button)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` which: qmessagebox_enums.StandardButton `
    ///
    pub fn Button(self: QMessageBox, which: i32) QAbstractButton {
        return .{ .ptr = qtc.QMessageBox_Button(@ptrCast(self.ptr), @bitCast(which)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#defaultButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn DefaultButton(self: QMessageBox) QPushButton {
        return .{ .ptr = qtc.QMessageBox_DefaultButton(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setDefaultButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` button: QPushButton `
    ///
    pub fn SetDefaultButton(self: QMessageBox, button: anytype) void {
        comptime _ = @TypeOf(button)._is_QPushButton;
        qtc.QMessageBox_SetDefaultButton(@ptrCast(self.ptr), @ptrCast(button.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setDefaultButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` button: qmessagebox_enums.StandardButton `
    ///
    pub fn SetDefaultButton2(self: QMessageBox, button: i32) void {
        qtc.QMessageBox_SetDefaultButton2(@ptrCast(self.ptr), @bitCast(button));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#escapeButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn EscapeButton(self: QMessageBox) QAbstractButton {
        return .{ .ptr = qtc.QMessageBox_EscapeButton(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setEscapeButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` button: QAbstractButton `
    ///
    pub fn SetEscapeButton(self: QMessageBox, button: anytype) void {
        comptime _ = @TypeOf(button)._is_QAbstractButton;
        qtc.QMessageBox_SetEscapeButton(@ptrCast(self.ptr), @ptrCast(button.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setEscapeButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` button: qmessagebox_enums.StandardButton `
    ///
    pub fn SetEscapeButton2(self: QMessageBox, button: i32) void {
        qtc.QMessageBox_SetEscapeButton2(@ptrCast(self.ptr), @bitCast(button));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#clickedButton)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ClickedButton(self: QMessageBox) QAbstractButton {
        return .{ .ptr = qtc.QMessageBox_ClickedButton(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMessageBox_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QMessageBox, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QMessageBox_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.Icon `
    ///
    pub fn Icon(self: QMessageBox) i32 {
        return qtc.QMessageBox_Icon(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` icon: qmessagebox_enums.Icon `
    ///
    pub fn SetIcon(self: QMessageBox, icon: i32) void {
        qtc.QMessageBox_SetIcon(@ptrCast(self.ptr), @bitCast(icon));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#iconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IconPixmap(self: QMessageBox) QPixmap {
        return .{ .ptr = qtc.QMessageBox_IconPixmap(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setIconPixmap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` pixmap: QPixmap `
    ///
    pub fn SetIconPixmap(self: QMessageBox, pixmap: anytype) void {
        comptime _ = @TypeOf(pixmap)._is_QPixmap;
        qtc.QMessageBox_SetIconPixmap(@ptrCast(self.ptr), @ptrCast(pixmap.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#textFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextFormat `
    ///
    pub fn TextFormat(self: QMessageBox) i32 {
        return qtc.QMessageBox_TextFormat(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setTextFormat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` format: qnamespace_enums.TextFormat `
    ///
    pub fn SetTextFormat(self: QMessageBox, format: i32) void {
        qtc.QMessageBox_SetTextFormat(@ptrCast(self.ptr), @bitCast(format));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setTextInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` flags: flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn SetTextInteractionFlags(self: QMessageBox, flags: i32) void {
        qtc.QMessageBox_SetTextInteractionFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#textInteractionFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.TextInteractionFlag `
    ///
    pub fn TextInteractionFlags(self: QMessageBox) i32 {
        return qtc.QMessageBox_TextInteractionFlags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setCheckBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` cb: QCheckBox `
    ///
    pub fn SetCheckBox(self: QMessageBox, cb: anytype) void {
        comptime _ = @TypeOf(cb)._is_QCheckBox;
        qtc.QMessageBox_SetCheckBox(@ptrCast(self.ptr), @ptrCast(cb.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#checkBox)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn CheckBox(self: QMessageBox) QCheckBox {
        return .{ .ptr = qtc.QMessageBox_CheckBox(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` option: qmessagebox_enums.Option `
    ///
    pub fn SetOption(self: QMessageBox, option: i32) void {
        qtc.QMessageBox_SetOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#testOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` option: qmessagebox_enums.Option `
    ///
    pub fn TestOption(self: QMessageBox, option: i32) bool {
        return qtc.QMessageBox_TestOption(@ptrCast(self.ptr), @bitCast(option));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setOptions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` options: flag of qmessagebox_enums.Option `
    ///
    pub fn SetOptions(self: QMessageBox, options: i32) void {
        qtc.QMessageBox_SetOptions(@ptrCast(self.ptr), @bitCast(options));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#options)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qmessagebox_enums.Option `
    ///
    pub fn Options(self: QMessageBox) i32 {
        return qtc.QMessageBox_Options(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Information(parent: anytype, title: []const u8, text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Information(@ptrCast(parent.ptr), title_str, text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: qmessagebox_enums.StandardButton `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Information2(parent: anytype, title: []const u8, text: []const u8, button0: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Information2(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#question)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Question(parent: anytype, title: []const u8, text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Question(@ptrCast(parent.ptr), title_str, text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#question)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: qmessagebox_enums.StandardButton `
    ///
    /// ` button1: qmessagebox_enums.StandardButton `
    ///
    pub fn Question2(parent: anytype, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Question2(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0), @bitCast(button1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Warning(parent: anytype, title: []const u8, text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Warning(@ptrCast(parent.ptr), title_str, text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: qmessagebox_enums.StandardButton `
    ///
    /// ` button1: qmessagebox_enums.StandardButton `
    ///
    pub fn Warning2(parent: anytype, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Warning2(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0), @bitCast(button1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Critical(parent: anytype, title: []const u8, text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Critical(@ptrCast(parent.ptr), title_str, text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: qmessagebox_enums.StandardButton `
    ///
    /// ` button1: qmessagebox_enums.StandardButton `
    ///
    pub fn Critical2(parent: anytype, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Critical2(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0), @bitCast(button1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#about)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn About(parent: anytype, title: []const u8, text: []const u8) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QMessageBox_About(@ptrCast(parent.ptr), title_str, text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#aboutQt)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn AboutQt(parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QMessageBox_AboutQt(@ptrCast(parent.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: i32 `
    ///
    pub fn Information3(parent: anytype, title: []const u8, text: []const u8, button0: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Information3(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    pub fn Information4(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        return qtc.QMessageBox_Information4(@ptrCast(parent.ptr), title_str, text_str, button0Text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#question)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: i32 `
    ///
    pub fn Question3(parent: anytype, title: []const u8, text: []const u8, button0: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Question3(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#question)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    pub fn Question4(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        return qtc.QMessageBox_Question4(@ptrCast(parent.ptr), title_str, text_str, button0Text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: i32 `
    ///
    /// ` button1: i32 `
    ///
    pub fn Warning3(parent: anytype, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Warning3(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0), @bitCast(button1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    pub fn Warning4(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        return qtc.QMessageBox_Warning4(@ptrCast(parent.ptr), title_str, text_str, button0Text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: i32 `
    ///
    /// ` button1: i32 `
    ///
    pub fn Critical3(parent: anytype, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Critical3(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0), @bitCast(button1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    pub fn Critical4(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        return qtc.QMessageBox_Critical4(@ptrCast(parent.ptr), title_str, text_str, button0Text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#buttonText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` button: i32 `
    ///
    pub fn ButtonText(self: QMessageBox, allocator: std.mem.Allocator, button: i32) []const u8 {
        var _str = qtc.QMessageBox_ButtonText(@ptrCast(self.ptr), @bitCast(button));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.ButtonText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setButtonText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` button: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetButtonText(self: QMessageBox, button: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QMessageBox_SetButtonText(@ptrCast(self.ptr), @bitCast(button), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#informativeText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn InformativeText(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMessageBox_InformativeText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.InformativeText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setInformativeText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetInformativeText(self: QMessageBox, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QMessageBox_SetInformativeText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#detailedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DetailedText(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QMessageBox_DetailedText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.DetailedText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setDetailedText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetDetailedText(self: QMessageBox, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QMessageBox_SetDetailedText(@ptrCast(self.ptr), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` title: []const u8 `
    ///
    pub fn SetWindowTitle(self: QMessageBox, title: []const u8) void {
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QMessageBox_SetWindowTitle(@ptrCast(self.ptr), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QMessageBox, windowModality: i32) void {
        qtc.QMessageBox_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#standardIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` icon: qmessagebox_enums.Icon `
    ///
    pub fn StandardIcon(icon: i32) QPixmap {
        return .{ .ptr = qtc.QMessageBox_StandardIcon(@bitCast(icon)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#buttonClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` button: QAbstractButton `
    ///
    pub fn ButtonClicked(self: QMessageBox, button: anytype) void {
        comptime _ = @TypeOf(button)._is_QAbstractButton;
        qtc.QMessageBox_ButtonClicked(@ptrCast(self.ptr), @ptrCast(button.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#buttonClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, button: QAbstractButton) callconv(.c) void `
    ///
    pub fn OnButtonClicked(self: QMessageBox, callback: *const fn (QMessageBox, QAbstractButton) callconv(.c) void) void {
        qtc.QMessageBox_Connect_ButtonClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: QMessageBox, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QMessageBox_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QMessageBox, callback: *const fn (QMessageBox, QEvent) callconv(.c) bool) void {
        qtc.QMessageBox_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: QMessageBox, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QMessageBox_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#resizeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QMessageBox_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#resizeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QMessageBox, callback: *const fn (QMessageBox, QResizeEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#resizeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QMessageBox_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#showEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QMessageBox_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#showEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QMessageBox, callback: *const fn (QMessageBox, QShowEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperShowEvent` instead
    ///
    pub const QBaseShowEvent = SuperShowEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#showEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QMessageBox_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#closeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QMessageBox_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#closeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QMessageBox, callback: *const fn (QMessageBox, QCloseEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperCloseEvent` instead
    ///
    pub const QBaseCloseEvent = SuperCloseEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#closeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QMessageBox_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#keyPressEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QMessageBox_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#keyPressEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QMessageBox, callback: *const fn (QMessageBox, QKeyEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#keyPressEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QMessageBox_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#changeEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn ChangeEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QMessageBox_ChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#changeEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QMessageBox, callback: *const fn (QMessageBox, QEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#changeEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperChangeEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QMessageBox_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#setOption)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` option: qmessagebox_enums.Option `
    ///
    /// ` on: bool `
    ///
    pub fn SetOption2(self: QMessageBox, option: i32, on: bool) void {
        qtc.QMessageBox_SetOption2(@ptrCast(self.ptr), @bitCast(option), on);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` buttons: flag of qmessagebox_enums.StandardButton `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Information42(parent: anytype, title: []const u8, text: []const u8, buttons: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Information42(@ptrCast(parent.ptr), title_str, text_str, @bitCast(buttons));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` buttons: flag of qmessagebox_enums.StandardButton `
    ///
    /// ` defaultButton: qmessagebox_enums.StandardButton `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Information5(parent: anytype, title: []const u8, text: []const u8, buttons: i32, defaultButton: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Information5(@ptrCast(parent.ptr), title_str, text_str, @bitCast(buttons), @bitCast(defaultButton));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: qmessagebox_enums.StandardButton `
    ///
    /// ` button1: qmessagebox_enums.StandardButton `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Information52(parent: anytype, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Information52(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0), @bitCast(button1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#question)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` buttons: flag of qmessagebox_enums.StandardButton `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Question42(parent: anytype, title: []const u8, text: []const u8, buttons: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Question42(@ptrCast(parent.ptr), title_str, text_str, @bitCast(buttons));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#question)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` buttons: flag of qmessagebox_enums.StandardButton `
    ///
    /// ` defaultButton: qmessagebox_enums.StandardButton `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Question5(parent: anytype, title: []const u8, text: []const u8, buttons: i32, defaultButton: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Question5(@ptrCast(parent.ptr), title_str, text_str, @bitCast(buttons), @bitCast(defaultButton));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` buttons: flag of qmessagebox_enums.StandardButton `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Warning42(parent: anytype, title: []const u8, text: []const u8, buttons: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Warning42(@ptrCast(parent.ptr), title_str, text_str, @bitCast(buttons));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` buttons: flag of qmessagebox_enums.StandardButton `
    ///
    /// ` defaultButton: qmessagebox_enums.StandardButton `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Warning5(parent: anytype, title: []const u8, text: []const u8, buttons: i32, defaultButton: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Warning5(@ptrCast(parent.ptr), title_str, text_str, @bitCast(buttons), @bitCast(defaultButton));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` buttons: flag of qmessagebox_enums.StandardButton `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Critical42(parent: anytype, title: []const u8, text: []const u8, buttons: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Critical42(@ptrCast(parent.ptr), title_str, text_str, @bitCast(buttons));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` buttons: flag of qmessagebox_enums.StandardButton `
    ///
    /// ` defaultButton: qmessagebox_enums.StandardButton `
    ///
    /// ## Returns:
    ///
    /// ` qmessagebox_enums.StandardButton `
    ///
    pub fn Critical5(parent: anytype, title: []const u8, text: []const u8, buttons: i32, defaultButton: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Critical5(@ptrCast(parent.ptr), title_str, text_str, @bitCast(buttons), @bitCast(defaultButton));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#aboutQt)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn AboutQt2(parent: anytype, title: []const u8) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        qtc.QMessageBox_AboutQt2(@ptrCast(parent.ptr), title_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: i32 `
    ///
    /// ` button1: i32 `
    ///
    pub fn Information53(parent: anytype, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Information53(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0), @bitCast(button1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: i32 `
    ///
    /// ` button1: i32 `
    ///
    /// ` button2: i32 `
    ///
    pub fn Information6(parent: anytype, title: []const u8, text: []const u8, button0: i32, button1: i32, button2: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Information6(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0), @bitCast(button1), @bitCast(button2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    pub fn Information54(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        return qtc.QMessageBox_Information54(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    /// ` button2Text: []const u8 `
    ///
    pub fn Information62(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        const button2Text_str = qtc.libqt_string{
            .len = button2Text.len,
            .data = button2Text.ptr,
        };
        return qtc.QMessageBox_Information62(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str, button2Text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    /// ` button2Text: []const u8 `
    ///
    /// ` defaultButtonNumber: i32 `
    ///
    pub fn Information7(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        const button2Text_str = qtc.libqt_string{
            .len = button2Text.len,
            .data = button2Text.ptr,
        };
        return qtc.QMessageBox_Information7(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, @bitCast(defaultButtonNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#information)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    /// ` button2Text: []const u8 `
    ///
    /// ` defaultButtonNumber: i32 `
    ///
    /// ` escapeButtonNumber: i32 `
    ///
    pub fn Information8(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32, escapeButtonNumber: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        const button2Text_str = qtc.libqt_string{
            .len = button2Text.len,
            .data = button2Text.ptr,
        };
        return qtc.QMessageBox_Information8(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, @bitCast(defaultButtonNumber), @bitCast(escapeButtonNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#question)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: i32 `
    ///
    /// ` button1: i32 `
    ///
    pub fn Question52(parent: anytype, title: []const u8, text: []const u8, button0: i32, button1: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Question52(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0), @bitCast(button1));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#question)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: i32 `
    ///
    /// ` button1: i32 `
    ///
    /// ` button2: i32 `
    ///
    pub fn Question6(parent: anytype, title: []const u8, text: []const u8, button0: i32, button1: i32, button2: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Question6(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0), @bitCast(button1), @bitCast(button2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#question)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    pub fn Question53(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        return qtc.QMessageBox_Question53(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#question)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    /// ` button2Text: []const u8 `
    ///
    pub fn Question62(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        const button2Text_str = qtc.libqt_string{
            .len = button2Text.len,
            .data = button2Text.ptr,
        };
        return qtc.QMessageBox_Question62(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str, button2Text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#question)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    /// ` button2Text: []const u8 `
    ///
    /// ` defaultButtonNumber: i32 `
    ///
    pub fn Question7(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        const button2Text_str = qtc.libqt_string{
            .len = button2Text.len,
            .data = button2Text.ptr,
        };
        return qtc.QMessageBox_Question7(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, @bitCast(defaultButtonNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#question)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    /// ` button2Text: []const u8 `
    ///
    /// ` defaultButtonNumber: i32 `
    ///
    /// ` escapeButtonNumber: i32 `
    ///
    pub fn Question8(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32, escapeButtonNumber: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        const button2Text_str = qtc.libqt_string{
            .len = button2Text.len,
            .data = button2Text.ptr,
        };
        return qtc.QMessageBox_Question8(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, @bitCast(defaultButtonNumber), @bitCast(escapeButtonNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: i32 `
    ///
    /// ` button1: i32 `
    ///
    /// ` button2: i32 `
    ///
    pub fn Warning6(parent: anytype, title: []const u8, text: []const u8, button0: i32, button1: i32, button2: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Warning6(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0), @bitCast(button1), @bitCast(button2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    pub fn Warning52(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        return qtc.QMessageBox_Warning52(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    /// ` button2Text: []const u8 `
    ///
    pub fn Warning62(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        const button2Text_str = qtc.libqt_string{
            .len = button2Text.len,
            .data = button2Text.ptr,
        };
        return qtc.QMessageBox_Warning62(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str, button2Text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    /// ` button2Text: []const u8 `
    ///
    /// ` defaultButtonNumber: i32 `
    ///
    pub fn Warning7(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        const button2Text_str = qtc.libqt_string{
            .len = button2Text.len,
            .data = button2Text.ptr,
        };
        return qtc.QMessageBox_Warning7(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, @bitCast(defaultButtonNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#warning)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    /// ` button2Text: []const u8 `
    ///
    /// ` defaultButtonNumber: i32 `
    ///
    /// ` escapeButtonNumber: i32 `
    ///
    pub fn Warning8(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32, escapeButtonNumber: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        const button2Text_str = qtc.libqt_string{
            .len = button2Text.len,
            .data = button2Text.ptr,
        };
        return qtc.QMessageBox_Warning8(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, @bitCast(defaultButtonNumber), @bitCast(escapeButtonNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0: i32 `
    ///
    /// ` button1: i32 `
    ///
    /// ` button2: i32 `
    ///
    pub fn Critical6(parent: anytype, title: []const u8, text: []const u8, button0: i32, button1: i32, button2: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return qtc.QMessageBox_Critical6(@ptrCast(parent.ptr), title_str, text_str, @bitCast(button0), @bitCast(button1), @bitCast(button2));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    pub fn Critical52(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        return qtc.QMessageBox_Critical52(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    /// ` button2Text: []const u8 `
    ///
    pub fn Critical62(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        const button2Text_str = qtc.libqt_string{
            .len = button2Text.len,
            .data = button2Text.ptr,
        };
        return qtc.QMessageBox_Critical62(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str, button2Text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    /// ` button2Text: []const u8 `
    ///
    /// ` defaultButtonNumber: i32 `
    ///
    pub fn Critical7(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        const button2Text_str = qtc.libqt_string{
            .len = button2Text.len,
            .data = button2Text.ptr,
        };
        return qtc.QMessageBox_Critical7(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, @bitCast(defaultButtonNumber));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#critical)
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    /// ` title: []const u8 `
    ///
    /// ` text: []const u8 `
    ///
    /// ` button0Text: []const u8 `
    ///
    /// ` button1Text: []const u8 `
    ///
    /// ` button2Text: []const u8 `
    ///
    /// ` defaultButtonNumber: i32 `
    ///
    /// ` escapeButtonNumber: i32 `
    ///
    pub fn Critical8(parent: anytype, title: []const u8, text: []const u8, button0Text: []const u8, button1Text: []const u8, button2Text: []const u8, defaultButtonNumber: i32, escapeButtonNumber: i32) i32 {
        comptime _ = @TypeOf(parent)._is_QWidget;
        const title_str = qtc.libqt_string{
            .len = title.len,
            .data = title.ptr,
        };
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const button0Text_str = qtc.libqt_string{
            .len = button0Text.len,
            .data = button0Text.ptr,
        };
        const button1Text_str = qtc.libqt_string{
            .len = button1Text.len,
            .data = button1Text.ptr,
        };
        const button2Text_str = qtc.libqt_string{
            .len = button2Text.len,
            .data = button2Text.ptr,
        };
        return qtc.QMessageBox_Critical8(@ptrCast(parent.ptr), title_str, text_str, button0Text_str, button1Text_str, button2Text_str, @bitCast(defaultButtonNumber), @bitCast(escapeButtonNumber));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#result)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Result(self: QMessageBox) i32 {
        return qtc.QDialog_Result(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setSizeGripEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` sizeGripEnabled: bool `
    ///
    pub fn SetSizeGripEnabled(self: QMessageBox, sizeGripEnabled: bool) void {
        qtc.QDialog_SetSizeGripEnabled(@ptrCast(self.ptr), sizeGripEnabled);
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#isSizeGripEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsSizeGripEnabled(self: QMessageBox) bool {
        return qtc.QDialog_IsSizeGripEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` modal: bool `
    ///
    pub fn SetModal(self: QMessageBox, modal: bool) void {
        qtc.QDialog_SetModal(@ptrCast(self.ptr), modal);
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setResult)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` r: i32 `
    ///
    pub fn SetResult(self: QMessageBox, r: i32) void {
        qtc.QDialog_SetResult(@ptrCast(self.ptr), @bitCast(r));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` result: i32 `
    ///
    pub fn Finished(self: QMessageBox, result: i32) void {
        qtc.QDialog_Finished(@ptrCast(self.ptr), @bitCast(result));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#finished)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, result: i32) callconv(.c) void `
    ///
    pub fn OnFinished(self: QMessageBox, callback: *const fn (QMessageBox, i32) callconv(.c) void) void {
        qtc.QDialog_Connect_Finished(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Accepted(self: QMessageBox) void {
        qtc.QDialog_Accepted(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accepted)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox) callconv(.c) void `
    ///
    pub fn OnAccepted(self: QMessageBox, callback: *const fn (QMessageBox) callconv(.c) void) void {
        qtc.QDialog_Connect_Accepted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Rejected(self: QMessageBox) void {
        qtc.QDialog_Rejected(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#rejected)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox) callconv(.c) void `
    ///
    pub fn OnRejected(self: QMessageBox, callback: *const fn (QMessageBox) callconv(.c) void) void {
        qtc.QDialog_Connect_Rejected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn WinId(self: QMessageBox) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn CreateWinId(self: QMessageBox) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn InternalWinId(self: QMessageBox) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn EffectiveWinId(self: QMessageBox) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Style(self: QMessageBox) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QMessageBox, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsTopLevel(self: QMessageBox) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsWindow(self: QMessageBox) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsModal(self: QMessageBox) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QMessageBox) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsEnabled(self: QMessageBox) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QMessageBox, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QMessageBox, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QMessageBox, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QMessageBox, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn FrameGeometry(self: QMessageBox) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Geometry(self: QMessageBox) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn NormalGeometry(self: QMessageBox) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn X(self: QMessageBox) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Y(self: QMessageBox) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Pos(self: QMessageBox) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn FrameSize(self: QMessageBox) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Size(self: QMessageBox) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Width(self: QMessageBox) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Height(self: QMessageBox) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Rect(self: QMessageBox) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ChildrenRect(self: QMessageBox) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ChildrenRegion(self: QMessageBox) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn MinimumSize(self: QMessageBox) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn MaximumSize(self: QMessageBox) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn MinimumWidth(self: QMessageBox) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn MinimumHeight(self: QMessageBox) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn MaximumWidth(self: QMessageBox) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn MaximumHeight(self: QMessageBox) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QMessageBox, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QMessageBox, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QMessageBox, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QMessageBox, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QMessageBox, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QMessageBox, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QMessageBox, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QMessageBox, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SizeIncrement(self: QMessageBox) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QMessageBox, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QMessageBox, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn BaseSize(self: QMessageBox) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QMessageBox, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QMessageBox, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QMessageBox, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QMessageBox, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QMessageBox, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QMessageBox, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QMessageBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QMessageBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QMessageBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QMessageBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QMessageBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QMessageBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QMessageBox, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QMessageBox, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QMessageBox, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QMessageBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QMessageBox, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QMessageBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QMessageBox, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QMessageBox `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QMessageBox, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QMessageBox `
    ///
    pub fn Window(self: QMessageBox) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn NativeParentWidget(self: QMessageBox) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn TopLevelWidget(self: QMessageBox) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Palette(self: QMessageBox) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QMessageBox, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QMessageBox, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QMessageBox) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QMessageBox, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QMessageBox) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Font(self: QMessageBox) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QMessageBox, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn FontMetrics(self: QMessageBox) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn FontInfo(self: QMessageBox) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Cursor(self: QMessageBox) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QMessageBox, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn UnsetCursor(self: QMessageBox) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QMessageBox, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn HasMouseTracking(self: QMessageBox) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn UnderMouse(self: QMessageBox) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QMessageBox, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn HasTabletTracking(self: QMessageBox) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QMessageBox, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QMessageBox, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Mask(self: QMessageBox) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ClearMask(self: QMessageBox) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QMessageBox, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QMessageBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Grab(self: QMessageBox) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn GraphicsEffect(self: QMessageBox) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QMessageBox, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QMessageBox, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QMessageBox, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyleSheet)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QMessageBox, styleSheet: []const u8) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QMessageBox, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn WindowIcon(self: QMessageBox) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QMessageBox, windowIconText: []const u8) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QMessageBox, windowRole: []const u8) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QMessageBox, filePath: []const u8) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QMessageBox, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn WindowOpacity(self: QMessageBox) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsWindowModified(self: QMessageBox) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QMessageBox, toolTip: []const u8) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QMessageBox, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ToolTipDuration(self: QMessageBox) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QMessageBox, statusTip: []const u8) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QMessageBox, whatsThis: []const u8) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QMessageBox, name: []const u8) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QMessageBox, description: []const u8) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QMessageBox, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QMessageBox) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn UnsetLayoutDirection(self: QMessageBox) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QMessageBox, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Locale(self: QMessageBox) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn UnsetLocale(self: QMessageBox) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsRightToLeft(self: QMessageBox) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsLeftToRight(self: QMessageBox) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SetFocus(self: QMessageBox) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsActiveWindow(self: QMessageBox) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ActivateWindow(self: QMessageBox) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ClearFocus(self: QMessageBox) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QMessageBox, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QMessageBox) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QMessageBox, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn HasFocus(self: QMessageBox) bool {
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
    /// ` self: QMessageBox `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QMessageBox, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn FocusProxy(self: QMessageBox) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QMessageBox) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QMessageBox, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn GrabMouse(self: QMessageBox) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ReleaseMouse(self: QMessageBox) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn GrabKeyboard(self: QMessageBox) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ReleaseKeyboard(self: QMessageBox) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QMessageBox, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QMessageBox, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QMessageBox, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QMessageBox, id: i32) void {
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
    /// ` self: QMessageBox `
    ///
    pub fn UpdatesEnabled(self: QMessageBox) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QMessageBox, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn GraphicsProxyWidget(self: QMessageBox) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Update(self: QMessageBox) void {
        qtc.QWidget_Update(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Repaint(self: QMessageBox) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QMessageBox, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QMessageBox, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QMessageBox, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Show(self: QMessageBox) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Hide(self: QMessageBox) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ShowMinimized(self: QMessageBox) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ShowMaximized(self: QMessageBox) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ShowFullScreen(self: QMessageBox) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ShowNormal(self: QMessageBox) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Close(self: QMessageBox) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Raise(self: QMessageBox) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Lower(self: QMessageBox) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QMessageBox, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QMessageBox, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QMessageBox, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QMessageBox, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QMessageBox, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qmessagebox.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QMessageBox, geometry: []u8) bool {
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
    /// ` self: QMessageBox `
    ///
    pub fn AdjustSize(self: QMessageBox) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsVisible(self: QMessageBox) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QMessageBox, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsHidden(self: QMessageBox) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsMinimized(self: QMessageBox) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsMaximized(self: QMessageBox) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsFullScreen(self: QMessageBox) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QMessageBox) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QMessageBox, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QMessageBox, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SizePolicy(self: QMessageBox) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QMessageBox, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QMessageBox, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn VisibleRegion(self: QMessageBox) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QMessageBox, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QMessageBox, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ContentsMargins(self: QMessageBox) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ContentsRect(self: QMessageBox) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Layout(self: QMessageBox) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QMessageBox, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn UpdateGeometry(self: QMessageBox) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QMessageBox, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QMessageBox, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QMessageBox, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QMessageBox, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn FocusWidget(self: QMessageBox) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn NextInFocusChain(self: QMessageBox) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn PreviousInFocusChain(self: QMessageBox) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn AcceptDrops(self: QMessageBox) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QMessageBox, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QMessageBox, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QMessageBox, actions: []QAction) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QMessageBox, before: anytype, actions: []QAction) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QMessageBox, before: anytype, action: anytype) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QMessageBox, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QMessageBox, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qmessagebox.Actions: Memory allocation failed");
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
    /// ` self: QMessageBox `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QMessageBox, text: []const u8) QAction {
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
    /// ` self: QMessageBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QMessageBox, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QMessageBox `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QMessageBox, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QMessageBox `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QMessageBox, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QMessageBox `
    ///
    pub fn ParentWidget(self: QMessageBox) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QMessageBox, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QMessageBox) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QMessageBox, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QMessageBox, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QMessageBox) i32 {
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
    /// ` self: QMessageBox `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QMessageBox, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QMessageBox, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QMessageBox, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QMessageBox, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QMessageBox, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn EnsurePolished(self: QMessageBox) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QMessageBox, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn AutoFillBackground(self: QMessageBox) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QMessageBox, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn BackingStore(self: QMessageBox) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn WindowHandle(self: QMessageBox) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Screen(self: QMessageBox) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QMessageBox, screen: anytype) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QMessageBox, title: []const u8) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QMessageBox, callback: *const fn (QMessageBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QMessageBox, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QMessageBox, callback: *const fn (QMessageBox, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QMessageBox, iconText: []const u8) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QMessageBox, callback: *const fn (QMessageBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QMessageBox, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QMessageBox, callback: *const fn (QMessageBox, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QMessageBox) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QMessageBox, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QMessageBox, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QMessageBox, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QMessageBox, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QMessageBox, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QMessageBox, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QMessageBox, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QMessageBox, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QMessageBox, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QMessageBox, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QMessageBox, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QMessageBox, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QMessageBox, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QMessageBox, param1: i32, on: bool) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QMessageBox, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qmessagebox.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QMessageBox, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsWidgetType(self: QMessageBox) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsWindowType(self: QMessageBox) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn IsQuickItemType(self: QMessageBox) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SignalsBlocked(self: QMessageBox) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QMessageBox, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Thread(self: QMessageBox) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QMessageBox, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QMessageBox, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QMessageBox, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QMessageBox, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QMessageBox, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QMessageBox, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qmessagebox.Children: Memory allocation failed");
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
    /// ` self: QMessageBox `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QMessageBox, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QMessageBox, obj: anytype) void {
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
    /// ` self: QMessageBox `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QMessageBox, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QMessageBox `
    ///
    pub fn Disconnect3(self: QMessageBox) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QMessageBox, receiver: anytype) bool {
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
    /// ` self: QMessageBox `
    ///
    pub fn DumpObjectTree(self: QMessageBox) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn DumpObjectInfo(self: QMessageBox) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QMessageBox, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QMessageBox `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QMessageBox, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QMessageBox, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qmessagebox.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qmessagebox.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QMessageBox `
    ///
    pub fn BindingStorage(self: QMessageBox) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn BindingStorage2(self: QMessageBox) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Destroyed(self: QMessageBox) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QMessageBox, callback: *const fn (QMessageBox) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Parent(self: QMessageBox) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QMessageBox, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn DeleteLater(self: QMessageBox) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QMessageBox, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QMessageBox, time: i64, timerType: i32) i32 {
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
    /// ` self: QMessageBox `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QMessageBox, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QMessageBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QMessageBox, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QMessageBox, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QMessageBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QMessageBox, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QMessageBox `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QMessageBox, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QMessageBox `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QMessageBox, callback: *const fn (QMessageBox, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn PaintingActive(self: QMessageBox) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn WidthMM(self: QMessageBox) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn HeightMM(self: QMessageBox) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn LogicalDpiX(self: QMessageBox) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn LogicalDpiY(self: QMessageBox) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn PhysicalDpiX(self: QMessageBox) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn PhysicalDpiY(self: QMessageBox) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn DevicePixelRatio(self: QMessageBox) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn DevicePixelRatioF(self: QMessageBox) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn ColorCount(self: QMessageBox) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Depth(self: QMessageBox) i32 {
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

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QMessageBox, visible: bool) void {
        qtc.QMessageBox_SetVisible(@ptrCast(self.ptr), visible);
    }

    /// ### DEPRECATED: Use `SuperSetVisible` instead
    ///
    pub const QBaseSetVisible = SuperSetVisible;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QMessageBox, visible: bool) void {
        qtc.QMessageBox_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QMessageBox, callback: *const fn (QMessageBox, bool) callconv(.c) void) void {
        qtc.QMessageBox_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SizeHint(self: QMessageBox) QSize {
        return .{ .ptr = qtc.QMessageBox_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperSizeHint` instead
    ///
    pub const QBaseSizeHint = SuperSizeHint;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SuperSizeHint(self: QMessageBox) QSize {
        return .{ .ptr = qtc.QMessageBox_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QMessageBox, callback: *const fn () callconv(.c) QSize) void {
        qtc.QMessageBox_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn MinimumSizeHint(self: QMessageBox) QSize {
        return .{ .ptr = qtc.QMessageBox_MinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperMinimumSizeHint` instead
    ///
    pub const QBaseMinimumSizeHint = SuperMinimumSizeHint;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SuperMinimumSizeHint(self: QMessageBox) QSize {
        return .{ .ptr = qtc.QMessageBox_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QMessageBox, callback: *const fn () callconv(.c) QSize) void {
        qtc.QMessageBox_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Open(self: QMessageBox) void {
        qtc.QMessageBox_Open(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperOpen` instead
    ///
    pub const QBaseOpen = SuperOpen;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SuperOpen(self: QMessageBox) void {
        qtc.QMessageBox_SuperOpen(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#open)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnOpen(self: QMessageBox, callback: *const fn () callconv(.c) void) void {
        qtc.QMessageBox_OnOpen(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Exec(self: QMessageBox) i32 {
        return qtc.QMessageBox_Exec(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperExec` instead
    ///
    pub const QBaseExec = SuperExec;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SuperExec(self: QMessageBox) i32 {
        return qtc.QMessageBox_SuperExec(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#exec)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnExec(self: QMessageBox, callback: *const fn () callconv(.c) i32) void {
        qtc.QMessageBox_OnExec(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn Done(self: QMessageBox, param1: i32) void {
        qtc.QMessageBox_Done(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `SuperDone` instead
    ///
    pub const QBaseDone = SuperDone;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperDone(self: QMessageBox, param1: i32) void {
        qtc.QMessageBox_SuperDone(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#done)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, param1: i32) callconv(.c) void `
    ///
    pub fn OnDone(self: QMessageBox, callback: *const fn (QMessageBox, i32) callconv(.c) void) void {
        qtc.QMessageBox_OnDone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Accept(self: QMessageBox) void {
        qtc.QMessageBox_Accept(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperAccept` instead
    ///
    pub const QBaseAccept = SuperAccept;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SuperAccept(self: QMessageBox) void {
        qtc.QMessageBox_SuperAccept(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#accept)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnAccept(self: QMessageBox, callback: *const fn () callconv(.c) void) void {
        qtc.QMessageBox_OnAccept(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Reject(self: QMessageBox) void {
        qtc.QMessageBox_Reject(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReject` instead
    ///
    pub const QBaseReject = SuperReject;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SuperReject(self: QMessageBox) void {
        qtc.QMessageBox_SuperReject(@ptrCast(self.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#reject)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReject(self: QMessageBox, callback: *const fn () callconv(.c) void) void {
        qtc.QMessageBox_OnReject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QMessageBox_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QMessageBox_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QMessageBox, callback: *const fn (QMessageBox, QContextMenuEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn EventFilter(self: QMessageBox, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QMessageBox_EventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QObject `
    ///
    /// ` param2: QEvent `
    ///
    pub fn SuperEventFilter(self: QMessageBox, param1: anytype, param2: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        comptime _ = @TypeOf(param2)._is_QEvent;
        return qtc.QMessageBox_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(param1.ptr), @ptrCast(param2.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, param1: QObject, param2: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QMessageBox, callback: *const fn (QMessageBox, QObject, QEvent) callconv(.c) bool) void {
        qtc.QMessageBox_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn DevType(self: QMessageBox) i32 {
        return qtc.QMessageBox_DevType(@ptrCast(self.ptr));
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
    /// ` self: QMessageBox `
    ///
    pub fn SuperDevType(self: QMessageBox) i32 {
        return qtc.QMessageBox_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QMessageBox, callback: *const fn () callconv(.c) i32) void {
        qtc.QMessageBox_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QMessageBox, param1: i32) i32 {
        return qtc.QMessageBox_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QMessageBox `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QMessageBox, param1: i32) i32 {
        return qtc.QMessageBox_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QMessageBox, callback: *const fn (QMessageBox, i32) callconv(.c) i32) void {
        qtc.QMessageBox_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn HasHeightForWidth(self: QMessageBox) bool {
        return qtc.QMessageBox_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QMessageBox `
    ///
    pub fn SuperHasHeightForWidth(self: QMessageBox) bool {
        return qtc.QMessageBox_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QMessageBox, callback: *const fn () callconv(.c) bool) void {
        qtc.QMessageBox_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn PaintEngine(self: QMessageBox) QPaintEngine {
        return .{ .ptr = qtc.QMessageBox_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QMessageBox `
    ///
    pub fn SuperPaintEngine(self: QMessageBox) QPaintEngine {
        return .{ .ptr = qtc.QMessageBox_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QMessageBox, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QMessageBox_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QMessageBox_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QMessageBox_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QMessageBox, callback: *const fn (QMessageBox, QMouseEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QMessageBox_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QMessageBox_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QMessageBox, callback: *const fn (QMessageBox, QMouseEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QMessageBox_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QMessageBox_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QMessageBox, callback: *const fn (QMessageBox, QMouseEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QMessageBox_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QMessageBox_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QMessageBox, callback: *const fn (QMessageBox, QMouseEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn WheelEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QMessageBox_WheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QWheelEvent;
        qtc.QMessageBox_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QMessageBox, callback: *const fn (QMessageBox, QWheelEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QMessageBox_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QMessageBox_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QMessageBox, callback: *const fn (QMessageBox, QKeyEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QMessageBox_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QMessageBox_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QMessageBox, callback: *const fn (QMessageBox, QFocusEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QMessageBox_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QMessageBox_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QMessageBox, callback: *const fn (QMessageBox, QFocusEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QMessageBox_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QMessageBox_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QMessageBox, callback: *const fn (QMessageBox, QEnterEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QMessageBox_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QMessageBox_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QMessageBox, callback: *const fn (QMessageBox, QEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QMessageBox_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QMessageBox_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QMessageBox, callback: *const fn (QMessageBox, QPaintEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QMessageBox_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QMessageBox_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QMessageBox, callback: *const fn (QMessageBox, QMoveEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QMessageBox_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QMessageBox_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QMessageBox, callback: *const fn (QMessageBox, QTabletEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QMessageBox_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QMessageBox_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QMessageBox, callback: *const fn (QMessageBox, QActionEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QMessageBox_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QMessageBox_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QMessageBox, callback: *const fn (QMessageBox, QDragEnterEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QMessageBox_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QMessageBox_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QMessageBox, callback: *const fn (QMessageBox, QDragMoveEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QMessageBox_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QMessageBox_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QMessageBox, callback: *const fn (QMessageBox, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QMessageBox_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QMessageBox_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#dropEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QMessageBox, callback: *const fn (QMessageBox, QDropEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QMessageBox_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QMessageBox_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QMessageBox, callback: *const fn (QMessageBox, QHideEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QMessageBox, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QMessageBox_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QMessageBox `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QMessageBox, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QMessageBox_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QMessageBox, callback: *const fn (QMessageBox, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QMessageBox_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QMessageBox, param1: i32) i32 {
        return qtc.QMessageBox_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QMessageBox `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QMessageBox, param1: i32) i32 {
        return qtc.QMessageBox_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QMessageBox, callback: *const fn (QMessageBox, i32) callconv(.c) i32) void {
        qtc.QMessageBox_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QMessageBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QMessageBox_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QMessageBox, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QMessageBox_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QMessageBox, callback: *const fn (QMessageBox, QPainter) callconv(.c) void) void {
        qtc.QMessageBox_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QMessageBox, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QMessageBox_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QMessageBox `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QMessageBox, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QMessageBox_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QMessageBox, callback: *const fn (QMessageBox, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QMessageBox_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SharedPainter(self: QMessageBox) QPainter {
        return .{ .ptr = qtc.QMessageBox_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QMessageBox `
    ///
    pub fn SuperSharedPainter(self: QMessageBox) QPainter {
        return .{ .ptr = qtc.QMessageBox_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QMessageBox, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QMessageBox_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QMessageBox_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` param1: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QInputMethodEvent;
        qtc.QMessageBox_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, param1: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QMessageBox, callback: *const fn (QMessageBox, QInputMethodEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QMessageBox, param1: i32) QVariant {
        return .{ .ptr = qtc.QMessageBox_InputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
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
    /// ` self: QMessageBox `
    ///
    /// ` param1: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QMessageBox, param1: i32) QVariant {
        return .{ .ptr = qtc.QMessageBox_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, param1: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QMessageBox, callback: *const fn (QMessageBox, i32) callconv(.c) QVariant) void {
        qtc.QMessageBox_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QMessageBox, next: bool) bool {
        return qtc.QMessageBox_FocusNextPrevChild(@ptrCast(self.ptr), next);
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
    /// ` self: QMessageBox `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QMessageBox, next: bool) bool {
        return qtc.QMessageBox_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QMessageBox, callback: *const fn (QMessageBox, bool) callconv(.c) bool) void {
        qtc.QMessageBox_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QMessageBox_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QMessageBox_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QMessageBox, callback: *const fn (QMessageBox, QTimerEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QMessageBox_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QMessageBox_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QMessageBox, callback: *const fn (QMessageBox, QChildEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QMessageBox_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QMessageBox, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QMessageBox_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QMessageBox, callback: *const fn (QMessageBox, QEvent) callconv(.c) void) void {
        qtc.QMessageBox_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QMessageBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMessageBox_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QMessageBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMessageBox_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QMessageBox, callback: *const fn (QMessageBox, QMetaMethod) callconv(.c) void) void {
        qtc.QMessageBox_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QMessageBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMessageBox_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QMessageBox, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QMessageBox_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QMessageBox, callback: *const fn (QMessageBox, QMetaMethod) callconv(.c) void) void {
        qtc.QMessageBox_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn AdjustPosition(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QMessageBox_AdjustPosition(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperAdjustPosition` instead
    ///
    pub const QBaseAdjustPosition = SuperAdjustPosition;

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` param1: QWidget `
    ///
    pub fn SuperAdjustPosition(self: QMessageBox, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QMessageBox_SuperAdjustPosition(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QDialog
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdialog.html#adjustPosition)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, param1: QWidget) callconv(.c) void `
    ///
    pub fn OnAdjustPosition(self: QMessageBox, callback: *const fn (QMessageBox, QWidget) callconv(.c) void) void {
        qtc.QMessageBox_OnAdjustPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn UpdateMicroFocus(self: QMessageBox) void {
        qtc.QMessageBox_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QMessageBox `
    ///
    pub fn SuperUpdateMicroFocus(self: QMessageBox) void {
        qtc.QMessageBox_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QMessageBox, callback: *const fn () callconv(.c) void) void {
        qtc.QMessageBox_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Create(self: QMessageBox) void {
        qtc.QMessageBox_Create(@ptrCast(self.ptr));
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
    /// ` self: QMessageBox `
    ///
    pub fn SuperCreate(self: QMessageBox) void {
        qtc.QMessageBox_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QMessageBox, callback: *const fn () callconv(.c) void) void {
        qtc.QMessageBox_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Destroy(self: QMessageBox) void {
        qtc.QMessageBox_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QMessageBox `
    ///
    pub fn SuperDestroy(self: QMessageBox) void {
        qtc.QMessageBox_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QMessageBox, callback: *const fn () callconv(.c) void) void {
        qtc.QMessageBox_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn FocusNextChild(self: QMessageBox) bool {
        return qtc.QMessageBox_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QMessageBox `
    ///
    pub fn SuperFocusNextChild(self: QMessageBox) bool {
        return qtc.QMessageBox_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QMessageBox, callback: *const fn () callconv(.c) bool) void {
        qtc.QMessageBox_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn FocusPreviousChild(self: QMessageBox) bool {
        return qtc.QMessageBox_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QMessageBox `
    ///
    pub fn SuperFocusPreviousChild(self: QMessageBox) bool {
        return qtc.QMessageBox_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QMessageBox, callback: *const fn () callconv(.c) bool) void {
        qtc.QMessageBox_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Sender(self: QMessageBox) QObject {
        return .{ .ptr = qtc.QMessageBox_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QMessageBox `
    ///
    pub fn SuperSender(self: QMessageBox) QObject {
        return .{ .ptr = qtc.QMessageBox_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QMessageBox, callback: *const fn () callconv(.c) QObject) void {
        qtc.QMessageBox_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    pub fn SenderSignalIndex(self: QMessageBox) i32 {
        return qtc.QMessageBox_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QMessageBox `
    ///
    pub fn SuperSenderSignalIndex(self: QMessageBox) i32 {
        return qtc.QMessageBox_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QMessageBox, callback: *const fn () callconv(.c) i32) void {
        qtc.QMessageBox_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QMessageBox, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMessageBox_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QMessageBox `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QMessageBox, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QMessageBox_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QMessageBox, callback: *const fn (QMessageBox, [*:0]const u8) callconv(.c) i32) void {
        qtc.QMessageBox_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QMessageBox, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMessageBox_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QMessageBox `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QMessageBox, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QMessageBox_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QMessageBox, callback: *const fn (QMessageBox, QMetaMethod) callconv(.c) bool) void {
        qtc.QMessageBox_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMessageBox `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QMessageBox, metricA: i32, metricB: i32) f64 {
        return qtc.QMessageBox_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QMessageBox `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QMessageBox, metricA: i32, metricB: i32) f64 {
        return qtc.QMessageBox_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox`
    ///
    /// ` callback: *const fn (self: QMessageBox, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QMessageBox, callback: *const fn (QMessageBox, i32, i32) callconv(.c) f64) void {
        qtc.QMessageBox_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QMessageBox `
    ///
    /// ` callback: *const fn (self: QMessageBox, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QMessageBox, callback: *const fn (QMessageBox, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#dtor.QMessageBox)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QMessageBox `
    ///
    pub fn Delete(self: QMessageBox) void {
        qtc.QMessageBox_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmessagebox.html#public-types)
pub const enums = struct {
    pub const Option = enum(i32) {
        pub const DontUseNativeDialog: i32 = 1;
    };

    pub const Icon = enum(i32) {
        pub const NoIcon: i32 = 0;
        pub const Information: i32 = 1;
        pub const Warning: i32 = 2;
        pub const Critical: i32 = 3;
        pub const Question: i32 = 4;
    };

    pub const ButtonRole = enum(i32) {
        pub const InvalidRole: i32 = -1;
        pub const AcceptRole: i32 = 0;
        pub const RejectRole: i32 = 1;
        pub const DestructiveRole: i32 = 2;
        pub const ActionRole: i32 = 3;
        pub const HelpRole: i32 = 4;
        pub const YesRole: i32 = 5;
        pub const NoRole: i32 = 6;
        pub const ResetRole: i32 = 7;
        pub const ApplyRole: i32 = 8;
        pub const NRoles: i32 = 9;
    };

    pub const StandardButton = enum(i32) {
        pub const NoButton: i32 = 0;
        pub const Ok: i32 = 1024;
        pub const Save: i32 = 2048;
        pub const SaveAll: i32 = 4096;
        pub const Open: i32 = 8192;
        pub const Yes: i32 = 16384;
        pub const YesToAll: i32 = 32768;
        pub const No: i32 = 65536;
        pub const NoToAll: i32 = 131072;
        pub const Abort: i32 = 262144;
        pub const Retry: i32 = 524288;
        pub const Ignore: i32 = 1048576;
        pub const Close: i32 = 2097152;
        pub const Cancel: i32 = 4194304;
        pub const Discard: i32 = 8388608;
        pub const Help: i32 = 16777216;
        pub const Apply: i32 = 33554432;
        pub const Reset: i32 = 67108864;
        pub const RestoreDefaults: i32 = 134217728;
        pub const FirstButton: i32 = 1024;
        pub const LastButton: i32 = 134217728;
        pub const YesAll: i32 = 32768;
        pub const NoAll: i32 = 131072;
        pub const Default: i32 = 256;
        pub const Escape: i32 = 512;
        pub const FlagMask: i32 = 768;
        pub const ButtonMask: i32 = -769;
    };
};
