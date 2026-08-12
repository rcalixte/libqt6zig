const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QAbstractItemDelegate = @import("libqt6").QAbstractItemDelegate;
const QAbstractItemModel = @import("libqt6").QAbstractItemModel;
const QAction = @import("libqt6").QAction;
const QActionEvent = @import("libqt6").QActionEvent;
const QBackingStore = @import("libqt6").QBackingStore;
const QBindingStorage = @import("libqt6").QBindingStorage;
const QBitmap = @import("libqt6").QBitmap;
const QBrush = @import("libqt6").QBrush;
const QChildEvent = @import("libqt6").QChildEvent;
const QCloseEvent = @import("libqt6").QCloseEvent;
const QContextMenuEvent = @import("libqt6").QContextMenuEvent;
const QCursor = @import("libqt6").QCursor;
const QDataStream = @import("libqt6").QDataStream;
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
const QItemSelection = @import("libqt6").QItemSelection;
const QItemSelectionModel = @import("libqt6").QItemSelectionModel;
const QKeyEvent = @import("libqt6").QKeyEvent;
const QKeySequence = @import("libqt6").QKeySequence;
const QLayout = @import("libqt6").QLayout;
const QLocale = @import("libqt6").QLocale;
const QMargins = @import("libqt6").QMargins;
const QMetaMethod = @import("libqt6").QMetaMethod;
const QMetaObject = @import("libqt6").QMetaObject;
const QMetaObject__Connection = @import("libqt6").QMetaObject__Connection;
const QMimeData = @import("libqt6").QMimeData;
const QModelIndex = @import("libqt6").QModelIndex;
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
const QStyleOptionViewItem = @import("libqt6").QStyleOptionViewItem;
const QTabletEvent = @import("libqt6").QTabletEvent;
const QThread = @import("libqt6").QThread;
const QTimerEvent = @import("libqt6").QTimerEvent;
const QVariant = @import("libqt6").QVariant;
const QWheelEvent = @import("libqt6").QWheelEvent;
const QWidget = @import("libqt6").QWidget;
const QWindow = @import("libqt6").QWindow;
const qabstractitemdelegate_enums = @import("libqabstractitemdelegate.zig").enums;
const qabstractitemview_enums = @import("libqabstractitemview.zig").enums;
const qabstractscrollarea_enums = @import("libqabstractscrollarea.zig").enums;
const qframe_enums = @import("libqframe.zig").enums;
const qitemselectionmodel_enums = @import("libqitemselectionmodel.zig").enums;
const qlistview_enums = @import("libqlistview.zig").enums;
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html)
pub const QListWidgetItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QListWidgetItem,

    pub const _is_QListWidgetItem = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QListWidgetItem object in C++ memory
    ///
    pub fn new() QListWidgetItem {
        return .{ .ptr = qtc.QListWidgetItem_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QListWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new2(_text: []const u8) QListWidgetItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QListWidgetItem_new2(text_str) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QListWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn new3(_icon: anytype, _text: []const u8) QListWidgetItem {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QListWidgetItem_new3(@ptrCast(_icon.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QListWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QListWidgetItem `
    ///
    pub fn new4(other: anytype) QListWidgetItem {
        comptime _ = @TypeOf(other)._is_QListWidgetItem;
        return .{ .ptr = qtc.QListWidgetItem_new4(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QListWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` listview: QListWidget `
    ///
    pub fn new5(listview: anytype) QListWidgetItem {
        comptime _ = @TypeOf(listview)._is_QListWidget;
        return .{ .ptr = qtc.QListWidgetItem_new5(@ptrCast(listview.ptr)) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QListWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` listview: QListWidget `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new6(listview: anytype, typeVal: i32) QListWidgetItem {
        comptime _ = @TypeOf(listview)._is_QListWidget;
        return .{ .ptr = qtc.QListWidgetItem_new6(@ptrCast(listview.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QListWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` listview: QListWidget `
    ///
    pub fn new7(_text: []const u8, listview: anytype) QListWidgetItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(listview)._is_QListWidget;
        return .{ .ptr = qtc.QListWidgetItem_new7(text_str, @ptrCast(listview.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QListWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` listview: QListWidget `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new8(_text: []const u8, listview: anytype, typeVal: i32) QListWidgetItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(listview)._is_QListWidget;
        return .{ .ptr = qtc.QListWidgetItem_new8(text_str, @ptrCast(listview.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new9` instead
    ///
    pub const New9 = new9;

    /// Allocate a new QListWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` listview: QListWidget `
    ///
    pub fn new9(_icon: anytype, _text: []const u8, listview: anytype) QListWidgetItem {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(listview)._is_QListWidget;
        return .{ .ptr = qtc.QListWidgetItem_new9(@ptrCast(_icon.ptr), text_str, @ptrCast(listview.ptr)) };
    }

    /// ### DEPRECATED: Use `new10` instead
    ///
    pub const New10 = new10;

    /// Allocate a new QListWidgetItem object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` listview: QListWidget `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new10(_icon: anytype, _text: []const u8, listview: anytype, typeVal: i32) QListWidgetItem {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(listview)._is_QListWidget;
        return .{ .ptr = qtc.QListWidgetItem_new10(@ptrCast(_icon.ptr), text_str, @ptrCast(listview.ptr), @bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `clone` instead
    ///
    pub const Clone = clone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn clone(self: QListWidgetItem) QListWidgetItem {
        return .{ .ptr = qtc.QListWidgetItem_Clone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onClone` instead
    ///
    pub const OnClone = onClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QListWidgetItem `
    ///
    pub fn onClone(self: QListWidgetItem, callback: *const fn () callconv(.c) QListWidgetItem) void {
        qtc.QListWidgetItem_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superClone` instead
    ///
    pub const SuperClone = superClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn superClone(self: QListWidgetItem) QListWidgetItem {
        return .{ .ptr = qtc.QListWidgetItem_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `listWidget` instead
    ///
    pub const ListWidget = listWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#listWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn listWidget(self: QListWidgetItem) QListWidget {
        return .{ .ptr = qtc.QListWidgetItem_ListWidget(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelected` instead
    ///
    pub const SetSelected = setSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` select: bool `
    ///
    pub fn setSelected(self: QListWidgetItem, select: bool) void {
        qtc.QListWidgetItem_SetSelected(@ptrCast(self.ptr), select);
    }

    /// ### DEPRECATED: Use `isSelected` instead
    ///
    pub const IsSelected = isSelected;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn isSelected(self: QListWidgetItem) bool {
        return qtc.QListWidgetItem_IsSelected(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHidden` instead
    ///
    pub const SetHidden = setHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` hide: bool `
    ///
    pub fn setHidden(self: QListWidgetItem, hide: bool) void {
        qtc.QListWidgetItem_SetHidden(@ptrCast(self.ptr), hide);
    }

    /// ### DEPRECATED: Use `isHidden` instead
    ///
    pub const IsHidden = isHidden;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn isHidden(self: QListWidgetItem) bool {
        return qtc.QListWidgetItem_IsHidden(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn flags(self: QListWidgetItem) i32 {
        return qtc.QListWidgetItem_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlags` instead
    ///
    pub const SetFlags = setFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` _flags: flag of qnamespace_enums.ItemFlag `
    ///
    pub fn setFlags(self: QListWidgetItem, _flags: i32) void {
        qtc.QListWidgetItem_SetFlags(@ptrCast(self.ptr), @bitCast(_flags));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: QListWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QListWidgetItem_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidgetItem.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setText` instead
    ///
    pub const SetText = setText;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn setText(self: QListWidgetItem, _text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        qtc.QListWidgetItem_SetText(@ptrCast(self.ptr), text_str);
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn icon(self: QListWidgetItem) QIcon {
        return .{ .ptr = qtc.QListWidgetItem_Icon(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setIcon(self: QListWidgetItem, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QListWidgetItem_SetIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
    }

    /// ### DEPRECATED: Use `statusTip` instead
    ///
    pub const StatusTip = statusTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QListWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QListWidgetItem_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidgetItem.statusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setStatusTip` instead
    ///
    pub const SetStatusTip = setStatusTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QListWidgetItem, _statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = _statusTip.len,
            .data = _statusTip.ptr,
        };
        qtc.QListWidgetItem_SetStatusTip(@ptrCast(self.ptr), statusTip_str);
    }

    /// ### DEPRECATED: Use `toolTip` instead
    ///
    pub const ToolTip = toolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QListWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QListWidgetItem_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidgetItem.toolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setToolTip` instead
    ///
    pub const SetToolTip = setToolTip;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QListWidgetItem, _toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = _toolTip.len,
            .data = _toolTip.ptr,
        };
        qtc.QListWidgetItem_SetToolTip(@ptrCast(self.ptr), toolTip_str);
    }

    /// ### DEPRECATED: Use `whatsThis` instead
    ///
    pub const WhatsThis = whatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QListWidgetItem, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QListWidgetItem_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidgetItem.whatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setWhatsThis` instead
    ///
    pub const SetWhatsThis = setWhatsThis;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QListWidgetItem, _whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = _whatsThis.len,
            .data = _whatsThis.ptr,
        };
        qtc.QListWidgetItem_SetWhatsThis(@ptrCast(self.ptr), whatsThis_str);
    }

    /// ### DEPRECATED: Use `font` instead
    ///
    pub const Font = font;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn font(self: QListWidgetItem) QFont {
        return .{ .ptr = qtc.QListWidgetItem_Font(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setFont` instead
    ///
    pub const SetFont = setFont;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QListWidgetItem, _font: anytype) void {
        comptime _ = @TypeOf(_font)._is_QFont;
        qtc.QListWidgetItem_SetFont(@ptrCast(self.ptr), @ptrCast(_font.ptr));
    }

    /// ### DEPRECATED: Use `textAlignment` instead
    ///
    pub const TextAlignment = textAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#textAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn textAlignment(self: QListWidgetItem) i32 {
        return qtc.QListWidgetItem_TextAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTextAlignment` instead
    ///
    pub const SetTextAlignment = setTextAlignment;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` alignment: i32 `
    ///
    pub fn setTextAlignment(self: QListWidgetItem, alignment: i32) void {
        qtc.QListWidgetItem_SetTextAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `setTextAlignment2` instead
    ///
    pub const SetTextAlignment2 = setTextAlignment2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` alignment: qnamespace_enums.AlignmentFlag `
    ///
    pub fn setTextAlignment2(self: QListWidgetItem, alignment: i32) void {
        qtc.QListWidgetItem_SetTextAlignment2(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `setTextAlignment3` instead
    ///
    pub const SetTextAlignment3 = setTextAlignment3;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setTextAlignment3(self: QListWidgetItem, alignment: i32) void {
        qtc.QListWidgetItem_SetTextAlignment3(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `background` instead
    ///
    pub const Background = background;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn background(self: QListWidgetItem) QBrush {
        return .{ .ptr = qtc.QListWidgetItem_Background(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setBackground` instead
    ///
    pub const SetBackground = setBackground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setBackground(self: QListWidgetItem, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QListWidgetItem_SetBackground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `foreground` instead
    ///
    pub const Foreground = foreground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn foreground(self: QListWidgetItem) QBrush {
        return .{ .ptr = qtc.QListWidgetItem_Foreground(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setForeground` instead
    ///
    pub const SetForeground = setForeground;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` brush: QBrush `
    ///
    pub fn setForeground(self: QListWidgetItem, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QListWidgetItem_SetForeground(@ptrCast(self.ptr), @ptrCast(brush.ptr));
    }

    /// ### DEPRECATED: Use `checkState` instead
    ///
    pub const CheckState = checkState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#checkState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CheckState `
    ///
    pub fn checkState(self: QListWidgetItem) i32 {
        return qtc.QListWidgetItem_CheckState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCheckState` instead
    ///
    pub const SetCheckState = setCheckState;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setCheckState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` state: qnamespace_enums.CheckState `
    ///
    pub fn setCheckState(self: QListWidgetItem, state: i32) void {
        qtc.QListWidgetItem_SetCheckState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `sizeHint` instead
    ///
    pub const SizeHint = sizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn sizeHint(self: QListWidgetItem) QSize {
        return .{ .ptr = qtc.QListWidgetItem_SizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSizeHint` instead
    ///
    pub const SetSizeHint = setSizeHint;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` size: QSize `
    ///
    pub fn setSizeHint(self: QListWidgetItem, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QListWidgetItem_SetSizeHint(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// ### DEPRECATED: Use `data` instead
    ///
    pub const Data = data;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` role: i32 `
    ///
    pub fn data(self: QListWidgetItem, role: i32) QVariant {
        return .{ .ptr = qtc.QListWidgetItem_Data(@ptrCast(self.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `onData` instead
    ///
    pub const OnData = onData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` callback: *const fn (self: QListWidgetItem, role: i32) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onData(self: QListWidgetItem, callback: *const fn (QListWidgetItem, i32) callconv(.c) QVariant) void {
        qtc.QListWidgetItem_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superData` instead
    ///
    pub const SuperData = superData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` role: i32 `
    ///
    pub fn superData(self: QListWidgetItem, role: i32) QVariant {
        return .{ .ptr = qtc.QListWidgetItem_SuperData(@ptrCast(self.ptr), @bitCast(role)) };
    }

    /// ### DEPRECATED: Use `setData` instead
    ///
    pub const SetData = setData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setData(self: QListWidgetItem, role: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QListWidgetItem_SetData(@ptrCast(self.ptr), @bitCast(role), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `onSetData` instead
    ///
    pub const OnSetData = onSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` callback: *const fn (self: QListWidgetItem, role: i32, value: QVariant) callconv(.c) void `
    ///
    pub fn onSetData(self: QListWidgetItem, callback: *const fn (QListWidgetItem, i32, QVariant) callconv(.c) void) void {
        qtc.QListWidgetItem_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetData` instead
    ///
    pub const SuperSetData = superSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn superSetData(self: QListWidgetItem, role: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QListWidgetItem_SuperSetData(@ptrCast(self.ptr), @bitCast(role), @ptrCast(value.ptr));
    }

    /// ### DEPRECATED: Use `operatorLesser` instead
    ///
    pub const OperatorLesser = operatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` other: QListWidgetItem `
    ///
    pub fn operatorLesser(self: QListWidgetItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QListWidgetItem;
        return qtc.QListWidgetItem_OperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `onOperatorLesser` instead
    ///
    pub const OnOperatorLesser = onOperatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator-lt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` callback: *const fn (self: QListWidgetItem, other: QListWidgetItem) callconv(.c) bool `
    ///
    pub fn onOperatorLesser(self: QListWidgetItem, callback: *const fn (QListWidgetItem, QListWidgetItem) callconv(.c) bool) void {
        qtc.QListWidgetItem_OnOperatorLesser(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superOperatorLesser` instead
    ///
    pub const SuperOperatorLesser = superOperatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator-lt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` other: QListWidgetItem `
    ///
    pub fn superOperatorLesser(self: QListWidgetItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QListWidgetItem;
        return qtc.QListWidgetItem_SuperOperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `read` instead
    ///
    pub const Read = read;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` in: QDataStream `
    ///
    pub fn read(self: QListWidgetItem, in: anytype) void {
        comptime _ = @TypeOf(in)._is_QDataStream;
        qtc.QListWidgetItem_Read(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `onRead` instead
    ///
    pub const OnRead = onRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` callback: *const fn (self: QListWidgetItem, in: QDataStream) callconv(.c) void `
    ///
    pub fn onRead(self: QListWidgetItem, callback: *const fn (QListWidgetItem, QDataStream) callconv(.c) void) void {
        qtc.QListWidgetItem_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superRead` instead
    ///
    pub const SuperRead = superRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#read)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` in: QDataStream `
    ///
    pub fn superRead(self: QListWidgetItem, in: anytype) void {
        comptime _ = @TypeOf(in)._is_QDataStream;
        qtc.QListWidgetItem_SuperRead(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### DEPRECATED: Use `write` instead
    ///
    pub const Write = write;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` out: QDataStream `
    ///
    pub fn write(self: QListWidgetItem, out: anytype) void {
        comptime _ = @TypeOf(out)._is_QDataStream;
        qtc.QListWidgetItem_Write(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `onWrite` instead
    ///
    pub const OnWrite = onWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` callback: *const fn (self: QListWidgetItem, out: QDataStream) callconv(.c) void `
    ///
    pub fn onWrite(self: QListWidgetItem, callback: *const fn (QListWidgetItem, QDataStream) callconv(.c) void) void {
        qtc.QListWidgetItem_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superWrite` instead
    ///
    pub const SuperWrite = superWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#write)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` out: QDataStream `
    ///
    pub fn superWrite(self: QListWidgetItem, out: anytype) void {
        comptime _ = @TypeOf(out)._is_QDataStream;
        qtc.QListWidgetItem_SuperWrite(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    /// ` other: QListWidgetItem `
    ///
    pub fn operatorAssign(self: QListWidgetItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QListWidgetItem;
        qtc.QListWidgetItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn type0(self: QListWidgetItem) i32 {
        return qtc.QListWidgetItem_Type(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidgetitem.html#dtor.QListWidgetItem)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QListWidgetItem `
    ///
    pub fn delete(self: QListWidgetItem) void {
        qtc.QListWidgetItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html)
pub const QListWidget = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QListWidget,

    pub const _is_QListWidget = {};
    pub const _is_QListView = {};
    pub const _is_QAbstractItemView = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QListWidget object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` _parent: QWidget `
    ///
    pub fn new(_parent: anytype) QListWidget {
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QListWidget_new(@ptrCast(_parent.ptr)) };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QListWidget object in C++ memory
    ///
    pub fn new2() QListWidget {
        return .{ .ptr = qtc.QListWidget_new2() };
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn metaObject(self: QListWidget) QMetaObject {
        return .{ .ptr = qtc.QListWidget_MetaObject(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn onMetaObject(self: QListWidget, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QListWidget_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn superMetaObject(self: QListWidget) QMetaObject {
        return .{ .ptr = qtc.QListWidget_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `metacast` instead
    ///
    pub const Metacast = metacast;

    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn metacast(self: QListWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QListWidget_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `onMetacast` instead
    ///
    pub const OnMetacast = onMetacast;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn onMetacast(self: QListWidget, callback: *const fn (QListWidget, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QListWidget_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacast` instead
    ///
    pub const SuperMetacast = superMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn superMetacast(self: QListWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QListWidget_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ### DEPRECATED: Use `metacall` instead
    ///
    pub const Metacall = metacall;

    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn metacall(self: QListWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QListWidget_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### DEPRECATED: Use `onMetacall` instead
    ///
    pub const OnMetacall = onMetacall;

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn onMetacall(self: QListWidget, callback: *const fn (QListWidget, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QListWidget_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMetacall` instead
    ///
    pub const SuperMetacall = superMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn superMetacall(self: QListWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QListWidget_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setSelectionModel` instead
    ///
    pub const SetSelectionModel = setSelectionModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _selectionModel: QItemSelectionModel `
    ///
    pub fn setSelectionModel(self: QListWidget, _selectionModel: anytype) void {
        comptime _ = @TypeOf(_selectionModel)._is_QItemSelectionModel;
        qtc.QListWidget_SetSelectionModel(@ptrCast(self.ptr), @ptrCast(_selectionModel.ptr));
    }

    /// ### DEPRECATED: Use `onSetSelectionModel` instead
    ///
    pub const OnSetSelectionModel = onSetSelectionModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, selectionModel: QItemSelectionModel) callconv(.c) void `
    ///
    pub fn onSetSelectionModel(self: QListWidget, callback: *const fn (QListWidget, QItemSelectionModel) callconv(.c) void) void {
        qtc.QListWidget_OnSetSelectionModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetSelectionModel` instead
    ///
    pub const SuperSetSelectionModel = superSetSelectionModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#setSelectionModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _selectionModel: QItemSelectionModel `
    ///
    pub fn superSetSelectionModel(self: QListWidget, _selectionModel: anytype) void {
        comptime _ = @TypeOf(_selectionModel)._is_QItemSelectionModel;
        qtc.QListWidget_SuperSetSelectionModel(@ptrCast(self.ptr), @ptrCast(_selectionModel.ptr));
    }

    /// ### DEPRECATED: Use `item` instead
    ///
    pub const Item = item;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#item)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn item(self: QListWidget, _row: i32) QListWidgetItem {
        return .{ .ptr = qtc.QListWidget_Item(@ptrCast(self.ptr), @bitCast(_row)) };
    }

    /// ### DEPRECATED: Use `row` instead
    ///
    pub const Row = row;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#row)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn row(self: QListWidget, _item: anytype) i32 {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        return qtc.QListWidget_Row(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `insertItem` instead
    ///
    pub const InsertItem = insertItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn insertItem(self: QListWidget, _row: i32, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_InsertItem(@ptrCast(self.ptr), @bitCast(_row), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `insertItem2` instead
    ///
    pub const InsertItem2 = insertItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#insertItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` label: []const u8 `
    ///
    pub fn insertItem2(self: QListWidget, _row: i32, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QListWidget_InsertItem2(@ptrCast(self.ptr), @bitCast(_row), label_str);
    }

    /// ### DEPRECATED: Use `insertItems` instead
    ///
    pub const InsertItems = insertItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#insertItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _row: i32 `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn insertItems(self: QListWidget, allocator: std.mem.Allocator, _row: i32, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QListWidget.insertItems: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QListWidget_InsertItems(@ptrCast(self.ptr), @bitCast(_row), labels_list);
    }

    /// ### DEPRECATED: Use `addItem` instead
    ///
    pub const AddItem = addItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` label: []const u8 `
    ///
    pub fn addItem(self: QListWidget, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QListWidget_AddItem(@ptrCast(self.ptr), label_str);
    }

    /// ### DEPRECATED: Use `addItem2` instead
    ///
    pub const AddItem2 = addItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#addItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn addItem2(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_AddItem2(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `addItems` instead
    ///
    pub const AddItems = addItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#addItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn addItems(self: QListWidget, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("QListWidget.addItems: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |str_item, i|
            labels_arr[i] = .{
                .len = str_item.len,
                .data = str_item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QListWidget_AddItems(@ptrCast(self.ptr), labels_list);
    }

    /// ### DEPRECATED: Use `takeItem` instead
    ///
    pub const TakeItem = takeItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#takeItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn takeItem(self: QListWidget, _row: i32) QListWidgetItem {
        return .{ .ptr = qtc.QListWidget_TakeItem(@ptrCast(self.ptr), @bitCast(_row)) };
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn count(self: QListWidget) i32 {
        return qtc.QListWidget_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentItem` instead
    ///
    pub const CurrentItem = currentItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#currentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn currentItem(self: QListWidget) QListWidgetItem {
        return .{ .ptr = qtc.QListWidget_CurrentItem(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setCurrentItem` instead
    ///
    pub const SetCurrentItem = setCurrentItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn setCurrentItem(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_SetCurrentItem(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentItem2` instead
    ///
    pub const SetCurrentItem2 = setCurrentItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn setCurrentItem2(self: QListWidget, _item: anytype, command: i32) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_SetCurrentItem2(@ptrCast(self.ptr), @ptrCast(_item.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `currentRow` instead
    ///
    pub const CurrentRow = currentRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#currentRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn currentRow(self: QListWidget) i32 {
        return qtc.QListWidget_CurrentRow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentRow` instead
    ///
    pub const SetCurrentRow = setCurrentRow;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn setCurrentRow(self: QListWidget, _row: i32) void {
        qtc.QListWidget_SetCurrentRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `setCurrentRow2` instead
    ///
    pub const SetCurrentRow2 = setCurrentRow2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#setCurrentRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn setCurrentRow2(self: QListWidget, _row: i32, command: i32) void {
        qtc.QListWidget_SetCurrentRow2(@ptrCast(self.ptr), @bitCast(_row), @bitCast(command));
    }

    /// ### DEPRECATED: Use `itemAt` instead
    ///
    pub const ItemAt = itemAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn itemAt(self: QListWidget, p: anytype) QListWidgetItem {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QListWidget_ItemAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `itemAt2` instead
    ///
    pub const ItemAt2 = itemAt2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn itemAt2(self: QListWidget, _x: i32, _y: i32) QListWidgetItem {
        return .{ .ptr = qtc.QListWidget_ItemAt2(@ptrCast(self.ptr), @bitCast(_x), @bitCast(_y)) };
    }

    /// ### DEPRECATED: Use `visualItemRect` instead
    ///
    pub const VisualItemRect = visualItemRect;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#visualItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn visualItemRect(self: QListWidget, _item: anytype) QRect {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        return .{ .ptr = qtc.QListWidget_VisualItemRect(@ptrCast(self.ptr), @ptrCast(_item.ptr)) };
    }

    /// ### DEPRECATED: Use `sortItems` instead
    ///
    pub const SortItems = sortItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#sortItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn sortItems(self: QListWidget) void {
        qtc.QListWidget_SortItems(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSortingEnabled` instead
    ///
    pub const SetSortingEnabled = setSortingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#setSortingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setSortingEnabled(self: QListWidget, enable: bool) void {
        qtc.QListWidget_SetSortingEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isSortingEnabled` instead
    ///
    pub const IsSortingEnabled = isSortingEnabled;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#isSortingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn isSortingEnabled(self: QListWidget) bool {
        return qtc.QListWidget_IsSortingEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `editItem` instead
    ///
    pub const EditItem = editItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#editItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn editItem(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_EditItem(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `openPersistentEditor` instead
    ///
    pub const OpenPersistentEditor = openPersistentEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#openPersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn openPersistentEditor(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_OpenPersistentEditor(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `closePersistentEditor` instead
    ///
    pub const ClosePersistentEditor = closePersistentEditor;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#closePersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn closePersistentEditor(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_ClosePersistentEditor(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `isPersistentEditorOpen` instead
    ///
    pub const IsPersistentEditorOpen = isPersistentEditorOpen;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#isPersistentEditorOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn isPersistentEditorOpen(self: QListWidget, _item: anytype) bool {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        return qtc.QListWidget_IsPersistentEditorOpen(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `itemWidget` instead
    ///
    pub const ItemWidget = itemWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn itemWidget(self: QListWidget, _item: anytype) QWidget {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        return .{ .ptr = qtc.QListWidget_ItemWidget(@ptrCast(self.ptr), @ptrCast(_item.ptr)) };
    }

    /// ### DEPRECATED: Use `setItemWidget` instead
    ///
    pub const SetItemWidget = setItemWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#setItemWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setItemWidget(self: QListWidget, _item: anytype, widget: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QListWidget_SetItemWidget(@ptrCast(self.ptr), @ptrCast(_item.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `removeItemWidget` instead
    ///
    pub const RemoveItemWidget = removeItemWidget;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#removeItemWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn removeItemWidget(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_RemoveItemWidget(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `selectedItems` instead
    ///
    pub const SelectedItems = selectedItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedItems(self: QListWidget, allocator: std.mem.Allocator) []QListWidgetItem {
        const _arr: qtc.libqt_list = qtc.QListWidget_SelectedItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QListWidgetItem, _arr.len) catch @panic("QListWidget.selectedItems: Memory allocation failed");
        const _data_val: [*]QtC.QListWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `findItems` instead
    ///
    pub const FindItems = findItems;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn findItems(self: QListWidget, allocator: std.mem.Allocator, _text: []const u8, _flags: i32) []QListWidgetItem {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QListWidget_FindItems(@ptrCast(self.ptr), text_str, @bitCast(_flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QListWidgetItem, _arr.len) catch @panic("QListWidget.findItems: Memory allocation failed");
        const _data_val: [*]QtC.QListWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `items` instead
    ///
    pub const Items = items;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#items)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _data: QMimeData `
    ///
    pub fn items(self: QListWidget, allocator: std.mem.Allocator, _data: anytype) []QListWidgetItem {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        const _arr: qtc.libqt_list = qtc.QListWidget_Items(@ptrCast(self.ptr), @ptrCast(_data.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QListWidgetItem, _arr.len) catch @panic("QListWidget.items: Memory allocation failed");
        const _data_val: [*]QtC.QListWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `indexFromItem` instead
    ///
    pub const IndexFromItem = indexFromItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#indexFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn indexFromItem(self: QListWidget, _item: anytype) QModelIndex {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        return .{ .ptr = qtc.QListWidget_IndexFromItem(@ptrCast(self.ptr), @ptrCast(_item.ptr)) };
    }

    /// ### DEPRECATED: Use `itemFromIndex` instead
    ///
    pub const ItemFromIndex = itemFromIndex;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn itemFromIndex(self: QListWidget, index: anytype) QListWidgetItem {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QListWidget_ItemFromIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `dropEvent` instead
    ///
    pub const DropEvent = dropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn dropEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QListWidget_DropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDropEvent` instead
    ///
    pub const OnDropEvent = onDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, event: QDropEvent) callconv(.c) void `
    ///
    pub fn onDropEvent(self: QListWidget, callback: *const fn (QListWidget, QDropEvent) callconv(.c) void) void {
        qtc.QListWidget_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropEvent` instead
    ///
    pub const SuperDropEvent = superDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QDropEvent `
    ///
    pub fn superDropEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDropEvent;
        qtc.QListWidget_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `scrollToItem` instead
    ///
    pub const ScrollToItem = scrollToItem;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#scrollToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn scrollToItem(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_ScrollToItem(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn clear(self: QListWidget) void {
        qtc.QListWidget_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `itemPressed` instead
    ///
    pub const ItemPressed = itemPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn itemPressed(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_ItemPressed(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemPressed` instead
    ///
    pub const OnItemPressed = onItemPressed;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, item: QListWidgetItem) callconv(.c) void `
    ///
    pub fn onItemPressed(self: QListWidget, callback: *const fn (QListWidget, QListWidgetItem) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemClicked` instead
    ///
    pub const ItemClicked = itemClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn itemClicked(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_ItemClicked(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemClicked` instead
    ///
    pub const OnItemClicked = onItemClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, item: QListWidgetItem) callconv(.c) void `
    ///
    pub fn onItemClicked(self: QListWidget, callback: *const fn (QListWidget, QListWidgetItem) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemDoubleClicked` instead
    ///
    pub const ItemDoubleClicked = itemDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemDoubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn itemDoubleClicked(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_ItemDoubleClicked(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemDoubleClicked` instead
    ///
    pub const OnItemDoubleClicked = onItemDoubleClicked;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemDoubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, item: QListWidgetItem) callconv(.c) void `
    ///
    pub fn onItemDoubleClicked(self: QListWidget, callback: *const fn (QListWidget, QListWidgetItem) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemActivated` instead
    ///
    pub const ItemActivated = itemActivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn itemActivated(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_ItemActivated(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemActivated` instead
    ///
    pub const OnItemActivated = onItemActivated;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, item: QListWidgetItem) callconv(.c) void `
    ///
    pub fn onItemActivated(self: QListWidget, callback: *const fn (QListWidget, QListWidgetItem) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemEntered` instead
    ///
    pub const ItemEntered = itemEntered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn itemEntered(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_ItemEntered(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemEntered` instead
    ///
    pub const OnItemEntered = onItemEntered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, item: QListWidgetItem) callconv(.c) void `
    ///
    pub fn onItemEntered(self: QListWidget, callback: *const fn (QListWidget, QListWidgetItem) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemChanged` instead
    ///
    pub const ItemChanged = itemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    pub fn itemChanged(self: QListWidget, _item: anytype) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_ItemChanged(@ptrCast(self.ptr), @ptrCast(_item.ptr));
    }

    /// ### DEPRECATED: Use `onItemChanged` instead
    ///
    pub const OnItemChanged = onItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, item: QListWidgetItem) callconv(.c) void `
    ///
    pub fn onItemChanged(self: QListWidget, callback: *const fn (QListWidget, QListWidgetItem) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentItemChanged` instead
    ///
    pub const CurrentItemChanged = currentItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#currentItemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` current: QListWidgetItem `
    ///
    /// ` previous: QListWidgetItem `
    ///
    pub fn currentItemChanged(self: QListWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QListWidgetItem;
        comptime _ = @TypeOf(previous)._is_QListWidgetItem;
        qtc.QListWidget_CurrentItemChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentItemChanged` instead
    ///
    pub const OnCurrentItemChanged = onCurrentItemChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#currentItemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, current: QListWidgetItem, previous: QListWidgetItem) callconv(.c) void `
    ///
    pub fn onCurrentItemChanged(self: QListWidget, callback: *const fn (QListWidget, QListWidgetItem, QListWidgetItem) callconv(.c) void) void {
        qtc.QListWidget_Connect_CurrentItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentTextChanged` instead
    ///
    pub const CurrentTextChanged = currentTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#currentTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` currentText: []const u8 `
    ///
    pub fn currentTextChanged(self: QListWidget, currentText: []const u8) void {
        const currentText_str = qtc.libqt_string{
            .len = currentText.len,
            .data = currentText.ptr,
        };
        qtc.QListWidget_CurrentTextChanged(@ptrCast(self.ptr), currentText_str);
    }

    /// ### DEPRECATED: Use `onCurrentTextChanged` instead
    ///
    pub const OnCurrentTextChanged = onCurrentTextChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#currentTextChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, currentText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onCurrentTextChanged(self: QListWidget, callback: *const fn (QListWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QListWidget_Connect_CurrentTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentRowChanged` instead
    ///
    pub const CurrentRowChanged = currentRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#currentRowChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _currentRow: i32 `
    ///
    pub fn currentRowChanged(self: QListWidget, _currentRow: i32) void {
        qtc.QListWidget_CurrentRowChanged(@ptrCast(self.ptr), @bitCast(_currentRow));
    }

    /// ### DEPRECATED: Use `onCurrentRowChanged` instead
    ///
    pub const OnCurrentRowChanged = onCurrentRowChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#currentRowChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, currentRow: i32) callconv(.c) void `
    ///
    pub fn onCurrentRowChanged(self: QListWidget, callback: *const fn (QListWidget, i32) callconv(.c) void) void {
        qtc.QListWidget_Connect_CurrentRowChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemSelectionChanged` instead
    ///
    pub const ItemSelectionChanged = itemSelectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemSelectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn itemSelectionChanged(self: QListWidget) void {
        qtc.QListWidget_ItemSelectionChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onItemSelectionChanged` instead
    ///
    pub const OnItemSelectionChanged = onItemSelectionChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#itemSelectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget) callconv(.c) void `
    ///
    pub fn onItemSelectionChanged(self: QListWidget, callback: *const fn (QListWidget) callconv(.c) void) void {
        qtc.QListWidget_Connect_ItemSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `event` instead
    ///
    pub const Event = event;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QEvent `
    ///
    pub fn event(self: QListWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QListWidget_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onEvent` instead
    ///
    pub const OnEvent = onEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, e: QEvent) callconv(.c) bool `
    ///
    pub fn onEvent(self: QListWidget, callback: *const fn (QListWidget, QEvent) callconv(.c) bool) void {
        qtc.QListWidget_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superEvent` instead
    ///
    pub const SuperEvent = superEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QEvent `
    ///
    pub fn superEvent(self: QListWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QListWidget_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `mimeTypes` instead
    ///
    pub const MimeTypes = mimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeTypes(self: QListWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QListWidget_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QListWidget.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QListWidget.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `onMimeTypes` instead
    ///
    pub const OnMimeTypes = onMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn onMimeTypes(self: QListWidget, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QListWidget_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimeTypes` instead
    ///
    pub const SuperMimeTypes = superMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#mimeTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superMimeTypes(self: QListWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QListWidget_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("QListWidget.mimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QListWidget.mimeTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `mimeData` instead
    ///
    pub const MimeData = mimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _items: []QListWidgetItem `
    ///
    pub fn mimeData(self: QListWidget, _items: []QListWidgetItem) QMimeData {
        const items_list = qtc.libqt_list{
            .len = _items.len,
            .data = @ptrCast(_items.ptr),
        };
        return .{ .ptr = qtc.QListWidget_MimeData(@ptrCast(self.ptr), items_list) };
    }

    /// ### DEPRECATED: Use `onMimeData` instead
    ///
    pub const OnMimeData = onMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, items: qtc.libqt_list ([]QListWidgetItem)) callconv(.c) QMimeData `
    ///
    pub fn onMimeData(self: QListWidget, callback: *const fn (QListWidget, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.QListWidget_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superMimeData` instead
    ///
    pub const SuperMimeData = superMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#mimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _items: []QListWidgetItem `
    ///
    pub fn superMimeData(self: QListWidget, _items: []QListWidgetItem) QMimeData {
        const items_list = qtc.libqt_list{
            .len = _items.len,
            .data = @ptrCast(_items.ptr),
        };
        return .{ .ptr = qtc.QListWidget_SuperMimeData(@ptrCast(self.ptr), items_list) };
    }

    /// ### DEPRECATED: Use `dropMimeData` instead
    ///
    pub const DropMimeData = dropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn dropMimeData(self: QListWidget, index: i32, _data: anytype, action: i32) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        return qtc.QListWidget_DropMimeData(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_data.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `onDropMimeData` instead
    ///
    pub const OnDropMimeData = onDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, index: i32, data: QMimeData, action: qnamespace_enums.DropAction) callconv(.c) bool `
    ///
    pub fn onDropMimeData(self: QListWidget, callback: *const fn (QListWidget, i32, QMimeData, i32) callconv(.c) bool) void {
        qtc.QListWidget_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superDropMimeData` instead
    ///
    pub const SuperDropMimeData = superDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` _data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn superDropMimeData(self: QListWidget, index: i32, _data: anytype, action: i32) bool {
        comptime _ = @TypeOf(_data)._is_QMimeData;
        return qtc.QListWidget_SuperDropMimeData(@ptrCast(self.ptr), @bitCast(index), @ptrCast(_data.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `supportedDropActions` instead
    ///
    pub const SupportedDropActions = supportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn supportedDropActions(self: QListWidget) i32 {
        return qtc.QListWidget_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSupportedDropActions` instead
    ///
    pub const OnSupportedDropActions = onSupportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSupportedDropActions(self: QListWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSupportedDropActions` instead
    ///
    pub const SuperSupportedDropActions = superSupportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#supportedDropActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn superSupportedDropActions(self: QListWidget) i32 {
        return qtc.QListWidget_SuperSupportedDropActions(@ptrCast(self.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `sortItems1` instead
    ///
    pub const SortItems1 = sortItems1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#sortItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn sortItems1(self: QListWidget, order: i32) void {
        qtc.QListWidget_SortItems1(@ptrCast(self.ptr), @bitCast(order));
    }

    /// ### DEPRECATED: Use `scrollToItem2` instead
    ///
    pub const ScrollToItem2 = scrollToItem2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#scrollToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _item: QListWidgetItem `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn scrollToItem2(self: QListWidget, _item: anytype, hint: i32) void {
        comptime _ = @TypeOf(_item)._is_QListWidgetItem;
        qtc.QListWidget_ScrollToItem2(@ptrCast(self.ptr), @ptrCast(_item.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `setMovement` instead
    ///
    pub const SetMovement = setMovement;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setMovement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _movement: qlistview_enums.Movement `
    ///
    pub fn setMovement(self: QListWidget, _movement: i32) void {
        qtc.QListView_SetMovement(@ptrCast(self.ptr), @bitCast(_movement));
    }

    /// ### DEPRECATED: Use `movement` instead
    ///
    pub const Movement = movement;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#movement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.Movement `
    ///
    pub fn movement(self: QListWidget) i32 {
        return qtc.QListView_Movement(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setFlow` instead
    ///
    pub const SetFlow = setFlow;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setFlow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _flow: qlistview_enums.Flow `
    ///
    pub fn setFlow(self: QListWidget, _flow: i32) void {
        qtc.QListView_SetFlow(@ptrCast(self.ptr), @bitCast(_flow));
    }

    /// ### DEPRECATED: Use `flow` instead
    ///
    pub const Flow = flow;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#flow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.Flow `
    ///
    pub fn flow(self: QListWidget) i32 {
        return qtc.QListView_Flow(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWrapping` instead
    ///
    pub const SetWrapping = setWrapping;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setWrapping(self: QListWidget, enable: bool) void {
        qtc.QListView_SetWrapping(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `isWrapping` instead
    ///
    pub const IsWrapping = isWrapping;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isWrapping)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn isWrapping(self: QListWidget) bool {
        return qtc.QListView_IsWrapping(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setResizeMode` instead
    ///
    pub const SetResizeMode = setResizeMode;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setResizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` mode: qlistview_enums.ResizeMode `
    ///
    pub fn setResizeMode(self: QListWidget, mode: i32) void {
        qtc.QListView_SetResizeMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `resizeMode` instead
    ///
    pub const ResizeMode = resizeMode;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.ResizeMode `
    ///
    pub fn resizeMode(self: QListWidget) i32 {
        return qtc.QListView_ResizeMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setLayoutMode` instead
    ///
    pub const SetLayoutMode = setLayoutMode;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setLayoutMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` mode: qlistview_enums.LayoutMode `
    ///
    pub fn setLayoutMode(self: QListWidget, mode: i32) void {
        qtc.QListView_SetLayoutMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `layoutMode` instead
    ///
    pub const LayoutMode = layoutMode;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#layoutMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.LayoutMode `
    ///
    pub fn layoutMode(self: QListWidget) i32 {
        return qtc.QListView_LayoutMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSpacing` instead
    ///
    pub const SetSpacing = setSpacing;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSpacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` space: i32 `
    ///
    pub fn setSpacing(self: QListWidget, space: i32) void {
        qtc.QListView_SetSpacing(@ptrCast(self.ptr), @bitCast(space));
    }

    /// ### DEPRECATED: Use `spacing` instead
    ///
    pub const Spacing = spacing;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#spacing)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn spacing(self: QListWidget) i32 {
        return qtc.QListView_Spacing(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setBatchSize` instead
    ///
    pub const SetBatchSize = setBatchSize;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setBatchSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _batchSize: i32 `
    ///
    pub fn setBatchSize(self: QListWidget, _batchSize: i32) void {
        qtc.QListView_SetBatchSize(@ptrCast(self.ptr), @bitCast(_batchSize));
    }

    /// ### DEPRECATED: Use `batchSize` instead
    ///
    pub const BatchSize = batchSize;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#batchSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn batchSize(self: QListWidget) i32 {
        return qtc.QListView_BatchSize(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setGridSize` instead
    ///
    pub const SetGridSize = setGridSize;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setGridSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _size: QSize `
    ///
    pub fn setGridSize(self: QListWidget, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QListView_SetGridSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `gridSize` instead
    ///
    pub const GridSize = gridSize;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#gridSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn gridSize(self: QListWidget) QSize {
        return .{ .ptr = qtc.QListView_GridSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setViewMode` instead
    ///
    pub const SetViewMode = setViewMode;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setViewMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` mode: qlistview_enums.ViewMode `
    ///
    pub fn setViewMode(self: QListWidget, mode: i32) void {
        qtc.QListView_SetViewMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `viewMode` instead
    ///
    pub const ViewMode = viewMode;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qlistview_enums.ViewMode `
    ///
    pub fn viewMode(self: QListWidget) i32 {
        return qtc.QListView_ViewMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `clearPropertyFlags` instead
    ///
    pub const ClearPropertyFlags = clearPropertyFlags;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#clearPropertyFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn clearPropertyFlags(self: QListWidget) void {
        qtc.QListView_ClearPropertyFlags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRowHidden` instead
    ///
    pub const IsRowHidden = isRowHidden;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isRowHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn isRowHidden(self: QListWidget, _row: i32) bool {
        return qtc.QListView_IsRowHidden(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `setRowHidden` instead
    ///
    pub const SetRowHidden = setRowHidden;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRowHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` _hide: bool `
    ///
    pub fn setRowHidden(self: QListWidget, _row: i32, _hide: bool) void {
        qtc.QListView_SetRowHidden(@ptrCast(self.ptr), @bitCast(_row), _hide);
    }

    /// ### DEPRECATED: Use `setModelColumn` instead
    ///
    pub const SetModelColumn = setModelColumn;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setModelColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn setModelColumn(self: QListWidget, column: i32) void {
        qtc.QListView_SetModelColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `modelColumn` instead
    ///
    pub const ModelColumn = modelColumn;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#modelColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn modelColumn(self: QListWidget) i32 {
        return qtc.QListView_ModelColumn(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setUniformItemSizes` instead
    ///
    pub const SetUniformItemSizes = setUniformItemSizes;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setUniformItemSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setUniformItemSizes(self: QListWidget, enable: bool) void {
        qtc.QListView_SetUniformItemSizes(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `uniformItemSizes` instead
    ///
    pub const UniformItemSizes = uniformItemSizes;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#uniformItemSizes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn uniformItemSizes(self: QListWidget) bool {
        return qtc.QListView_UniformItemSizes(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setWordWrap` instead
    ///
    pub const SetWordWrap = setWordWrap;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setWordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` on: bool `
    ///
    pub fn setWordWrap(self: QListWidget, on: bool) void {
        qtc.QListView_SetWordWrap(@ptrCast(self.ptr), on);
    }

    /// ### DEPRECATED: Use `wordWrap` instead
    ///
    pub const WordWrap = wordWrap;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn wordWrap(self: QListWidget) bool {
        return qtc.QListView_WordWrap(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectionRectVisible` instead
    ///
    pub const SetSelectionRectVisible = setSelectionRectVisible;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelectionRectVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _show: bool `
    ///
    pub fn setSelectionRectVisible(self: QListWidget, _show: bool) void {
        qtc.QListView_SetSelectionRectVisible(@ptrCast(self.ptr), _show);
    }

    /// ### DEPRECATED: Use `isSelectionRectVisible` instead
    ///
    pub const IsSelectionRectVisible = isSelectionRectVisible;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isSelectionRectVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn isSelectionRectVisible(self: QListWidget) bool {
        return qtc.QListView_IsSelectionRectVisible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setItemAlignment` instead
    ///
    pub const SetItemAlignment = setItemAlignment;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setItemAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn setItemAlignment(self: QListWidget, alignment: i32) void {
        qtc.QListView_SetItemAlignment(@ptrCast(self.ptr), @bitCast(alignment));
    }

    /// ### DEPRECATED: Use `itemAlignment` instead
    ///
    pub const ItemAlignment = itemAlignment;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#itemAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn itemAlignment(self: QListWidget) i32 {
        return qtc.QListView_ItemAlignment(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `indexesMoved` instead
    ///
    pub const IndexesMoved = indexesMoved;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` indexes: []QModelIndex `
    ///
    pub fn indexesMoved(self: QListWidget, indexes: []QModelIndex) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.QListView_IndexesMoved(@ptrCast(self.ptr), indexes_list);
    }

    /// ### DEPRECATED: Use `onIndexesMoved` instead
    ///
    pub const OnIndexesMoved = onIndexesMoved;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexesMoved)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, indexes: qtc.libqt_list ([]QModelIndex)) callconv(.c) void `
    ///
    pub fn onIndexesMoved(self: QListWidget, callback: *const fn (QListWidget, qtc.libqt_list) callconv(.c) void) void {
        qtc.QListView_Connect_IndexesMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setModel` instead
    ///
    pub const SetModel = setModel;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn setModel(self: QListWidget, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QAbstractItemView_SetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `onSetModel` instead
    ///
    pub const OnSetModel = onSetModel;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, model: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn onSetModel(self: QListWidget, callback: *const fn (QListWidget, QAbstractItemModel) callconv(.c) void) void {
        qtc.QAbstractItemView_OnSetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `superSetModel` instead
    ///
    pub const SuperSetModel = superSetModel;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _model: QAbstractItemModel `
    ///
    pub fn superSetModel(self: QListWidget, _model: anytype) void {
        comptime _ = @TypeOf(_model)._is_QAbstractItemModel;
        qtc.QAbstractItemView_SuperSetModel(@ptrCast(self.ptr), @ptrCast(_model.ptr));
    }

    /// ### DEPRECATED: Use `model` instead
    ///
    pub const Model = model;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn model(self: QListWidget) QAbstractItemModel {
        return .{ .ptr = qtc.QAbstractItemView_Model(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `selectionModel` instead
    ///
    pub const SelectionModel = selectionModel;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn selectionModel(self: QListWidget) QItemSelectionModel {
        return .{ .ptr = qtc.QAbstractItemView_SelectionModel(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setItemDelegate` instead
    ///
    pub const SetItemDelegate = setItemDelegate;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn setItemDelegate(self: QListWidget, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `itemDelegate` instead
    ///
    pub const ItemDelegate = itemDelegate;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn itemDelegate(self: QListWidget) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setSelectionMode` instead
    ///
    pub const SetSelectionMode = setSelectionMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` mode: qabstractitemview_enums.SelectionMode `
    ///
    pub fn setSelectionMode(self: QListWidget, mode: i32) void {
        qtc.QAbstractItemView_SetSelectionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `selectionMode` instead
    ///
    pub const SelectionMode = selectionMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionMode `
    ///
    pub fn selectionMode(self: QListWidget) i32 {
        return qtc.QAbstractItemView_SelectionMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setSelectionBehavior` instead
    ///
    pub const SetSelectionBehavior = setSelectionBehavior;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` behavior: qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn setSelectionBehavior(self: QListWidget, behavior: i32) void {
        qtc.QAbstractItemView_SetSelectionBehavior(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `selectionBehavior` instead
    ///
    pub const SelectionBehavior = selectionBehavior;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn selectionBehavior(self: QListWidget) i32 {
        return qtc.QAbstractItemView_SelectionBehavior(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `currentIndex` instead
    ///
    pub const CurrentIndex = currentIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn currentIndex(self: QListWidget) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_CurrentIndex(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `rootIndex` instead
    ///
    pub const RootIndex = rootIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn rootIndex(self: QListWidget) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_RootIndex(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setEditTriggers` instead
    ///
    pub const SetEditTriggers = setEditTriggers;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` triggers: flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn setEditTriggers(self: QListWidget, triggers: i32) void {
        qtc.QAbstractItemView_SetEditTriggers(@ptrCast(self.ptr), @bitCast(triggers));
    }

    /// ### DEPRECATED: Use `editTriggers` instead
    ///
    pub const EditTriggers = editTriggers;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn editTriggers(self: QListWidget) i32 {
        return qtc.QAbstractItemView_EditTriggers(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setVerticalScrollMode` instead
    ///
    pub const SetVerticalScrollMode = setVerticalScrollMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn setVerticalScrollMode(self: QListWidget, mode: i32) void {
        qtc.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `verticalScrollMode` instead
    ///
    pub const VerticalScrollMode = verticalScrollMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn verticalScrollMode(self: QListWidget) i32 {
        return qtc.QAbstractItemView_VerticalScrollMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetVerticalScrollMode` instead
    ///
    pub const ResetVerticalScrollMode = resetVerticalScrollMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn resetVerticalScrollMode(self: QListWidget) void {
        qtc.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setHorizontalScrollMode` instead
    ///
    pub const SetHorizontalScrollMode = setHorizontalScrollMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn setHorizontalScrollMode(self: QListWidget, mode: i32) void {
        qtc.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `horizontalScrollMode` instead
    ///
    pub const HorizontalScrollMode = horizontalScrollMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn horizontalScrollMode(self: QListWidget) i32 {
        return qtc.QAbstractItemView_HorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `resetHorizontalScrollMode` instead
    ///
    pub const ResetHorizontalScrollMode = resetHorizontalScrollMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn resetHorizontalScrollMode(self: QListWidget) void {
        qtc.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoScroll` instead
    ///
    pub const SetAutoScroll = setAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setAutoScroll(self: QListWidget, enable: bool) void {
        qtc.QAbstractItemView_SetAutoScroll(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `hasAutoScroll` instead
    ///
    pub const HasAutoScroll = hasAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn hasAutoScroll(self: QListWidget) bool {
        return qtc.QAbstractItemView_HasAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAutoScrollMargin` instead
    ///
    pub const SetAutoScrollMargin = setAutoScrollMargin;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` margin: i32 `
    ///
    pub fn setAutoScrollMargin(self: QListWidget, margin: i32) void {
        qtc.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// ### DEPRECATED: Use `autoScrollMargin` instead
    ///
    pub const AutoScrollMargin = autoScrollMargin;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn autoScrollMargin(self: QListWidget) i32 {
        return qtc.QAbstractItemView_AutoScrollMargin(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setTabKeyNavigation` instead
    ///
    pub const SetTabKeyNavigation = setTabKeyNavigation;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabKeyNavigation(self: QListWidget, enable: bool) void {
        qtc.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `tabKeyNavigation` instead
    ///
    pub const TabKeyNavigation = tabKeyNavigation;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn tabKeyNavigation(self: QListWidget) bool {
        return qtc.QAbstractItemView_TabKeyNavigation(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDropIndicatorShown` instead
    ///
    pub const SetDropIndicatorShown = setDropIndicatorShown;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setDropIndicatorShown(self: QListWidget, enable: bool) void {
        qtc.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `showDropIndicator` instead
    ///
    pub const ShowDropIndicator = showDropIndicator;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn showDropIndicator(self: QListWidget) bool {
        return qtc.QAbstractItemView_ShowDropIndicator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDragEnabled` instead
    ///
    pub const SetDragEnabled = setDragEnabled;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setDragEnabled(self: QListWidget, enable: bool) void {
        qtc.QAbstractItemView_SetDragEnabled(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `dragEnabled` instead
    ///
    pub const DragEnabled = dragEnabled;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn dragEnabled(self: QListWidget) bool {
        return qtc.QAbstractItemView_DragEnabled(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDragDropOverwriteMode` instead
    ///
    pub const SetDragDropOverwriteMode = setDragDropOverwriteMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` overwrite: bool `
    ///
    pub fn setDragDropOverwriteMode(self: QListWidget, overwrite: bool) void {
        qtc.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// ### DEPRECATED: Use `dragDropOverwriteMode` instead
    ///
    pub const DragDropOverwriteMode = dragDropOverwriteMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn dragDropOverwriteMode(self: QListWidget) bool {
        return qtc.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDragDropMode` instead
    ///
    pub const SetDragDropMode = setDragDropMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` behavior: qabstractitemview_enums.DragDropMode `
    ///
    pub fn setDragDropMode(self: QListWidget, behavior: i32) void {
        qtc.QAbstractItemView_SetDragDropMode(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// ### DEPRECATED: Use `dragDropMode` instead
    ///
    pub const DragDropMode = dragDropMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DragDropMode `
    ///
    pub fn dragDropMode(self: QListWidget) i32 {
        return qtc.QAbstractItemView_DragDropMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setDefaultDropAction` instead
    ///
    pub const SetDefaultDropAction = setDefaultDropAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` dropAction: qnamespace_enums.DropAction `
    ///
    pub fn setDefaultDropAction(self: QListWidget, dropAction: i32) void {
        qtc.QAbstractItemView_SetDefaultDropAction(@ptrCast(self.ptr), @bitCast(dropAction));
    }

    /// ### DEPRECATED: Use `defaultDropAction` instead
    ///
    pub const DefaultDropAction = defaultDropAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn defaultDropAction(self: QListWidget) i32 {
        return qtc.QAbstractItemView_DefaultDropAction(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setAlternatingRowColors` instead
    ///
    pub const SetAlternatingRowColors = setAlternatingRowColors;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setAlternatingRowColors(self: QListWidget, enable: bool) void {
        qtc.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self.ptr), enable);
    }

    /// ### DEPRECATED: Use `alternatingRowColors` instead
    ///
    pub const AlternatingRowColors = alternatingRowColors;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn alternatingRowColors(self: QListWidget) bool {
        return qtc.QAbstractItemView_AlternatingRowColors(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setIconSize` instead
    ///
    pub const SetIconSize = setIconSize;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _size: QSize `
    ///
    pub fn setIconSize(self: QListWidget, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QAbstractItemView_SetIconSize(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `iconSize` instead
    ///
    pub const IconSize = iconSize;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn iconSize(self: QListWidget) QSize {
        return .{ .ptr = qtc.QAbstractItemView_IconSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setTextElideMode` instead
    ///
    pub const SetTextElideMode = setTextElideMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    pub fn setTextElideMode(self: QListWidget, mode: i32) void {
        qtc.QAbstractItemView_SetTextElideMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// ### DEPRECATED: Use `textElideMode` instead
    ///
    pub const TextElideMode = textElideMode;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextElideMode `
    ///
    pub fn textElideMode(self: QListWidget) i32 {
        return qtc.QAbstractItemView_TextElideMode(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sizeHintForIndex` instead
    ///
    pub const SizeHintForIndex = sizeHintForIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn sizeHintForIndex(self: QListWidget, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_SizeHintForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `setIndexWidget` instead
    ///
    pub const SetIndexWidget = setIndexWidget;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setIndexWidget(self: QListWidget, index: anytype, widget: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractItemView_SetIndexWidget(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(widget.ptr));
    }

    /// ### DEPRECATED: Use `indexWidget` instead
    ///
    pub const IndexWidget = indexWidget;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn indexWidget(self: QListWidget, index: anytype) QWidget {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_IndexWidget(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `setItemDelegateForRow` instead
    ///
    pub const SetItemDelegateForRow = setItemDelegateForRow;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _row: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn setItemDelegateForRow(self: QListWidget, _row: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self.ptr), @bitCast(_row), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `itemDelegateForRow` instead
    ///
    pub const ItemDelegateForRow = itemDelegateForRow;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn itemDelegateForRow(self: QListWidget, _row: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self.ptr), @bitCast(_row)) };
    }

    /// ### DEPRECATED: Use `setItemDelegateForColumn` instead
    ///
    pub const SetItemDelegateForColumn = setItemDelegateForColumn;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn setItemDelegateForColumn(self: QListWidget, column: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column), @ptrCast(delegate.ptr));
    }

    /// ### DEPRECATED: Use `itemDelegateForColumn` instead
    ///
    pub const ItemDelegateForColumn = itemDelegateForColumn;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn itemDelegateForColumn(self: QListWidget, column: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### DEPRECATED: Use `itemDelegate2` instead
    ///
    pub const ItemDelegate2 = itemDelegate2;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn itemDelegate2(self: QListWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate2(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `edit` instead
    ///
    pub const Edit = edit;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn edit(self: QListWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Edit(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `clearSelection` instead
    ///
    pub const ClearSelection = clearSelection;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn clearSelection(self: QListWidget) void {
        qtc.QAbstractItemView_ClearSelection(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setCurrentIndex` instead
    ///
    pub const SetCurrentIndex = setCurrentIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn setCurrentIndex(self: QListWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_SetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `scrollToTop` instead
    ///
    pub const ScrollToTop = scrollToTop;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn scrollToTop(self: QListWidget) void {
        qtc.QAbstractItemView_ScrollToTop(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `scrollToBottom` instead
    ///
    pub const ScrollToBottom = scrollToBottom;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn scrollToBottom(self: QListWidget) void {
        qtc.QAbstractItemView_ScrollToBottom(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `update` instead
    ///
    pub const Update = update;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn update(self: QListWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Update(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `pressed` instead
    ///
    pub const Pressed = pressed;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn pressed(self: QListWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Pressed(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onPressed` instead
    ///
    pub const OnPressed = onPressed;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onPressed(self: QListWidget, callback: *const fn (QListWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `clicked` instead
    ///
    pub const Clicked = clicked;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn clicked(self: QListWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Clicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onClicked` instead
    ///
    pub const OnClicked = onClicked;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onClicked(self: QListWidget, callback: *const fn (QListWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doubleClicked` instead
    ///
    pub const DoubleClicked = doubleClicked;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn doubleClicked(self: QListWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_DoubleClicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onDoubleClicked` instead
    ///
    pub const OnDoubleClicked = onDoubleClicked;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onDoubleClicked(self: QListWidget, callback: *const fn (QListWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `activated` instead
    ///
    pub const Activated = activated;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn activated(self: QListWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Activated(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onActivated` instead
    ///
    pub const OnActivated = onActivated;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onActivated(self: QListWidget, callback: *const fn (QListWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `entered` instead
    ///
    pub const Entered = entered;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn entered(self: QListWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Entered(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onEntered` instead
    ///
    pub const OnEntered = onEntered;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onEntered(self: QListWidget, callback: *const fn (QListWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Entered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewportEntered` instead
    ///
    pub const ViewportEntered = viewportEntered;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn viewportEntered(self: QListWidget) void {
        qtc.QAbstractItemView_ViewportEntered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onViewportEntered` instead
    ///
    pub const OnViewportEntered = onViewportEntered;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget) callconv(.c) void `
    ///
    pub fn onViewportEntered(self: QListWidget, callback: *const fn (QListWidget) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `iconSizeChanged` instead
    ///
    pub const IconSizeChanged = iconSizeChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _size: QSize `
    ///
    pub fn iconSizeChanged(self: QListWidget, _size: anytype) void {
        comptime _ = @TypeOf(_size)._is_QSize;
        qtc.QAbstractItemView_IconSizeChanged(@ptrCast(self.ptr), @ptrCast(_size.ptr));
    }

    /// ### DEPRECATED: Use `onIconSizeChanged` instead
    ///
    pub const OnIconSizeChanged = onIconSizeChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, size: QSize) callconv(.c) void `
    ///
    pub fn onIconSizeChanged(self: QListWidget, callback: *const fn (QListWidget, QSize) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn verticalScrollBarPolicy(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setVerticalScrollBarPolicy(self: QListWidget, _verticalScrollBarPolicy: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn verticalScrollBar(self: QListWidget) QScrollBar {
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
    /// ` self: QListWidget `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setVerticalScrollBar(self: QListWidget, scrollbar: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn horizontalScrollBarPolicy(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn setHorizontalScrollBarPolicy(self: QListWidget, _horizontalScrollBarPolicy: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn horizontalScrollBar(self: QListWidget) QScrollBar {
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
    /// ` self: QListWidget `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn setHorizontalScrollBar(self: QListWidget, scrollbar: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn cornerWidget(self: QListWidget) QWidget {
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
    /// ` self: QListWidget `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setCornerWidget(self: QListWidget, widget: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn addScrollBarWidget(self: QListWidget, widget: anytype, alignment: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn scrollBarWidgets(self: QListWidget, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("QListWidget.scrollBarWidgets: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    pub fn viewport(self: QListWidget) QWidget {
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
    /// ` self: QListWidget `
    ///
    /// ` widget: QWidget `
    ///
    pub fn setViewport(self: QListWidget, widget: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn maximumViewportSize(self: QListWidget) QSize {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn sizeAdjustPolicy(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn setSizeAdjustPolicy(self: QListWidget, policy: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn frameStyle(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _frameStyle: i32 `
    ///
    pub fn setFrameStyle(self: QListWidget, _frameStyle: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn frameWidth(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn frameShape(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _frameShape: qframe_enums.Shape `
    ///
    pub fn setFrameShape(self: QListWidget, _frameShape: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn frameShadow(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _frameShadow: qframe_enums.Shadow `
    ///
    pub fn setFrameShadow(self: QListWidget, _frameShadow: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn lineWidth(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _lineWidth: i32 `
    ///
    pub fn setLineWidth(self: QListWidget, _lineWidth: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn midLineWidth(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _midLineWidth: i32 `
    ///
    pub fn setMidLineWidth(self: QListWidget, _midLineWidth: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn frameRect(self: QListWidget) QRect {
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
    /// ` self: QListWidget `
    ///
    /// ` _frameRect: QRect `
    ///
    pub fn setFrameRect(self: QListWidget, _frameRect: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn winId(self: QListWidget) usize {
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
    /// ` self: QListWidget `
    ///
    pub fn createWinId(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn internalWinId(self: QListWidget) usize {
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
    /// ` self: QListWidget `
    ///
    pub fn effectiveWinId(self: QListWidget) usize {
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
    /// ` self: QListWidget `
    ///
    pub fn style(self: QListWidget) QStyle {
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
    /// ` self: QListWidget `
    ///
    /// ` _style: QStyle `
    ///
    pub fn setStyle(self: QListWidget, _style: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn isTopLevel(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn isWindow(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn isModal(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn windowModality(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn setWindowModality(self: QListWidget, _windowModality: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn isEnabled(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isEnabledTo(self: QListWidget, param1: anytype) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setEnabled(self: QListWidget, enabled: bool) void {
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
    /// ` self: QListWidget `
    ///
    /// ` disabled: bool `
    ///
    pub fn setDisabled(self: QListWidget, disabled: bool) void {
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
    /// ` self: QListWidget `
    ///
    /// ` windowModified: bool `
    ///
    pub fn setWindowModified(self: QListWidget, windowModified: bool) void {
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
    /// ` self: QListWidget `
    ///
    pub fn frameGeometry(self: QListWidget) QRect {
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
    /// ` self: QListWidget `
    ///
    pub fn geometry(self: QListWidget) QRect {
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
    /// ` self: QListWidget `
    ///
    pub fn normalGeometry(self: QListWidget) QRect {
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
    /// ` self: QListWidget `
    ///
    pub fn x(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn y(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn pos(self: QListWidget) QPoint {
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
    /// ` self: QListWidget `
    ///
    pub fn frameSize(self: QListWidget) QSize {
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
    /// ` self: QListWidget `
    ///
    pub fn size(self: QListWidget) QSize {
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
    /// ` self: QListWidget `
    ///
    pub fn width(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn height(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn rect(self: QListWidget) QRect {
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
    /// ` self: QListWidget `
    ///
    pub fn childrenRect(self: QListWidget) QRect {
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
    /// ` self: QListWidget `
    ///
    pub fn childrenRegion(self: QListWidget) QRegion {
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
    /// ` self: QListWidget `
    ///
    pub fn minimumSize(self: QListWidget) QSize {
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
    /// ` self: QListWidget `
    ///
    pub fn maximumSize(self: QListWidget) QSize {
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
    /// ` self: QListWidget `
    ///
    pub fn minimumWidth(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn minimumHeight(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn maximumWidth(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn maximumHeight(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _minimumSize: QSize `
    ///
    pub fn setMinimumSize(self: QListWidget, _minimumSize: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumSize2(self: QListWidget, minw: i32, minh: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _maximumSize: QSize `
    ///
    pub fn setMaximumSize(self: QListWidget, _maximumSize: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumSize2(self: QListWidget, maxw: i32, maxh: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` minw: i32 `
    ///
    pub fn setMinimumWidth(self: QListWidget, minw: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` minh: i32 `
    ///
    pub fn setMinimumHeight(self: QListWidget, minh: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` maxw: i32 `
    ///
    pub fn setMaximumWidth(self: QListWidget, maxw: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` maxh: i32 `
    ///
    pub fn setMaximumHeight(self: QListWidget, maxh: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn sizeIncrement(self: QListWidget) QSize {
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
    /// ` self: QListWidget `
    ///
    /// ` _sizeIncrement: QSize `
    ///
    pub fn setSizeIncrement(self: QListWidget, _sizeIncrement: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setSizeIncrement2(self: QListWidget, w: i32, h: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn baseSize(self: QListWidget) QSize {
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
    /// ` self: QListWidget `
    ///
    /// ` _baseSize: QSize `
    ///
    pub fn setBaseSize(self: QListWidget, _baseSize: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn setBaseSize2(self: QListWidget, basew: i32, baseh: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn setFixedSize(self: QListWidget, fixedSize: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedSize2(self: QListWidget, w: i32, h: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` w: i32 `
    ///
    pub fn setFixedWidth(self: QListWidget, w: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` h: i32 `
    ///
    pub fn setFixedHeight(self: QListWidget, h: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToGlobal(self: QListWidget, param1: anytype) QPointF {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToGlobal2(self: QListWidget, param1: anytype) QPoint {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromGlobal(self: QListWidget, param1: anytype) QPointF {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromGlobal2(self: QListWidget, param1: anytype) QPoint {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapToParent(self: QListWidget, param1: anytype) QPointF {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapToParent2(self: QListWidget, param1: anytype) QPoint {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn mapFromParent(self: QListWidget, param1: anytype) QPointF {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn mapFromParent2(self: QListWidget, param1: anytype) QPoint {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapTo(self: QListWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapTo2(self: QListWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn mapFrom(self: QListWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn mapFrom2(self: QListWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QListWidget `
    ///
    pub fn window(self: QListWidget) QWidget {
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
    /// ` self: QListWidget `
    ///
    pub fn nativeParentWidget(self: QListWidget) QWidget {
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
    /// ` self: QListWidget `
    ///
    pub fn topLevelWidget(self: QListWidget) QWidget {
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
    /// ` self: QListWidget `
    ///
    pub fn palette(self: QListWidget) QPalette {
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
    /// ` self: QListWidget `
    ///
    /// ` _palette: QPalette `
    ///
    pub fn setPalette(self: QListWidget, _palette: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setBackgroundRole(self: QListWidget, _backgroundRole: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn backgroundRole(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn setForegroundRole(self: QListWidget, _foregroundRole: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn foregroundRole(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn font(self: QListWidget) QFont {
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
    /// ` self: QListWidget `
    ///
    /// ` _font: QFont `
    ///
    pub fn setFont(self: QListWidget, _font: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn fontMetrics(self: QListWidget) QFontMetrics {
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
    /// ` self: QListWidget `
    ///
    pub fn fontInfo(self: QListWidget) QFontInfo {
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
    /// ` self: QListWidget `
    ///
    pub fn cursor(self: QListWidget) QCursor {
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
    /// ` self: QListWidget `
    ///
    /// ` _cursor: QCursor `
    ///
    pub fn setCursor(self: QListWidget, _cursor: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn unsetCursor(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setMouseTracking(self: QListWidget, enable: bool) void {
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
    /// ` self: QListWidget `
    ///
    pub fn hasMouseTracking(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn underMouse(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setTabletTracking(self: QListWidget, enable: bool) void {
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
    /// ` self: QListWidget `
    ///
    pub fn hasTabletTracking(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` _mask: QBitmap `
    ///
    pub fn setMask(self: QListWidget, _mask: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _mask: QRegion `
    ///
    pub fn setMask2(self: QListWidget, _mask: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn mask(self: QListWidget) QRegion {
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
    /// ` self: QListWidget `
    ///
    pub fn clearMask(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn render(self: QListWidget, target: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn render2(self: QListWidget, painter: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn grab(self: QListWidget) QPixmap {
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
    /// ` self: QListWidget `
    ///
    pub fn graphicsEffect(self: QListWidget) QGraphicsEffect {
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
    /// ` self: QListWidget `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn setGraphicsEffect(self: QListWidget, effect: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn grabGesture(self: QListWidget, typeVal: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn ungrabGesture(self: QListWidget, typeVal: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _windowTitle: []const u8 `
    ///
    pub fn setWindowTitle(self: QListWidget, _windowTitle: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _styleSheet: []const u8 `
    ///
    pub fn setStyleSheet(self: QListWidget, _styleSheet: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn styleSheet(self: QListWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.styleSheet: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowTitle(self: QListWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.windowTitle: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn setWindowIcon(self: QListWidget, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
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
    /// ` self: QListWidget `
    ///
    pub fn windowIcon(self: QListWidget) QIcon {
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
    /// ` self: QListWidget `
    ///
    /// ` _windowIconText: []const u8 `
    ///
    pub fn setWindowIconText(self: QListWidget, _windowIconText: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowIconText(self: QListWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.windowIconText: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` _windowRole: []const u8 `
    ///
    pub fn setWindowRole(self: QListWidget, _windowRole: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowRole(self: QListWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.windowRole: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn setWindowFilePath(self: QListWidget, filePath: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn windowFilePath(self: QListWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.windowFilePath: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` level: f64 `
    ///
    pub fn setWindowOpacity(self: QListWidget, level: f64) void {
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
    /// ` self: QListWidget `
    ///
    pub fn windowOpacity(self: QListWidget) f64 {
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
    /// ` self: QListWidget `
    ///
    pub fn isWindowModified(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` _toolTip: []const u8 `
    ///
    pub fn setToolTip(self: QListWidget, _toolTip: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn toolTip(self: QListWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.toolTip: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` msec: i32 `
    ///
    pub fn setToolTipDuration(self: QListWidget, msec: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn toolTipDuration(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _statusTip: []const u8 `
    ///
    pub fn setStatusTip(self: QListWidget, _statusTip: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn statusTip(self: QListWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.statusTip: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` _whatsThis: []const u8 `
    ///
    pub fn setWhatsThis(self: QListWidget, _whatsThis: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn whatsThis(self: QListWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.whatsThis: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleName(self: QListWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.accessibleName: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setAccessibleName(self: QListWidget, name: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn accessibleDescription(self: QListWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.accessibleDescription: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` description: []const u8 `
    ///
    pub fn setAccessibleDescription(self: QListWidget, description: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn setLayoutDirection(self: QListWidget, direction: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn layoutDirection(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn unsetLayoutDirection(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _locale: QLocale `
    ///
    pub fn setLocale(self: QListWidget, _locale: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn locale(self: QListWidget) QLocale {
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
    /// ` self: QListWidget `
    ///
    pub fn unsetLocale(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn isRightToLeft(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn isLeftToRight(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn setFocus(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn isActiveWindow(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn activateWindow(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn clearFocus(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn setFocus2(self: QListWidget, reason: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn focusPolicy(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn setFocusPolicy(self: QListWidget, policy: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn hasFocus(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` _focusProxy: QWidget `
    ///
    pub fn setFocusProxy(self: QListWidget, _focusProxy: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn focusProxy(self: QListWidget) QWidget {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn contextMenuPolicy(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn setContextMenuPolicy(self: QListWidget, policy: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn grabMouse(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QCursor `
    ///
    pub fn grabMouse2(self: QListWidget, param1: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn releaseMouse(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn grabKeyboard(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn releaseKeyboard(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn grabShortcut(self: QListWidget, key: anytype) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn releaseShortcut(self: QListWidget, id: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutEnabled(self: QListWidget, id: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn setShortcutAutoRepeat(self: QListWidget, id: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn updatesEnabled(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn setUpdatesEnabled(self: QListWidget, enable: bool) void {
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
    /// ` self: QListWidget `
    ///
    pub fn graphicsProxyWidget(self: QListWidget) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget `
    ///
    pub fn repaint(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn update2(self: QListWidget, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn update3(self: QListWidget, param1: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn update4(self: QListWidget, param1: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn repaint2(self: QListWidget, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn repaint3(self: QListWidget, param1: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn repaint4(self: QListWidget, param1: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` hidden: bool `
    ///
    pub fn setHidden(self: QListWidget, hidden: bool) void {
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
    /// ` self: QListWidget `
    ///
    pub fn show(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn hide(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn showMinimized(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn showMaximized(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn showFullScreen(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn showNormal(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn close(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn raise(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn lower(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn stackUnder(self: QListWidget, param1: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn move(self: QListWidget, _x: i32, _y: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn move2(self: QListWidget, param1: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn resize(self: QListWidget, w: i32, h: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QSize `
    ///
    pub fn resize2(self: QListWidget, param1: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn setGeometry(self: QListWidget, _x: i32, _y: i32, w: i32, h: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _geometry: QRect `
    ///
    pub fn setGeometry2(self: QListWidget, _geometry: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn saveGeometry(self: QListWidget, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("QListWidget.saveGeometry: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` _geometry: []u8 `
    ///
    pub fn restoreGeometry(self: QListWidget, _geometry: []u8) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn adjustSize(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn isVisible(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn isVisibleTo(self: QListWidget, param1: anytype) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn isHidden(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn isMinimized(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn isMaximized(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn isFullScreen(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn windowState(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _state: flag of qnamespace_enums.WindowState `
    ///
    pub fn setWindowState(self: QListWidget, _state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(_state));
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
    /// ` self: QListWidget `
    ///
    /// ` _state: flag of qnamespace_enums.WindowState `
    ///
    pub fn overrideWindowState(self: QListWidget, _state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(_state));
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
    /// ` self: QListWidget `
    ///
    pub fn sizePolicy(self: QListWidget) QSizePolicy {
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
    /// ` self: QListWidget `
    ///
    /// ` _sizePolicy: QSizePolicy `
    ///
    pub fn setSizePolicy(self: QListWidget, _sizePolicy: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn setSizePolicy2(self: QListWidget, horizontal: i32, vertical: i32) void {
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
    /// ` self: QListWidget `
    ///
    pub fn visibleRegion(self: QListWidget) QRegion {
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
    /// ` self: QListWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setContentsMargins(self: QListWidget, left: i32, top: i32, right: i32, bottom: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` margins: QMargins `
    ///
    pub fn setContentsMargins2(self: QListWidget, margins: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn contentsMargins(self: QListWidget) QMargins {
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
    /// ` self: QListWidget `
    ///
    pub fn contentsRect(self: QListWidget) QRect {
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
    /// ` self: QListWidget `
    ///
    pub fn layout(self: QListWidget) QLayout {
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
    /// ` self: QListWidget `
    ///
    /// ` _layout: QLayout `
    ///
    pub fn setLayout(self: QListWidget, _layout: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn updateGeometry(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _parent: QWidget `
    ///
    pub fn setParent(self: QListWidget, _parent: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn setParent2(self: QListWidget, _parent: anytype, f: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scroll(self: QListWidget, dx: i32, dy: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn scroll2(self: QListWidget, dx: i32, dy: i32, param3: anytype) void {
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
    /// ` self: QListWidget `
    ///
    pub fn focusWidget(self: QListWidget) QWidget {
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
    /// ` self: QListWidget `
    ///
    pub fn nextInFocusChain(self: QListWidget) QWidget {
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
    /// ` self: QListWidget `
    ///
    pub fn previousInFocusChain(self: QListWidget) QWidget {
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
    /// ` self: QListWidget `
    ///
    pub fn acceptDrops(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` on: bool `
    ///
    pub fn setAcceptDrops(self: QListWidget, on: bool) void {
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
    /// ` self: QListWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn addAction(self: QListWidget, action: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn addActions(self: QListWidget, _actions: []QAction) void {
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
    /// ` self: QListWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` _actions: []QAction `
    ///
    pub fn insertActions(self: QListWidget, before: anytype, _actions: []QAction) void {
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
    /// ` self: QListWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn insertAction(self: QListWidget, before: anytype, action: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn removeAction(self: QListWidget, action: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn actions(self: QListWidget, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("QListWidget.actions: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn addAction2(self: QListWidget, _text: []const u8) QAction {
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
    /// ` self: QListWidget `
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn addAction3(self: QListWidget, _icon: anytype, _text: []const u8) QAction {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.QWidget_AddAction3(@ptrCast(self.ptr), @ptrCast(_icon.ptr), text_str) };
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
    /// ` self: QListWidget `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction4(self: QListWidget, _text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QListWidget `
    ///
    /// ` _icon: QIcon `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn addAction5(self: QListWidget, _icon: anytype, _text: []const u8, shortcut: anytype) QAction {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(shortcut)._is_QKeySequence;
        return .{ .ptr = qtc.QWidget_AddAction5(@ptrCast(self.ptr), @ptrCast(_icon.ptr), text_str, @ptrCast(shortcut.ptr)) };
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
    /// ` self: QListWidget `
    ///
    pub fn parentWidget(self: QListWidget) QWidget {
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
    /// ` self: QListWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlags(self: QListWidget, typeVal: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn windowFlags(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn setWindowFlag(self: QListWidget, param1: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn overrideWindowFlags(self: QListWidget, typeVal: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn windowType(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _x: i32 `
    ///
    /// ` _y: i32 `
    ///
    pub fn childAt(self: QListWidget, _x: i32, _y: i32) QWidget {
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
    /// ` self: QListWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn childAt2(self: QListWidget, p: anytype) QWidget {
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
    /// ` self: QListWidget `
    ///
    /// ` p: QPointF `
    ///
    pub fn childAt3(self: QListWidget, p: anytype) QWidget {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn setAttribute(self: QListWidget, param1: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn testAttribute(self: QListWidget, param1: i32) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn ensurePolished(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` child: QWidget `
    ///
    pub fn isAncestorOf(self: QListWidget, child: anytype) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn autoFillBackground(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn setAutoFillBackground(self: QListWidget, enabled: bool) void {
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
    /// ` self: QListWidget `
    ///
    pub fn backingStore(self: QListWidget) QBackingStore {
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
    /// ` self: QListWidget `
    ///
    pub fn windowHandle(self: QListWidget) QWindow {
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
    /// ` self: QListWidget `
    ///
    pub fn screen(self: QListWidget) QScreen {
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
    /// ` self: QListWidget `
    ///
    /// ` _screen: QScreen `
    ///
    pub fn setScreen(self: QListWidget, _screen: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn windowTitleChanged(self: QListWidget, title: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowTitleChanged(self: QListWidget, callback: *const fn (QListWidget, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _icon: QIcon `
    ///
    pub fn windowIconChanged(self: QListWidget, _icon: anytype) void {
        comptime _ = @TypeOf(_icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(_icon.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, icon: QIcon) callconv(.c) void `
    ///
    pub fn onWindowIconChanged(self: QListWidget, callback: *const fn (QListWidget, QIcon) callconv(.c) void) void {
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
    /// ` self: QListWidget `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn windowIconTextChanged(self: QListWidget, iconText: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onWindowIconTextChanged(self: QListWidget, callback: *const fn (QListWidget, [*:0]const u8) callconv(.c) void) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _pos: QPoint `
    ///
    pub fn customContextMenuRequested(self: QListWidget, _pos: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, pos: QPoint) callconv(.c) void `
    ///
    pub fn onCustomContextMenuRequested(self: QListWidget, callback: *const fn (QListWidget, QPoint) callconv(.c) void) void {
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
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn inputMethodHints(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn setInputMethodHints(self: QListWidget, hints: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render22(self: QListWidget, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render3(self: QListWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render4(self: QListWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn render23(self: QListWidget, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn render32(self: QListWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn render42(self: QListWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn grab1(self: QListWidget, rectangle: anytype) QPixmap {
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
    /// ` self: QListWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` _flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn grabGesture2(self: QListWidget, typeVal: i32, _flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(_flags));
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
    /// ` self: QListWidget `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn grabShortcut2(self: QListWidget, key: anytype, context: i32) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutEnabled2(self: QListWidget, id: i32, enable: bool) void {
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
    /// ` self: QListWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn setShortcutAutoRepeat2(self: QListWidget, id: i32, enable: bool) void {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn setWindowFlag2(self: QListWidget, param1: i32, on: bool) void {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn setAttribute2(self: QListWidget, param1: i32, on: bool) void {
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
    /// ` _flags: flag of qnamespace_enums.WindowType `
    ///
    pub fn createWindowContainer3(_window: anytype, _parent: anytype, _flags: i32) QWidget {
        comptime _ = @TypeOf(_window)._is_QWindow;
        comptime _ = @TypeOf(_parent)._is_QWidget;
        return .{ .ptr = qtc.QWidget_CreateWindowContainer3(@ptrCast(_window.ptr), @ptrCast(_parent.ptr), @bitCast(_flags)) };
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn objectName(self: QListWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("QListWidget.objectName: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn setObjectName(self: QListWidget, name: []const u8) void {
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
    /// ` self: QListWidget `
    ///
    pub fn isWidgetType(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn isWindowType(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn isQuickItemType(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn signalsBlocked(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` b: bool `
    ///
    pub fn blockSignals(self: QListWidget, b: bool) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn thread(self: QListWidget) QThread {
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
    /// ` self: QListWidget `
    ///
    /// ` _thread: QThread `
    ///
    pub fn moveToThread(self: QListWidget, _thread: anytype) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` interval: i32 `
    ///
    pub fn startTimer(self: QListWidget, interval: i32) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn startTimer2(self: QListWidget, time: i64) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn killTimer(self: QListWidget, id: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn killTimer2(self: QListWidget, id: i32) void {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn children(self: QListWidget, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("QListWidget.children: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn installEventFilter(self: QListWidget, filterObj: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` obj: QObject `
    ///
    pub fn removeEventFilter(self: QListWidget, obj: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn connect3(self: QListWidget, _sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QListWidget `
    ///
    pub fn disconnect3(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect4(self: QListWidget, receiver: anytype) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn dumpObjectTree(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    pub fn dumpObjectInfo(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn setProperty(self: QListWidget, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn property(self: QListWidget, name: [:0]const u8) QVariant {
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
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn dynamicPropertyNames(self: QListWidget, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("QListWidget.dynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("QListWidget.dynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QListWidget `
    ///
    pub fn bindingStorage(self: QListWidget) QBindingStorage {
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
    /// ` self: QListWidget `
    ///
    pub fn bindingStorage2(self: QListWidget) QBindingStorage {
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
    /// ` self: QListWidget `
    ///
    pub fn destroyed(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget) callconv(.c) void `
    ///
    pub fn onDestroyed(self: QListWidget, callback: *const fn (QListWidget) callconv(.c) void) void {
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
    /// ` self: QListWidget `
    ///
    pub fn parent(self: QListWidget) QObject {
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
    /// ` self: QListWidget `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn inherits(self: QListWidget, classname: [:0]const u8) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn deleteLater(self: QListWidget) void {
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
    /// ` self: QListWidget `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer22(self: QListWidget, interval: i32, timerType: i32) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn startTimer23(self: QListWidget, time: i64, timerType: i32) i32 {
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
    /// ` self: QListWidget `
    ///
    /// ` _sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn connect4(self: QListWidget, _sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QListWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn disconnect1(self: QListWidget, signal: [:0]const u8) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn disconnect22(self: QListWidget, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect32(self: QListWidget, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn disconnect23(self: QListWidget, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QObject `
    ///
    pub fn destroyed1(self: QListWidget, param1: anytype) void {
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
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, param1: QObject) callconv(.c) void `
    ///
    pub fn onDestroyed1(self: QListWidget, callback: *const fn (QListWidget, QObject) callconv(.c) void) void {
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
    /// ` self: QListWidget `
    ///
    pub fn paintingActive(self: QListWidget) bool {
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
    /// ` self: QListWidget `
    ///
    pub fn widthMM(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn heightMM(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn logicalDpiX(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn logicalDpiY(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn physicalDpiX(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn physicalDpiY(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn devicePixelRatio(self: QListWidget) f64 {
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
    /// ` self: QListWidget `
    ///
    pub fn devicePixelRatioF(self: QListWidget) f64 {
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
    /// ` self: QListWidget `
    ///
    pub fn colorCount(self: QListWidget) i32 {
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
    /// ` self: QListWidget `
    ///
    pub fn depth(self: QListWidget) i32 {
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

    /// ### DEPRECATED: Use `visualRect` instead
    ///
    pub const VisualRect = visualRect;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn visualRect(self: QListWidget, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QListWidget_VisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `superVisualRect` instead
    ///
    pub const SuperVisualRect = superVisualRect;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superVisualRect(self: QListWidget, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QListWidget_SuperVisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `onVisualRect` instead
    ///
    pub const OnVisualRect = onVisualRect;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex) callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onVisualRect(self: QListWidget, callback: *const fn (QListWidget, QModelIndex) callconv(.c) QRect) void {
        qtc.QListWidget_OnVisualRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollTo` instead
    ///
    pub const ScrollTo = scrollTo;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn scrollTo(self: QListWidget, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QListWidget_ScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `superScrollTo` instead
    ///
    pub const SuperScrollTo = superScrollTo;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn superScrollTo(self: QListWidget, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QListWidget_SuperScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onScrollTo` instead
    ///
    pub const OnScrollTo = onScrollTo;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollTo)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex, hint: qabstractitemview_enums.ScrollHint) callconv(.c) void `
    ///
    pub fn onScrollTo(self: QListWidget, callback: *const fn (QListWidget, QModelIndex, i32) callconv(.c) void) void {
        qtc.QListWidget_OnScrollTo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `indexAt` instead
    ///
    pub const IndexAt = indexAt;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn indexAt(self: QListWidget, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QListWidget_IndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `superIndexAt` instead
    ///
    pub const SuperIndexAt = superIndexAt;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn superIndexAt(self: QListWidget, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QListWidget_SuperIndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `onIndexAt` instead
    ///
    pub const OnIndexAt = onIndexAt;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#indexAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, p: QPoint) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onIndexAt(self: QListWidget, callback: *const fn (QListWidget, QPoint) callconv(.c) QModelIndex) void {
        qtc.QListWidget_OnIndexAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doItemsLayout` instead
    ///
    pub const DoItemsLayout = doItemsLayout;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn doItemsLayout(self: QListWidget) void {
        qtc.QListWidget_DoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoItemsLayout` instead
    ///
    pub const SuperDoItemsLayout = superDoItemsLayout;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superDoItemsLayout(self: QListWidget) void {
        qtc.QListWidget_SuperDoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoItemsLayout` instead
    ///
    pub const OnDoItemsLayout = onDoItemsLayout;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#doItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDoItemsLayout(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnDoItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `reset` instead
    ///
    pub const Reset = reset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn reset(self: QListWidget) void {
        qtc.QListWidget_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superReset` instead
    ///
    pub const SuperReset = superReset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superReset(self: QListWidget) void {
        qtc.QListWidget_SuperReset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onReset` instead
    ///
    pub const OnReset = onReset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onReset(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setRootIndex` instead
    ///
    pub const SetRootIndex = setRootIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn setRootIndex(self: QListWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QListWidget_SetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superSetRootIndex` instead
    ///
    pub const SuperSetRootIndex = superSetRootIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superSetRootIndex(self: QListWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QListWidget_SuperSetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onSetRootIndex` instead
    ///
    pub const OnSetRootIndex = onSetRootIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setRootIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onSetRootIndex(self: QListWidget, callback: *const fn (QListWidget, QModelIndex) callconv(.c) void) void {
        qtc.QListWidget_OnSetRootIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollContentsBy` instead
    ///
    pub const ScrollContentsBy = scrollContentsBy;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scrollContentsBy(self: QListWidget, dx: i32, dy: i32) void {
        qtc.QListWidget_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `superScrollContentsBy` instead
    ///
    pub const SuperScrollContentsBy = superScrollContentsBy;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn superScrollContentsBy(self: QListWidget, dx: i32, dy: i32) void {
        qtc.QListWidget_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onScrollContentsBy` instead
    ///
    pub const OnScrollContentsBy = onScrollContentsBy;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn onScrollContentsBy(self: QListWidget, callback: *const fn (QListWidget, i32, i32) callconv(.c) void) void {
        qtc.QListWidget_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dataChanged` instead
    ///
    pub const DataChanged = dataChanged;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn dataChanged(self: QListWidget, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QListWidget_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `superDataChanged` instead
    ///
    pub const SuperDataChanged = superDataChanged;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn superDataChanged(self: QListWidget, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QListWidget_SuperDataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `onDataChanged` instead
    ///
    pub const OnDataChanged = onDataChanged;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dataChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn onDataChanged(self: QListWidget, callback: *const fn (QListWidget, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QListWidget_OnDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsInserted` instead
    ///
    pub const RowsInserted = rowsInserted;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn rowsInserted(self: QListWidget, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QListWidget_RowsInserted(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `superRowsInserted` instead
    ///
    pub const SuperRowsInserted = superRowsInserted;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn superRowsInserted(self: QListWidget, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QListWidget_SuperRowsInserted(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `onRowsInserted` instead
    ///
    pub const OnRowsInserted = onRowsInserted;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsInserted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, parent: QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn onRowsInserted(self: QListWidget, callback: *const fn (QListWidget, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QListWidget_OnRowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rowsAboutToBeRemoved` instead
    ///
    pub const RowsAboutToBeRemoved = rowsAboutToBeRemoved;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn rowsAboutToBeRemoved(self: QListWidget, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QListWidget_RowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `superRowsAboutToBeRemoved` instead
    ///
    pub const SuperRowsAboutToBeRemoved = superRowsAboutToBeRemoved;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn superRowsAboutToBeRemoved(self: QListWidget, _parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(_parent)._is_QModelIndex;
        qtc.QListWidget_SuperRowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(_parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `onRowsAboutToBeRemoved` instead
    ///
    pub const OnRowsAboutToBeRemoved = onRowsAboutToBeRemoved;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, parent: QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn onRowsAboutToBeRemoved(self: QListWidget, callback: *const fn (QListWidget, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QListWidget_OnRowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseMoveEvent` instead
    ///
    pub const MouseMoveEvent = mouseMoveEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseMoveEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QListWidget_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMouseMoveEvent` instead
    ///
    pub const SuperMouseMoveEvent = superMouseMoveEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn superMouseMoveEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QListWidget_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseMoveEvent` instead
    ///
    pub const OnMouseMoveEvent = onMouseMoveEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseMoveEvent(self: QListWidget, callback: *const fn (QListWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QListWidget_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseReleaseEvent` instead
    ///
    pub const MouseReleaseEvent = mouseReleaseEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn mouseReleaseEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QListWidget_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superMouseReleaseEvent` instead
    ///
    pub const SuperMouseReleaseEvent = superMouseReleaseEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QMouseEvent `
    ///
    pub fn superMouseReleaseEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QMouseEvent;
        qtc.QListWidget_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onMouseReleaseEvent` instead
    ///
    pub const OnMouseReleaseEvent = onMouseReleaseEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, e: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseReleaseEvent(self: QListWidget, callback: *const fn (QListWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QListWidget_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `wheelEvent` instead
    ///
    pub const WheelEvent = wheelEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn wheelEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.QListWidget_WheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superWheelEvent` instead
    ///
    pub const SuperWheelEvent = superWheelEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QWheelEvent `
    ///
    pub fn superWheelEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QWheelEvent;
        qtc.QListWidget_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onWheelEvent` instead
    ///
    pub const OnWheelEvent = onWheelEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, e: QWheelEvent) callconv(.c) void `
    ///
    pub fn onWheelEvent(self: QListWidget, callback: *const fn (QListWidget, QWheelEvent) callconv(.c) void) void {
        qtc.QListWidget_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `timerEvent` instead
    ///
    pub const TimerEvent = timerEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn timerEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.QListWidget_TimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superTimerEvent` instead
    ///
    pub const SuperTimerEvent = superTimerEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QTimerEvent `
    ///
    pub fn superTimerEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QTimerEvent;
        qtc.QListWidget_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onTimerEvent` instead
    ///
    pub const OnTimerEvent = onTimerEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, e: QTimerEvent) callconv(.c) void `
    ///
    pub fn onTimerEvent(self: QListWidget, callback: *const fn (QListWidget, QTimerEvent) callconv(.c) void) void {
        qtc.QListWidget_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeEvent` instead
    ///
    pub const ResizeEvent = resizeEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn resizeEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QListWidget_ResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superResizeEvent` instead
    ///
    pub const SuperResizeEvent = superResizeEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QResizeEvent `
    ///
    pub fn superResizeEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QResizeEvent;
        qtc.QListWidget_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onResizeEvent` instead
    ///
    pub const OnResizeEvent = onResizeEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, e: QResizeEvent) callconv(.c) void `
    ///
    pub fn onResizeEvent(self: QListWidget, callback: *const fn (QListWidget, QResizeEvent) callconv(.c) void) void {
        qtc.QListWidget_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragMoveEvent` instead
    ///
    pub const DragMoveEvent = dragMoveEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn dragMoveEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QListWidget_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragMoveEvent` instead
    ///
    pub const SuperDragMoveEvent = superDragMoveEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QDragMoveEvent `
    ///
    pub fn superDragMoveEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragMoveEvent;
        qtc.QListWidget_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragMoveEvent` instead
    ///
    pub const OnDragMoveEvent = onDragMoveEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, e: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn onDragMoveEvent(self: QListWidget, callback: *const fn (QListWidget, QDragMoveEvent) callconv(.c) void) void {
        qtc.QListWidget_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragLeaveEvent` instead
    ///
    pub const DragLeaveEvent = dragLeaveEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn dragLeaveEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QListWidget_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superDragLeaveEvent` instead
    ///
    pub const SuperDragLeaveEvent = superDragLeaveEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QDragLeaveEvent `
    ///
    pub fn superDragLeaveEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QDragLeaveEvent;
        qtc.QListWidget_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onDragLeaveEvent` instead
    ///
    pub const OnDragLeaveEvent = onDragLeaveEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, e: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn onDragLeaveEvent(self: QListWidget, callback: *const fn (QListWidget, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QListWidget_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `startDrag` instead
    ///
    pub const StartDrag = startDrag;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#startDrag)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn startDrag(self: QListWidget, supportedActions: i32) void {
        qtc.QListWidget_StartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// ### DEPRECATED: Use `superStartDrag` instead
    ///
    pub const SuperStartDrag = superStartDrag;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#startDrag)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn superStartDrag(self: QListWidget, supportedActions: i32) void {
        qtc.QListWidget_SuperStartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// ### DEPRECATED: Use `onStartDrag` instead
    ///
    pub const OnStartDrag = onStartDrag;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#startDrag)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, supportedActions: flag of qnamespace_enums.DropAction) callconv(.c) void `
    ///
    pub fn onStartDrag(self: QListWidget, callback: *const fn (QListWidget, i32) callconv(.c) void) void {
        qtc.QListWidget_OnStartDrag(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `initViewItemOption` instead
    ///
    pub const InitViewItemOption = initViewItemOption;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn initViewItemOption(self: QListWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QListWidget_InitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `superInitViewItemOption` instead
    ///
    pub const SuperInitViewItemOption = superInitViewItemOption;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn superInitViewItemOption(self: QListWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QListWidget_SuperInitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `onInitViewItemOption` instead
    ///
    pub const OnInitViewItemOption = onInitViewItemOption;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#initViewItemOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, option: QStyleOptionViewItem) callconv(.c) void `
    ///
    pub fn onInitViewItemOption(self: QListWidget, callback: *const fn (QListWidget, QStyleOptionViewItem) callconv(.c) void) void {
        qtc.QListWidget_OnInitViewItemOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `paintEvent` instead
    ///
    pub const PaintEvent = paintEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn paintEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QListWidget_PaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `superPaintEvent` instead
    ///
    pub const SuperPaintEvent = superPaintEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` e: QPaintEvent `
    ///
    pub fn superPaintEvent(self: QListWidget, e: anytype) void {
        comptime _ = @TypeOf(e)._is_QPaintEvent;
        qtc.QListWidget_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### DEPRECATED: Use `onPaintEvent` instead
    ///
    pub const OnPaintEvent = onPaintEvent;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, e: QPaintEvent) callconv(.c) void `
    ///
    pub fn onPaintEvent(self: QListWidget, callback: *const fn (QListWidget, QPaintEvent) callconv(.c) void) void {
        qtc.QListWidget_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `horizontalOffset` instead
    ///
    pub const HorizontalOffset = horizontalOffset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn horizontalOffset(self: QListWidget) i32 {
        return qtc.QListWidget_HorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superHorizontalOffset` instead
    ///
    pub const SuperHorizontalOffset = superHorizontalOffset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superHorizontalOffset(self: QListWidget) i32 {
        return qtc.QListWidget_SuperHorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onHorizontalOffset` instead
    ///
    pub const OnHorizontalOffset = onHorizontalOffset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#horizontalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onHorizontalOffset(self: QListWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnHorizontalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `verticalOffset` instead
    ///
    pub const VerticalOffset = verticalOffset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn verticalOffset(self: QListWidget) i32 {
        return qtc.QListWidget_VerticalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superVerticalOffset` instead
    ///
    pub const SuperVerticalOffset = superVerticalOffset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superVerticalOffset(self: QListWidget) i32 {
        return qtc.QListWidget_SuperVerticalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onVerticalOffset` instead
    ///
    pub const OnVerticalOffset = onVerticalOffset;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#verticalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onVerticalOffset(self: QListWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnVerticalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `moveCursor` instead
    ///
    pub const MoveCursor = moveCursor;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` cursorAction: qabstractitemview_enums.CursorAction `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn moveCursor(self: QListWidget, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.QListWidget_MoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// ### DEPRECATED: Use `superMoveCursor` instead
    ///
    pub const SuperMoveCursor = superMoveCursor;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` cursorAction: qabstractitemview_enums.CursorAction `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn superMoveCursor(self: QListWidget, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.QListWidget_SuperMoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// ### DEPRECATED: Use `onMoveCursor` instead
    ///
    pub const OnMoveCursor = onMoveCursor;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#moveCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier) callconv(.c) QModelIndex `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMoveCursor(self: QListWidget, callback: *const fn (QListWidget, i32, i32) callconv(.c) QModelIndex) void {
        qtc.QListWidget_OnMoveCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setSelection` instead
    ///
    pub const SetSelection = setSelection;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _rect: QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn setSelection(self: QListWidget, _rect: anytype, command: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QListWidget_SetSelection(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `superSetSelection` instead
    ///
    pub const SuperSetSelection = superSetSelection;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _rect: QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn superSetSelection(self: QListWidget, _rect: anytype, command: i32) void {
        comptime _ = @TypeOf(_rect)._is_QRect;
        qtc.QListWidget_SuperSetSelection(@ptrCast(self.ptr), @ptrCast(_rect.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `onSetSelection` instead
    ///
    pub const OnSetSelection = onSetSelection;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, rect: QRect, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn onSetSelection(self: QListWidget, callback: *const fn (QListWidget, QRect, i32) callconv(.c) void) void {
        qtc.QListWidget_OnSetSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `visualRegionForSelection` instead
    ///
    pub const VisualRegionForSelection = visualRegionForSelection;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn visualRegionForSelection(self: QListWidget, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QListWidget_VisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `superVisualRegionForSelection` instead
    ///
    pub const SuperVisualRegionForSelection = superVisualRegionForSelection;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn superVisualRegionForSelection(self: QListWidget, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QListWidget_SuperVisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `onVisualRegionForSelection` instead
    ///
    pub const OnVisualRegionForSelection = onVisualRegionForSelection;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, selection: QItemSelection) callconv(.c) QRegion `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onVisualRegionForSelection(self: QListWidget, callback: *const fn (QListWidget, QItemSelection) callconv(.c) QRegion) void {
        qtc.QListWidget_OnVisualRegionForSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectedIndexes` instead
    ///
    pub const SelectedIndexes = selectedIndexes;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn selectedIndexes(self: QListWidget, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QListWidget_SelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QListWidget.selectedIndexes: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `superSelectedIndexes` instead
    ///
    pub const SuperSelectedIndexes = superSelectedIndexes;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn superSelectedIndexes(self: QListWidget, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QListWidget_SuperSelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("QListWidget.selectedIndexes: Memory allocation failed");
        const _data_val: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `onSelectedIndexes` instead
    ///
    pub const OnSelectedIndexes = onSelectedIndexes;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectedIndexes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn onSelectedIndexes(self: QListWidget, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QListWidget_OnSelectedIndexes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateGeometries` instead
    ///
    pub const UpdateGeometries = updateGeometries;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn updateGeometries(self: QListWidget) void {
        qtc.QListWidget_UpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateGeometries` instead
    ///
    pub const SuperUpdateGeometries = superUpdateGeometries;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superUpdateGeometries(self: QListWidget) void {
        qtc.QListWidget_SuperUpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateGeometries` instead
    ///
    pub const OnUpdateGeometries = onUpdateGeometries;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#updateGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateGeometries(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnUpdateGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `isIndexHidden` instead
    ///
    pub const IsIndexHidden = isIndexHidden;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn isIndexHidden(self: QListWidget, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QListWidget_IsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superIsIndexHidden` instead
    ///
    pub const SuperIsIndexHidden = superIsIndexHidden;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superIsIndexHidden(self: QListWidget, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QListWidget_SuperIsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onIsIndexHidden` instead
    ///
    pub const OnIsIndexHidden = onIsIndexHidden;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#isIndexHidden)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn onIsIndexHidden(self: QListWidget, callback: *const fn (QListWidget, QModelIndex) callconv(.c) bool) void {
        qtc.QListWidget_OnIsIndexHidden(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionChanged` instead
    ///
    pub const SelectionChanged = selectionChanged;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn selectionChanged(self: QListWidget, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QListWidget_SelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `superSelectionChanged` instead
    ///
    pub const SuperSelectionChanged = superSelectionChanged;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn superSelectionChanged(self: QListWidget, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QListWidget_SuperSelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionChanged` instead
    ///
    pub const OnSelectionChanged = onSelectionChanged;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#selectionChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, selected: QItemSelection, deselected: QItemSelection) callconv(.c) void `
    ///
    pub fn onSelectionChanged(self: QListWidget, callback: *const fn (QListWidget, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.QListWidget_OnSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `currentChanged` instead
    ///
    pub const CurrentChanged = currentChanged;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn currentChanged(self: QListWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QListWidget_CurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `superCurrentChanged` instead
    ///
    pub const SuperCurrentChanged = superCurrentChanged;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn superCurrentChanged(self: QListWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QListWidget_SuperCurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `onCurrentChanged` instead
    ///
    pub const OnCurrentChanged = onCurrentChanged;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#currentChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, current: QModelIndex, previous: QModelIndex) callconv(.c) void `
    ///
    pub fn onCurrentChanged(self: QListWidget, callback: *const fn (QListWidget, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QListWidget_OnCurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewportSizeHint` instead
    ///
    pub const ViewportSizeHint = viewportSizeHint;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn viewportSizeHint(self: QListWidget) QSize {
        return .{ .ptr = qtc.QListWidget_ViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superViewportSizeHint` instead
    ///
    pub const SuperViewportSizeHint = superViewportSizeHint;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superViewportSizeHint(self: QListWidget) QSize {
        return .{ .ptr = qtc.QListWidget_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onViewportSizeHint` instead
    ///
    pub const OnViewportSizeHint = onViewportSizeHint;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportSizeHint(self: QListWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QListWidget_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyboardSearch` instead
    ///
    pub const KeyboardSearch = keyboardSearch;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` search: []const u8 `
    ///
    pub fn keyboardSearch(self: QListWidget, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QListWidget_KeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// ### DEPRECATED: Use `superKeyboardSearch` instead
    ///
    pub const SuperKeyboardSearch = superKeyboardSearch;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` search: []const u8 `
    ///
    pub fn superKeyboardSearch(self: QListWidget, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QListWidget_SuperKeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// ### DEPRECATED: Use `onKeyboardSearch` instead
    ///
    pub const OnKeyboardSearch = onKeyboardSearch;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyboardSearch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, search: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onKeyboardSearch(self: QListWidget, callback: *const fn (QListWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QListWidget_OnKeyboardSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHintForRow` instead
    ///
    pub const SizeHintForRow = sizeHintForRow;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn sizeHintForRow(self: QListWidget, _row: i32) i32 {
        return qtc.QListWidget_SizeHintForRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `superSizeHintForRow` instead
    ///
    pub const SuperSizeHintForRow = superSizeHintForRow;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _row: i32 `
    ///
    pub fn superSizeHintForRow(self: QListWidget, _row: i32) i32 {
        return qtc.QListWidget_SuperSizeHintForRow(@ptrCast(self.ptr), @bitCast(_row));
    }

    /// ### DEPRECATED: Use `onSizeHintForRow` instead
    ///
    pub const OnSizeHintForRow = onSizeHintForRow;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, row: i32) callconv(.c) i32 `
    ///
    pub fn onSizeHintForRow(self: QListWidget, callback: *const fn (QListWidget, i32) callconv(.c) i32) void {
        qtc.QListWidget_OnSizeHintForRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `sizeHintForColumn` instead
    ///
    pub const SizeHintForColumn = sizeHintForColumn;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn sizeHintForColumn(self: QListWidget, column: i32) i32 {
        return qtc.QListWidget_SizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `superSizeHintForColumn` instead
    ///
    pub const SuperSizeHintForColumn = superSizeHintForColumn;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn superSizeHintForColumn(self: QListWidget, column: i32) i32 {
        return qtc.QListWidget_SuperSizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `onSizeHintForColumn` instead
    ///
    pub const OnSizeHintForColumn = onSizeHintForColumn;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, column: i32) callconv(.c) i32 `
    ///
    pub fn onSizeHintForColumn(self: QListWidget, callback: *const fn (QListWidget, i32) callconv(.c) i32) void {
        qtc.QListWidget_OnSizeHintForColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `itemDelegateForIndex` instead
    ///
    pub const ItemDelegateForIndex = itemDelegateForIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn itemDelegateForIndex(self: QListWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QListWidget_ItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `superItemDelegateForIndex` instead
    ///
    pub const SuperItemDelegateForIndex = superItemDelegateForIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superItemDelegateForIndex(self: QListWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QListWidget_SuperItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `onItemDelegateForIndex` instead
    ///
    pub const OnItemDelegateForIndex = onItemDelegateForIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex) callconv(.c) QAbstractItemDelegate `
    ///
    pub fn onItemDelegateForIndex(self: QListWidget, callback: *const fn (QListWidget, QModelIndex) callconv(.c) QAbstractItemDelegate) void {
        qtc.QListWidget_OnItemDelegateForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodQuery` instead
    ///
    pub const InputMethodQuery = inputMethodQuery;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn inputMethodQuery(self: QListWidget, query: i32) QVariant {
        return .{ .ptr = qtc.QListWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `superInputMethodQuery` instead
    ///
    pub const SuperInputMethodQuery = superInputMethodQuery;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn superInputMethodQuery(self: QListWidget, query: i32) QVariant {
        return .{ .ptr = qtc.QListWidget_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `onInputMethodQuery` instead
    ///
    pub const OnInputMethodQuery = onInputMethodQuery;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onInputMethodQuery(self: QListWidget, callback: *const fn (QListWidget, i32) callconv(.c) QVariant) void {
        qtc.QListWidget_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectAll` instead
    ///
    pub const SelectAll = selectAll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn selectAll(self: QListWidget) void {
        qtc.QListWidget_SelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superSelectAll` instead
    ///
    pub const SuperSelectAll = superSelectAll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superSelectAll(self: QListWidget) void {
        qtc.QListWidget_SuperSelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onSelectAll` instead
    ///
    pub const OnSelectAll = onSelectAll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectAll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onSelectAll(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnSelectAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateEditorData` instead
    ///
    pub const UpdateEditorData = updateEditorData;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn updateEditorData(self: QListWidget) void {
        qtc.QListWidget_UpdateEditorData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateEditorData` instead
    ///
    pub const SuperUpdateEditorData = superUpdateEditorData;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superUpdateEditorData(self: QListWidget) void {
        qtc.QListWidget_SuperUpdateEditorData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateEditorData` instead
    ///
    pub const OnUpdateEditorData = onUpdateEditorData;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateEditorData(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnUpdateEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `updateEditorGeometries` instead
    ///
    pub const UpdateEditorGeometries = updateEditorGeometries;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn updateEditorGeometries(self: QListWidget) void {
        qtc.QListWidget_UpdateEditorGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superUpdateEditorGeometries` instead
    ///
    pub const SuperUpdateEditorGeometries = superUpdateEditorGeometries;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superUpdateEditorGeometries(self: QListWidget) void {
        qtc.QListWidget_SuperUpdateEditorGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onUpdateEditorGeometries` instead
    ///
    pub const OnUpdateEditorGeometries = onUpdateEditorGeometries;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateEditorGeometries(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnUpdateEditorGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `verticalScrollbarAction` instead
    ///
    pub const VerticalScrollbarAction = verticalScrollbarAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn verticalScrollbarAction(self: QListWidget, action: i32) void {
        qtc.QListWidget_VerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `superVerticalScrollbarAction` instead
    ///
    pub const SuperVerticalScrollbarAction = superVerticalScrollbarAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn superVerticalScrollbarAction(self: QListWidget, action: i32) void {
        qtc.QListWidget_SuperVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `onVerticalScrollbarAction` instead
    ///
    pub const OnVerticalScrollbarAction = onVerticalScrollbarAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, action: i32) callconv(.c) void `
    ///
    pub fn onVerticalScrollbarAction(self: QListWidget, callback: *const fn (QListWidget, i32) callconv(.c) void) void {
        qtc.QListWidget_OnVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `horizontalScrollbarAction` instead
    ///
    pub const HorizontalScrollbarAction = horizontalScrollbarAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn horizontalScrollbarAction(self: QListWidget, action: i32) void {
        qtc.QListWidget_HorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `superHorizontalScrollbarAction` instead
    ///
    pub const SuperHorizontalScrollbarAction = superHorizontalScrollbarAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn superHorizontalScrollbarAction(self: QListWidget, action: i32) void {
        qtc.QListWidget_SuperHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `onHorizontalScrollbarAction` instead
    ///
    pub const OnHorizontalScrollbarAction = onHorizontalScrollbarAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, action: i32) callconv(.c) void `
    ///
    pub fn onHorizontalScrollbarAction(self: QListWidget, callback: *const fn (QListWidget, i32) callconv(.c) void) void {
        qtc.QListWidget_OnHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `verticalScrollbarValueChanged` instead
    ///
    pub const VerticalScrollbarValueChanged = verticalScrollbarValueChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn verticalScrollbarValueChanged(self: QListWidget, value: i32) void {
        qtc.QListWidget_VerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `superVerticalScrollbarValueChanged` instead
    ///
    pub const SuperVerticalScrollbarValueChanged = superVerticalScrollbarValueChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn superVerticalScrollbarValueChanged(self: QListWidget, value: i32) void {
        qtc.QListWidget_SuperVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onVerticalScrollbarValueChanged` instead
    ///
    pub const OnVerticalScrollbarValueChanged = onVerticalScrollbarValueChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, value: i32) callconv(.c) void `
    ///
    pub fn onVerticalScrollbarValueChanged(self: QListWidget, callback: *const fn (QListWidget, i32) callconv(.c) void) void {
        qtc.QListWidget_OnVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `horizontalScrollbarValueChanged` instead
    ///
    pub const HorizontalScrollbarValueChanged = horizontalScrollbarValueChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn horizontalScrollbarValueChanged(self: QListWidget, value: i32) void {
        qtc.QListWidget_HorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `superHorizontalScrollbarValueChanged` instead
    ///
    pub const SuperHorizontalScrollbarValueChanged = superHorizontalScrollbarValueChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn superHorizontalScrollbarValueChanged(self: QListWidget, value: i32) void {
        qtc.QListWidget_SuperHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `onHorizontalScrollbarValueChanged` instead
    ///
    pub const OnHorizontalScrollbarValueChanged = onHorizontalScrollbarValueChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, value: i32) callconv(.c) void `
    ///
    pub fn onHorizontalScrollbarValueChanged(self: QListWidget, callback: *const fn (QListWidget, i32) callconv(.c) void) void {
        qtc.QListWidget_OnHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `closeEditor` instead
    ///
    pub const CloseEditor = closeEditor;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn closeEditor(self: QListWidget, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QListWidget_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `superCloseEditor` instead
    ///
    pub const SuperCloseEditor = superCloseEditor;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn superCloseEditor(self: QListWidget, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QListWidget_SuperCloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `onCloseEditor` instead
    ///
    pub const OnCloseEditor = onCloseEditor;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, editor: QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
    ///
    pub fn onCloseEditor(self: QListWidget, callback: *const fn (QListWidget, QWidget, i32) callconv(.c) void) void {
        qtc.QListWidget_OnCloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `commitData` instead
    ///
    pub const CommitData = commitData;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` editor: QWidget `
    ///
    pub fn commitData(self: QListWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QListWidget_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `superCommitData` instead
    ///
    pub const SuperCommitData = superCommitData;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` editor: QWidget `
    ///
    pub fn superCommitData(self: QListWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QListWidget_SuperCommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `onCommitData` instead
    ///
    pub const OnCommitData = onCommitData;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, editor: QWidget) callconv(.c) void `
    ///
    pub fn onCommitData(self: QListWidget, callback: *const fn (QListWidget, QWidget) callconv(.c) void) void {
        qtc.QListWidget_OnCommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `editorDestroyed` instead
    ///
    pub const EditorDestroyed = editorDestroyed;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` editor: QObject `
    ///
    pub fn editorDestroyed(self: QListWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QListWidget_EditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `superEditorDestroyed` instead
    ///
    pub const SuperEditorDestroyed = superEditorDestroyed;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` editor: QObject `
    ///
    pub fn superEditorDestroyed(self: QListWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QListWidget_SuperEditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `onEditorDestroyed` instead
    ///
    pub const OnEditorDestroyed = onEditorDestroyed;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, editor: QObject) callconv(.c) void `
    ///
    pub fn onEditorDestroyed(self: QListWidget, callback: *const fn (QListWidget, QObject) callconv(.c) void) void {
        qtc.QListWidget_OnEditorDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `edit2` instead
    ///
    pub const Edit2 = edit2;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` _event: QEvent `
    ///
    pub fn edit2(self: QListWidget, index: anytype, trigger: i32, _event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QListWidget_Edit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEdit2` instead
    ///
    pub const SuperEdit2 = superEdit2;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEdit2(self: QListWidget, index: anytype, trigger: i32, _event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QListWidget_SuperEdit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEdit2` instead
    ///
    pub const OnEdit2 = onEdit2;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEdit2(self: QListWidget, callback: *const fn (QListWidget, QModelIndex, i32, QEvent) callconv(.c) bool) void {
        qtc.QListWidget_OnEdit2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `selectionCommand` instead
    ///
    pub const SelectionCommand = selectionCommand;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` _event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn selectionCommand(self: QListWidget, index: anytype, _event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QListWidget_SelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superSelectionCommand` instead
    ///
    pub const SuperSelectionCommand = superSelectionCommand;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` _event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn superSelectionCommand(self: QListWidget, index: anytype, _event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QListWidget_SuperSelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onSelectionCommand` instead
    ///
    pub const OnSelectionCommand = onSelectionCommand;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex, event: QEvent) callconv(.c) i32 `
    ///
    pub fn onSelectionCommand(self: QListWidget, callback: *const fn (QListWidget, QModelIndex, QEvent) callconv(.c) i32) void {
        qtc.QListWidget_OnSelectionCommand(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusNextPrevChild` instead
    ///
    pub const FocusNextPrevChild = focusNextPrevChild;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` next: bool `
    ///
    pub fn focusNextPrevChild(self: QListWidget, next: bool) bool {
        return qtc.QListWidget_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `superFocusNextPrevChild` instead
    ///
    pub const SuperFocusNextPrevChild = superFocusNextPrevChild;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` next: bool `
    ///
    pub fn superFocusNextPrevChild(self: QListWidget, next: bool) bool {
        return qtc.QListWidget_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `onFocusNextPrevChild` instead
    ///
    pub const OnFocusNextPrevChild = onFocusNextPrevChild;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, next: bool) callconv(.c) bool `
    ///
    pub fn onFocusNextPrevChild(self: QListWidget, callback: *const fn (QListWidget, bool) callconv(.c) bool) void {
        qtc.QListWidget_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `viewportEvent` instead
    ///
    pub const ViewportEvent = viewportEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn viewportEvent(self: QListWidget, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QListWidget_ViewportEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superViewportEvent` instead
    ///
    pub const SuperViewportEvent = superViewportEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superViewportEvent(self: QListWidget, _event: anytype) bool {
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QListWidget_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onViewportEvent` instead
    ///
    pub const OnViewportEvent = onViewportEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QEvent) callconv(.c) bool `
    ///
    pub fn onViewportEvent(self: QListWidget, callback: *const fn (QListWidget, QEvent) callconv(.c) bool) void {
        qtc.QListWidget_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mousePressEvent` instead
    ///
    pub const MousePressEvent = mousePressEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mousePressEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QListWidget_MousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMousePressEvent` instead
    ///
    pub const SuperMousePressEvent = superMousePressEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMousePressEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QListWidget_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMousePressEvent` instead
    ///
    pub const OnMousePressEvent = onMousePressEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMousePressEvent(self: QListWidget, callback: *const fn (QListWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QListWidget_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `mouseDoubleClickEvent` instead
    ///
    pub const MouseDoubleClickEvent = mouseDoubleClickEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn mouseDoubleClickEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QListWidget_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superMouseDoubleClickEvent` instead
    ///
    pub const SuperMouseDoubleClickEvent = superMouseDoubleClickEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QMouseEvent `
    ///
    pub fn superMouseDoubleClickEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMouseEvent;
        qtc.QListWidget_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onMouseDoubleClickEvent` instead
    ///
    pub const OnMouseDoubleClickEvent = onMouseDoubleClickEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn onMouseDoubleClickEvent(self: QListWidget, callback: *const fn (QListWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QListWidget_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dragEnterEvent` instead
    ///
    pub const DragEnterEvent = dragEnterEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn dragEnterEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QListWidget_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superDragEnterEvent` instead
    ///
    pub const SuperDragEnterEvent = superDragEnterEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QDragEnterEvent `
    ///
    pub fn superDragEnterEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QDragEnterEvent;
        qtc.QListWidget_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onDragEnterEvent` instead
    ///
    pub const OnDragEnterEvent = onDragEnterEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn onDragEnterEvent(self: QListWidget, callback: *const fn (QListWidget, QDragEnterEvent) callconv(.c) void) void {
        qtc.QListWidget_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusInEvent` instead
    ///
    pub const FocusInEvent = focusInEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusInEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QListWidget_FocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusInEvent` instead
    ///
    pub const SuperFocusInEvent = superFocusInEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusInEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QListWidget_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusInEvent` instead
    ///
    pub const OnFocusInEvent = onFocusInEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusInEvent(self: QListWidget, callback: *const fn (QListWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QListWidget_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `focusOutEvent` instead
    ///
    pub const FocusOutEvent = focusOutEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn focusOutEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QListWidget_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superFocusOutEvent` instead
    ///
    pub const SuperFocusOutEvent = superFocusOutEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QFocusEvent `
    ///
    pub fn superFocusOutEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QFocusEvent;
        qtc.QListWidget_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onFocusOutEvent` instead
    ///
    pub const OnFocusOutEvent = onFocusOutEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn onFocusOutEvent(self: QListWidget, callback: *const fn (QListWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QListWidget_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `keyPressEvent` instead
    ///
    pub const KeyPressEvent = keyPressEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyPressEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QListWidget_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superKeyPressEvent` instead
    ///
    pub const SuperKeyPressEvent = superKeyPressEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyPressEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QListWidget_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onKeyPressEvent` instead
    ///
    pub const OnKeyPressEvent = onKeyPressEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyPressEvent(self: QListWidget, callback: *const fn (QListWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QListWidget_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `inputMethodEvent` instead
    ///
    pub const InputMethodEvent = inputMethodEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn inputMethodEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QListWidget_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superInputMethodEvent` instead
    ///
    pub const SuperInputMethodEvent = superInputMethodEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _event: QInputMethodEvent `
    ///
    pub fn superInputMethodEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QInputMethodEvent;
        qtc.QListWidget_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onInputMethodEvent` instead
    ///
    pub const OnInputMethodEvent = onInputMethodEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn onInputMethodEvent(self: QListWidget, callback: *const fn (QListWidget, QInputMethodEvent) callconv(.c) void) void {
        qtc.QListWidget_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `eventFilter` instead
    ///
    pub const EventFilter = eventFilter;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` object: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn eventFilter(self: QListWidget, object: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QListWidget_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `superEventFilter` instead
    ///
    pub const SuperEventFilter = superEventFilter;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` object: QObject `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superEventFilter(self: QListWidget, object: anytype, _event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(_event)._is_QEvent;
        return qtc.QListWidget_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(_event.ptr));
    }

    /// ### DEPRECATED: Use `onEventFilter` instead
    ///
    pub const OnEventFilter = onEventFilter;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, object: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn onEventFilter(self: QListWidget, callback: *const fn (QListWidget, QObject, QEvent) callconv(.c) bool) void {
        qtc.QListWidget_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn minimumSizeHint(self: QListWidget) QSize {
        return .{ .ptr = qtc.QListWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget `
    ///
    pub fn superMinimumSizeHint(self: QListWidget) QSize {
        return .{ .ptr = qtc.QListWidget_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onMinimumSizeHint(self: QListWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QListWidget_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn sizeHint(self: QListWidget) QSize {
        return .{ .ptr = qtc.QListWidget_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget `
    ///
    pub fn superSizeHint(self: QListWidget) QSize {
        return .{ .ptr = qtc.QListWidget_SuperSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onSizeHint(self: QListWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QListWidget_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn setupViewport(self: QListWidget, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QListWidget_SetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` _viewport: QWidget `
    ///
    pub fn superSetupViewport(self: QListWidget, _viewport: anytype) void {
        comptime _ = @TypeOf(_viewport)._is_QWidget;
        qtc.QListWidget_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(_viewport.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, viewport: QWidget) callconv(.c) void `
    ///
    pub fn onSetupViewport(self: QListWidget, callback: *const fn (QListWidget, QWidget) callconv(.c) void) void {
        qtc.QListWidget_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contextMenuEvent` instead
    ///
    pub const ContextMenuEvent = contextMenuEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn contextMenuEvent(self: QListWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QListWidget_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superContextMenuEvent` instead
    ///
    pub const SuperContextMenuEvent = superContextMenuEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn superContextMenuEvent(self: QListWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QListWidget_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onContextMenuEvent` instead
    ///
    pub const OnContextMenuEvent = onContextMenuEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn onContextMenuEvent(self: QListWidget, callback: *const fn (QListWidget, QContextMenuEvent) callconv(.c) void) void {
        qtc.QListWidget_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `changeEvent` instead
    ///
    pub const ChangeEvent = changeEvent;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` param1: QEvent `
    ///
    pub fn changeEvent(self: QListWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QListWidget_ChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `superChangeEvent` instead
    ///
    pub const SuperChangeEvent = superChangeEvent;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` param1: QEvent `
    ///
    pub fn superChangeEvent(self: QListWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QEvent;
        qtc.QListWidget_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `onChangeEvent` instead
    ///
    pub const OnChangeEvent = onChangeEvent;

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, param1: QEvent) callconv(.c) void `
    ///
    pub fn onChangeEvent(self: QListWidget, callback: *const fn (QListWidget, QEvent) callconv(.c) void) void {
        qtc.QListWidget_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn initStyleOption(self: QListWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QListWidget_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn superInitStyleOption(self: QListWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QListWidget_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn onInitStyleOption(self: QListWidget, callback: *const fn (QListWidget, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QListWidget_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn devType(self: QListWidget) i32 {
        return qtc.QListWidget_DevType(@ptrCast(self.ptr));
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
    /// ` self: QListWidget `
    ///
    pub fn superDevType(self: QListWidget) i32 {
        return qtc.QListWidget_SuperDevType(@ptrCast(self.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDevType(self: QListWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn setVisible(self: QListWidget, visible: bool) void {
        qtc.QListWidget_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QListWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn superSetVisible(self: QListWidget, visible: bool) void {
        qtc.QListWidget_SuperSetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, visible: bool) callconv(.c) void `
    ///
    pub fn onSetVisible(self: QListWidget, callback: *const fn (QListWidget, bool) callconv(.c) void) void {
        qtc.QListWidget_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn heightForWidth(self: QListWidget, param1: i32) i32 {
        return qtc.QListWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QListWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn superHeightForWidth(self: QListWidget, param1: i32) i32 {
        return qtc.QListWidget_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, param1: i32) callconv(.c) i32 `
    ///
    pub fn onHeightForWidth(self: QListWidget, callback: *const fn (QListWidget, i32) callconv(.c) i32) void {
        qtc.QListWidget_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn hasHeightForWidth(self: QListWidget) bool {
        return qtc.QListWidget_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QListWidget `
    ///
    pub fn superHasHeightForWidth(self: QListWidget) bool {
        return qtc.QListWidget_SuperHasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onHasHeightForWidth(self: QListWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QListWidget_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn paintEngine(self: QListWidget) QPaintEngine {
        return .{ .ptr = qtc.QListWidget_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget `
    ///
    pub fn superPaintEngine(self: QListWidget) QPaintEngine {
        return .{ .ptr = qtc.QListWidget_SuperPaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn onPaintEngine(self: QListWidget, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QListWidget_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn keyReleaseEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QListWidget_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QKeyEvent `
    ///
    pub fn superKeyReleaseEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QKeyEvent;
        qtc.QListWidget_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn onKeyReleaseEvent(self: QListWidget, callback: *const fn (QListWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QListWidget_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn enterEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QListWidget_EnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QEnterEvent `
    ///
    pub fn superEnterEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEnterEvent;
        qtc.QListWidget_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn onEnterEvent(self: QListWidget, callback: *const fn (QListWidget, QEnterEvent) callconv(.c) void) void {
        qtc.QListWidget_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn leaveEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QListWidget_LeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superLeaveEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QListWidget_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onLeaveEvent(self: QListWidget, callback: *const fn (QListWidget, QEvent) callconv(.c) void) void {
        qtc.QListWidget_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn moveEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QListWidget_MoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QMoveEvent `
    ///
    pub fn superMoveEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QMoveEvent;
        qtc.QListWidget_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn onMoveEvent(self: QListWidget, callback: *const fn (QListWidget, QMoveEvent) callconv(.c) void) void {
        qtc.QListWidget_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn closeEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QListWidget_CloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QCloseEvent `
    ///
    pub fn superCloseEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QCloseEvent;
        qtc.QListWidget_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn onCloseEvent(self: QListWidget, callback: *const fn (QListWidget, QCloseEvent) callconv(.c) void) void {
        qtc.QListWidget_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn tabletEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QListWidget_TabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QTabletEvent `
    ///
    pub fn superTabletEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QTabletEvent;
        qtc.QListWidget_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn onTabletEvent(self: QListWidget, callback: *const fn (QListWidget, QTabletEvent) callconv(.c) void) void {
        qtc.QListWidget_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn actionEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QListWidget_ActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QActionEvent `
    ///
    pub fn superActionEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QActionEvent;
        qtc.QListWidget_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QActionEvent) callconv(.c) void `
    ///
    pub fn onActionEvent(self: QListWidget, callback: *const fn (QListWidget, QActionEvent) callconv(.c) void) void {
        qtc.QListWidget_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn showEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QListWidget_ShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QShowEvent `
    ///
    pub fn superShowEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QShowEvent;
        qtc.QListWidget_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QShowEvent) callconv(.c) void `
    ///
    pub fn onShowEvent(self: QListWidget, callback: *const fn (QListWidget, QShowEvent) callconv(.c) void) void {
        qtc.QListWidget_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn hideEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QListWidget_HideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QHideEvent `
    ///
    pub fn superHideEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QHideEvent;
        qtc.QListWidget_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QHideEvent) callconv(.c) void `
    ///
    pub fn onHideEvent(self: QListWidget, callback: *const fn (QListWidget, QHideEvent) callconv(.c) void) void {
        qtc.QListWidget_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn nativeEvent(self: QListWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QListWidget_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QListWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn superNativeEvent(self: QListWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QListWidget_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn onNativeEvent(self: QListWidget, callback: *const fn (QListWidget, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QListWidget_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn metric(self: QListWidget, param1: i32) i32 {
        return qtc.QListWidget_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QListWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superMetric(self: QListWidget, param1: i32) i32 {
        return qtc.QListWidget_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn onMetric(self: QListWidget, callback: *const fn (QListWidget, i32) callconv(.c) i32) void {
        qtc.QListWidget_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn initPainter(self: QListWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QListWidget_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn superInitPainter(self: QListWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QListWidget_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, painter: QPainter) callconv(.c) void `
    ///
    pub fn onInitPainter(self: QListWidget, callback: *const fn (QListWidget, QPainter) callconv(.c) void) void {
        qtc.QListWidget_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn redirected(self: QListWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QListWidget_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QListWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn superRedirected(self: QListWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QListWidget_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn onRedirected(self: QListWidget, callback: *const fn (QListWidget, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QListWidget_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn sharedPainter(self: QListWidget) QPainter {
        return .{ .ptr = qtc.QListWidget_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget `
    ///
    pub fn superSharedPainter(self: QListWidget) QPainter {
        return .{ .ptr = qtc.QListWidget_SuperSharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn onSharedPainter(self: QListWidget, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QListWidget_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn childEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QListWidget_ChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QChildEvent `
    ///
    pub fn superChildEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QChildEvent;
        qtc.QListWidget_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QChildEvent) callconv(.c) void `
    ///
    pub fn onChildEvent(self: QListWidget, callback: *const fn (QListWidget, QChildEvent) callconv(.c) void) void {
        qtc.QListWidget_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn customEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QListWidget_CustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` _event: QEvent `
    ///
    pub fn superCustomEvent(self: QListWidget, _event: anytype) void {
        comptime _ = @TypeOf(_event)._is_QEvent;
        qtc.QListWidget_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(_event.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn onCustomEvent(self: QListWidget, callback: *const fn (QListWidget, QEvent) callconv(.c) void) void {
        qtc.QListWidget_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn connectNotify(self: QListWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QListWidget_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superConnectNotify(self: QListWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QListWidget_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onConnectNotify(self: QListWidget, callback: *const fn (QListWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QListWidget_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn disconnectNotify(self: QListWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QListWidget_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superDisconnectNotify(self: QListWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QListWidget_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn onDisconnectNotify(self: QListWidget, callback: *const fn (QListWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QListWidget_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `resizeContents` instead
    ///
    pub const ResizeContents = resizeContents;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    pub fn resizeContents(self: QListWidget, _width: i32, _height: i32) void {
        qtc.QListWidget_ResizeContents(@ptrCast(self.ptr), @bitCast(_width), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `superResizeContents` instead
    ///
    pub const SuperResizeContents = superResizeContents;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _width: i32 `
    ///
    /// ` _height: i32 `
    ///
    pub fn superResizeContents(self: QListWidget, _width: i32, _height: i32) void {
        qtc.QListWidget_SuperResizeContents(@ptrCast(self.ptr), @bitCast(_width), @bitCast(_height));
    }

    /// ### DEPRECATED: Use `onResizeContents` instead
    ///
    pub const OnResizeContents = onResizeContents;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#resizeContents)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, width: i32, height: i32) callconv(.c) void `
    ///
    pub fn onResizeContents(self: QListWidget, callback: *const fn (QListWidget, i32, i32) callconv(.c) void) void {
        qtc.QListWidget_OnResizeContents(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contentsSize` instead
    ///
    pub const ContentsSize = contentsSize;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn contentsSize(self: QListWidget) QSize {
        return .{ .ptr = qtc.QListWidget_ContentsSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superContentsSize` instead
    ///
    pub const SuperContentsSize = superContentsSize;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superContentsSize(self: QListWidget) QSize {
        return .{ .ptr = qtc.QListWidget_SuperContentsSize(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onContentsSize` instead
    ///
    pub const OnContentsSize = onContentsSize;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#contentsSize)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onContentsSize(self: QListWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QListWidget_OnContentsSize(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `rectForIndex` instead
    ///
    pub const RectForIndex = rectForIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn rectForIndex(self: QListWidget, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QListWidget_RectForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `superRectForIndex` instead
    ///
    pub const SuperRectForIndex = superRectForIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superRectForIndex(self: QListWidget, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QListWidget_SuperRectForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `onRectForIndex` instead
    ///
    pub const OnRectForIndex = onRectForIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#rectForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, index: QModelIndex) callconv(.c) QRect `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onRectForIndex(self: QListWidget, callback: *const fn (QListWidget, QModelIndex) callconv(.c) QRect) void {
        qtc.QListWidget_OnRectForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setPositionForIndex` instead
    ///
    pub const SetPositionForIndex = setPositionForIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` position: QPoint `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn setPositionForIndex(self: QListWidget, position: anytype, index: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QListWidget_SetPositionForIndex(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `superSetPositionForIndex` instead
    ///
    pub const SuperSetPositionForIndex = superSetPositionForIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` position: QPoint `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn superSetPositionForIndex(self: QListWidget, position: anytype, index: anytype) void {
        comptime _ = @TypeOf(position)._is_QPoint;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QListWidget_SuperSetPositionForIndex(@ptrCast(self.ptr), @ptrCast(position.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `onSetPositionForIndex` instead
    ///
    pub const OnSetPositionForIndex = onSetPositionForIndex;

    /// Inherited from QListView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistview.html#setPositionForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, position: QPoint, index: QModelIndex) callconv(.c) void `
    ///
    pub fn onSetPositionForIndex(self: QListWidget, callback: *const fn (QListWidget, QPoint, QModelIndex) callconv(.c) void) void {
        qtc.QListWidget_OnSetPositionForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `state` instead
    ///
    pub const State = state;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn state(self: QListWidget) i32 {
        return qtc.QListWidget_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superState` instead
    ///
    pub const SuperState = superState;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn superState(self: QListWidget) i32 {
        return qtc.QListWidget_SuperState(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onState` instead
    ///
    pub const OnState = onState;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onState(self: QListWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setState` instead
    ///
    pub const SetState = setState;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _state: qabstractitemview_enums.State `
    ///
    pub fn setState(self: QListWidget, _state: i32) void {
        qtc.QListWidget_SetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `superSetState` instead
    ///
    pub const SuperSetState = superSetState;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` _state: qabstractitemview_enums.State `
    ///
    pub fn superSetState(self: QListWidget, _state: i32) void {
        qtc.QListWidget_SuperSetState(@ptrCast(self.ptr), @bitCast(_state));
    }

    /// ### DEPRECATED: Use `onSetState` instead
    ///
    pub const OnSetState = onSetState;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, state: qabstractitemview_enums.State) callconv(.c) void `
    ///
    pub fn onSetState(self: QListWidget, callback: *const fn (QListWidget, i32) callconv(.c) void) void {
        qtc.QListWidget_OnSetState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scheduleDelayedItemsLayout` instead
    ///
    pub const ScheduleDelayedItemsLayout = scheduleDelayedItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn scheduleDelayedItemsLayout(self: QListWidget) void {
        qtc.QListWidget_ScheduleDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superScheduleDelayedItemsLayout` instead
    ///
    pub const SuperScheduleDelayedItemsLayout = superScheduleDelayedItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superScheduleDelayedItemsLayout(self: QListWidget) void {
        qtc.QListWidget_SuperScheduleDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onScheduleDelayedItemsLayout` instead
    ///
    pub const OnScheduleDelayedItemsLayout = onScheduleDelayedItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onScheduleDelayedItemsLayout(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnScheduleDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `executeDelayedItemsLayout` instead
    ///
    pub const ExecuteDelayedItemsLayout = executeDelayedItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn executeDelayedItemsLayout(self: QListWidget) void {
        qtc.QListWidget_ExecuteDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superExecuteDelayedItemsLayout` instead
    ///
    pub const SuperExecuteDelayedItemsLayout = superExecuteDelayedItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superExecuteDelayedItemsLayout(self: QListWidget) void {
        qtc.QListWidget_SuperExecuteDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onExecuteDelayedItemsLayout` instead
    ///
    pub const OnExecuteDelayedItemsLayout = onExecuteDelayedItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onExecuteDelayedItemsLayout(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnExecuteDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setDirtyRegion` instead
    ///
    pub const SetDirtyRegion = setDirtyRegion;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` region: QRegion `
    ///
    pub fn setDirtyRegion(self: QListWidget, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QListWidget_SetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `superSetDirtyRegion` instead
    ///
    pub const SuperSetDirtyRegion = superSetDirtyRegion;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` region: QRegion `
    ///
    pub fn superSetDirtyRegion(self: QListWidget, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QListWidget_SuperSetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `onSetDirtyRegion` instead
    ///
    pub const OnSetDirtyRegion = onSetDirtyRegion;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, region: QRegion) callconv(.c) void `
    ///
    pub fn onSetDirtyRegion(self: QListWidget, callback: *const fn (QListWidget, QRegion) callconv(.c) void) void {
        qtc.QListWidget_OnSetDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `scrollDirtyRegion` instead
    ///
    pub const ScrollDirtyRegion = scrollDirtyRegion;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn scrollDirtyRegion(self: QListWidget, dx: i32, dy: i32) void {
        qtc.QListWidget_ScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `superScrollDirtyRegion` instead
    ///
    pub const SuperScrollDirtyRegion = superScrollDirtyRegion;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn superScrollDirtyRegion(self: QListWidget, dx: i32, dy: i32) void {
        qtc.QListWidget_SuperScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `onScrollDirtyRegion` instead
    ///
    pub const OnScrollDirtyRegion = onScrollDirtyRegion;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn onScrollDirtyRegion(self: QListWidget, callback: *const fn (QListWidget, i32, i32) callconv(.c) void) void {
        qtc.QListWidget_OnScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dirtyRegionOffset` instead
    ///
    pub const DirtyRegionOffset = dirtyRegionOffset;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn dirtyRegionOffset(self: QListWidget) QPoint {
        return .{ .ptr = qtc.QListWidget_DirtyRegionOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `superDirtyRegionOffset` instead
    ///
    pub const SuperDirtyRegionOffset = superDirtyRegionOffset;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superDirtyRegionOffset(self: QListWidget) QPoint {
        return .{ .ptr = qtc.QListWidget_SuperDirtyRegionOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `onDirtyRegionOffset` instead
    ///
    pub const OnDirtyRegionOffset = onDirtyRegionOffset;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPoint `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onDirtyRegionOffset(self: QListWidget, callback: *const fn () callconv(.c) QPoint) void {
        qtc.QListWidget_OnDirtyRegionOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `startAutoScroll` instead
    ///
    pub const StartAutoScroll = startAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn startAutoScroll(self: QListWidget) void {
        qtc.QListWidget_StartAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superStartAutoScroll` instead
    ///
    pub const SuperStartAutoScroll = superStartAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superStartAutoScroll(self: QListWidget) void {
        qtc.QListWidget_SuperStartAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStartAutoScroll` instead
    ///
    pub const OnStartAutoScroll = onStartAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStartAutoScroll(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnStartAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `stopAutoScroll` instead
    ///
    pub const StopAutoScroll = stopAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn stopAutoScroll(self: QListWidget) void {
        qtc.QListWidget_StopAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superStopAutoScroll` instead
    ///
    pub const SuperStopAutoScroll = superStopAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superStopAutoScroll(self: QListWidget) void {
        qtc.QListWidget_SuperStopAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onStopAutoScroll` instead
    ///
    pub const OnStopAutoScroll = onStopAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onStopAutoScroll(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnStopAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `doAutoScroll` instead
    ///
    pub const DoAutoScroll = doAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn doAutoScroll(self: QListWidget) void {
        qtc.QListWidget_DoAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDoAutoScroll` instead
    ///
    pub const SuperDoAutoScroll = superDoAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    pub fn superDoAutoScroll(self: QListWidget) void {
        qtc.QListWidget_SuperDoAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDoAutoScroll` instead
    ///
    pub const OnDoAutoScroll = onDoAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDoAutoScroll(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnDoAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `dropIndicatorPosition` instead
    ///
    pub const DropIndicatorPosition = dropIndicatorPosition;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn dropIndicatorPosition(self: QListWidget) i32 {
        return qtc.QListWidget_DropIndicatorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `superDropIndicatorPosition` instead
    ///
    pub const SuperDropIndicatorPosition = superDropIndicatorPosition;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QListWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn superDropIndicatorPosition(self: QListWidget) i32 {
        return qtc.QListWidget_SuperDropIndicatorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onDropIndicatorPosition` instead
    ///
    pub const OnDropIndicatorPosition = onDropIndicatorPosition;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onDropIndicatorPosition(self: QListWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnDropIndicatorPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn setViewportMargins(self: QListWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QListWidget_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QListWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn superSetViewportMargins(self: QListWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QListWidget_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn onSetViewportMargins(self: QListWidget, callback: *const fn (QListWidget, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QListWidget_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn viewportMargins(self: QListWidget) QMargins {
        return .{ .ptr = qtc.QListWidget_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget `
    ///
    pub fn superViewportMargins(self: QListWidget) QMargins {
        return .{ .ptr = qtc.QListWidget_SuperViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onViewportMargins(self: QListWidget, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QListWidget_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QPainter `
    ///
    pub fn drawFrame(self: QListWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QListWidget_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` param1: QPainter `
    ///
    pub fn superDrawFrame(self: QListWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QListWidget_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, param1: QPainter) callconv(.c) void `
    ///
    pub fn onDrawFrame(self: QListWidget, callback: *const fn (QListWidget, QPainter) callconv(.c) void) void {
        qtc.QListWidget_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn updateMicroFocus(self: QListWidget) void {
        qtc.QListWidget_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QListWidget `
    ///
    pub fn superUpdateMicroFocus(self: QListWidget) void {
        qtc.QListWidget_SuperUpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onUpdateMicroFocus(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn create(self: QListWidget) void {
        qtc.QListWidget_Create(@ptrCast(self.ptr));
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
    /// ` self: QListWidget `
    ///
    pub fn superCreate(self: QListWidget) void {
        qtc.QListWidget_SuperCreate(@ptrCast(self.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onCreate(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn destroy(self: QListWidget) void {
        qtc.QListWidget_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QListWidget `
    ///
    pub fn superDestroy(self: QListWidget) void {
        qtc.QListWidget_SuperDestroy(@ptrCast(self.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn onDestroy(self: QListWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QListWidget_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn focusNextChild(self: QListWidget) bool {
        return qtc.QListWidget_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QListWidget `
    ///
    pub fn superFocusNextChild(self: QListWidget) bool {
        return qtc.QListWidget_SuperFocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusNextChild(self: QListWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QListWidget_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn focusPreviousChild(self: QListWidget) bool {
        return qtc.QListWidget_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QListWidget `
    ///
    pub fn superFocusPreviousChild(self: QListWidget) bool {
        return qtc.QListWidget_SuperFocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn onFocusPreviousChild(self: QListWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QListWidget_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn sender(self: QListWidget) QObject {
        return .{ .ptr = qtc.QListWidget_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget `
    ///
    pub fn superSender(self: QListWidget) QObject {
        return .{ .ptr = qtc.QListWidget_SuperSender(@ptrCast(self.ptr)) };
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn onSender(self: QListWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.QListWidget_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    pub fn senderSignalIndex(self: QListWidget) i32 {
        return qtc.QListWidget_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QListWidget `
    ///
    pub fn superSenderSignalIndex(self: QListWidget) i32 {
        return qtc.QListWidget_SuperSenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn onSenderSignalIndex(self: QListWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QListWidget_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn receivers(self: QListWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QListWidget_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QListWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn superReceivers(self: QListWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QListWidget_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn onReceivers(self: QListWidget, callback: *const fn (QListWidget, [*:0]const u8) callconv(.c) i32) void {
        qtc.QListWidget_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn isSignalConnected(self: QListWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QListWidget_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QListWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn superIsSignalConnected(self: QListWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QListWidget_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn onIsSignalConnected(self: QListWidget, callback: *const fn (QListWidget, QMetaMethod) callconv(.c) bool) void {
        qtc.QListWidget_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn getDecodedMetricF(self: QListWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QListWidget_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QListWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn superGetDecodedMetricF(self: QListWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QListWidget_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QListWidget`
    ///
    /// ` callback: *const fn (self: QListWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn onGetDecodedMetricF(self: QListWidget, callback: *const fn (QListWidget, i32, i32) callconv(.c) f64) void {
        qtc.QListWidget_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QListWidget `
    ///
    /// ` callback: *const fn (self: QListWidget, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onObjectNameChanged(self: QListWidget, callback: *const fn (QListWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#dtor.QListWidget)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QListWidget `
    ///
    pub fn delete(self: QListWidget) void {
        qtc.QListWidget_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qlistwidget.html#public-types)
pub const enums = struct {
    pub const ItemType = enum(i32) {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };
};
