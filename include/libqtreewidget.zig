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
const QHeaderView = @import("libqt6").QHeaderView;
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
const qnamespace_enums = @import("libqnamespace.zig").enums;
const qobjectdefs_enums = @import("libqobjectdefs.zig").enums;
const qpaintdevice_enums = @import("libqpaintdevice.zig").enums;
const qpalette_enums = @import("libqpalette.zig").enums;
const qsizepolicy_enums = @import("libqsizepolicy.zig").enums;
const qtreewidget_enums = enums;
const qwidget_enums = @import("libqwidget.zig").enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html)
pub const QTreeWidgetItem = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTreeWidgetItem,

    pub const _is_QTreeWidgetItem = {};

    /// New constructs a new QTreeWidgetItem object.
    ///
    pub fn New() QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_new() };
    }

    /// New2 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` strings: []const []const u8 `
    ///
    pub fn New2(allocator: std.mem.Allocator, strings: []const []const u8) QTreeWidgetItem {
        const strings_arr = allocator.alloc(qtc.libqt_string, strings.len) catch @panic("qtreewidgetitem.New2: Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |item, i|
            strings_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strings_list = qtc.libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };
        return .{ .ptr = qtc.QTreeWidgetItem_new2(strings_list) };
    }

    /// New3 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` treeview: QTreeWidget `
    ///
    pub fn New3(treeview: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(treeview)._is_QTreeWidget;
        return .{ .ptr = qtc.QTreeWidgetItem_new3(@ptrCast(treeview.ptr)) };
    }

    /// New4 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` treeview: QTreeWidget `
    ///
    /// ` strings: []const []const u8 `
    ///
    pub fn New4(allocator: std.mem.Allocator, treeview: anytype, strings: []const []const u8) QTreeWidgetItem {
        comptime _ = @TypeOf(treeview)._is_QTreeWidget;
        const strings_arr = allocator.alloc(qtc.libqt_string, strings.len) catch @panic("qtreewidgetitem.New4: Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |item, i|
            strings_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strings_list = qtc.libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };
        return .{ .ptr = qtc.QTreeWidgetItem_new4(@ptrCast(treeview.ptr), strings_list) };
    }

    /// New5 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` treeview: QTreeWidget `
    ///
    /// ` after: QTreeWidgetItem `
    ///
    pub fn New5(treeview: anytype, after: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(treeview)._is_QTreeWidget;
        comptime _ = @TypeOf(after)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new5(@ptrCast(treeview.ptr), @ptrCast(after.ptr)) };
    }

    /// New6 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QTreeWidgetItem `
    ///
    pub fn New6(parent: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(parent)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new6(@ptrCast(parent.ptr)) };
    }

    /// New7 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QTreeWidgetItem `
    ///
    /// ` strings: []const []const u8 `
    ///
    pub fn New7(allocator: std.mem.Allocator, parent: anytype, strings: []const []const u8) QTreeWidgetItem {
        comptime _ = @TypeOf(parent)._is_QTreeWidgetItem;
        const strings_arr = allocator.alloc(qtc.libqt_string, strings.len) catch @panic("qtreewidgetitem.New7: Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |item, i|
            strings_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strings_list = qtc.libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };
        return .{ .ptr = qtc.QTreeWidgetItem_new7(@ptrCast(parent.ptr), strings_list) };
    }

    /// New8 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QTreeWidgetItem `
    ///
    /// ` after: QTreeWidgetItem `
    ///
    pub fn New8(parent: anytype, after: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(parent)._is_QTreeWidgetItem;
        comptime _ = @TypeOf(after)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new8(@ptrCast(parent.ptr), @ptrCast(after.ptr)) };
    }

    /// New9 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QTreeWidgetItem `
    ///
    pub fn New9(other: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(other)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new9(@ptrCast(other.ptr)) };
    }

    /// New10 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New10(typeVal: i32) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_new10(@bitCast(typeVal)) };
    }

    /// New11 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` strings: []const []const u8 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New11(allocator: std.mem.Allocator, strings: []const []const u8, typeVal: i32) QTreeWidgetItem {
        const strings_arr = allocator.alloc(qtc.libqt_string, strings.len) catch @panic("qtreewidgetitem.New11: Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |item, i|
            strings_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strings_list = qtc.libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };
        return .{ .ptr = qtc.QTreeWidgetItem_new11(strings_list, @bitCast(typeVal)) };
    }

    /// New12 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` treeview: QTreeWidget `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New12(treeview: anytype, typeVal: i32) QTreeWidgetItem {
        comptime _ = @TypeOf(treeview)._is_QTreeWidget;
        return .{ .ptr = qtc.QTreeWidgetItem_new12(@ptrCast(treeview.ptr), @bitCast(typeVal)) };
    }

    /// New13 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` treeview: QTreeWidget `
    ///
    /// ` strings: []const []const u8 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New13(allocator: std.mem.Allocator, treeview: anytype, strings: []const []const u8, typeVal: i32) QTreeWidgetItem {
        comptime _ = @TypeOf(treeview)._is_QTreeWidget;
        const strings_arr = allocator.alloc(qtc.libqt_string, strings.len) catch @panic("qtreewidgetitem.New13: Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |item, i|
            strings_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strings_list = qtc.libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };
        return .{ .ptr = qtc.QTreeWidgetItem_new13(@ptrCast(treeview.ptr), strings_list, @bitCast(typeVal)) };
    }

    /// New14 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` treeview: QTreeWidget `
    ///
    /// ` after: QTreeWidgetItem `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New14(treeview: anytype, after: anytype, typeVal: i32) QTreeWidgetItem {
        comptime _ = @TypeOf(treeview)._is_QTreeWidget;
        comptime _ = @TypeOf(after)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new14(@ptrCast(treeview.ptr), @ptrCast(after.ptr), @bitCast(typeVal)) };
    }

    /// New15 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QTreeWidgetItem `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New15(parent: anytype, typeVal: i32) QTreeWidgetItem {
        comptime _ = @TypeOf(parent)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new15(@ptrCast(parent.ptr), @bitCast(typeVal)) };
    }

    /// New16 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` parent: QTreeWidgetItem `
    ///
    /// ` strings: []const []const u8 `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New16(allocator: std.mem.Allocator, parent: anytype, strings: []const []const u8, typeVal: i32) QTreeWidgetItem {
        comptime _ = @TypeOf(parent)._is_QTreeWidgetItem;
        const strings_arr = allocator.alloc(qtc.libqt_string, strings.len) catch @panic("qtreewidgetitem.New16: Memory allocation failed");
        defer allocator.free(strings_arr);
        for (strings, 0..strings.len) |item, i|
            strings_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const strings_list = qtc.libqt_list{
            .len = strings.len,
            .data = strings_arr.ptr,
        };
        return .{ .ptr = qtc.QTreeWidgetItem_new16(@ptrCast(parent.ptr), strings_list, @bitCast(typeVal)) };
    }

    /// New17 constructs a new QTreeWidgetItem object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QTreeWidgetItem `
    ///
    /// ` after: QTreeWidgetItem `
    ///
    /// ` typeVal: i32 `
    ///
    pub fn New17(parent: anytype, after: anytype, typeVal: i32) QTreeWidgetItem {
        comptime _ = @TypeOf(parent)._is_QTreeWidgetItem;
        comptime _ = @TypeOf(after)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidgetItem_new17(@ptrCast(parent.ptr), @ptrCast(after.ptr), @bitCast(typeVal)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#clone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn Clone(self: QTreeWidgetItem) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_Clone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#clone)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) QTreeWidgetItem `
    ///
    pub fn OnClone(self: QTreeWidgetItem, callback: *const fn () callconv(.c) QTreeWidgetItem) void {
        qtc.QTreeWidgetItem_OnClone(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperClone` instead
    ///
    pub const QBaseClone = SuperClone;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#clone)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn SuperClone(self: QTreeWidgetItem) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_SuperClone(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#treeWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn TreeWidget(self: QTreeWidgetItem) QTreeWidget {
        return .{ .ptr = qtc.QTreeWidgetItem_TreeWidget(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` selectVal: bool `
    ///
    pub fn SetSelected(self: QTreeWidgetItem, selectVal: bool) void {
        qtc.QTreeWidgetItem_SetSelected(@ptrCast(self.ptr), selectVal);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#isSelected)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn IsSelected(self: QTreeWidgetItem) bool {
        return qtc.QTreeWidgetItem_IsSelected(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` hide: bool `
    ///
    pub fn SetHidden(self: QTreeWidgetItem, hide: bool) void {
        qtc.QTreeWidgetItem_SetHidden(@ptrCast(self.ptr), hide);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn IsHidden(self: QTreeWidgetItem) bool {
        return qtc.QTreeWidgetItem_IsHidden(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setExpanded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` expand: bool `
    ///
    pub fn SetExpanded(self: QTreeWidgetItem, expand: bool) void {
        qtc.QTreeWidgetItem_SetExpanded(@ptrCast(self.ptr), expand);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#isExpanded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn IsExpanded(self: QTreeWidgetItem) bool {
        return qtc.QTreeWidgetItem_IsExpanded(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFirstColumnSpanned)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` span: bool `
    ///
    pub fn SetFirstColumnSpanned(self: QTreeWidgetItem, span: bool) void {
        qtc.QTreeWidgetItem_SetFirstColumnSpanned(@ptrCast(self.ptr), span);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#isFirstColumnSpanned)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn IsFirstColumnSpanned(self: QTreeWidgetItem) bool {
        return qtc.QTreeWidgetItem_IsFirstColumnSpanned(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QTreeWidgetItem, disabled: bool) void {
        qtc.QTreeWidgetItem_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#isDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn IsDisabled(self: QTreeWidgetItem) bool {
        return qtc.QTreeWidgetItem_IsDisabled(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setChildIndicatorPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` policy: qtreewidget_enums.ChildIndicatorPolicy `
    ///
    pub fn SetChildIndicatorPolicy(self: QTreeWidgetItem, policy: i32) void {
        qtc.QTreeWidgetItem_SetChildIndicatorPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#childIndicatorPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` qtreewidget_enums.ChildIndicatorPolicy `
    ///
    pub fn ChildIndicatorPolicy(self: QTreeWidgetItem) i32 {
        return qtc.QTreeWidgetItem_ChildIndicatorPolicy(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn Flags(self: QTreeWidgetItem) i32 {
        return qtc.QTreeWidgetItem_Flags(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` flags: flag of qnamespace_enums.ItemFlag `
    ///
    pub fn SetFlags(self: QTreeWidgetItem, flags: i32) void {
        qtc.QTreeWidgetItem_SetFlags(@ptrCast(self.ptr), @bitCast(flags));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` column: i32 `
    ///
    pub fn Text(self: QTreeWidgetItem, allocator: std.mem.Allocator, column: i32) []const u8 {
        var _str = qtc.QTreeWidgetItem_Text(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidgetitem.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` text: []const u8 `
    ///
    pub fn SetText(self: QTreeWidgetItem, column: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.QTreeWidgetItem_SetText(@ptrCast(self.ptr), @bitCast(column), text_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn Icon(self: QTreeWidgetItem, column: i32) QIcon {
        return .{ .ptr = qtc.QTreeWidgetItem_Icon(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetIcon(self: QTreeWidgetItem, column: i32, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QTreeWidgetItem_SetIcon(@ptrCast(self.ptr), @bitCast(column), @ptrCast(icon.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#statusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` column: i32 `
    ///
    pub fn StatusTip(self: QTreeWidgetItem, allocator: std.mem.Allocator, column: i32) []const u8 {
        var _str = qtc.QTreeWidgetItem_StatusTip(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidgetitem.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QTreeWidgetItem, column: i32, statusTip: []const u8) void {
        const statusTip_str = qtc.libqt_string{
            .len = statusTip.len,
            .data = statusTip.ptr,
        };
        qtc.QTreeWidgetItem_SetStatusTip(@ptrCast(self.ptr), @bitCast(column), statusTip_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#toolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` column: i32 `
    ///
    pub fn ToolTip(self: QTreeWidgetItem, allocator: std.mem.Allocator, column: i32) []const u8 {
        var _str = qtc.QTreeWidgetItem_ToolTip(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidgetitem.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QTreeWidgetItem, column: i32, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
            .len = toolTip.len,
            .data = toolTip.ptr,
        };
        qtc.QTreeWidgetItem_SetToolTip(@ptrCast(self.ptr), @bitCast(column), toolTip_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#whatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` column: i32 `
    ///
    pub fn WhatsThis(self: QTreeWidgetItem, allocator: std.mem.Allocator, column: i32) []const u8 {
        var _str = qtc.QTreeWidgetItem_WhatsThis(@ptrCast(self.ptr), @bitCast(column));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidgetitem.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QTreeWidgetItem, column: i32, whatsThis: []const u8) void {
        const whatsThis_str = qtc.libqt_string{
            .len = whatsThis.len,
            .data = whatsThis.ptr,
        };
        qtc.QTreeWidgetItem_SetWhatsThis(@ptrCast(self.ptr), @bitCast(column), whatsThis_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn Font(self: QTreeWidgetItem, column: i32) QFont {
        return .{ .ptr = qtc.QTreeWidgetItem_Font(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QTreeWidgetItem, column: i32, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QTreeWidgetItem_SetFont(@ptrCast(self.ptr), @bitCast(column), @ptrCast(font.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#textAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn TextAlignment(self: QTreeWidgetItem, column: i32) i32 {
        return qtc.QTreeWidgetItem_TextAlignment(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` alignment: i32 `
    ///
    pub fn SetTextAlignment(self: QTreeWidgetItem, column: i32, alignment: i32) void {
        qtc.QTreeWidgetItem_SetTextAlignment(@ptrCast(self.ptr), @bitCast(column), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` alignment: qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment2(self: QTreeWidgetItem, column: i32, alignment: i32) void {
        qtc.QTreeWidgetItem_SetTextAlignment2(@ptrCast(self.ptr), @bitCast(column), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setTextAlignment)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn SetTextAlignment3(self: QTreeWidgetItem, column: i32, alignment: i32) void {
        qtc.QTreeWidgetItem_SetTextAlignment3(@ptrCast(self.ptr), @bitCast(column), @bitCast(alignment));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#background)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn Background(self: QTreeWidgetItem, column: i32) QBrush {
        return .{ .ptr = qtc.QTreeWidgetItem_Background(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetBackground(self: QTreeWidgetItem, column: i32, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTreeWidgetItem_SetBackground(@ptrCast(self.ptr), @bitCast(column), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#foreground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn Foreground(self: QTreeWidgetItem, column: i32) QBrush {
        return .{ .ptr = qtc.QTreeWidgetItem_Foreground(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setForeground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` brush: QBrush `
    ///
    pub fn SetForeground(self: QTreeWidgetItem, column: i32, brush: anytype) void {
        comptime _ = @TypeOf(brush)._is_QBrush;
        qtc.QTreeWidgetItem_SetForeground(@ptrCast(self.ptr), @bitCast(column), @ptrCast(brush.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#checkState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.CheckState `
    ///
    pub fn CheckState(self: QTreeWidgetItem, column: i32) i32 {
        return qtc.QTreeWidgetItem_CheckState(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setCheckState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` state: qnamespace_enums.CheckState `
    ///
    pub fn SetCheckState(self: QTreeWidgetItem, column: i32, state: i32) void {
        qtc.QTreeWidgetItem_SetCheckState(@ptrCast(self.ptr), @bitCast(column), @bitCast(state));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#sizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn SizeHint(self: QTreeWidgetItem, column: i32) QSize {
        return .{ .ptr = qtc.QTreeWidgetItem_SizeHint(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setSizeHint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` size: QSize `
    ///
    pub fn SetSizeHint(self: QTreeWidgetItem, column: i32, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QTreeWidgetItem_SetSizeHint(@ptrCast(self.ptr), @bitCast(column), @ptrCast(size.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` role: i32 `
    ///
    pub fn Data(self: QTreeWidgetItem, column: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QTreeWidgetItem_Data(@ptrCast(self.ptr), @bitCast(column), @bitCast(role)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` callback: *const fn (self: QTreeWidgetItem, column: i32, role: i32) callconv(.c) QVariant `
    ///
    pub fn OnData(self: QTreeWidgetItem, callback: *const fn (QTreeWidgetItem, i32, i32) callconv(.c) QVariant) void {
        qtc.QTreeWidgetItem_OnData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperData` instead
    ///
    pub const QBaseData = SuperData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperData(self: QTreeWidgetItem, column: i32, role: i32) QVariant {
        return .{ .ptr = qtc.QTreeWidgetItem_SuperData(@ptrCast(self.ptr), @bitCast(column), @bitCast(role)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetData(self: QTreeWidgetItem, column: i32, role: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTreeWidgetItem_SetData(@ptrCast(self.ptr), @bitCast(column), @bitCast(role), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` callback: *const fn (self: QTreeWidgetItem, column: i32, role: i32, value: QVariant) callconv(.c) void `
    ///
    pub fn OnSetData(self: QTreeWidgetItem, callback: *const fn (QTreeWidgetItem, i32, i32, QVariant) callconv(.c) void) void {
        qtc.QTreeWidgetItem_OnSetData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetData` instead
    ///
    pub const QBaseSetData = SuperSetData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#setData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetData(self: QTreeWidgetItem, column: i32, role: i32, value: anytype) void {
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QTreeWidgetItem_SuperSetData(@ptrCast(self.ptr), @bitCast(column), @bitCast(role), @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator-lt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` other: QTreeWidgetItem `
    ///
    pub fn OperatorLesser(self: QTreeWidgetItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTreeWidgetItem;
        return qtc.QTreeWidgetItem_OperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator-lt)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` callback: *const fn (self: QTreeWidgetItem, other: QTreeWidgetItem) callconv(.c) bool `
    ///
    pub fn OnOperatorLesser(self: QTreeWidgetItem, callback: *const fn (QTreeWidgetItem, QTreeWidgetItem) callconv(.c) bool) void {
        qtc.QTreeWidgetItem_OnOperatorLesser(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperOperatorLesser` instead
    ///
    pub const QBaseOperatorLesser = SuperOperatorLesser;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator-lt)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` other: QTreeWidgetItem `
    ///
    pub fn SuperOperatorLesser(self: QTreeWidgetItem, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QTreeWidgetItem;
        return qtc.QTreeWidgetItem_SuperOperatorLesser(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#read)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` in: QDataStream `
    ///
    pub fn Read(self: QTreeWidgetItem, in: anytype) void {
        comptime _ = @TypeOf(in)._is_QDataStream;
        qtc.QTreeWidgetItem_Read(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#read)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` callback: *const fn (self: QTreeWidgetItem, in: QDataStream) callconv(.c) void `
    ///
    pub fn OnRead(self: QTreeWidgetItem, callback: *const fn (QTreeWidgetItem, QDataStream) callconv(.c) void) void {
        qtc.QTreeWidgetItem_OnRead(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRead` instead
    ///
    pub const QBaseRead = SuperRead;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#read)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` in: QDataStream `
    ///
    pub fn SuperRead(self: QTreeWidgetItem, in: anytype) void {
        comptime _ = @TypeOf(in)._is_QDataStream;
        qtc.QTreeWidgetItem_SuperRead(@ptrCast(self.ptr), @ptrCast(in.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#write)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` out: QDataStream `
    ///
    pub fn Write(self: QTreeWidgetItem, out: anytype) void {
        comptime _ = @TypeOf(out)._is_QDataStream;
        qtc.QTreeWidgetItem_Write(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#write)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` callback: *const fn (self: QTreeWidgetItem, out: QDataStream) callconv(.c) void `
    ///
    pub fn OnWrite(self: QTreeWidgetItem, callback: *const fn (QTreeWidgetItem, QDataStream) callconv(.c) void) void {
        qtc.QTreeWidgetItem_OnWrite(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperWrite` instead
    ///
    pub const QBaseWrite = SuperWrite;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#write)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` out: QDataStream `
    ///
    pub fn SuperWrite(self: QTreeWidgetItem, out: anytype) void {
        comptime _ = @TypeOf(out)._is_QDataStream;
        qtc.QTreeWidgetItem_SuperWrite(@ptrCast(self.ptr), @ptrCast(out.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` other: QTreeWidgetItem `
    ///
    pub fn OperatorAssign(self: QTreeWidgetItem, other: anytype) void {
        comptime _ = @TypeOf(other)._is_QTreeWidgetItem;
        qtc.QTreeWidgetItem_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn Parent(self: QTreeWidgetItem) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_Parent(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#child)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` index: i32 `
    ///
    pub fn Child(self: QTreeWidgetItem, index: i32) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_Child(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#childCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn ChildCount(self: QTreeWidgetItem) i32 {
        return qtc.QTreeWidgetItem_ChildCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn ColumnCount(self: QTreeWidgetItem) i32 {
        return qtc.QTreeWidgetItem_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#indexOfChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` child: QTreeWidgetItem `
    ///
    pub fn IndexOfChild(self: QTreeWidgetItem, child: anytype) i32 {
        comptime _ = @TypeOf(child)._is_QTreeWidgetItem;
        return qtc.QTreeWidgetItem_IndexOfChild(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#addChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` child: QTreeWidgetItem `
    ///
    pub fn AddChild(self: QTreeWidgetItem, child: anytype) void {
        comptime _ = @TypeOf(child)._is_QTreeWidgetItem;
        qtc.QTreeWidgetItem_AddChild(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#insertChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` index: i32 `
    ///
    /// ` child: QTreeWidgetItem `
    ///
    pub fn InsertChild(self: QTreeWidgetItem, index: i32, child: anytype) void {
        comptime _ = @TypeOf(child)._is_QTreeWidgetItem;
        qtc.QTreeWidgetItem_InsertChild(@ptrCast(self.ptr), @bitCast(index), @ptrCast(child.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#removeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` child: QTreeWidgetItem `
    ///
    pub fn RemoveChild(self: QTreeWidgetItem, child: anytype) void {
        comptime _ = @TypeOf(child)._is_QTreeWidgetItem;
        qtc.QTreeWidgetItem_RemoveChild(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#takeChild)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` index: i32 `
    ///
    pub fn TakeChild(self: QTreeWidgetItem, index: i32) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidgetItem_TakeChild(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#addChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` children: []QTreeWidgetItem `
    ///
    pub fn AddChildren(self: QTreeWidgetItem, children: []QTreeWidgetItem) void {
        const children_list = qtc.libqt_list{
            .len = children.len,
            .data = @ptrCast(children.ptr),
        };
        qtc.QTreeWidgetItem_AddChildren(@ptrCast(self.ptr), children_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#insertChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` index: i32 `
    ///
    /// ` children: []QTreeWidgetItem `
    ///
    pub fn InsertChildren(self: QTreeWidgetItem, index: i32, children: []QTreeWidgetItem) void {
        const children_list = qtc.libqt_list{
            .len = children.len,
            .data = @ptrCast(children.ptr),
        };
        qtc.QTreeWidgetItem_InsertChildren(@ptrCast(self.ptr), @bitCast(index), children_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#takeChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn TakeChildren(self: QTreeWidgetItem, allocator: std.mem.Allocator) []QTreeWidgetItem {
        const _arr: qtc.libqt_list = qtc.QTreeWidgetItem_TakeChildren(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTreeWidgetItem, _arr.len) catch @panic("qtreewidgetitem.TakeChildren: Memory allocation failed");
        const _data: [*]QtC.QTreeWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn Type(self: QTreeWidgetItem) i32 {
        return qtc.QTreeWidgetItem_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#sortChildren)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SortChildren(self: QTreeWidgetItem, column: i32, order: i32) void {
        qtc.QTreeWidgetItem_SortChildren(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#emitDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn EmitDataChanged(self: QTreeWidgetItem) void {
        qtc.QTreeWidgetItem_EmitDataChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#emitDataChanged)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidgetItem `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEmitDataChanged(self: QTreeWidgetItem, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidgetItem_OnEmitDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEmitDataChanged` instead
    ///
    pub const QBaseEmitDataChanged = SuperEmitDataChanged;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#emitDataChanged)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn SuperEmitDataChanged(self: QTreeWidgetItem) void {
        qtc.QTreeWidgetItem_SuperEmitDataChanged(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidgetitem.html#dtor.QTreeWidgetItem)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTreeWidgetItem `
    ///
    pub fn Delete(self: QTreeWidgetItem) void {
        qtc.QTreeWidgetItem_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html)
pub const QTreeWidget = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTreeWidget,

    pub const _is_QTreeWidget = {};
    pub const _is_QTreeView = {};
    pub const _is_QAbstractItemView = {};
    pub const _is_QAbstractScrollArea = {};
    pub const _is_QFrame = {};
    pub const _is_QWidget = {};
    pub const _is_QObject = {};
    pub const _is_QPaintDevice = {};

    /// New constructs a new QTreeWidget object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QWidget `
    ///
    pub fn New(parent: anytype) QTreeWidget {
        comptime _ = @TypeOf(parent)._is_QWidget;
        return .{ .ptr = qtc.QTreeWidget_new(@ptrCast(parent.ptr)) };
    }

    /// New2 constructs a new QTreeWidget object.
    ///
    pub fn New2() QTreeWidget {
        return .{ .ptr = qtc.QTreeWidget_new2() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn MetaObject(self: QTreeWidget) QMetaObject {
        return .{ .ptr = qtc.QTreeWidget_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn () callconv(.c) QMetaObject `
    ///
    pub fn OnMetaObject(self: QTreeWidget, callback: *const fn () callconv(.c) QMetaObject) void {
        qtc.QTreeWidget_OnMetaObject(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperMetaObject(self: QTreeWidget) QMetaObject {
        return .{ .ptr = qtc.QTreeWidget_SuperMetaObject(@ptrCast(self.ptr)) };
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: QTreeWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTreeWidget_Metacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: QTreeWidget, callback: *const fn (QTreeWidget, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.QTreeWidget_OnMetacast(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: QTreeWidget, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.QTreeWidget_SuperMetacast(@ptrCast(self.ptr), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: QTreeWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTreeWidget_Metacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.QTreeWidget_OnMetacall(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: QTreeWidget, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.QTreeWidget_SuperMetacall(@ptrCast(self.ptr), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ColumnCount(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_ColumnCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setColumnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` columns: i32 `
    ///
    pub fn SetColumnCount(self: QTreeWidget, columns: i32) void {
        qtc.QTreeWidget_SetColumnCount(@ptrCast(self.ptr), @bitCast(columns));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#invisibleRootItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn InvisibleRootItem(self: QTreeWidget) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidget_InvisibleRootItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#topLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: i32 `
    ///
    pub fn TopLevelItem(self: QTreeWidget, index: i32) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidget_TopLevelItem(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#topLevelItemCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn TopLevelItemCount(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_TopLevelItemCount(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#insertTopLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn InsertTopLevelItem(self: QTreeWidget, index: i32, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_InsertTopLevelItem(@ptrCast(self.ptr), @bitCast(index), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#addTopLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn AddTopLevelItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_AddTopLevelItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#takeTopLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: i32 `
    ///
    pub fn TakeTopLevelItem(self: QTreeWidget, index: i32) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidget_TakeTopLevelItem(@ptrCast(self.ptr), @bitCast(index)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#indexOfTopLevelItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn IndexOfTopLevelItem(self: QTreeWidget, item: anytype) i32 {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return qtc.QTreeWidget_IndexOfTopLevelItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#insertTopLevelItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: i32 `
    ///
    /// ` items: []QTreeWidgetItem `
    ///
    pub fn InsertTopLevelItems(self: QTreeWidget, index: i32, items: []QTreeWidgetItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QTreeWidget_InsertTopLevelItems(@ptrCast(self.ptr), @bitCast(index), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#addTopLevelItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` items: []QTreeWidgetItem `
    ///
    pub fn AddTopLevelItems(self: QTreeWidget, items: []QTreeWidgetItem) void {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        qtc.QTreeWidget_AddTopLevelItems(@ptrCast(self.ptr), items_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#headerItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn HeaderItem(self: QTreeWidget) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidget_HeaderItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn SetHeaderItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_SetHeaderItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderLabels)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` labels: []const []const u8 `
    ///
    pub fn SetHeaderLabels(self: QTreeWidget, allocator: std.mem.Allocator, labels: []const []const u8) void {
        const labels_arr = allocator.alloc(qtc.libqt_string, labels.len) catch @panic("qtreewidget.SetHeaderLabels: Memory allocation failed");
        defer allocator.free(labels_arr);
        for (labels, 0..labels.len) |item, i|
            labels_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        const labels_list = qtc.libqt_list{
            .len = labels.len,
            .data = labels_arr.ptr,
        };
        qtc.QTreeWidget_SetHeaderLabels(@ptrCast(self.ptr), labels_list);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setHeaderLabel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` label: []const u8 `
    ///
    pub fn SetHeaderLabel(self: QTreeWidget, label: []const u8) void {
        const label_str = qtc.libqt_string{
            .len = label.len,
            .data = label.ptr,
        };
        qtc.QTreeWidget_SetHeaderLabel(@ptrCast(self.ptr), label_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#currentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn CurrentItem(self: QTreeWidget) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidget_CurrentItem(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#currentColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn CurrentColumn(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_CurrentColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn SetCurrentItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_SetCurrentItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn SetCurrentItem2(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_SetCurrentItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setCurrentItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SetCurrentItem3(self: QTreeWidget, item: anytype, column: i32, command: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_SetCurrentItem3(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column), @bitCast(command));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn ItemAt(self: QTreeWidget, p: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTreeWidget_ItemAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ItemAt2(self: QTreeWidget, x: i32, y: i32) QTreeWidgetItem {
        return .{ .ptr = qtc.QTreeWidget_ItemAt2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#visualItemRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn VisualItemRect(self: QTreeWidget, item: anytype) QRect {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidget_VisualItemRect(@ptrCast(self.ptr), @ptrCast(item.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#sortColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SortColumn(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SortColumn(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#sortItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SortItems(self: QTreeWidget, column: i32, order: i32) void {
        qtc.QTreeWidget_SortItems(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#editItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn EditItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_EditItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#openPersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn OpenPersistentEditor(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_OpenPersistentEditor(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#closePersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn ClosePersistentEditor(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ClosePersistentEditor(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#isPersistentEditorOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn IsPersistentEditorOpen(self: QTreeWidget, item: anytype) bool {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return qtc.QTreeWidget_IsPersistentEditorOpen(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemWidget(self: QTreeWidget, item: anytype, column: i32) QWidget {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidget_ItemWidget(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setItemWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetItemWidget(self: QTreeWidget, item: anytype, column: i32, widget: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QTreeWidget_SetItemWidget(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column), @ptrCast(widget.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#removeItemWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn RemoveItemWidget(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_RemoveItemWidget(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#selectedItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedItems(self: QTreeWidget, allocator: std.mem.Allocator) []QTreeWidgetItem {
        const _arr: qtc.libqt_list = qtc.QTreeWidget_SelectedItems(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTreeWidgetItem, _arr.len) catch @panic("qtreewidget.SelectedItems: Memory allocation failed");
        const _data: [*]QtC.QTreeWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    pub fn FindItems(self: QTreeWidget, allocator: std.mem.Allocator, text: []const u8, flags: i32) []QTreeWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QTreeWidget_FindItems(@ptrCast(self.ptr), text_str, @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTreeWidgetItem, _arr.len) catch @panic("qtreewidget.FindItems: Memory allocation failed");
        const _data: [*]QtC.QTreeWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemAbove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn ItemAbove(self: QTreeWidget, item: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidget_ItemAbove(@ptrCast(self.ptr), @ptrCast(item.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemBelow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn ItemBelow(self: QTreeWidget, item: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidget_ItemBelow(@ptrCast(self.ptr), @ptrCast(item.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#indexFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn IndexFromItem(self: QTreeWidget, item: anytype) QModelIndex {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidget_IndexFromItem(@ptrCast(self.ptr), @ptrCast(item.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemFromIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemFromIndex(self: QTreeWidget, index: anytype) QTreeWidgetItem {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeWidget_ItemFromIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setSelectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn SetSelectionModel(self: QTreeWidget, selectionModel: anytype) void {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        qtc.QTreeWidget_SetSelectionModel(@ptrCast(self.ptr), @ptrCast(selectionModel.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setSelectionModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, selectionModel: QItemSelectionModel) callconv(.c) void `
    ///
    pub fn OnSetSelectionModel(self: QTreeWidget, callback: *const fn (QTreeWidget, QItemSelectionModel) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetSelectionModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetSelectionModel` instead
    ///
    pub const QBaseSetSelectionModel = SuperSetSelectionModel;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#setSelectionModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` selectionModel: QItemSelectionModel `
    ///
    pub fn SuperSetSelectionModel(self: QTreeWidget, selectionModel: anytype) void {
        comptime _ = @TypeOf(selectionModel)._is_QItemSelectionModel;
        qtc.QTreeWidget_SuperSetSelectionModel(@ptrCast(self.ptr), @ptrCast(selectionModel.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#scrollToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn ScrollToItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ScrollToItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#expandItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn ExpandItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ExpandItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#collapseItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn CollapseItem(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_CollapseItem(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Clear(self: QTreeWidget) void {
        qtc.QTreeWidget_Clear(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemPressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemPressed(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemPressed(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemPressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem, column: i32) callconv(.c) void `
    ///
    pub fn OnItemPressed(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemPressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemClicked(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemClicked(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem, column: i32) callconv(.c) void `
    ///
    pub fn OnItemClicked(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemDoubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemDoubleClicked(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemDoubleClicked(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemDoubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem, column: i32) callconv(.c) void `
    ///
    pub fn OnItemDoubleClicked(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemDoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemActivated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemActivated(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemActivated(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemActivated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem, column: i32) callconv(.c) void `
    ///
    pub fn OnItemActivated(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemActivated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemEntered(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemEntered(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem, column: i32) callconv(.c) void `
    ///
    pub fn OnItemEntered(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemChanged(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemChanged(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem, column: i32) callconv(.c) void `
    ///
    pub fn OnItemChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemExpanded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn ItemExpanded(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemExpanded(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemExpanded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem) callconv(.c) void `
    ///
    pub fn OnItemExpanded(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemExpanded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemCollapsed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    pub fn ItemCollapsed(self: QTreeWidget, item: anytype) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ItemCollapsed(@ptrCast(self.ptr), @ptrCast(item.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemCollapsed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, item: QTreeWidgetItem) callconv(.c) void `
    ///
    pub fn OnItemCollapsed(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemCollapsed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#currentItemChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` current: QTreeWidgetItem `
    ///
    /// ` previous: QTreeWidgetItem `
    ///
    pub fn CurrentItemChanged(self: QTreeWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QTreeWidgetItem;
        comptime _ = @TypeOf(previous)._is_QTreeWidgetItem;
        qtc.QTreeWidget_CurrentItemChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#currentItemChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, current: QTreeWidgetItem, previous: QTreeWidgetItem) callconv(.c) void `
    ///
    pub fn OnCurrentItemChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, QTreeWidgetItem) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_CurrentItemChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemSelectionChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ItemSelectionChanged(self: QTreeWidget) void {
        qtc.QTreeWidget_ItemSelectionChanged(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#itemSelectionChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget) callconv(.c) void `
    ///
    pub fn OnItemSelectionChanged(self: QTreeWidget, callback: *const fn (QTreeWidget) callconv(.c) void) void {
        qtc.QTreeWidget_Connect_ItemSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#event)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` e: QEvent `
    ///
    pub fn Event(self: QTreeWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QTreeWidget_Event(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#event)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, e: QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QEvent) callconv(.c) bool) void {
        qtc.QTreeWidget_OnEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#event)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` e: QEvent `
    ///
    pub fn SuperEvent(self: QTreeWidget, e: anytype) bool {
        comptime _ = @TypeOf(e)._is_QEvent;
        return qtc.QTreeWidget_SuperEvent(@ptrCast(self.ptr), @ptrCast(e.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(self: QTreeWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTreeWidget_MimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtreewidget.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtreewidget.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#mimeTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnMimeTypes(self: QTreeWidget, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.QTreeWidget_OnMimeTypes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMimeTypes` instead
    ///
    pub const QBaseMimeTypes = SuperMimeTypes;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#mimeTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperMimeTypes(self: QTreeWidget, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.QTreeWidget_SuperMimeTypes(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("qtreewidget.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtreewidget.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` items: []QTreeWidgetItem `
    ///
    pub fn MimeData(self: QTreeWidget, items: []QTreeWidgetItem) QMimeData {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return .{ .ptr = qtc.QTreeWidget_MimeData(@ptrCast(self.ptr), items_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#mimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, items: qtc.libqt_list ([]QTreeWidgetItem)) callconv(.c) QMimeData `
    ///
    pub fn OnMimeData(self: QTreeWidget, callback: *const fn (QTreeWidget, qtc.libqt_list) callconv(.c) QMimeData) void {
        qtc.QTreeWidget_OnMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMimeData` instead
    ///
    pub const QBaseMimeData = SuperMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#mimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` items: []QTreeWidgetItem `
    ///
    pub fn SuperMimeData(self: QTreeWidget, items: []QTreeWidgetItem) QMimeData {
        const items_list = qtc.libqt_list{
            .len = items.len,
            .data = @ptrCast(items.ptr),
        };
        return .{ .ptr = qtc.QTreeWidget_SuperMimeData(@ptrCast(self.ptr), items_list) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#dropMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` parent: QTreeWidgetItem `
    ///
    /// ` index: i32 `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn DropMimeData(self: QTreeWidget, parent: anytype, index: i32, data: anytype, action: i32) bool {
        comptime _ = @TypeOf(parent)._is_QTreeWidgetItem;
        comptime _ = @TypeOf(data)._is_QMimeData;
        return qtc.QTreeWidget_DropMimeData(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(data.ptr), @bitCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#dropMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, parent: QTreeWidgetItem, index: i32, data: QMimeData, action: qnamespace_enums.DropAction) callconv(.c) bool `
    ///
    pub fn OnDropMimeData(self: QTreeWidget, callback: *const fn (QTreeWidget, QTreeWidgetItem, i32, QMimeData, i32) callconv(.c) bool) void {
        qtc.QTreeWidget_OnDropMimeData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropMimeData` instead
    ///
    pub const QBaseDropMimeData = SuperDropMimeData;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` parent: QTreeWidgetItem `
    ///
    /// ` index: i32 `
    ///
    /// ` data: QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    pub fn SuperDropMimeData(self: QTreeWidget, parent: anytype, index: i32, data: anytype, action: i32) bool {
        comptime _ = @TypeOf(parent)._is_QTreeWidgetItem;
        comptime _ = @TypeOf(data)._is_QMimeData;
        return qtc.QTreeWidget_SuperDropMimeData(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(index), @ptrCast(data.ptr), @bitCast(action));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#supportedDropActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDropActions(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#supportedDropActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDropActions(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnSupportedDropActions(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSupportedDropActions` instead
    ///
    pub const QBaseSupportedDropActions = SuperSupportedDropActions;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#supportedDropActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDropActions(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperSupportedDropActions(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#dropEvent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn DropEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QTreeWidget_DropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#dropEvent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QDropEvent) callconv(.c) void `
    ///
    pub fn OnDropEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QDropEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnDropEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropEvent` instead
    ///
    pub const QBaseDropEvent = SuperDropEvent;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#dropEvent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QDropEvent `
    ///
    pub fn SuperDropEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDropEvent;
        qtc.QTreeWidget_SuperDropEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.Tr2: Memory allocation failed");
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#editItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn EditItem2(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_EditItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#openPersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn OpenPersistentEditor2(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_OpenPersistentEditor2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#closePersistentEditor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn ClosePersistentEditor2(self: QTreeWidget, item: anytype, column: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ClosePersistentEditor2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#isPersistentEditorOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn IsPersistentEditorOpen2(self: QTreeWidget, item: anytype, column: i32) bool {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return qtc.QTreeWidget_IsPersistentEditorOpen2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#findItems)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` text: []const u8 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    /// ` column: i32 `
    ///
    pub fn FindItems3(self: QTreeWidget, allocator: std.mem.Allocator, text: []const u8, flags: i32, column: i32) []QTreeWidgetItem {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const _arr: qtc.libqt_list = qtc.QTreeWidget_FindItems3(@ptrCast(self.ptr), text_str, @bitCast(flags), @bitCast(column));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QTreeWidgetItem, _arr.len) catch @panic("qtreewidget.FindItems3: Memory allocation failed");
        const _data: [*]QtC.QTreeWidgetItem = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#indexFromItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` column: i32 `
    ///
    pub fn IndexFromItem2(self: QTreeWidget, item: anytype, column: i32) QModelIndex {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        return .{ .ptr = qtc.QTreeWidget_IndexFromItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(column)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#scrollToItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` item: QTreeWidgetItem `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn ScrollToItem2(self: QTreeWidget, item: anytype, hint: i32) void {
        comptime _ = @TypeOf(item)._is_QTreeWidgetItem;
        qtc.QTreeWidget_ScrollToItem2(@ptrCast(self.ptr), @ptrCast(item.ptr), @bitCast(hint));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SetModel(self: QTreeWidget, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QTreeView_SetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setModel)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, model: QAbstractItemModel) callconv(.c) void `
    ///
    pub fn OnSetModel(self: QTreeWidget, callback: *const fn (QTreeWidget, QAbstractItemModel) callconv(.c) void) void {
        qtc.QTreeView_OnSetModel(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetModel` instead
    ///
    pub const QBaseSetModel = SuperSetModel;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setModel)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` model: QAbstractItemModel `
    ///
    pub fn SuperSetModel(self: QTreeWidget, model: anytype) void {
        comptime _ = @TypeOf(model)._is_QAbstractItemModel;
        qtc.QTreeView_SuperSetModel(@ptrCast(self.ptr), @ptrCast(model.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#header)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Header(self: QTreeWidget) QHeaderView {
        return .{ .ptr = qtc.QTreeView_Header(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setHeader)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` header: QHeaderView `
    ///
    pub fn SetHeader(self: QTreeWidget, header: anytype) void {
        comptime _ = @TypeOf(header)._is_QHeaderView;
        qtc.QTreeView_SetHeader(@ptrCast(self.ptr), @ptrCast(header.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#autoExpandDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn AutoExpandDelay(self: QTreeWidget) i32 {
        return qtc.QTreeView_AutoExpandDelay(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setAutoExpandDelay)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` delay: i32 `
    ///
    pub fn SetAutoExpandDelay(self: QTreeWidget, delay: i32) void {
        qtc.QTreeView_SetAutoExpandDelay(@ptrCast(self.ptr), @bitCast(delay));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indentation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Indentation(self: QTreeWidget) i32 {
        return qtc.QTreeView_Indentation(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setIndentation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` i: i32 `
    ///
    pub fn SetIndentation(self: QTreeWidget, i: i32) void {
        qtc.QTreeView_SetIndentation(@ptrCast(self.ptr), @bitCast(i));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#resetIndentation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ResetIndentation(self: QTreeWidget) void {
        qtc.QTreeView_ResetIndentation(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rootIsDecorated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn RootIsDecorated(self: QTreeWidget) bool {
        return qtc.QTreeView_RootIsDecorated(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setRootIsDecorated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` show: bool `
    ///
    pub fn SetRootIsDecorated(self: QTreeWidget, show: bool) void {
        qtc.QTreeView_SetRootIsDecorated(@ptrCast(self.ptr), show);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#uniformRowHeights)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn UniformRowHeights(self: QTreeWidget) bool {
        return qtc.QTreeView_UniformRowHeights(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setUniformRowHeights)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` uniform: bool `
    ///
    pub fn SetUniformRowHeights(self: QTreeWidget, uniform: bool) void {
        qtc.QTreeView_SetUniformRowHeights(@ptrCast(self.ptr), uniform);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#itemsExpandable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ItemsExpandable(self: QTreeWidget) bool {
        return qtc.QTreeView_ItemsExpandable(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setItemsExpandable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetItemsExpandable(self: QTreeWidget, enable: bool) void {
        qtc.QTreeView_SetItemsExpandable(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandsOnDoubleClick)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ExpandsOnDoubleClick(self: QTreeWidget) bool {
        return qtc.QTreeView_ExpandsOnDoubleClick(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setExpandsOnDoubleClick)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetExpandsOnDoubleClick(self: QTreeWidget, enable: bool) void {
        qtc.QTreeView_SetExpandsOnDoubleClick(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnViewportPosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnViewportPosition(self: QTreeWidget, column: i32) i32 {
        return qtc.QTreeView_ColumnViewportPosition(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn ColumnWidth(self: QTreeWidget, column: i32) i32 {
        return qtc.QTreeView_ColumnWidth(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setColumnWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` width: i32 `
    ///
    pub fn SetColumnWidth(self: QTreeWidget, column: i32, width: i32) void {
        qtc.QTreeView_SetColumnWidth(@ptrCast(self.ptr), @bitCast(column), @bitCast(width));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` x: i32 `
    ///
    pub fn ColumnAt(self: QTreeWidget, x: i32) i32 {
        return qtc.QTreeView_ColumnAt(@ptrCast(self.ptr), @bitCast(x));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isColumnHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn IsColumnHidden(self: QTreeWidget, column: i32) bool {
        return qtc.QTreeView_IsColumnHidden(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setColumnHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` hide: bool `
    ///
    pub fn SetColumnHidden(self: QTreeWidget, column: i32, hide: bool) void {
        qtc.QTreeView_SetColumnHidden(@ptrCast(self.ptr), @bitCast(column), hide);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isHeaderHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsHeaderHidden(self: QTreeWidget) bool {
        return qtc.QTreeView_IsHeaderHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setHeaderHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` hide: bool `
    ///
    pub fn SetHeaderHidden(self: QTreeWidget, hide: bool) void {
        qtc.QTreeView_SetHeaderHidden(@ptrCast(self.ptr), hide);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isRowHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn IsRowHidden(self: QTreeWidget, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QTreeView_IsRowHidden(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setRowHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` hide: bool `
    ///
    pub fn SetRowHidden(self: QTreeWidget, row: i32, parent: anytype, hide: bool) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QTreeView_SetRowHidden(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr), hide);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isFirstColumnSpanned)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    pub fn IsFirstColumnSpanned(self: QTreeWidget, row: i32, parent: anytype) bool {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        return qtc.QTreeView_IsFirstColumnSpanned(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setFirstColumnSpanned)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` span: bool `
    ///
    pub fn SetFirstColumnSpanned(self: QTreeWidget, row: i32, parent: anytype, span: bool) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QTreeView_SetFirstColumnSpanned(@ptrCast(self.ptr), @bitCast(row), @ptrCast(parent.ptr), span);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isExpanded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IsExpanded(self: QTreeWidget, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeView_IsExpanded(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setExpanded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` expand: bool `
    ///
    pub fn SetExpanded(self: QTreeWidget, index: anytype, expand: bool) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_SetExpanded(@ptrCast(self.ptr), @ptrCast(index.ptr), expand);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setSortingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetSortingEnabled(self: QTreeWidget, enable: bool) void {
        qtc.QTreeView_SetSortingEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isSortingEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsSortingEnabled(self: QTreeWidget) bool {
        return qtc.QTreeView_IsSortingEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAnimated(self: QTreeWidget, enable: bool) void {
        qtc.QTreeView_SetAnimated(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isAnimated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsAnimated(self: QTreeWidget) bool {
        return qtc.QTreeView_IsAnimated(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setAllColumnsShowFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAllColumnsShowFocus(self: QTreeWidget, enable: bool) void {
        qtc.QTreeView_SetAllColumnsShowFocus(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#allColumnsShowFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn AllColumnsShowFocus(self: QTreeWidget) bool {
        return qtc.QTreeView_AllColumnsShowFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setWordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` on: bool `
    ///
    pub fn SetWordWrap(self: QTreeWidget, on: bool) void {
        qtc.QTreeView_SetWordWrap(@ptrCast(self.ptr), on);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#wordWrap)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn WordWrap(self: QTreeWidget) bool {
        return qtc.QTreeView_WordWrap(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setTreePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` logicalIndex: i32 `
    ///
    pub fn SetTreePosition(self: QTreeWidget, logicalIndex: i32) void {
        qtc.QTreeView_SetTreePosition(@ptrCast(self.ptr), @bitCast(logicalIndex));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#treePosition)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn TreePosition(self: QTreeWidget) i32 {
        return qtc.QTreeView_TreePosition(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexAbove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IndexAbove(self: QTreeWidget, index: anytype) QModelIndex {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeView_IndexAbove(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexBelow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IndexBelow(self: QTreeWidget, index: anytype) QModelIndex {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeView_IndexBelow(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expanded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Expanded(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_Expanded(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expanded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnExpanded(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
        qtc.QTreeView_Connect_Expanded(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#collapsed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Collapsed(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_Collapsed(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#collapsed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnCollapsed(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
        qtc.QTreeView_Connect_Collapsed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#hideColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn HideColumn(self: QTreeWidget, column: i32) void {
        qtc.QTreeView_HideColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#showColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn ShowColumn(self: QTreeWidget, column: i32) void {
        qtc.QTreeView_ShowColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expand)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Expand(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_Expand(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#collapse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Collapse(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_Collapse(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#resizeColumnToContents)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn ResizeColumnToContents(self: QTreeWidget, column: i32) void {
        qtc.QTreeView_ResizeColumnToContents(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#sortByColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SortByColumn(self: QTreeWidget, column: i32, order: i32) void {
        qtc.QTreeView_SortByColumn(@ptrCast(self.ptr), @bitCast(column), @bitCast(order));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ExpandAll(self: QTreeWidget) void {
        qtc.QTreeView_ExpandAll(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ExpandRecursively(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_ExpandRecursively(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#collapseAll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn CollapseAll(self: QTreeWidget) void {
        qtc.QTreeView_CollapseAll(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandToDepth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` depth: i32 `
    ///
    pub fn ExpandToDepth(self: QTreeWidget, depth: i32) void {
        qtc.QTreeView_ExpandToDepth(@ptrCast(self.ptr), @bitCast(depth));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#expandRecursively)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` depth: i32 `
    ///
    pub fn ExpandRecursively2(self: QTreeWidget, index: anytype, depth: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeView_ExpandRecursively2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(depth));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#model)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Model(self: QTreeWidget) QAbstractItemModel {
        return .{ .ptr = qtc.QAbstractItemView_Model(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionModel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SelectionModel(self: QTreeWidget) QItemSelectionModel {
        return .{ .ptr = qtc.QAbstractItemView_SelectionModel(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegate(self: QTreeWidget, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegate(@ptrCast(self.ptr), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ItemDelegate(self: QTreeWidget) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` mode: qabstractitemview_enums.SelectionMode `
    ///
    pub fn SetSelectionMode(self: QTreeWidget, mode: i32) void {
        qtc.QAbstractItemView_SetSelectionMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionMode `
    ///
    pub fn SelectionMode(self: QTreeWidget) i32 {
        return qtc.QAbstractItemView_SelectionMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setSelectionBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` behavior: qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn SetSelectionBehavior(self: QTreeWidget, behavior: i32) void {
        qtc.QAbstractItemView_SetSelectionBehavior(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionBehavior)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.SelectionBehavior `
    ///
    pub fn SelectionBehavior(self: QTreeWidget) i32 {
        return qtc.QAbstractItemView_SelectionBehavior(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#currentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn CurrentIndex(self: QTreeWidget) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_CurrentIndex(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#rootIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn RootIndex(self: QTreeWidget) QModelIndex {
        return .{ .ptr = qtc.QAbstractItemView_RootIndex(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setEditTriggers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` triggers: flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn SetEditTriggers(self: QTreeWidget, triggers: i32) void {
        qtc.QAbstractItemView_SetEditTriggers(@ptrCast(self.ptr), @bitCast(triggers));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editTriggers)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qabstractitemview_enums.EditTrigger `
    ///
    pub fn EditTriggers(self: QTreeWidget) i32 {
        return qtc.QAbstractItemView_EditTriggers(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn SetVerticalScrollMode(self: QTreeWidget, mode: i32) void {
        qtc.QAbstractItemView_SetVerticalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn VerticalScrollMode(self: QTreeWidget) i32 {
        return qtc.QAbstractItemView_VerticalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetVerticalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ResetVerticalScrollMode(self: QTreeWidget) void {
        qtc.QAbstractItemView_ResetVerticalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` mode: qabstractitemview_enums.ScrollMode `
    ///
    pub fn SetHorizontalScrollMode(self: QTreeWidget, mode: i32) void {
        qtc.QAbstractItemView_SetHorizontalScrollMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.ScrollMode `
    ///
    pub fn HorizontalScrollMode(self: QTreeWidget) i32 {
        return qtc.QAbstractItemView_HorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resetHorizontalScrollMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ResetHorizontalScrollMode(self: QTreeWidget) void {
        qtc.QAbstractItemView_ResetHorizontalScrollMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAutoScroll(self: QTreeWidget, enable: bool) void {
        qtc.QAbstractItemView_SetAutoScroll(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#hasAutoScroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn HasAutoScroll(self: QTreeWidget) bool {
        return qtc.QAbstractItemView_HasAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAutoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` margin: i32 `
    ///
    pub fn SetAutoScrollMargin(self: QTreeWidget, margin: i32) void {
        qtc.QAbstractItemView_SetAutoScrollMargin(@ptrCast(self.ptr), @bitCast(margin));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#autoScrollMargin)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn AutoScrollMargin(self: QTreeWidget) i32 {
        return qtc.QAbstractItemView_AutoScrollMargin(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabKeyNavigation(self: QTreeWidget, enable: bool) void {
        qtc.QAbstractItemView_SetTabKeyNavigation(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#tabKeyNavigation)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn TabKeyNavigation(self: QTreeWidget) bool {
        return qtc.QAbstractItemView_TabKeyNavigation(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDropIndicatorShown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDropIndicatorShown(self: QTreeWidget, enable: bool) void {
        qtc.QAbstractItemView_SetDropIndicatorShown(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#showDropIndicator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ShowDropIndicator(self: QTreeWidget) bool {
        return qtc.QAbstractItemView_ShowDropIndicator(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetDragEnabled(self: QTreeWidget, enable: bool) void {
        qtc.QAbstractItemView_SetDragEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn DragEnabled(self: QTreeWidget) bool {
        return qtc.QAbstractItemView_DragEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` overwrite: bool `
    ///
    pub fn SetDragDropOverwriteMode(self: QTreeWidget, overwrite: bool) void {
        qtc.QAbstractItemView_SetDragDropOverwriteMode(@ptrCast(self.ptr), overwrite);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropOverwriteMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn DragDropOverwriteMode(self: QTreeWidget) bool {
        return qtc.QAbstractItemView_DragDropOverwriteMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDragDropMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` behavior: qabstractitemview_enums.DragDropMode `
    ///
    pub fn SetDragDropMode(self: QTreeWidget, behavior: i32) void {
        qtc.QAbstractItemView_SetDragDropMode(@ptrCast(self.ptr), @bitCast(behavior));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragDropMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DragDropMode `
    ///
    pub fn DragDropMode(self: QTreeWidget) i32 {
        return qtc.QAbstractItemView_DragDropMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDefaultDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` dropAction: qnamespace_enums.DropAction `
    ///
    pub fn SetDefaultDropAction(self: QTreeWidget, dropAction: i32) void {
        qtc.QAbstractItemView_SetDefaultDropAction(@ptrCast(self.ptr), @bitCast(dropAction));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#defaultDropAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.DropAction `
    ///
    pub fn DefaultDropAction(self: QTreeWidget) i32 {
        return qtc.QAbstractItemView_DefaultDropAction(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setAlternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetAlternatingRowColors(self: QTreeWidget, enable: bool) void {
        qtc.QAbstractItemView_SetAlternatingRowColors(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#alternatingRowColors)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn AlternatingRowColors(self: QTreeWidget) bool {
        return qtc.QAbstractItemView_AlternatingRowColors(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` size: QSize `
    ///
    pub fn SetIconSize(self: QTreeWidget, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QAbstractItemView_SetIconSize(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IconSize(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QAbstractItemView_IconSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setTextElideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` mode: qnamespace_enums.TextElideMode `
    ///
    pub fn SetTextElideMode(self: QTreeWidget, mode: i32) void {
        qtc.QAbstractItemView_SetTextElideMode(@ptrCast(self.ptr), @bitCast(mode));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#textElideMode)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.TextElideMode `
    ///
    pub fn TextElideMode(self: QTreeWidget) i32 {
        return qtc.QAbstractItemView_TextElideMode(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SizeHintForIndex(self: QTreeWidget, index: anytype) QSize {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_SizeHintForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setIndexWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetIndexWidget(self: QTreeWidget, index: anytype, widget: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractItemView_SetIndexWidget(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#indexWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IndexWidget(self: QTreeWidget, index: anytype) QWidget {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_IndexWidget(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` row: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegateForRow(self: QTreeWidget, row: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn ItemDelegateForRow(self: QTreeWidget, row: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForRow(@ptrCast(self.ptr), @bitCast(row)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setItemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` delegate: QAbstractItemDelegate `
    ///
    pub fn SetItemDelegateForColumn(self: QTreeWidget, column: i32, delegate: anytype) void {
        comptime _ = @TypeOf(delegate)._is_QAbstractItemDelegate;
        qtc.QAbstractItemView_SetItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column), @ptrCast(delegate.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn ItemDelegateForColumn(self: QTreeWidget, column: i32) QAbstractItemDelegate {
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegateForColumn(@ptrCast(self.ptr), @bitCast(column)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegate)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemDelegate2(self: QTreeWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QAbstractItemView_ItemDelegate2(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Edit(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Edit(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clearSelection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ClearSelection(self: QTreeWidget) void {
        qtc.QAbstractItemView_ClearSelection(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setCurrentIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetCurrentIndex(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_SetCurrentIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToTop)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ScrollToTop(self: QTreeWidget) void {
        qtc.QAbstractItemView_ScrollToTop(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollToBottom)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ScrollToBottom(self: QTreeWidget) void {
        qtc.QAbstractItemView_ScrollToBottom(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Update(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Update(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Pressed(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Pressed(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#pressed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnPressed(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Pressed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Clicked(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Clicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#clicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnClicked(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Clicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn DoubleClicked(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_DoubleClicked(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doubleClicked)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDoubleClicked(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_DoubleClicked(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Activated(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Activated(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#activated)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnActivated(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Activated(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn Entered(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QAbstractItemView_Entered(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#entered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnEntered(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_Entered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ViewportEntered(self: QTreeWidget) void {
        qtc.QAbstractItemView_ViewportEntered(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#viewportEntered)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget) callconv(.c) void `
    ///
    pub fn OnViewportEntered(self: QTreeWidget, callback: *const fn (QTreeWidget) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_ViewportEntered(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` size: QSize `
    ///
    pub fn IconSizeChanged(self: QTreeWidget, size: anytype) void {
        comptime _ = @TypeOf(size)._is_QSize;
        qtc.QAbstractItemView_IconSizeChanged(@ptrCast(self.ptr), @ptrCast(size.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#iconSizeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, size: QSize) callconv(.c) void `
    ///
    pub fn OnIconSizeChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QSize) callconv(.c) void) void {
        qtc.QAbstractItemView_Connect_IconSizeChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn VerticalScrollBarPolicy(self: QTreeWidget) i32 {
        return qtc.QAbstractScrollArea_VerticalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` verticalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetVerticalScrollBarPolicy(self: QTreeWidget, verticalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetVerticalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(verticalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#verticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn VerticalScrollBar(self: QTreeWidget) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_VerticalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setVerticalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetVerticalScrollBar(self: QTreeWidget, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetVerticalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn HorizontalScrollBarPolicy(self: QTreeWidget) i32 {
        return qtc.QAbstractScrollArea_HorizontalScrollBarPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBarPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` horizontalScrollBarPolicy: qnamespace_enums.ScrollBarPolicy `
    ///
    pub fn SetHorizontalScrollBarPolicy(self: QTreeWidget, horizontalScrollBarPolicy: i32) void {
        qtc.QAbstractScrollArea_SetHorizontalScrollBarPolicy(@ptrCast(self.ptr), @bitCast(horizontalScrollBarPolicy));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#horizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn HorizontalScrollBar(self: QTreeWidget) QScrollBar {
        return .{ .ptr = qtc.QAbstractScrollArea_HorizontalScrollBar(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setHorizontalScrollBar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` scrollbar: QScrollBar `
    ///
    pub fn SetHorizontalScrollBar(self: QTreeWidget, scrollbar: anytype) void {
        comptime _ = @TypeOf(scrollbar)._is_QScrollBar;
        qtc.QAbstractScrollArea_SetHorizontalScrollBar(@ptrCast(self.ptr), @ptrCast(scrollbar.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#cornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn CornerWidget(self: QTreeWidget) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_CornerWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setCornerWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetCornerWidget(self: QTreeWidget, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetCornerWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#addScrollBarWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` widget: QWidget `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn AddScrollBarWidget(self: QTreeWidget, widget: anytype, alignment: i32) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_AddScrollBarWidget(@ptrCast(self.ptr), @ptrCast(widget.ptr), @bitCast(alignment));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#scrollBarWidgets)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` alignment: flag of qnamespace_enums.AlignmentFlag `
    ///
    pub fn ScrollBarWidgets(self: QTreeWidget, allocator: std.mem.Allocator, alignment: i32) []QWidget {
        const _arr: qtc.libqt_list = qtc.QAbstractScrollArea_ScrollBarWidgets(@ptrCast(self.ptr), @bitCast(alignment));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QWidget, _arr.len) catch @panic("qtreewidget.ScrollBarWidgets: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    pub fn Viewport(self: QTreeWidget) QWidget {
        return .{ .ptr = qtc.QAbstractScrollArea_Viewport(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewport)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` widget: QWidget `
    ///
    pub fn SetViewport(self: QTreeWidget, widget: anytype) void {
        comptime _ = @TypeOf(widget)._is_QWidget;
        qtc.QAbstractScrollArea_SetViewport(@ptrCast(self.ptr), @ptrCast(widget.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#maximumViewportSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn MaximumViewportSize(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QAbstractScrollArea_MaximumViewportSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SizeAdjustPolicy(self: QTreeWidget) i32 {
        return qtc.QAbstractScrollArea_SizeAdjustPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setSizeAdjustPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` policy: qabstractscrollarea_enums.SizeAdjustPolicy `
    ///
    pub fn SetSizeAdjustPolicy(self: QTreeWidget, policy: i32) void {
        qtc.QAbstractScrollArea_SetSizeAdjustPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn FrameStyle(self: QTreeWidget) i32 {
        return qtc.QFrame_FrameStyle(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` frameStyle: i32 `
    ///
    pub fn SetFrameStyle(self: QTreeWidget, frameStyle: i32) void {
        qtc.QFrame_SetFrameStyle(@ptrCast(self.ptr), @bitCast(frameStyle));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn FrameWidth(self: QTreeWidget) i32 {
        return qtc.QFrame_FrameWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shape `
    ///
    pub fn FrameShape(self: QTreeWidget) i32 {
        return qtc.QFrame_FrameShape(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShape)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` frameShape: qframe_enums.Shape `
    ///
    pub fn SetFrameShape(self: QTreeWidget, frameShape: i32) void {
        qtc.QFrame_SetFrameShape(@ptrCast(self.ptr), @bitCast(frameShape));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qframe_enums.Shadow `
    ///
    pub fn FrameShadow(self: QTreeWidget) i32 {
        return qtc.QFrame_FrameShadow(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameShadow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` frameShadow: qframe_enums.Shadow `
    ///
    pub fn SetFrameShadow(self: QTreeWidget, frameShadow: i32) void {
        qtc.QFrame_SetFrameShadow(@ptrCast(self.ptr), @bitCast(frameShadow));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#lineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn LineWidth(self: QTreeWidget) i32 {
        return qtc.QFrame_LineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` lineWidth: i32 `
    ///
    pub fn SetLineWidth(self: QTreeWidget, lineWidth: i32) void {
        qtc.QFrame_SetLineWidth(@ptrCast(self.ptr), @bitCast(lineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#midLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn MidLineWidth(self: QTreeWidget) i32 {
        return qtc.QFrame_MidLineWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setMidLineWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` midLineWidth: i32 `
    ///
    pub fn SetMidLineWidth(self: QTreeWidget, midLineWidth: i32) void {
        qtc.QFrame_SetMidLineWidth(@ptrCast(self.ptr), @bitCast(midLineWidth));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#frameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn FrameRect(self: QTreeWidget) QRect {
        return .{ .ptr = qtc.QFrame_FrameRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#setFrameRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` frameRect: QRect `
    ///
    pub fn SetFrameRect(self: QTreeWidget, frameRect: anytype) void {
        comptime _ = @TypeOf(frameRect)._is_QRect;
        qtc.QFrame_SetFrameRect(@ptrCast(self.ptr), @ptrCast(frameRect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#winId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn WinId(self: QTreeWidget) usize {
        return qtc.QWidget_WinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#createWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn CreateWinId(self: QTreeWidget) void {
        qtc.QWidget_CreateWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#internalWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn InternalWinId(self: QTreeWidget) usize {
        return qtc.QWidget_InternalWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#effectiveWinId)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn EffectiveWinId(self: QTreeWidget) usize {
        return qtc.QWidget_EffectiveWinId(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#style)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Style(self: QTreeWidget) QStyle {
        return .{ .ptr = qtc.QWidget_Style(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStyle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` style: QStyle `
    ///
    pub fn SetStyle(self: QTreeWidget, style: anytype) void {
        comptime _ = @TypeOf(style)._is_QStyle;
        qtc.QWidget_SetStyle(@ptrCast(self.ptr), @ptrCast(style.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isTopLevel)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsTopLevel(self: QTreeWidget) bool {
        return qtc.QWidget_IsTopLevel(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsWindow(self: QTreeWidget) bool {
        return qtc.QWidget_IsWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isModal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsModal(self: QTreeWidget) bool {
        return qtc.QWidget_IsModal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowModality `
    ///
    pub fn WindowModality(self: QTreeWidget) i32 {
        return qtc.QWidget_WindowModality(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModality)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` windowModality: qnamespace_enums.WindowModality `
    ///
    pub fn SetWindowModality(self: QTreeWidget, windowModality: i32) void {
        qtc.QWidget_SetWindowModality(@ptrCast(self.ptr), @bitCast(windowModality));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsEnabled(self: QTreeWidget) bool {
        return qtc.QWidget_IsEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isEnabledTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsEnabledTo(self: QTreeWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsEnabledTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetEnabled(self: QTreeWidget, enabled: bool) void {
        qtc.QWidget_SetEnabled(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setDisabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` disabled: bool `
    ///
    pub fn SetDisabled(self: QTreeWidget, disabled: bool) void {
        qtc.QWidget_SetDisabled(@ptrCast(self.ptr), disabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` windowModified: bool `
    ///
    pub fn SetWindowModified(self: QTreeWidget, windowModified: bool) void {
        qtc.QWidget_SetWindowModified(@ptrCast(self.ptr), windowModified);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn FrameGeometry(self: QTreeWidget) QRect {
        return .{ .ptr = qtc.QWidget_FrameGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#geometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Geometry(self: QTreeWidget) QRect {
        return .{ .ptr = qtc.QWidget_Geometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#normalGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn NormalGeometry(self: QTreeWidget) QRect {
        return .{ .ptr = qtc.QWidget_NormalGeometry(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#x)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn X(self: QTreeWidget) i32 {
        return qtc.QWidget_X(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#y)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Y(self: QTreeWidget) i32 {
        return qtc.QWidget_Y(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#pos)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Pos(self: QTreeWidget) QPoint {
        return .{ .ptr = qtc.QWidget_Pos(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#frameSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn FrameSize(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QWidget_FrameSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Size(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QWidget_Size(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#width)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Width(self: QTreeWidget) i32 {
        return qtc.QWidget_Width(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#height)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Height(self: QTreeWidget) i32 {
        return qtc.QWidget_Height(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#rect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Rect(self: QTreeWidget) QRect {
        return .{ .ptr = qtc.QWidget_Rect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ChildrenRect(self: QTreeWidget) QRect {
        return .{ .ptr = qtc.QWidget_ChildrenRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childrenRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ChildrenRegion(self: QTreeWidget) QRegion {
        return .{ .ptr = qtc.QWidget_ChildrenRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn MinimumSize(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QWidget_MinimumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn MaximumSize(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QWidget_MaximumSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn MinimumWidth(self: QTreeWidget) i32 {
        return qtc.QWidget_MinimumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#minimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn MinimumHeight(self: QTreeWidget) i32 {
        return qtc.QWidget_MinimumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn MaximumWidth(self: QTreeWidget) i32 {
        return qtc.QWidget_MaximumWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#maximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn MaximumHeight(self: QTreeWidget) i32 {
        return qtc.QWidget_MaximumHeight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` minimumSize: QSize `
    ///
    pub fn SetMinimumSize(self: QTreeWidget, minimumSize: anytype) void {
        comptime _ = @TypeOf(minimumSize)._is_QSize;
        qtc.QWidget_SetMinimumSize(@ptrCast(self.ptr), @ptrCast(minimumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` minw: i32 `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumSize2(self: QTreeWidget, minw: i32, minh: i32) void {
        qtc.QWidget_SetMinimumSize2(@ptrCast(self.ptr), @bitCast(minw), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` maximumSize: QSize `
    ///
    pub fn SetMaximumSize(self: QTreeWidget, maximumSize: anytype) void {
        comptime _ = @TypeOf(maximumSize)._is_QSize;
        qtc.QWidget_SetMaximumSize(@ptrCast(self.ptr), @ptrCast(maximumSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` maxw: i32 `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumSize2(self: QTreeWidget, maxw: i32, maxh: i32) void {
        qtc.QWidget_SetMaximumSize2(@ptrCast(self.ptr), @bitCast(maxw), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` minw: i32 `
    ///
    pub fn SetMinimumWidth(self: QTreeWidget, minw: i32) void {
        qtc.QWidget_SetMinimumWidth(@ptrCast(self.ptr), @bitCast(minw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMinimumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` minh: i32 `
    ///
    pub fn SetMinimumHeight(self: QTreeWidget, minh: i32) void {
        qtc.QWidget_SetMinimumHeight(@ptrCast(self.ptr), @bitCast(minh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` maxw: i32 `
    ///
    pub fn SetMaximumWidth(self: QTreeWidget, maxw: i32) void {
        qtc.QWidget_SetMaximumWidth(@ptrCast(self.ptr), @bitCast(maxw));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMaximumHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` maxh: i32 `
    ///
    pub fn SetMaximumHeight(self: QTreeWidget, maxh: i32) void {
        qtc.QWidget_SetMaximumHeight(@ptrCast(self.ptr), @bitCast(maxh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SizeIncrement(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QWidget_SizeIncrement(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` sizeIncrement: QSize `
    ///
    pub fn SetSizeIncrement(self: QTreeWidget, sizeIncrement: anytype) void {
        comptime _ = @TypeOf(sizeIncrement)._is_QSize;
        qtc.QWidget_SetSizeIncrement(@ptrCast(self.ptr), @ptrCast(sizeIncrement.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizeIncrement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetSizeIncrement2(self: QTreeWidget, w: i32, h: i32) void {
        qtc.QWidget_SetSizeIncrement2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#baseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn BaseSize(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QWidget_BaseSize(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` baseSize: QSize `
    ///
    pub fn SetBaseSize(self: QTreeWidget, baseSize: anytype) void {
        comptime _ = @TypeOf(baseSize)._is_QSize;
        qtc.QWidget_SetBaseSize(@ptrCast(self.ptr), @ptrCast(baseSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBaseSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` basew: i32 `
    ///
    /// ` baseh: i32 `
    ///
    pub fn SetBaseSize2(self: QTreeWidget, basew: i32, baseh: i32) void {
        qtc.QWidget_SetBaseSize2(@ptrCast(self.ptr), @bitCast(basew), @bitCast(baseh));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` fixedSize: QSize `
    ///
    pub fn SetFixedSize(self: QTreeWidget, fixedSize: anytype) void {
        comptime _ = @TypeOf(fixedSize)._is_QSize;
        qtc.QWidget_SetFixedSize(@ptrCast(self.ptr), @ptrCast(fixedSize.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedSize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedSize2(self: QTreeWidget, w: i32, h: i32) void {
        qtc.QWidget_SetFixedSize2(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedWidth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` w: i32 `
    ///
    pub fn SetFixedWidth(self: QTreeWidget, w: i32) void {
        qtc.QWidget_SetFixedWidth(@ptrCast(self.ptr), @bitCast(w));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFixedHeight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` h: i32 `
    ///
    pub fn SetFixedHeight(self: QTreeWidget, h: i32) void {
        qtc.QWidget_SetFixedHeight(@ptrCast(self.ptr), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToGlobal(self: QTreeWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToGlobal2(self: QTreeWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromGlobal(self: QTreeWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromGlobal(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromGlobal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromGlobal2(self: QTreeWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromGlobal2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapToParent(self: QTreeWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapToParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapToParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapToParent2(self: QTreeWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapToParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPointF `
    ///
    pub fn MapFromParent(self: QTreeWidget, param1: anytype) QPointF {
        comptime _ = @TypeOf(param1)._is_QPointF;
        return .{ .ptr = qtc.QWidget_MapFromParent(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapFromParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn MapFromParent2(self: QTreeWidget, param1: anytype) QPoint {
        comptime _ = @TypeOf(param1)._is_QPoint;
        return .{ .ptr = qtc.QWidget_MapFromParent2(@ptrCast(self.ptr), @ptrCast(param1.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mapTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapTo(self: QTreeWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapTo2(self: QTreeWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPointF `
    ///
    pub fn MapFrom(self: QTreeWidget, param1: anytype, param2: anytype) QPointF {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    /// ` param2: QPoint `
    ///
    pub fn MapFrom2(self: QTreeWidget, param1: anytype, param2: anytype) QPoint {
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
    /// ` self: QTreeWidget `
    ///
    pub fn Window(self: QTreeWidget) QWidget {
        return .{ .ptr = qtc.QWidget_Window(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeParentWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn NativeParentWidget(self: QTreeWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NativeParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#topLevelWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn TopLevelWidget(self: QTreeWidget) QWidget {
        return .{ .ptr = qtc.QWidget_TopLevelWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#palette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Palette(self: QTreeWidget) QPalette {
        return .{ .ptr = qtc.QWidget_Palette(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setPalette)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` palette: QPalette `
    ///
    pub fn SetPalette(self: QTreeWidget, palette: anytype) void {
        comptime _ = @TypeOf(palette)._is_QPalette;
        qtc.QWidget_SetPalette(@ptrCast(self.ptr), @ptrCast(palette.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setBackgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` backgroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetBackgroundRole(self: QTreeWidget, backgroundRole: i32) void {
        qtc.QWidget_SetBackgroundRole(@ptrCast(self.ptr), @bitCast(backgroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backgroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn BackgroundRole(self: QTreeWidget) i32 {
        return qtc.QWidget_BackgroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setForegroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` foregroundRole: qpalette_enums.ColorRole `
    ///
    pub fn SetForegroundRole(self: QTreeWidget, foregroundRole: i32) void {
        qtc.QWidget_SetForegroundRole(@ptrCast(self.ptr), @bitCast(foregroundRole));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#foregroundRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qpalette_enums.ColorRole `
    ///
    pub fn ForegroundRole(self: QTreeWidget) i32 {
        return qtc.QWidget_ForegroundRole(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#font)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Font(self: QTreeWidget) QFont {
        return .{ .ptr = qtc.QWidget_Font(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFont)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` font: QFont `
    ///
    pub fn SetFont(self: QTreeWidget, font: anytype) void {
        comptime _ = @TypeOf(font)._is_QFont;
        qtc.QWidget_SetFont(@ptrCast(self.ptr), @ptrCast(font.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontMetrics)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn FontMetrics(self: QTreeWidget) QFontMetrics {
        return .{ .ptr = qtc.QWidget_FontMetrics(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#fontInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn FontInfo(self: QTreeWidget) QFontInfo {
        return .{ .ptr = qtc.QWidget_FontInfo(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#cursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Cursor(self: QTreeWidget) QCursor {
        return .{ .ptr = qtc.QWidget_Cursor(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` cursor: QCursor `
    ///
    pub fn SetCursor(self: QTreeWidget, cursor: anytype) void {
        comptime _ = @TypeOf(cursor)._is_QCursor;
        qtc.QWidget_SetCursor(@ptrCast(self.ptr), @ptrCast(cursor.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetCursor)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn UnsetCursor(self: QTreeWidget) void {
        qtc.QWidget_UnsetCursor(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetMouseTracking(self: QTreeWidget, enable: bool) void {
        qtc.QWidget_SetMouseTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasMouseTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn HasMouseTracking(self: QTreeWidget) bool {
        return qtc.QWidget_HasMouseTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#underMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn UnderMouse(self: QTreeWidget) bool {
        return qtc.QWidget_UnderMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetTabletTracking(self: QTreeWidget, enable: bool) void {
        qtc.QWidget_SetTabletTracking(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasTabletTracking)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn HasTabletTracking(self: QTreeWidget) bool {
        return qtc.QWidget_HasTabletTracking(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` mask: QBitmap `
    ///
    pub fn SetMask(self: QTreeWidget, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QBitmap;
        qtc.QWidget_SetMask(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` mask: QRegion `
    ///
    pub fn SetMask2(self: QTreeWidget, mask: anytype) void {
        comptime _ = @TypeOf(mask)._is_QRegion;
        qtc.QWidget_SetMask2(@ptrCast(self.ptr), @ptrCast(mask.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#mask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Mask(self: QTreeWidget) QRegion {
        return .{ .ptr = qtc.QWidget_Mask(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearMask)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ClearMask(self: QTreeWidget) void {
        qtc.QWidget_ClearMask(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    pub fn Render(self: QTreeWidget, target: anytype) void {
        comptime _ = @TypeOf(target)._is_QPaintDevice;
        qtc.QWidget_Render(@ptrCast(self.ptr), @ptrCast(target.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn Render2(self: QTreeWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QWidget_Render2(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grab)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Grab(self: QTreeWidget) QPixmap {
        return .{ .ptr = qtc.QWidget_Grab(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn GraphicsEffect(self: QTreeWidget) QGraphicsEffect {
        return .{ .ptr = qtc.QWidget_GraphicsEffect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGraphicsEffect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` effect: QGraphicsEffect `
    ///
    pub fn SetGraphicsEffect(self: QTreeWidget, effect: anytype) void {
        comptime _ = @TypeOf(effect)._is_QGraphicsEffect;
        qtc.QWidget_SetGraphicsEffect(@ptrCast(self.ptr), @ptrCast(effect.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn GrabGesture(self: QTreeWidget, typeVal: i32) void {
        qtc.QWidget_GrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ungrabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    pub fn UngrabGesture(self: QTreeWidget, typeVal: i32) void {
        qtc.QWidget_UngrabGesture(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` windowTitle: []const u8 `
    ///
    pub fn SetWindowTitle(self: QTreeWidget, windowTitle: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` styleSheet: []const u8 `
    ///
    pub fn SetStyleSheet(self: QTreeWidget, styleSheet: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StyleSheet(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StyleSheet(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.StyleSheet: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowTitle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowTitle(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowTitle(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.WindowTitle: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` icon: QIcon `
    ///
    pub fn SetWindowIcon(self: QTreeWidget, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_SetWindowIcon(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn WindowIcon(self: QTreeWidget) QIcon {
        return .{ .ptr = qtc.QWidget_WindowIcon(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowIconText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` windowIconText: []const u8 `
    ///
    pub fn SetWindowIconText(self: QTreeWidget, windowIconText: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowIconText(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowIconText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.WindowIconText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowRole)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` windowRole: []const u8 `
    ///
    pub fn SetWindowRole(self: QTreeWidget, windowRole: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowRole(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowRole(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.WindowRole: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFilePath)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` filePath: []const u8 `
    ///
    pub fn SetWindowFilePath(self: QTreeWidget, filePath: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WindowFilePath(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WindowFilePath(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.WindowFilePath: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` level: f64 `
    ///
    pub fn SetWindowOpacity(self: QTreeWidget, level: f64) void {
        qtc.QWidget_SetWindowOpacity(@ptrCast(self.ptr), @bitCast(level));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowOpacity)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn WindowOpacity(self: QTreeWidget) f64 {
        return qtc.QWidget_WindowOpacity(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isWindowModified)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsWindowModified(self: QTreeWidget) bool {
        return qtc.QWidget_IsWindowModified(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` toolTip: []const u8 `
    ///
    pub fn SetToolTip(self: QTreeWidget, toolTip: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ToolTip(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_ToolTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.ToolTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setToolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` msec: i32 `
    ///
    pub fn SetToolTipDuration(self: QTreeWidget, msec: i32) void {
        qtc.QWidget_SetToolTipDuration(@ptrCast(self.ptr), @bitCast(msec));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#toolTipDuration)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ToolTipDuration(self: QTreeWidget) i32 {
        return qtc.QWidget_ToolTipDuration(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setStatusTip)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` statusTip: []const u8 `
    ///
    pub fn SetStatusTip(self: QTreeWidget, statusTip: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn StatusTip(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_StatusTip(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.StatusTip: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWhatsThis)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` whatsThis: []const u8 `
    ///
    pub fn SetWhatsThis(self: QTreeWidget, whatsThis: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn WhatsThis(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_WhatsThis(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.WhatsThis: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#accessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleName(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.AccessibleName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetAccessibleName(self: QTreeWidget, name: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn AccessibleDescription(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QWidget_AccessibleDescription(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.AccessibleDescription: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAccessibleDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetAccessibleDescription(self: QTreeWidget, description: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` direction: qnamespace_enums.LayoutDirection `
    ///
    pub fn SetLayoutDirection(self: QTreeWidget, direction: i32) void {
        qtc.QWidget_SetLayoutDirection(@ptrCast(self.ptr), @bitCast(direction));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.LayoutDirection `
    ///
    pub fn LayoutDirection(self: QTreeWidget) i32 {
        return qtc.QWidget_LayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLayoutDirection)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn UnsetLayoutDirection(self: QTreeWidget) void {
        qtc.QWidget_UnsetLayoutDirection(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` locale: QLocale `
    ///
    pub fn SetLocale(self: QTreeWidget, locale: anytype) void {
        comptime _ = @TypeOf(locale)._is_QLocale;
        qtc.QWidget_SetLocale(@ptrCast(self.ptr), @ptrCast(locale.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#locale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Locale(self: QTreeWidget) QLocale {
        return .{ .ptr = qtc.QWidget_Locale(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#unsetLocale)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn UnsetLocale(self: QTreeWidget) void {
        qtc.QWidget_UnsetLocale(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isRightToLeft)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsRightToLeft(self: QTreeWidget) bool {
        return qtc.QWidget_IsRightToLeft(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isLeftToRight)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsLeftToRight(self: QTreeWidget) bool {
        return qtc.QWidget_IsLeftToRight(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SetFocus(self: QTreeWidget) void {
        qtc.QWidget_SetFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isActiveWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsActiveWindow(self: QTreeWidget) bool {
        return qtc.QWidget_IsActiveWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#activateWindow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ActivateWindow(self: QTreeWidget) void {
        qtc.QWidget_ActivateWindow(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#clearFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ClearFocus(self: QTreeWidget) void {
        qtc.QWidget_ClearFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` reason: qnamespace_enums.FocusReason `
    ///
    pub fn SetFocus2(self: QTreeWidget, reason: i32) void {
        qtc.QWidget_SetFocus2(@ptrCast(self.ptr), @bitCast(reason));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.FocusPolicy `
    ///
    pub fn FocusPolicy(self: QTreeWidget) i32 {
        return qtc.QWidget_FocusPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setFocusPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` policy: qnamespace_enums.FocusPolicy `
    ///
    pub fn SetFocusPolicy(self: QTreeWidget, policy: i32) void {
        qtc.QWidget_SetFocusPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasFocus)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn HasFocus(self: QTreeWidget) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` focusProxy: QWidget `
    ///
    pub fn SetFocusProxy(self: QTreeWidget, focusProxy: anytype) void {
        comptime _ = @TypeOf(focusProxy)._is_QWidget;
        qtc.QWidget_SetFocusProxy(@ptrCast(self.ptr), @ptrCast(focusProxy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusProxy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn FocusProxy(self: QTreeWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusProxy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn ContextMenuPolicy(self: QTreeWidget) i32 {
        return qtc.QWidget_ContextMenuPolicy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContextMenuPolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` policy: qnamespace_enums.ContextMenuPolicy `
    ///
    pub fn SetContextMenuPolicy(self: QTreeWidget, policy: i32) void {
        qtc.QWidget_SetContextMenuPolicy(@ptrCast(self.ptr), @bitCast(policy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn GrabMouse(self: QTreeWidget) void {
        qtc.QWidget_GrabMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QCursor `
    ///
    pub fn GrabMouse2(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QCursor;
        qtc.QWidget_GrabMouse2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseMouse)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ReleaseMouse(self: QTreeWidget) void {
        qtc.QWidget_ReleaseMouse(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn GrabKeyboard(self: QTreeWidget) void {
        qtc.QWidget_GrabKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseKeyboard)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ReleaseKeyboard(self: QTreeWidget) void {
        qtc.QWidget_ReleaseKeyboard(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` key: QKeySequence `
    ///
    pub fn GrabShortcut(self: QTreeWidget, key: anytype) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut(@ptrCast(self.ptr), @ptrCast(key.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#releaseShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn ReleaseShortcut(self: QTreeWidget, id: i32) void {
        qtc.QWidget_ReleaseShortcut(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutEnabled(self: QTreeWidget, id: i32) void {
        qtc.QWidget_SetShortcutEnabled(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn SetShortcutAutoRepeat(self: QTreeWidget, id: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    pub fn UpdatesEnabled(self: QTreeWidget) bool {
        return qtc.QWidget_UpdatesEnabled(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setUpdatesEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enable: bool `
    ///
    pub fn SetUpdatesEnabled(self: QTreeWidget, enable: bool) void {
        qtc.QWidget_SetUpdatesEnabled(@ptrCast(self.ptr), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#graphicsProxyWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn GraphicsProxyWidget(self: QTreeWidget) QGraphicsProxyWidget {
        return .{ .ptr = qtc.QWidget_GraphicsProxyWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Repaint(self: QTreeWidget) void {
        qtc.QWidget_Repaint(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Update2(self: QTreeWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Update2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn Update3(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Update3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#update)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Update4(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Update4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Repaint2(self: QTreeWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_Repaint2(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QRect `
    ///
    pub fn Repaint3(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRect;
        qtc.QWidget_Repaint3(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#repaint)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QRegion `
    ///
    pub fn Repaint4(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QRegion;
        qtc.QWidget_Repaint4(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetHidden(self: QTreeWidget, hidden: bool) void {
        qtc.QWidget_SetHidden(@ptrCast(self.ptr), hidden);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#show)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Show(self: QTreeWidget) void {
        qtc.QWidget_Show(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hide)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Hide(self: QTreeWidget) void {
        qtc.QWidget_Hide(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ShowMinimized(self: QTreeWidget) void {
        qtc.QWidget_ShowMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ShowMaximized(self: QTreeWidget) void {
        qtc.QWidget_ShowMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ShowFullScreen(self: QTreeWidget) void {
        qtc.QWidget_ShowFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showNormal)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ShowNormal(self: QTreeWidget) void {
        qtc.QWidget_ShowNormal(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#close)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Close(self: QTreeWidget) bool {
        return qtc.QWidget_Close(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#raise)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Raise(self: QTreeWidget) void {
        qtc.QWidget_Raise(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#lower)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Lower(self: QTreeWidget) void {
        qtc.QWidget_Lower(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#stackUnder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn StackUnder(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWidget;
        qtc.QWidget_StackUnder(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn Move(self: QTreeWidget, x: i32, y: i32) void {
        qtc.QWidget_Move(@ptrCast(self.ptr), @bitCast(x), @bitCast(y));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#move)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPoint `
    ///
    pub fn Move2(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPoint;
        qtc.QWidget_Move2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn Resize(self: QTreeWidget, w: i32, h: i32) void {
        qtc.QWidget_Resize(@ptrCast(self.ptr), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#resize)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QSize `
    ///
    pub fn Resize2(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QSize;
        qtc.QWidget_Resize2(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    /// ` w: i32 `
    ///
    /// ` h: i32 `
    ///
    pub fn SetGeometry(self: QTreeWidget, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QWidget_SetGeometry(@ptrCast(self.ptr), @bitCast(x), @bitCast(y), @bitCast(w), @bitCast(h));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` geometry: QRect `
    ///
    pub fn SetGeometry2(self: QTreeWidget, geometry: anytype) void {
        comptime _ = @TypeOf(geometry)._is_QRect;
        qtc.QWidget_SetGeometry2(@ptrCast(self.ptr), @ptrCast(geometry.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#saveGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SaveGeometry(self: QTreeWidget, allocator: std.mem.Allocator) []u8 {
        var _bytearray: qtc.libqt_string = qtc.QWidget_SaveGeometry(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_bytearray);
        const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qtreewidget.SaveGeometry: Memory allocation failed");
        @memcpy(_ret, _bytearray.data[0.._bytearray.len]);
        return _ret;
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#restoreGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` geometry: []u8 `
    ///
    pub fn RestoreGeometry(self: QTreeWidget, geometry: []u8) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn AdjustSize(self: QTreeWidget) void {
        qtc.QWidget_AdjustSize(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsVisible(self: QTreeWidget) bool {
        return qtc.QWidget_IsVisible(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isVisibleTo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWidget `
    ///
    pub fn IsVisibleTo(self: QTreeWidget, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QWidget;
        return qtc.QWidget_IsVisibleTo(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsHidden(self: QTreeWidget) bool {
        return qtc.QWidget_IsHidden(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMinimized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsMinimized(self: QTreeWidget) bool {
        return qtc.QWidget_IsMinimized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isMaximized)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsMaximized(self: QTreeWidget) bool {
        return qtc.QWidget_IsMaximized(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isFullScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsFullScreen(self: QTreeWidget) bool {
        return qtc.QWidget_IsFullScreen(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowState `
    ///
    pub fn WindowState(self: QTreeWidget) i32 {
        return qtc.QWidget_WindowState(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn SetWindowState(self: QTreeWidget, state: i32) void {
        qtc.QWidget_SetWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowState)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` state: flag of qnamespace_enums.WindowState `
    ///
    pub fn OverrideWindowState(self: QTreeWidget, state: i32) void {
        qtc.QWidget_OverrideWindowState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SizePolicy(self: QTreeWidget) QSizePolicy {
        return .{ .ptr = qtc.QWidget_SizePolicy(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` sizePolicy: QSizePolicy `
    ///
    pub fn SetSizePolicy(self: QTreeWidget, sizePolicy: anytype) void {
        comptime _ = @TypeOf(sizePolicy)._is_QSizePolicy;
        qtc.QWidget_SetSizePolicy(@ptrCast(self.ptr), @ptrCast(sizePolicy.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setSizePolicy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` horizontal: qsizepolicy_enums.Policy `
    ///
    /// ` vertical: qsizepolicy_enums.Policy `
    ///
    pub fn SetSizePolicy2(self: QTreeWidget, horizontal: i32, vertical: i32) void {
        qtc.QWidget_SetSizePolicy2(@ptrCast(self.ptr), @bitCast(horizontal), @bitCast(vertical));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#visibleRegion)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn VisibleRegion(self: QTreeWidget) QRegion {
        return .{ .ptr = qtc.QWidget_VisibleRegion(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetContentsMargins(self: QTreeWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QWidget_SetContentsMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setContentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` margins: QMargins `
    ///
    pub fn SetContentsMargins2(self: QTreeWidget, margins: anytype) void {
        comptime _ = @TypeOf(margins)._is_QMargins;
        qtc.QWidget_SetContentsMargins2(@ptrCast(self.ptr), @ptrCast(margins.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsMargins)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ContentsMargins(self: QTreeWidget) QMargins {
        return .{ .ptr = qtc.QWidget_ContentsMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#contentsRect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ContentsRect(self: QTreeWidget) QRect {
        return .{ .ptr = qtc.QWidget_ContentsRect(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#layout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Layout(self: QTreeWidget) QLayout {
        return .{ .ptr = qtc.QWidget_Layout(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setLayout)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` layout: QLayout `
    ///
    pub fn SetLayout(self: QTreeWidget, layout: anytype) void {
        comptime _ = @TypeOf(layout)._is_QLayout;
        qtc.QWidget_SetLayout(@ptrCast(self.ptr), @ptrCast(layout.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateGeometry)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn UpdateGeometry(self: QTreeWidget) void {
        qtc.QWidget_UpdateGeometry(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` parent: QWidget `
    ///
    pub fn SetParent(self: QTreeWidget, parent: anytype) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent(@ptrCast(self.ptr), @ptrCast(parent.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` parent: QWidget `
    ///
    /// ` f: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetParent2(self: QTreeWidget, parent: anytype, f: i32) void {
        comptime _ = @TypeOf(parent)._is_QWidget;
        qtc.QWidget_SetParent2(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(f));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn Scroll(self: QTreeWidget, dx: i32, dy: i32) void {
        qtc.QWidget_Scroll(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#scroll)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    /// ` param3: QRect `
    ///
    pub fn Scroll2(self: QTreeWidget, dx: i32, dy: i32, param3: anytype) void {
        comptime _ = @TypeOf(param3)._is_QRect;
        qtc.QWidget_Scroll2(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy), @ptrCast(param3.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusWidget)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn FocusWidget(self: QTreeWidget) QWidget {
        return .{ .ptr = qtc.QWidget_FocusWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nextInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn NextInFocusChain(self: QTreeWidget) QWidget {
        return .{ .ptr = qtc.QWidget_NextInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#previousInFocusChain)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn PreviousInFocusChain(self: QTreeWidget) QWidget {
        return .{ .ptr = qtc.QWidget_PreviousInFocusChain(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#acceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn AcceptDrops(self: QTreeWidget) bool {
        return qtc.QWidget_AcceptDrops(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAcceptDrops)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` on: bool `
    ///
    pub fn SetAcceptDrops(self: QTreeWidget, on: bool) void {
        qtc.QWidget_SetAcceptDrops(@ptrCast(self.ptr), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addAction)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn AddAction(self: QTreeWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_AddAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#addActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` actions: []QAction `
    ///
    pub fn AddActions(self: QTreeWidget, actions: []QAction) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` actions: []QAction `
    ///
    pub fn InsertActions(self: QTreeWidget, before: anytype, actions: []QAction) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` before: QAction `
    ///
    /// ` action: QAction `
    ///
    pub fn InsertAction(self: QTreeWidget, before: anytype, action: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` action: QAction `
    ///
    pub fn RemoveAction(self: QTreeWidget, action: anytype) void {
        comptime _ = @TypeOf(action)._is_QAction;
        qtc.QWidget_RemoveAction(@ptrCast(self.ptr), @ptrCast(action.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Actions(self: QTreeWidget, allocator: std.mem.Allocator) []QAction {
        const _arr: qtc.libqt_list = qtc.QWidget_Actions(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QAction, _arr.len) catch @panic("qtreewidget.Actions: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction2(self: QTreeWidget, text: []const u8) QAction {
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
    /// ` self: QTreeWidget `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    pub fn AddAction3(self: QTreeWidget, icon: anytype, text: []const u8) QAction {
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
    /// ` self: QTreeWidget `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction4(self: QTreeWidget, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QTreeWidget `
    ///
    /// ` icon: QIcon `
    ///
    /// ` text: []const u8 `
    ///
    /// ` shortcut: QKeySequence `
    ///
    pub fn AddAction5(self: QTreeWidget, icon: anytype, text: []const u8, shortcut: anytype) QAction {
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
    /// ` self: QTreeWidget `
    ///
    pub fn ParentWidget(self: QTreeWidget) QWidget {
        return .{ .ptr = qtc.QWidget_ParentWidget(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlags(self: QTreeWidget, typeVal: i32) void {
        qtc.QWidget_SetWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.WindowType `
    ///
    pub fn WindowFlags(self: QTreeWidget) i32 {
        return qtc.QWidget_WindowFlags(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    pub fn SetWindowFlag(self: QTreeWidget, param1: i32) void {
        qtc.QWidget_SetWindowFlag(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#overrideWindowFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` typeVal: flag of qnamespace_enums.WindowType `
    ///
    pub fn OverrideWindowFlags(self: QTreeWidget, typeVal: i32) void {
        qtc.QWidget_OverrideWindowFlags(@ptrCast(self.ptr), @bitCast(typeVal));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qnamespace_enums.WindowType `
    ///
    pub fn WindowType(self: QTreeWidget) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` x: i32 `
    ///
    /// ` y: i32 `
    ///
    pub fn ChildAt(self: QTreeWidget, x: i32, y: i32) QWidget {
        return .{ .ptr = qtc.QWidget_ChildAt(@ptrCast(self.ptr), @bitCast(x), @bitCast(y)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn ChildAt2(self: QTreeWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QWidget_ChildAt2(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#childAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` p: QPointF `
    ///
    pub fn ChildAt3(self: QTreeWidget, p: anytype) QWidget {
        comptime _ = @TypeOf(p)._is_QPointF;
        return .{ .ptr = qtc.QWidget_ChildAt3(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn SetAttribute(self: QTreeWidget, param1: i32) void {
        qtc.QWidget_SetAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#testAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    pub fn TestAttribute(self: QTreeWidget, param1: i32) bool {
        return qtc.QWidget_TestAttribute(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#ensurePolished)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn EnsurePolished(self: QTreeWidget) void {
        qtc.QWidget_EnsurePolished(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#isAncestorOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` child: QWidget `
    ///
    pub fn IsAncestorOf(self: QTreeWidget, child: anytype) bool {
        comptime _ = @TypeOf(child)._is_QWidget;
        return qtc.QWidget_IsAncestorOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#autoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn AutoFillBackground(self: QTreeWidget) bool {
        return qtc.QWidget_AutoFillBackground(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAutoFillBackground)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` enabled: bool `
    ///
    pub fn SetAutoFillBackground(self: QTreeWidget, enabled: bool) void {
        qtc.QWidget_SetAutoFillBackground(@ptrCast(self.ptr), enabled);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#backingStore)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn BackingStore(self: QTreeWidget) QBackingStore {
        return .{ .ptr = qtc.QWidget_BackingStore(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowHandle)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn WindowHandle(self: QTreeWidget) QWindow {
        return .{ .ptr = qtc.QWidget_WindowHandle(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#screen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Screen(self: QTreeWidget) QScreen {
        return .{ .ptr = qtc.QWidget_Screen(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setScreen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` screen: QScreen `
    ///
    pub fn SetScreen(self: QTreeWidget, screen: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` title: []const u8 `
    ///
    pub fn WindowTitleChanged(self: QTreeWidget, title: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, title: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowTitleChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowTitleChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` icon: QIcon `
    ///
    pub fn WindowIconChanged(self: QTreeWidget, icon: anytype) void {
        comptime _ = @TypeOf(icon)._is_QIcon;
        qtc.QWidget_WindowIconChanged(@ptrCast(self.ptr), @ptrCast(icon.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, icon: QIcon) callconv(.c) void `
    ///
    pub fn OnWindowIconChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QIcon) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#windowIconTextChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` iconText: []const u8 `
    ///
    pub fn WindowIconTextChanged(self: QTreeWidget, iconText: []const u8) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, iconText: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnWindowIconTextChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QWidget_Connect_WindowIconTextChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` pos: QPoint `
    ///
    pub fn CustomContextMenuRequested(self: QTreeWidget, pos: anytype) void {
        comptime _ = @TypeOf(pos)._is_QPoint;
        qtc.QWidget_CustomContextMenuRequested(@ptrCast(self.ptr), @ptrCast(pos.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#customContextMenuRequested)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, pos: QPoint) callconv(.c) void `
    ///
    pub fn OnCustomContextMenuRequested(self: QTreeWidget, callback: *const fn (QTreeWidget, QPoint) callconv(.c) void) void {
        qtc.QWidget_Connect_CustomContextMenuRequested(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#inputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn InputMethodHints(self: QTreeWidget) i32 {
        return qtc.QWidget_InputMethodHints(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setInputMethodHints)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` hints: flag of qnamespace_enums.InputMethodHint `
    ///
    pub fn SetInputMethodHints(self: QTreeWidget, hints: i32) void {
        qtc.QWidget_SetInputMethodHints(@ptrCast(self.ptr), @bitCast(hints));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#render)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render22(self: QTreeWidget, target: anytype, targetOffset: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render3(self: QTreeWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` target: QPaintDevice `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render4(self: QTreeWidget, target: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    pub fn Render23(self: QTreeWidget, painter: anytype, targetOffset: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    pub fn Render32(self: QTreeWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` targetOffset: QPoint `
    ///
    /// ` sourceRegion: QRegion `
    ///
    /// ` renderFlags: flag of qwidget_enums.RenderFlag `
    ///
    pub fn Render42(self: QTreeWidget, painter: anytype, targetOffset: anytype, sourceRegion: anytype, renderFlags: i32) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` rectangle: QRect `
    ///
    pub fn Grab1(self: QTreeWidget, rectangle: anytype) QPixmap {
        comptime _ = @TypeOf(rectangle)._is_QRect;
        return .{ .ptr = qtc.QWidget_Grab1(@ptrCast(self.ptr), @ptrCast(rectangle.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabGesture)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` typeVal: qnamespace_enums.GestureType `
    ///
    /// ` flags: flag of qnamespace_enums.GestureFlag `
    ///
    pub fn GrabGesture2(self: QTreeWidget, typeVal: i32, flags: i32) void {
        qtc.QWidget_GrabGesture2(@ptrCast(self.ptr), @bitCast(typeVal), @bitCast(flags));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#grabShortcut)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` key: QKeySequence `
    ///
    /// ` context: qnamespace_enums.ShortcutContext `
    ///
    pub fn GrabShortcut2(self: QTreeWidget, key: anytype, context: i32) i32 {
        comptime _ = @TypeOf(key)._is_QKeySequence;
        return qtc.QWidget_GrabShortcut2(@ptrCast(self.ptr), @ptrCast(key.ptr), @bitCast(context));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutEnabled)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutEnabled2(self: QTreeWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutEnabled2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setShortcutAutoRepeat)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` id: i32 `
    ///
    /// ` enable: bool `
    ///
    pub fn SetShortcutAutoRepeat2(self: QTreeWidget, id: i32, enable: bool) void {
        qtc.QWidget_SetShortcutAutoRepeat2(@ptrCast(self.ptr), @bitCast(id), enable);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setWindowFlag)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qnamespace_enums.WindowType `
    ///
    /// ` on: bool `
    ///
    pub fn SetWindowFlag2(self: QTreeWidget, param1: i32, on: bool) void {
        qtc.QWidget_SetWindowFlag2(@ptrCast(self.ptr), @bitCast(param1), on);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setAttribute)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qnamespace_enums.WidgetAttribute `
    ///
    /// ` on: bool `
    ///
    pub fn SetAttribute2(self: QTreeWidget, param1: i32, on: bool) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: QTreeWidget, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("qtreewidget.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: QTreeWidget, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self.ptr), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsWidgetType(self: QTreeWidget) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsWindowType(self: QTreeWidget) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn IsQuickItemType(self: QTreeWidget) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SignalsBlocked(self: QTreeWidget) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: QTreeWidget, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self.ptr), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Thread(self: QTreeWidget) QThread {
        return .{ .ptr = qtc.QObject_Thread(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` thread: QThread `
    ///
    pub fn MoveToThread(self: QTreeWidget, thread: anytype) bool {
        comptime _ = @TypeOf(thread)._is_QThread;
        return qtc.QObject_MoveToThread(@ptrCast(self.ptr), @ptrCast(thread.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: QTreeWidget, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self.ptr), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: QTreeWidget, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self.ptr), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: QTreeWidget, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: QTreeWidget, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self.ptr), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: QTreeWidget, allocator: std.mem.Allocator) []QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QObject, _arr.len) catch @panic("qtreewidget.Children: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    /// ` filterObj: QObject `
    ///
    pub fn InstallEventFilter(self: QTreeWidget, filterObj: anytype) void {
        comptime _ = @TypeOf(filterObj)._is_QObject;
        qtc.QObject_InstallEventFilter(@ptrCast(self.ptr), @ptrCast(filterObj.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` obj: QObject `
    ///
    pub fn RemoveEventFilter(self: QTreeWidget, obj: anytype) void {
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
    /// ` self: QTreeWidget `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: QTreeWidget, sender: anytype, signal: [:0]const u8, member: [:0]const u8) QMetaObject__Connection {
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
    /// ` self: QTreeWidget `
    ///
    pub fn Disconnect3(self: QTreeWidget) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect4(self: QTreeWidget, receiver: anytype) bool {
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
    /// ` self: QTreeWidget `
    ///
    pub fn DumpObjectTree(self: QTreeWidget) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn DumpObjectInfo(self: QTreeWidget) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetProperty(self: QTreeWidget, name: [:0]const u8, value: anytype) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: QTreeWidget, name: [:0]const u8) QVariant {
        const name_Cstring = name.ptr;
        return .{ .ptr = qtc.QObject_Property(@ptrCast(self.ptr), name_Cstring) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: QTreeWidget, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self.ptr));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("qtreewidget.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("qtreewidget.DynamicPropertyNames: Memory allocation failed");
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
    /// ` self: QTreeWidget `
    ///
    pub fn BindingStorage(self: QTreeWidget) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn BindingStorage2(self: QTreeWidget) QBindingStorage {
        return .{ .ptr = qtc.QObject_BindingStorage2(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Destroyed(self: QTreeWidget) void {
        qtc.QObject_Destroyed(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: QTreeWidget, callback: *const fn (QTreeWidget) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Parent(self: QTreeWidget) QObject {
        return .{ .ptr = qtc.QObject_Parent(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: QTreeWidget, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self.ptr), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn DeleteLater(self: QTreeWidget) void {
        qtc.QObject_DeleteLater(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: QTreeWidget, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self.ptr), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: QTreeWidget, time: i64, timerType: i32) i32 {
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
    /// ` self: QTreeWidget `
    ///
    /// ` sender: QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: QTreeWidget, sender: anytype, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QMetaObject__Connection {
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: QTreeWidget, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    pub fn Disconnect22(self: QTreeWidget, signal: [:0]const u8, receiver: anytype) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: QTreeWidget, signal: [:0]const u8, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` receiver: QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: QTreeWidget, receiver: anytype, member: [:0]const u8) bool {
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QObject `
    ///
    pub fn Destroyed1(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QObject;
        qtc.QObject_Destroyed1(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: QTreeWidget, callback: *const fn (QTreeWidget, QObject) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#paintingActive)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn PaintingActive(self: QTreeWidget) bool {
        return qtc.QPaintDevice_PaintingActive(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#widthMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn WidthMM(self: QTreeWidget) i32 {
        return qtc.QPaintDevice_WidthMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#heightMM)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn HeightMM(self: QTreeWidget) i32 {
        return qtc.QPaintDevice_HeightMM(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn LogicalDpiX(self: QTreeWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#logicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn LogicalDpiY(self: QTreeWidget) i32 {
        return qtc.QPaintDevice_LogicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiX)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn PhysicalDpiX(self: QTreeWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiX(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#physicalDpiY)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn PhysicalDpiY(self: QTreeWidget) i32 {
        return qtc.QPaintDevice_PhysicalDpiY(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatio)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn DevicePixelRatio(self: QTreeWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatio(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#devicePixelRatioF)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn DevicePixelRatioF(self: QTreeWidget) f64 {
        return qtc.QPaintDevice_DevicePixelRatioF(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#colorCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ColorCount(self: QTreeWidget) i32 {
        return qtc.QPaintDevice_ColorCount(@ptrCast(self.ptr));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#depth)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Depth(self: QTreeWidget) i32 {
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

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SetRootIndex(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_SetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetRootIndex` instead
    ///
    pub const QBaseSetRootIndex = SuperSetRootIndex;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperSetRootIndex(self: QTreeWidget, index: anytype) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_SuperSetRootIndex(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setRootIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnSetRootIndex(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetRootIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` search: []const u8 `
    ///
    pub fn KeyboardSearch(self: QTreeWidget, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QTreeWidget_KeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// ### DEPRECATED: Use `SuperKeyboardSearch` instead
    ///
    pub const QBaseKeyboardSearch = SuperKeyboardSearch;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` search: []const u8 `
    ///
    pub fn SuperKeyboardSearch(self: QTreeWidget, search: []const u8) void {
        const search_str = qtc.libqt_string{
            .len = search.len,
            .data = search.ptr,
        };
        qtc.QTreeWidget_SuperKeyboardSearch(@ptrCast(self.ptr), search_str);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#keyboardSearch)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, search: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnKeyboardSearch(self: QTreeWidget, callback: *const fn (QTreeWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QTreeWidget_OnKeyboardSearch(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn VisualRect(self: QTreeWidget, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeWidget_VisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperVisualRect` instead
    ///
    pub const QBaseVisualRect = SuperVisualRect;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperVisualRect(self: QTreeWidget, index: anytype) QRect {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeWidget_SuperVisualRect(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#visualRect)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) QRect `
    ///
    pub fn OnVisualRect(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) QRect) void {
        qtc.QTreeWidget_OnVisualRect(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn ScrollTo(self: QTreeWidget, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_ScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `SuperScrollTo` instead
    ///
    pub const QBaseScrollTo = SuperScrollTo;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` hint: qabstractitemview_enums.ScrollHint `
    ///
    pub fn SuperScrollTo(self: QTreeWidget, index: anytype, hint: i32) void {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_SuperScrollTo(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(hint));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#scrollTo)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex, hint: qabstractitemview_enums.ScrollHint) callconv(.c) void `
    ///
    pub fn OnScrollTo(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnScrollTo(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn IndexAt(self: QTreeWidget, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTreeWidget_IndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperIndexAt` instead
    ///
    pub const QBaseIndexAt = SuperIndexAt;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` p: QPoint `
    ///
    pub fn SuperIndexAt(self: QTreeWidget, p: anytype) QModelIndex {
        comptime _ = @TypeOf(p)._is_QPoint;
        return .{ .ptr = qtc.QTreeWidget_SuperIndexAt(@ptrCast(self.ptr), @ptrCast(p.ptr)) };
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexAt)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, p: QPoint) callconv(.c) QModelIndex `
    ///
    pub fn OnIndexAt(self: QTreeWidget, callback: *const fn (QTreeWidget, QPoint) callconv(.c) QModelIndex) void {
        qtc.QTreeWidget_OnIndexAt(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn DoItemsLayout(self: QTreeWidget) void {
        qtc.QTreeWidget_DoItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoItemsLayout` instead
    ///
    pub const QBaseDoItemsLayout = SuperDoItemsLayout;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperDoItemsLayout(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperDoItemsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#doItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoItemsLayout(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnDoItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#reset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Reset(self: QTreeWidget) void {
        qtc.QTreeWidget_Reset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReset` instead
    ///
    pub const QBaseReset = SuperReset;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#reset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperReset(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperReset(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#reset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReset(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnReset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn DataChanged(self: QTreeWidget, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QTreeWidget_DataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// ### DEPRECATED: Use `SuperDataChanged` instead
    ///
    pub const QBaseDataChanged = SuperDataChanged;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` topLeft: QModelIndex `
    ///
    /// ` bottomRight: QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn SuperDataChanged(self: QTreeWidget, topLeft: anytype, bottomRight: anytype, roles: []i32) void {
        comptime _ = @TypeOf(topLeft)._is_QModelIndex;
        comptime _ = @TypeOf(bottomRight)._is_QModelIndex;
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QTreeWidget_SuperDataChanged(@ptrCast(self.ptr), @ptrCast(topLeft.ptr), @ptrCast(bottomRight.ptr), roles_list);
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dataChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, topLeft: QModelIndex, bottomRight: QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, QModelIndex, qtc.libqt_list) callconv(.c) void) void {
        qtc.QTreeWidget_OnDataChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SelectAll(self: QTreeWidget) void {
        qtc.QTreeWidget_SelectAll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperSelectAll` instead
    ///
    pub const QBaseSelectAll = SuperSelectAll;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperSelectAll(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperSelectAll(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectAll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnSelectAll(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnSelectAll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn VerticalScrollbarValueChanged(self: QTreeWidget, value: i32) void {
        qtc.QTreeWidget_VerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `SuperVerticalScrollbarValueChanged` instead
    ///
    pub const QBaseVerticalScrollbarValueChanged = SuperVerticalScrollbarValueChanged;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn SuperVerticalScrollbarValueChanged(self: QTreeWidget, value: i32) void {
        qtc.QTreeWidget_SuperVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#verticalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, value: i32) callconv(.c) void `
    ///
    pub fn OnVerticalScrollbarValueChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnVerticalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollContentsBy(self: QTreeWidget, dx: i32, dy: i32) void {
        qtc.QTreeWidget_ScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `SuperScrollContentsBy` instead
    ///
    pub const QBaseScrollContentsBy = SuperScrollContentsBy;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollContentsBy(self: QTreeWidget, dx: i32, dy: i32) void {
        qtc.QTreeWidget_SuperScrollContentsBy(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#scrollContentsBy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollContentsBy(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnScrollContentsBy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn RowsInserted(self: QTreeWidget, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QTreeWidget_RowsInserted(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `SuperRowsInserted` instead
    ///
    pub const QBaseRowsInserted = SuperRowsInserted;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRowsInserted(self: QTreeWidget, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QTreeWidget_SuperRowsInserted(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsInserted)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, parent: QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn OnRowsInserted(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnRowsInserted(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn RowsAboutToBeRemoved(self: QTreeWidget, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QTreeWidget_RowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// ### DEPRECATED: Use `SuperRowsAboutToBeRemoved` instead
    ///
    pub const QBaseRowsAboutToBeRemoved = SuperRowsAboutToBeRemoved;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` start: i32 `
    ///
    /// ` end: i32 `
    ///
    pub fn SuperRowsAboutToBeRemoved(self: QTreeWidget, parent: anytype, start: i32, end: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QTreeWidget_SuperRowsAboutToBeRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(start), @bitCast(end));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, parent: QModelIndex, start: i32, end: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeRemoved(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnRowsAboutToBeRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` cursorAction: qabstractitemview_enums.CursorAction `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn MoveCursor(self: QTreeWidget, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.QTreeWidget_MoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// ### DEPRECATED: Use `SuperMoveCursor` instead
    ///
    pub const QBaseMoveCursor = SuperMoveCursor;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` cursorAction: qabstractitemview_enums.CursorAction `
    ///
    /// ` modifiers: flag of qnamespace_enums.KeyboardModifier `
    ///
    pub fn SuperMoveCursor(self: QTreeWidget, cursorAction: i32, modifiers: i32) QModelIndex {
        return .{ .ptr = qtc.QTreeWidget_SuperMoveCursor(@ptrCast(self.ptr), @bitCast(cursorAction), @bitCast(modifiers)) };
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#moveCursor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, cursorAction: qabstractitemview_enums.CursorAction, modifiers: flag of qnamespace_enums.KeyboardModifier) callconv(.c) QModelIndex `
    ///
    pub fn OnMoveCursor(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32) callconv(.c) QModelIndex) void {
        qtc.QTreeWidget_OnMoveCursor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn HorizontalOffset(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_HorizontalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperHorizontalOffset` instead
    ///
    pub const QBaseHorizontalOffset = SuperHorizontalOffset;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperHorizontalOffset(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperHorizontalOffset(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#horizontalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnHorizontalOffset(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnHorizontalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn VerticalOffset(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_VerticalOffset(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperVerticalOffset` instead
    ///
    pub const QBaseVerticalOffset = SuperVerticalOffset;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperVerticalOffset(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperVerticalOffset(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#verticalOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnVerticalOffset(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnVerticalOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` rect: QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SetSelection(self: QTreeWidget, rect: anytype, command: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QTreeWidget_SetSelection(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(command));
    }

    /// ### DEPRECATED: Use `SuperSetSelection` instead
    ///
    pub const QBaseSetSelection = SuperSetSelection;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` rect: QRect `
    ///
    /// ` command: flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSetSelection(self: QTreeWidget, rect: anytype, command: i32) void {
        comptime _ = @TypeOf(rect)._is_QRect;
        qtc.QTreeWidget_SuperSetSelection(@ptrCast(self.ptr), @ptrCast(rect.ptr), @bitCast(command));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#setSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, rect: QRect, command: flag of qitemselectionmodel_enums.SelectionFlag) callconv(.c) void `
    ///
    pub fn OnSetSelection(self: QTreeWidget, callback: *const fn (QTreeWidget, QRect, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn VisualRegionForSelection(self: QTreeWidget, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QTreeWidget_VisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperVisualRegionForSelection` instead
    ///
    pub const QBaseVisualRegionForSelection = SuperVisualRegionForSelection;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` selection: QItemSelection `
    ///
    pub fn SuperVisualRegionForSelection(self: QTreeWidget, selection: anytype) QRegion {
        comptime _ = @TypeOf(selection)._is_QItemSelection;
        return .{ .ptr = qtc.QTreeWidget_SuperVisualRegionForSelection(@ptrCast(self.ptr), @ptrCast(selection.ptr)) };
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#visualRegionForSelection)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, selection: QItemSelection) callconv(.c) QRegion `
    ///
    pub fn OnVisualRegionForSelection(self: QTreeWidget, callback: *const fn (QTreeWidget, QItemSelection) callconv(.c) QRegion) void {
        qtc.QTreeWidget_OnVisualRegionForSelection(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SelectedIndexes(self: QTreeWidget, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QTreeWidget_SelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qtreewidget.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperSelectedIndexes` instead
    ///
    pub const QBaseSelectedIndexes = SuperSelectedIndexes;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSelectedIndexes(self: QTreeWidget, allocator: std.mem.Allocator) []QModelIndex {
        const _arr: qtc.libqt_list = qtc.QTreeWidget_SuperSelectedIndexes(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QModelIndex, _arr.len) catch @panic("qtreewidget.SelectedIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectedIndexes)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator` or `std.c.malloc`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QModelIndex `
    ///
    pub fn OnSelectedIndexes(self: QTreeWidget, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.QTreeWidget_OnSelectedIndexes(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn ChangeEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTreeWidget_ChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperChangeEvent` instead
    ///
    pub const QBaseChangeEvent = SuperChangeEvent;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperChangeEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTreeWidget_SuperChangeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#changeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn OnChangeEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnChangeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn TimerEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTreeWidget_TimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTimerEvent;
        qtc.QTreeWidget_SuperTimerEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QTimerEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnTimerEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn PaintEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QTreeWidget_PaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperPaintEvent` instead
    ///
    pub const QBasePaintEvent = SuperPaintEvent;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QPaintEvent `
    ///
    pub fn SuperPaintEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QPaintEvent;
        qtc.QTreeWidget_SuperPaintEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#paintEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QPaintEvent) callconv(.c) void `
    ///
    pub fn OnPaintEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QPaintEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnPaintEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` options: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn DrawRow(self: QTreeWidget, painter: anytype, options: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(options)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_DrawRow(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(options.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawRow` instead
    ///
    pub const QBaseDrawRow = SuperDrawRow;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` options: QStyleOptionViewItem `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperDrawRow(self: QTreeWidget, painter: anytype, options: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(options)._is_QStyleOptionViewItem;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_SuperDrawRow(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(options.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, painter: QPainter, options: QStyleOptionViewItem, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDrawRow(self: QTreeWidget, callback: *const fn (QTreeWidget, QPainter, QStyleOptionViewItem, QModelIndex) callconv(.c) void) void {
        qtc.QTreeWidget_OnDrawRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn DrawBranches(self: QTreeWidget, painter: anytype, rect: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_DrawBranches(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawBranches` instead
    ///
    pub const QBaseDrawBranches = SuperDrawBranches;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` rect: QRect `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperDrawBranches(self: QTreeWidget, painter: anytype, rect: anytype, index: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(rect)._is_QRect;
        comptime _ = @TypeOf(index)._is_QModelIndex;
        qtc.QTreeWidget_SuperDrawBranches(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(rect.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawBranches)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, painter: QPainter, rect: QRect, index: QModelIndex) callconv(.c) void `
    ///
    pub fn OnDrawBranches(self: QTreeWidget, callback: *const fn (QTreeWidget, QPainter, QRect, QModelIndex) callconv(.c) void) void {
        qtc.QTreeWidget_OnDrawBranches(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MousePressEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTreeWidget_MousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMousePressEvent` instead
    ///
    pub const QBaseMousePressEvent = SuperMousePressEvent;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMousePressEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTreeWidget_SuperMousePressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mousePressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMousePressEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnMousePressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseReleaseEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTreeWidget_MouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseReleaseEvent` instead
    ///
    pub const QBaseMouseReleaseEvent = SuperMouseReleaseEvent;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseReleaseEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTreeWidget_SuperMouseReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseReleaseEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnMouseReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseDoubleClickEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTreeWidget_MouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseDoubleClickEvent` instead
    ///
    pub const QBaseMouseDoubleClickEvent = SuperMouseDoubleClickEvent;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseDoubleClickEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTreeWidget_SuperMouseDoubleClickEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseDoubleClickEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseDoubleClickEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnMouseDoubleClickEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn MouseMoveEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTreeWidget_MouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperMouseMoveEvent` instead
    ///
    pub const QBaseMouseMoveEvent = SuperMouseMoveEvent;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QMouseEvent `
    ///
    pub fn SuperMouseMoveEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMouseEvent;
        qtc.QTreeWidget_SuperMouseMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#mouseMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QMouseEvent) callconv(.c) void `
    ///
    pub fn OnMouseMoveEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QMouseEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnMouseMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyPressEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTreeWidget_KeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperKeyPressEvent` instead
    ///
    pub const QBaseKeyPressEvent = SuperKeyPressEvent;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyPressEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTreeWidget_SuperKeyPressEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#keyPressEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyPressEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnKeyPressEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn DragMoveEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QTreeWidget_DragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragMoveEvent` instead
    ///
    pub const QBaseDragMoveEvent = SuperDragMoveEvent;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QDragMoveEvent `
    ///
    pub fn SuperDragMoveEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragMoveEvent;
        qtc.QTreeWidget_SuperDragMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#dragMoveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QDragMoveEvent) callconv(.c) void `
    ///
    pub fn OnDragMoveEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QDragMoveEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnDragMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn ViewportEvent(self: QTreeWidget, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTreeWidget_ViewportEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperViewportEvent` instead
    ///
    pub const QBaseViewportEvent = SuperViewportEvent;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperViewportEvent(self: QTreeWidget, event: anytype) bool {
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTreeWidget_SuperViewportEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#viewportEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnViewportEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QEvent) callconv(.c) bool) void {
        qtc.QTreeWidget_OnViewportEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn UpdateGeometries(self: QTreeWidget) void {
        qtc.QTreeWidget_UpdateGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateGeometries` instead
    ///
    pub const QBaseUpdateGeometries = SuperUpdateGeometries;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperUpdateGeometries(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperUpdateGeometries(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#updateGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateGeometries(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnUpdateGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ViewportSizeHint(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QTreeWidget_ViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperViewportSizeHint` instead
    ///
    pub const QBaseViewportSizeHint = SuperViewportSizeHint;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperViewportSizeHint(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QTreeWidget_SuperViewportSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#viewportSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnViewportSizeHint(self: QTreeWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTreeWidget_OnViewportSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn SizeHintForColumn(self: QTreeWidget, column: i32) i32 {
        return qtc.QTreeWidget_SizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// ### DEPRECATED: Use `SuperSizeHintForColumn` instead
    ///
    pub const QBaseSizeHintForColumn = SuperSizeHintForColumn;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperSizeHintForColumn(self: QTreeWidget, column: i32) i32 {
        return qtc.QTreeWidget_SuperSizeHintForColumn(@ptrCast(self.ptr), @bitCast(column));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#sizeHintForColumn)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, column: i32) callconv(.c) i32 `
    ///
    pub fn OnSizeHintForColumn(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) i32) void {
        qtc.QTreeWidget_OnSizeHintForColumn(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn HorizontalScrollbarAction(self: QTreeWidget, action: i32) void {
        qtc.QTreeWidget_HorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `SuperHorizontalScrollbarAction` instead
    ///
    pub const QBaseHorizontalScrollbarAction = SuperHorizontalScrollbarAction;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn SuperHorizontalScrollbarAction(self: QTreeWidget, action: i32) void {
        qtc.QTreeWidget_SuperHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#horizontalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, action: i32) callconv(.c) void `
    ///
    pub fn OnHorizontalScrollbarAction(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnHorizontalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IsIndexHidden(self: QTreeWidget, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeWidget_IsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperIsIndexHidden` instead
    ///
    pub const QBaseIsIndexHidden = SuperIsIndexHidden;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperIsIndexHidden(self: QTreeWidget, index: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeWidget_SuperIsIndexHidden(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#isIndexHidden)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) bool `
    ///
    pub fn OnIsIndexHidden(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) bool) void {
        qtc.QTreeWidget_OnIsIndexHidden(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn SelectionChanged(self: QTreeWidget, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QTreeWidget_SelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// ### DEPRECATED: Use `SuperSelectionChanged` instead
    ///
    pub const QBaseSelectionChanged = SuperSelectionChanged;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` selected: QItemSelection `
    ///
    /// ` deselected: QItemSelection `
    ///
    pub fn SuperSelectionChanged(self: QTreeWidget, selected: anytype, deselected: anytype) void {
        comptime _ = @TypeOf(selected)._is_QItemSelection;
        comptime _ = @TypeOf(deselected)._is_QItemSelection;
        qtc.QTreeWidget_SuperSelectionChanged(@ptrCast(self.ptr), @ptrCast(selected.ptr), @ptrCast(deselected.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#selectionChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, selected: QItemSelection, deselected: QItemSelection) callconv(.c) void `
    ///
    pub fn OnSelectionChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QItemSelection, QItemSelection) callconv(.c) void) void {
        qtc.QTreeWidget_OnSelectionChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn CurrentChanged(self: QTreeWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QTreeWidget_CurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// ### DEPRECATED: Use `SuperCurrentChanged` instead
    ///
    pub const QBaseCurrentChanged = SuperCurrentChanged;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` current: QModelIndex `
    ///
    /// ` previous: QModelIndex `
    ///
    pub fn SuperCurrentChanged(self: QTreeWidget, current: anytype, previous: anytype) void {
        comptime _ = @TypeOf(current)._is_QModelIndex;
        comptime _ = @TypeOf(previous)._is_QModelIndex;
        qtc.QTreeWidget_SuperCurrentChanged(@ptrCast(self.ptr), @ptrCast(current.ptr), @ptrCast(previous.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#currentChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, current: QModelIndex, previous: QModelIndex) callconv(.c) void `
    ///
    pub fn OnCurrentChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, QModelIndex) callconv(.c) void) void {
        qtc.QTreeWidget_OnCurrentChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn SizeHintForRow(self: QTreeWidget, row: i32) i32 {
        return qtc.QTreeWidget_SizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// ### DEPRECATED: Use `SuperSizeHintForRow` instead
    ///
    pub const QBaseSizeHintForRow = SuperSizeHintForRow;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` row: i32 `
    ///
    pub fn SuperSizeHintForRow(self: QTreeWidget, row: i32) i32 {
        return qtc.QTreeWidget_SuperSizeHintForRow(@ptrCast(self.ptr), @bitCast(row));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#sizeHintForRow)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, row: i32) callconv(.c) i32 `
    ///
    pub fn OnSizeHintForRow(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) i32) void {
        qtc.QTreeWidget_OnSizeHintForRow(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn ItemDelegateForIndex(self: QTreeWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeWidget_ItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperItemDelegateForIndex` instead
    ///
    pub const QBaseItemDelegateForIndex = SuperItemDelegateForIndex;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperItemDelegateForIndex(self: QTreeWidget, index: anytype) QAbstractItemDelegate {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return .{ .ptr = qtc.QTreeWidget_SuperItemDelegateForIndex(@ptrCast(self.ptr), @ptrCast(index.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#itemDelegateForIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) QAbstractItemDelegate `
    ///
    pub fn OnItemDelegateForIndex(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) QAbstractItemDelegate) void {
        qtc.QTreeWidget_OnItemDelegateForIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn InputMethodQuery(self: QTreeWidget, query: i32) QVariant {
        return .{ .ptr = qtc.QTreeWidget_InputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// ### DEPRECATED: Use `SuperInputMethodQuery` instead
    ///
    pub const QBaseInputMethodQuery = SuperInputMethodQuery;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` query: qnamespace_enums.InputMethodQuery `
    ///
    pub fn SuperInputMethodQuery(self: QTreeWidget, query: i32) QVariant {
        return .{ .ptr = qtc.QTreeWidget_SuperInputMethodQuery(@ptrCast(self.ptr), @bitCast(query)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodQuery)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, query: qnamespace_enums.InputMethodQuery) callconv(.c) QVariant `
    ///
    pub fn OnInputMethodQuery(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) QVariant) void {
        qtc.QTreeWidget_OnInputMethodQuery(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn UpdateEditorData(self: QTreeWidget) void {
        qtc.QTreeWidget_UpdateEditorData(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateEditorData` instead
    ///
    pub const QBaseUpdateEditorData = SuperUpdateEditorData;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperUpdateEditorData(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperUpdateEditorData(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateEditorData(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnUpdateEditorData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn UpdateEditorGeometries(self: QTreeWidget) void {
        qtc.QTreeWidget_UpdateEditorGeometries(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperUpdateEditorGeometries` instead
    ///
    pub const QBaseUpdateEditorGeometries = SuperUpdateEditorGeometries;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperUpdateEditorGeometries(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperUpdateEditorGeometries(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#updateEditorGeometries)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateEditorGeometries(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnUpdateEditorGeometries(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn VerticalScrollbarAction(self: QTreeWidget, action: i32) void {
        qtc.QTreeWidget_VerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// ### DEPRECATED: Use `SuperVerticalScrollbarAction` instead
    ///
    pub const QBaseVerticalScrollbarAction = SuperVerticalScrollbarAction;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` action: i32 `
    ///
    pub fn SuperVerticalScrollbarAction(self: QTreeWidget, action: i32) void {
        qtc.QTreeWidget_SuperVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(action));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#verticalScrollbarAction)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, action: i32) callconv(.c) void `
    ///
    pub fn OnVerticalScrollbarAction(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnVerticalScrollbarAction(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn HorizontalScrollbarValueChanged(self: QTreeWidget, value: i32) void {
        qtc.QTreeWidget_HorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// ### DEPRECATED: Use `SuperHorizontalScrollbarValueChanged` instead
    ///
    pub const QBaseHorizontalScrollbarValueChanged = SuperHorizontalScrollbarValueChanged;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` value: i32 `
    ///
    pub fn SuperHorizontalScrollbarValueChanged(self: QTreeWidget, value: i32) void {
        qtc.QTreeWidget_SuperHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(value));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#horizontalScrollbarValueChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, value: i32) callconv(.c) void `
    ///
    pub fn OnHorizontalScrollbarValueChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnHorizontalScrollbarValueChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn CloseEditor(self: QTreeWidget, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTreeWidget_CloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// ### DEPRECATED: Use `SuperCloseEditor` instead
    ///
    pub const QBaseCloseEditor = SuperCloseEditor;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` editor: QWidget `
    ///
    /// ` hint: qabstractitemdelegate_enums.EndEditHint `
    ///
    pub fn SuperCloseEditor(self: QTreeWidget, editor: anytype, hint: i32) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTreeWidget_SuperCloseEditor(@ptrCast(self.ptr), @ptrCast(editor.ptr), @bitCast(hint));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#closeEditor)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, editor: QWidget, hint: qabstractitemdelegate_enums.EndEditHint) callconv(.c) void `
    ///
    pub fn OnCloseEditor(self: QTreeWidget, callback: *const fn (QTreeWidget, QWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnCloseEditor(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` editor: QWidget `
    ///
    pub fn CommitData(self: QTreeWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTreeWidget_CommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `SuperCommitData` instead
    ///
    pub const QBaseCommitData = SuperCommitData;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` editor: QWidget `
    ///
    pub fn SuperCommitData(self: QTreeWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QWidget;
        qtc.QTreeWidget_SuperCommitData(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#commitData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, editor: QWidget) callconv(.c) void `
    ///
    pub fn OnCommitData(self: QTreeWidget, callback: *const fn (QTreeWidget, QWidget) callconv(.c) void) void {
        qtc.QTreeWidget_OnCommitData(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` editor: QObject `
    ///
    pub fn EditorDestroyed(self: QTreeWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QTreeWidget_EditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// ### DEPRECATED: Use `SuperEditorDestroyed` instead
    ///
    pub const QBaseEditorDestroyed = SuperEditorDestroyed;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` editor: QObject `
    ///
    pub fn SuperEditorDestroyed(self: QTreeWidget, editor: anytype) void {
        comptime _ = @TypeOf(editor)._is_QObject;
        qtc.QTreeWidget_SuperEditorDestroyed(@ptrCast(self.ptr), @ptrCast(editor.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#editorDestroyed)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, editor: QObject) callconv(.c) void `
    ///
    pub fn OnEditorDestroyed(self: QTreeWidget, callback: *const fn (QTreeWidget, QObject) callconv(.c) void) void {
        qtc.QTreeWidget_OnEditorDestroyed(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` event: QEvent `
    ///
    pub fn Edit2(self: QTreeWidget, index: anytype, trigger: i32, event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTreeWidget_Edit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEdit2` instead
    ///
    pub const QBaseEdit2 = SuperEdit2;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` trigger: qabstractitemview_enums.EditTrigger `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEdit2(self: QTreeWidget, index: anytype, trigger: i32, event: anytype) bool {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTreeWidget_SuperEdit2(@ptrCast(self.ptr), @ptrCast(index.ptr), @bitCast(trigger), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#edit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex, trigger: qabstractitemview_enums.EditTrigger, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEdit2(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, i32, QEvent) callconv(.c) bool) void {
        qtc.QTreeWidget_OnEdit2(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SelectionCommand(self: QTreeWidget, index: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTreeWidget_SelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperSelectionCommand` instead
    ///
    pub const QBaseSelectionCommand = SuperSelectionCommand;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    /// ` event: QEvent `
    ///
    /// ## Returns:
    ///
    /// ` flag of qitemselectionmodel_enums.SelectionFlag `
    ///
    pub fn SuperSelectionCommand(self: QTreeWidget, index: anytype, event: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTreeWidget_SuperSelectionCommand(@ptrCast(self.ptr), @ptrCast(index.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#selectionCommand)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex, event: QEvent) callconv(.c) i32 `
    ///
    pub fn OnSelectionCommand(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, QEvent) callconv(.c) i32) void {
        qtc.QTreeWidget_OnSelectionCommand(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn StartDrag(self: QTreeWidget, supportedActions: i32) void {
        qtc.QTreeWidget_StartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// ### DEPRECATED: Use `SuperStartDrag` instead
    ///
    pub const QBaseStartDrag = SuperStartDrag;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` supportedActions: flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperStartDrag(self: QTreeWidget, supportedActions: i32) void {
        qtc.QTreeWidget_SuperStartDrag(@ptrCast(self.ptr), @bitCast(supportedActions));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startDrag)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, supportedActions: flag of qnamespace_enums.DropAction) callconv(.c) void `
    ///
    pub fn OnStartDrag(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnStartDrag(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn InitViewItemOption(self: QTreeWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QTreeWidget_InitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// ### DEPRECATED: Use `SuperInitViewItemOption` instead
    ///
    pub const QBaseInitViewItemOption = SuperInitViewItemOption;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` option: QStyleOptionViewItem `
    ///
    pub fn SuperInitViewItemOption(self: QTreeWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionViewItem;
        qtc.QTreeWidget_SuperInitViewItemOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#initViewItemOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, option: QStyleOptionViewItem) callconv(.c) void `
    ///
    pub fn OnInitViewItemOption(self: QTreeWidget, callback: *const fn (QTreeWidget, QStyleOptionViewItem) callconv(.c) void) void {
        qtc.QTreeWidget_OnInitViewItemOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` next: bool `
    ///
    pub fn FocusNextPrevChild(self: QTreeWidget, next: bool) bool {
        return qtc.QTreeWidget_FocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// ### DEPRECATED: Use `SuperFocusNextPrevChild` instead
    ///
    pub const QBaseFocusNextPrevChild = SuperFocusNextPrevChild;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` next: bool `
    ///
    pub fn SuperFocusNextPrevChild(self: QTreeWidget, next: bool) bool {
        return qtc.QTreeWidget_SuperFocusNextPrevChild(@ptrCast(self.ptr), next);
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusNextPrevChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, next: bool) callconv(.c) bool `
    ///
    pub fn OnFocusNextPrevChild(self: QTreeWidget, callback: *const fn (QTreeWidget, bool) callconv(.c) bool) void {
        qtc.QTreeWidget_OnFocusNextPrevChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn DragEnterEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QTreeWidget_DragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragEnterEvent` instead
    ///
    pub const QBaseDragEnterEvent = SuperDragEnterEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QDragEnterEvent `
    ///
    pub fn SuperDragEnterEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragEnterEvent;
        qtc.QTreeWidget_SuperDragEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragEnterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QDragEnterEvent) callconv(.c) void `
    ///
    pub fn OnDragEnterEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QDragEnterEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnDragEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn DragLeaveEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QTreeWidget_DragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperDragLeaveEvent` instead
    ///
    pub const QBaseDragLeaveEvent = SuperDragLeaveEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QDragLeaveEvent `
    ///
    pub fn SuperDragLeaveEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QDragLeaveEvent;
        qtc.QTreeWidget_SuperDragLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dragLeaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QDragLeaveEvent) callconv(.c) void `
    ///
    pub fn OnDragLeaveEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QDragLeaveEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnDragLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusInEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTreeWidget_FocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusInEvent` instead
    ///
    pub const QBaseFocusInEvent = SuperFocusInEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusInEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTreeWidget_SuperFocusInEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusInEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusInEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnFocusInEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn FocusOutEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTreeWidget_FocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperFocusOutEvent` instead
    ///
    pub const QBaseFocusOutEvent = SuperFocusOutEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QFocusEvent `
    ///
    pub fn SuperFocusOutEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QFocusEvent;
        qtc.QTreeWidget_SuperFocusOutEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#focusOutEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QFocusEvent) callconv(.c) void `
    ///
    pub fn OnFocusOutEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QFocusEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnFocusOutEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn ResizeEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QTreeWidget_ResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperResizeEvent` instead
    ///
    pub const QBaseResizeEvent = SuperResizeEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QResizeEvent `
    ///
    pub fn SuperResizeEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QResizeEvent;
        qtc.QTreeWidget_SuperResizeEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#resizeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QResizeEvent) callconv(.c) void `
    ///
    pub fn OnResizeEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QResizeEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnResizeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn InputMethodEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QTreeWidget_InputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperInputMethodEvent` instead
    ///
    pub const QBaseInputMethodEvent = SuperInputMethodEvent;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QInputMethodEvent `
    ///
    pub fn SuperInputMethodEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QInputMethodEvent;
        qtc.QTreeWidget_SuperInputMethodEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#inputMethodEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QInputMethodEvent) callconv(.c) void `
    ///
    pub fn OnInputMethodEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QInputMethodEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnInputMethodEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn EventFilter(self: QTreeWidget, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTreeWidget_EventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` object: QObject `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperEventFilter(self: QTreeWidget, object: anytype, event: anytype) bool {
        comptime _ = @TypeOf(object)._is_QObject;
        comptime _ = @TypeOf(event)._is_QEvent;
        return qtc.QTreeWidget_SuperEventFilter(@ptrCast(self.ptr), @ptrCast(object.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, object: QObject, event: QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: QTreeWidget, callback: *const fn (QTreeWidget, QObject, QEvent) callconv(.c) bool) void {
        qtc.QTreeWidget_OnEventFilter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn MinimumSizeHint(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QTreeWidget_MinimumSizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperMinimumSizeHint(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QTreeWidget_SuperMinimumSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#minimumSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnMinimumSizeHint(self: QTreeWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTreeWidget_OnMinimumSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SizeHint(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QTreeWidget_SizeHint(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperSizeHint(self: QTreeWidget) QSize {
        return .{ .ptr = qtc.QTreeWidget_SuperSizeHint(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#sizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QSize `
    ///
    pub fn OnSizeHint(self: QTreeWidget, callback: *const fn () callconv(.c) QSize) void {
        qtc.QTreeWidget_OnSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SetupViewport(self: QTreeWidget, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.QTreeWidget_SetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` viewport: QWidget `
    ///
    pub fn SuperSetupViewport(self: QTreeWidget, viewport: anytype) void {
        comptime _ = @TypeOf(viewport)._is_QWidget;
        qtc.QTreeWidget_SuperSetupViewport(@ptrCast(self.ptr), @ptrCast(viewport.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setupViewport)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, viewport: QWidget) callconv(.c) void `
    ///
    pub fn OnSetupViewport(self: QTreeWidget, callback: *const fn (QTreeWidget, QWidget) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetupViewport(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn WheelEvent(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QTreeWidget_WheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperWheelEvent` instead
    ///
    pub const QBaseWheelEvent = SuperWheelEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QWheelEvent `
    ///
    pub fn SuperWheelEvent(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QWheelEvent;
        qtc.QTreeWidget_SuperWheelEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#wheelEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: QWheelEvent) callconv(.c) void `
    ///
    pub fn OnWheelEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QWheelEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnWheelEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn ContextMenuEvent(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QTreeWidget_ContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `SuperContextMenuEvent` instead
    ///
    pub const QBaseContextMenuEvent = SuperContextMenuEvent;

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QContextMenuEvent `
    ///
    pub fn SuperContextMenuEvent(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QContextMenuEvent;
        qtc.QTreeWidget_SuperContextMenuEvent(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#contextMenuEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: QContextMenuEvent) callconv(.c) void `
    ///
    pub fn OnContextMenuEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QContextMenuEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnContextMenuEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn InitStyleOption(self: QTreeWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QTreeWidget_InitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` option: QStyleOptionFrame `
    ///
    pub fn SuperInitStyleOption(self: QTreeWidget, option: anytype) void {
        comptime _ = @TypeOf(option)._is_QStyleOptionFrame;
        qtc.QTreeWidget_SuperInitStyleOption(@ptrCast(self.ptr), @ptrCast(option.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#initStyleOption)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, option: QStyleOptionFrame) callconv(.c) void `
    ///
    pub fn OnInitStyleOption(self: QTreeWidget, callback: *const fn (QTreeWidget, QStyleOptionFrame) callconv(.c) void) void {
        qtc.QTreeWidget_OnInitStyleOption(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn DevType(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_DevType(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperDevType(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperDevType(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#devType)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDevType(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnDevType(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn SetVisible(self: QTreeWidget, visible: bool) void {
        qtc.QTreeWidget_SetVisible(@ptrCast(self.ptr), visible);
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
    /// ` self: QTreeWidget `
    ///
    /// ` visible: bool `
    ///
    pub fn SuperSetVisible(self: QTreeWidget, visible: bool) void {
        qtc.QTreeWidget_SuperSetVisible(@ptrCast(self.ptr), visible);
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#setVisible)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, visible: bool) callconv(.c) void `
    ///
    pub fn OnSetVisible(self: QTreeWidget, callback: *const fn (QTreeWidget, bool) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetVisible(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn HeightForWidth(self: QTreeWidget, param1: i32) i32 {
        return qtc.QTreeWidget_HeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: i32 `
    ///
    pub fn SuperHeightForWidth(self: QTreeWidget, param1: i32) i32 {
        return qtc.QTreeWidget_SuperHeightForWidth(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#heightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: i32) callconv(.c) i32 `
    ///
    pub fn OnHeightForWidth(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) i32) void {
        qtc.QTreeWidget_OnHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn HasHeightForWidth(self: QTreeWidget) bool {
        return qtc.QTreeWidget_HasHeightForWidth(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperHasHeightForWidth(self: QTreeWidget) bool {
        return qtc.QTreeWidget_SuperHasHeightForWidth(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hasHeightForWidth)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnHasHeightForWidth(self: QTreeWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTreeWidget_OnHasHeightForWidth(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn PaintEngine(self: QTreeWidget) QPaintEngine {
        return .{ .ptr = qtc.QTreeWidget_PaintEngine(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperPaintEngine(self: QTreeWidget) QPaintEngine {
        return .{ .ptr = qtc.QTreeWidget_SuperPaintEngine(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#paintEngine)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPaintEngine `
    ///
    pub fn OnPaintEngine(self: QTreeWidget, callback: *const fn () callconv(.c) QPaintEngine) void {
        qtc.QTreeWidget_OnPaintEngine(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn KeyReleaseEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTreeWidget_KeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` event: QKeyEvent `
    ///
    pub fn SuperKeyReleaseEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QKeyEvent;
        qtc.QTreeWidget_SuperKeyReleaseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#keyReleaseEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QKeyEvent) callconv(.c) void `
    ///
    pub fn OnKeyReleaseEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QKeyEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnKeyReleaseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn EnterEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QTreeWidget_EnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` event: QEnterEvent `
    ///
    pub fn SuperEnterEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEnterEvent;
        qtc.QTreeWidget_SuperEnterEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#enterEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QEnterEvent) callconv(.c) void `
    ///
    pub fn OnEnterEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QEnterEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnEnterEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn LeaveEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTreeWidget_LeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperLeaveEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTreeWidget_SuperLeaveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#leaveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn OnLeaveEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnLeaveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn MoveEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QTreeWidget_MoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` event: QMoveEvent `
    ///
    pub fn SuperMoveEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QMoveEvent;
        qtc.QTreeWidget_SuperMoveEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#moveEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QMoveEvent) callconv(.c) void `
    ///
    pub fn OnMoveEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QMoveEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnMoveEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn CloseEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QTreeWidget_CloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` event: QCloseEvent `
    ///
    pub fn SuperCloseEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QCloseEvent;
        qtc.QTreeWidget_SuperCloseEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#closeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QCloseEvent) callconv(.c) void `
    ///
    pub fn OnCloseEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QCloseEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnCloseEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn TabletEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QTreeWidget_TabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` event: QTabletEvent `
    ///
    pub fn SuperTabletEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QTabletEvent;
        qtc.QTreeWidget_SuperTabletEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#tabletEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QTabletEvent) callconv(.c) void `
    ///
    pub fn OnTabletEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QTabletEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnTabletEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn ActionEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QTreeWidget_ActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` event: QActionEvent `
    ///
    pub fn SuperActionEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QActionEvent;
        qtc.QTreeWidget_SuperActionEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#actionEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QActionEvent) callconv(.c) void `
    ///
    pub fn OnActionEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QActionEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnActionEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn ShowEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QTreeWidget_ShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` event: QShowEvent `
    ///
    pub fn SuperShowEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QShowEvent;
        qtc.QTreeWidget_SuperShowEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#showEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QShowEvent) callconv(.c) void `
    ///
    pub fn OnShowEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QShowEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnShowEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn HideEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QTreeWidget_HideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` event: QHideEvent `
    ///
    pub fn SuperHideEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QHideEvent;
        qtc.QTreeWidget_SuperHideEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#hideEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QHideEvent) callconv(.c) void `
    ///
    pub fn OnHideEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QHideEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnHideEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn NativeEvent(self: QTreeWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTreeWidget_NativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
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
    /// ` self: QTreeWidget `
    ///
    /// ` eventType: []u8 `
    ///
    /// ` message: ?*anyopaque `
    ///
    /// ` result: *isize `
    ///
    pub fn SuperNativeEvent(self: QTreeWidget, eventType: []u8, message: ?*anyopaque, result: *isize) bool {
        const eventType_str = qtc.libqt_string{
            .len = eventType.len,
            .data = eventType.ptr,
        };
        return qtc.QTreeWidget_SuperNativeEvent(@ptrCast(self.ptr), eventType_str, @ptrCast(message), @ptrCast(result));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#nativeEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, eventType: qtc.libqt_string, message: ?*anyopaque, result: *isize) callconv(.c) bool `
    ///
    pub fn OnNativeEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, qtc.libqt_string, ?*anyopaque, *isize) callconv(.c) bool) void {
        qtc.QTreeWidget_OnNativeEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn Metric(self: QTreeWidget, param1: i32) i32 {
        return qtc.QTreeWidget_Metric(@ptrCast(self.ptr), @bitCast(param1));
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperMetric(self: QTreeWidget, param1: i32) i32 {
        return qtc.QTreeWidget_SuperMetric(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#metric)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) i32 `
    ///
    pub fn OnMetric(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) i32) void {
        qtc.QTreeWidget_OnMetric(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn InitPainter(self: QTreeWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTreeWidget_InitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    pub fn SuperInitPainter(self: QTreeWidget, painter: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        qtc.QTreeWidget_SuperInitPainter(@ptrCast(self.ptr), @ptrCast(painter.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#initPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, painter: QPainter) callconv(.c) void `
    ///
    pub fn OnInitPainter(self: QTreeWidget, callback: *const fn (QTreeWidget, QPainter) callconv(.c) void) void {
        qtc.QTreeWidget_OnInitPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn Redirected(self: QTreeWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTreeWidget_Redirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    /// ` offset: QPoint `
    ///
    pub fn SuperRedirected(self: QTreeWidget, offset: anytype) QPaintDevice {
        comptime _ = @TypeOf(offset)._is_QPoint;
        return .{ .ptr = qtc.QTreeWidget_SuperRedirected(@ptrCast(self.ptr), @ptrCast(offset.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#redirected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, offset: QPoint) callconv(.c) QPaintDevice `
    ///
    pub fn OnRedirected(self: QTreeWidget, callback: *const fn (QTreeWidget, QPoint) callconv(.c) QPaintDevice) void {
        qtc.QTreeWidget_OnRedirected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SharedPainter(self: QTreeWidget) QPainter {
        return .{ .ptr = qtc.QTreeWidget_SharedPainter(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperSharedPainter(self: QTreeWidget) QPainter {
        return .{ .ptr = qtc.QTreeWidget_SuperSharedPainter(@ptrCast(self.ptr)) };
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#sharedPainter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPainter `
    ///
    pub fn OnSharedPainter(self: QTreeWidget, callback: *const fn () callconv(.c) QPainter) void {
        qtc.QTreeWidget_OnSharedPainter(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn ChildEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTreeWidget_ChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` event: QChildEvent `
    ///
    pub fn SuperChildEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QChildEvent;
        qtc.QTreeWidget_SuperChildEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QChildEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnChildEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn CustomEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTreeWidget_CustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` event: QEvent `
    ///
    pub fn SuperCustomEvent(self: QTreeWidget, event: anytype) void {
        comptime _ = @TypeOf(event)._is_QEvent;
        qtc.QTreeWidget_SuperCustomEvent(@ptrCast(self.ptr), @ptrCast(event.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, event: QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: QTreeWidget, callback: *const fn (QTreeWidget, QEvent) callconv(.c) void) void {
        qtc.QTreeWidget_OnCustomEvent(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn ConnectNotify(self: QTreeWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTreeWidget_ConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: QTreeWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTreeWidget_SuperConnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: QTreeWidget, callback: *const fn (QTreeWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QTreeWidget_OnConnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn DisconnectNotify(self: QTreeWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTreeWidget_DisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: QTreeWidget, signal: anytype) void {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        qtc.QTreeWidget_SuperDisconnectNotify(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, signal: QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: QTreeWidget, callback: *const fn (QTreeWidget, QMetaMethod) callconv(.c) void) void {
        qtc.QTreeWidget_OnDisconnectNotify(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` oldSize: i32 `
    ///
    /// ` newSize: i32 `
    ///
    pub fn ColumnResized(self: QTreeWidget, column: i32, oldSize: i32, newSize: i32) void {
        qtc.QTreeWidget_ColumnResized(@ptrCast(self.ptr), @bitCast(column), @bitCast(oldSize), @bitCast(newSize));
    }

    /// ### DEPRECATED: Use `SuperColumnResized` instead
    ///
    pub const QBaseColumnResized = SuperColumnResized;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` column: i32 `
    ///
    /// ` oldSize: i32 `
    ///
    /// ` newSize: i32 `
    ///
    pub fn SuperColumnResized(self: QTreeWidget, column: i32, oldSize: i32, newSize: i32) void {
        qtc.QTreeWidget_SuperColumnResized(@ptrCast(self.ptr), @bitCast(column), @bitCast(oldSize), @bitCast(newSize));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnResized)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, column: i32, oldSize: i32, newSize: i32) callconv(.c) void `
    ///
    pub fn OnColumnResized(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnColumnResized(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` oldCount: i32 `
    ///
    /// ` newCount: i32 `
    ///
    pub fn ColumnCountChanged(self: QTreeWidget, oldCount: i32, newCount: i32) void {
        qtc.QTreeWidget_ColumnCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

    /// ### DEPRECATED: Use `SuperColumnCountChanged` instead
    ///
    pub const QBaseColumnCountChanged = SuperColumnCountChanged;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` oldCount: i32 `
    ///
    /// ` newCount: i32 `
    ///
    pub fn SuperColumnCountChanged(self: QTreeWidget, oldCount: i32, newCount: i32) void {
        qtc.QTreeWidget_SuperColumnCountChanged(@ptrCast(self.ptr), @bitCast(oldCount), @bitCast(newCount));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnCountChanged)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, oldCount: i32, newCount: i32) callconv(.c) void `
    ///
    pub fn OnColumnCountChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnColumnCountChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ColumnMoved(self: QTreeWidget) void {
        qtc.QTreeWidget_ColumnMoved(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperColumnMoved` instead
    ///
    pub const QBaseColumnMoved = SuperColumnMoved;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperColumnMoved(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperColumnMoved(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#columnMoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnColumnMoved(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnColumnMoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Reexpand(self: QTreeWidget) void {
        qtc.QTreeWidget_Reexpand(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperReexpand` instead
    ///
    pub const QBaseReexpand = SuperReexpand;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperReexpand(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperReexpand(@ptrCast(self.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#reexpand)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnReexpand(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnReexpand(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn RowsRemoved(self: QTreeWidget, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QTreeWidget_RowsRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperRowsRemoved` instead
    ///
    pub const QBaseRowsRemoved = SuperRowsRemoved;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` parent: QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperRowsRemoved(self: QTreeWidget, parent: anytype, first: i32, last: i32) void {
        comptime _ = @TypeOf(parent)._is_QModelIndex;
        qtc.QTreeWidget_SuperRowsRemoved(@ptrCast(self.ptr), @ptrCast(parent.ptr), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowsRemoved)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, parent: QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsRemoved(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnRowsRemoved(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` region: QRegion `
    ///
    pub fn DrawTree(self: QTreeWidget, painter: anytype, region: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QTreeWidget_DrawTree(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `SuperDrawTree` instead
    ///
    pub const QBaseDrawTree = SuperDrawTree;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` painter: QPainter `
    ///
    /// ` region: QRegion `
    ///
    pub fn SuperDrawTree(self: QTreeWidget, painter: anytype, region: anytype) void {
        comptime _ = @TypeOf(painter)._is_QPainter;
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QTreeWidget_SuperDrawTree(@ptrCast(self.ptr), @ptrCast(painter.ptr), @ptrCast(region.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#drawTree)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, painter: QPainter, region: QRegion) callconv(.c) void `
    ///
    pub fn OnDrawTree(self: QTreeWidget, callback: *const fn (QTreeWidget, QPainter, QRegion) callconv(.c) void) void {
        qtc.QTreeWidget_OnDrawTree(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn IndexRowSizeHint(self: QTreeWidget, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeWidget_IndexRowSizeHint(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperIndexRowSizeHint` instead
    ///
    pub const QBaseIndexRowSizeHint = SuperIndexRowSizeHint;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperIndexRowSizeHint(self: QTreeWidget, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeWidget_SuperIndexRowSizeHint(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#indexRowSizeHint)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnIndexRowSizeHint(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) i32) void {
        qtc.QTreeWidget_OnIndexRowSizeHint(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn RowHeight(self: QTreeWidget, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeWidget_RowHeight(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// ### DEPRECATED: Use `SuperRowHeight` instead
    ///
    pub const QBaseRowHeight = SuperRowHeight;

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` index: QModelIndex `
    ///
    pub fn SuperRowHeight(self: QTreeWidget, index: anytype) i32 {
        comptime _ = @TypeOf(index)._is_QModelIndex;
        return qtc.QTreeWidget_SuperRowHeight(@ptrCast(self.ptr), @ptrCast(index.ptr));
    }

    /// Inherited from QTreeView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreeview.html#rowHeight)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, index: QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnRowHeight(self: QTreeWidget, callback: *const fn (QTreeWidget, QModelIndex) callconv(.c) i32) void {
        qtc.QTreeWidget_OnRowHeight(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn State(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_State(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperState` instead
    ///
    pub const QBaseState = SuperState;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.State `
    ///
    pub fn SuperState(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperState(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#state)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnState(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` state: qabstractitemview_enums.State `
    ///
    pub fn SetState(self: QTreeWidget, state: i32) void {
        qtc.QTreeWidget_SetState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// ### DEPRECATED: Use `SuperSetState` instead
    ///
    pub const QBaseSetState = SuperSetState;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` state: qabstractitemview_enums.State `
    ///
    pub fn SuperSetState(self: QTreeWidget, state: i32) void {
        qtc.QTreeWidget_SuperSetState(@ptrCast(self.ptr), @bitCast(state));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setState)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, state: qabstractitemview_enums.State) callconv(.c) void `
    ///
    pub fn OnSetState(self: QTreeWidget, callback: *const fn (QTreeWidget, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetState(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ScheduleDelayedItemsLayout(self: QTreeWidget) void {
        qtc.QTreeWidget_ScheduleDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperScheduleDelayedItemsLayout` instead
    ///
    pub const QBaseScheduleDelayedItemsLayout = SuperScheduleDelayedItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperScheduleDelayedItemsLayout(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperScheduleDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scheduleDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnScheduleDelayedItemsLayout(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnScheduleDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ExecuteDelayedItemsLayout(self: QTreeWidget) void {
        qtc.QTreeWidget_ExecuteDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperExecuteDelayedItemsLayout` instead
    ///
    pub const QBaseExecuteDelayedItemsLayout = SuperExecuteDelayedItemsLayout;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperExecuteDelayedItemsLayout(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperExecuteDelayedItemsLayout(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#executeDelayedItemsLayout)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnExecuteDelayedItemsLayout(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnExecuteDelayedItemsLayout(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` region: QRegion `
    ///
    pub fn SetDirtyRegion(self: QTreeWidget, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QTreeWidget_SetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// ### DEPRECATED: Use `SuperSetDirtyRegion` instead
    ///
    pub const QBaseSetDirtyRegion = SuperSetDirtyRegion;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` region: QRegion `
    ///
    pub fn SuperSetDirtyRegion(self: QTreeWidget, region: anytype) void {
        comptime _ = @TypeOf(region)._is_QRegion;
        qtc.QTreeWidget_SuperSetDirtyRegion(@ptrCast(self.ptr), @ptrCast(region.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#setDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, region: QRegion) callconv(.c) void `
    ///
    pub fn OnSetDirtyRegion(self: QTreeWidget, callback: *const fn (QTreeWidget, QRegion) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn ScrollDirtyRegion(self: QTreeWidget, dx: i32, dy: i32) void {
        qtc.QTreeWidget_ScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// ### DEPRECATED: Use `SuperScrollDirtyRegion` instead
    ///
    pub const QBaseScrollDirtyRegion = SuperScrollDirtyRegion;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` dx: i32 `
    ///
    /// ` dy: i32 `
    ///
    pub fn SuperScrollDirtyRegion(self: QTreeWidget, dx: i32, dy: i32) void {
        qtc.QTreeWidget_SuperScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(dx), @bitCast(dy));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#scrollDirtyRegion)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, dx: i32, dy: i32) callconv(.c) void `
    ///
    pub fn OnScrollDirtyRegion(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnScrollDirtyRegion(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn DirtyRegionOffset(self: QTreeWidget) QPoint {
        return .{ .ptr = qtc.QTreeWidget_DirtyRegionOffset(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `SuperDirtyRegionOffset` instead
    ///
    pub const QBaseDirtyRegionOffset = SuperDirtyRegionOffset;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperDirtyRegionOffset(self: QTreeWidget) QPoint {
        return .{ .ptr = qtc.QTreeWidget_SuperDirtyRegionOffset(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dirtyRegionOffset)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QPoint `
    ///
    pub fn OnDirtyRegionOffset(self: QTreeWidget, callback: *const fn () callconv(.c) QPoint) void {
        qtc.QTreeWidget_OnDirtyRegionOffset(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn StartAutoScroll(self: QTreeWidget) void {
        qtc.QTreeWidget_StartAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperStartAutoScroll` instead
    ///
    pub const QBaseStartAutoScroll = SuperStartAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperStartAutoScroll(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperStartAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#startAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStartAutoScroll(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnStartAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn StopAutoScroll(self: QTreeWidget) void {
        qtc.QTreeWidget_StopAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperStopAutoScroll` instead
    ///
    pub const QBaseStopAutoScroll = SuperStopAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperStopAutoScroll(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperStopAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#stopAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnStopAutoScroll(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnStopAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn DoAutoScroll(self: QTreeWidget) void {
        qtc.QTreeWidget_DoAutoScroll(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDoAutoScroll` instead
    ///
    pub const QBaseDoAutoScroll = SuperDoAutoScroll;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SuperDoAutoScroll(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperDoAutoScroll(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#doAutoScroll)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDoAutoScroll(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnDoAutoScroll(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn DropIndicatorPosition(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_DropIndicatorPosition(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `SuperDropIndicatorPosition` instead
    ///
    pub const QBaseDropIndicatorPosition = SuperDropIndicatorPosition;

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ## Returns:
    ///
    /// ` qabstractitemview_enums.DropIndicatorPosition `
    ///
    pub fn SuperDropIndicatorPosition(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperDropIndicatorPosition(@ptrCast(self.ptr));
    }

    /// Inherited from QAbstractItemView
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemview.html#dropIndicatorPosition)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnDropIndicatorPosition(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnDropIndicatorPosition(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SetViewportMargins(self: QTreeWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QTreeWidget_SetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
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
    /// ` self: QTreeWidget `
    ///
    /// ` left: i32 `
    ///
    /// ` top: i32 `
    ///
    /// ` right: i32 `
    ///
    /// ` bottom: i32 `
    ///
    pub fn SuperSetViewportMargins(self: QTreeWidget, left: i32, top: i32, right: i32, bottom: i32) void {
        qtc.QTreeWidget_SuperSetViewportMargins(@ptrCast(self.ptr), @bitCast(left), @bitCast(top), @bitCast(right), @bitCast(bottom));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#setViewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, left: i32, top: i32, right: i32, bottom: i32) callconv(.c) void `
    ///
    pub fn OnSetViewportMargins(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32, i32, i32) callconv(.c) void) void {
        qtc.QTreeWidget_OnSetViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn ViewportMargins(self: QTreeWidget) QMargins {
        return .{ .ptr = qtc.QTreeWidget_ViewportMargins(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperViewportMargins(self: QTreeWidget) QMargins {
        return .{ .ptr = qtc.QTreeWidget_SuperViewportMargins(@ptrCast(self.ptr)) };
    }

    /// Inherited from QAbstractScrollArea
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractscrollarea.html#viewportMargins)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QMargins `
    ///
    pub fn OnViewportMargins(self: QTreeWidget, callback: *const fn () callconv(.c) QMargins) void {
        qtc.QTreeWidget_OnViewportMargins(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPainter `
    ///
    pub fn DrawFrame(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QTreeWidget_DrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` param1: QPainter `
    ///
    pub fn SuperDrawFrame(self: QTreeWidget, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QPainter;
        qtc.QTreeWidget_SuperDrawFrame(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// Inherited from QFrame
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qframe.html#drawFrame)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, param1: QPainter) callconv(.c) void `
    ///
    pub fn OnDrawFrame(self: QTreeWidget, callback: *const fn (QTreeWidget, QPainter) callconv(.c) void) void {
        qtc.QTreeWidget_OnDrawFrame(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn UpdateMicroFocus(self: QTreeWidget) void {
        qtc.QTreeWidget_UpdateMicroFocus(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperUpdateMicroFocus(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperUpdateMicroFocus(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#updateMicroFocus)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnUpdateMicroFocus(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnUpdateMicroFocus(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Create(self: QTreeWidget) void {
        qtc.QTreeWidget_Create(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperCreate(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperCreate(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#create)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnCreate(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnCreate(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Destroy(self: QTreeWidget) void {
        qtc.QTreeWidget_Destroy(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperDestroy(self: QTreeWidget) void {
        qtc.QTreeWidget_SuperDestroy(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#destroy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnDestroy(self: QTreeWidget, callback: *const fn () callconv(.c) void) void {
        qtc.QTreeWidget_OnDestroy(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn FocusNextChild(self: QTreeWidget) bool {
        return qtc.QTreeWidget_FocusNextChild(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperFocusNextChild(self: QTreeWidget) bool {
        return qtc.QTreeWidget_SuperFocusNextChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusNextChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusNextChild(self: QTreeWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTreeWidget_OnFocusNextChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn FocusPreviousChild(self: QTreeWidget) bool {
        return qtc.QTreeWidget_FocusPreviousChild(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperFocusPreviousChild(self: QTreeWidget) bool {
        return qtc.QTreeWidget_SuperFocusPreviousChild(@ptrCast(self.ptr));
    }

    /// Inherited from QWidget
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qwidget.html#focusPreviousChild)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnFocusPreviousChild(self: QTreeWidget, callback: *const fn () callconv(.c) bool) void {
        qtc.QTreeWidget_OnFocusPreviousChild(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Sender(self: QTreeWidget) QObject {
        return .{ .ptr = qtc.QTreeWidget_Sender(@ptrCast(self.ptr)) };
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperSender(self: QTreeWidget) QObject {
        return .{ .ptr = qtc.QTreeWidget_SuperSender(@ptrCast(self.ptr)) };
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) QObject `
    ///
    pub fn OnSender(self: QTreeWidget, callback: *const fn () callconv(.c) QObject) void {
        qtc.QTreeWidget_OnSender(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn SenderSignalIndex(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SenderSignalIndex(@ptrCast(self.ptr));
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
    /// ` self: QTreeWidget `
    ///
    pub fn SuperSenderSignalIndex(self: QTreeWidget) i32 {
        return qtc.QTreeWidget_SuperSenderSignalIndex(@ptrCast(self.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: QTreeWidget, callback: *const fn () callconv(.c) i32) void {
        qtc.QTreeWidget_OnSenderSignalIndex(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: QTreeWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTreeWidget_Receivers(@ptrCast(self.ptr), signal_Cstring);
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: QTreeWidget, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.QTreeWidget_SuperReceivers(@ptrCast(self.ptr), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: QTreeWidget, callback: *const fn (QTreeWidget, [*:0]const u8) callconv(.c) i32) void {
        qtc.QTreeWidget_OnReceivers(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn IsSignalConnected(self: QTreeWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTreeWidget_IsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
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
    /// ` self: QTreeWidget `
    ///
    /// ` signal: QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: QTreeWidget, signal: anytype) bool {
        comptime _ = @TypeOf(signal)._is_QMetaMethod;
        return qtc.QTreeWidget_SuperIsSignalConnected(@ptrCast(self.ptr), @ptrCast(signal.ptr));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, signal: QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: QTreeWidget, callback: *const fn (QTreeWidget, QMetaMethod) callconv(.c) bool) void {
        qtc.QTreeWidget_OnIsSignalConnected(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn GetDecodedMetricF(self: QTreeWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QTreeWidget_GetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
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
    /// ` self: QTreeWidget `
    ///
    /// ` metricA: qpaintdevice_enums.PaintDeviceMetric `
    ///
    /// ` metricB: qpaintdevice_enums.PaintDeviceMetric `
    ///
    pub fn SuperGetDecodedMetricF(self: QTreeWidget, metricA: i32, metricB: i32) f64 {
        return qtc.QTreeWidget_SuperGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(metricA), @bitCast(metricB));
    }

    /// Inherited from QPaintDevice
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qpaintdevice.html#getDecodedMetricF)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget`
    ///
    /// ` callback: *const fn (self: QTreeWidget, metricA: qpaintdevice_enums.PaintDeviceMetric, metricB: qpaintdevice_enums.PaintDeviceMetric) callconv(.c) f64 `
    ///
    pub fn OnGetDecodedMetricF(self: QTreeWidget, callback: *const fn (QTreeWidget, i32, i32) callconv(.c) f64) void {
        qtc.QTreeWidget_OnGetDecodedMetricF(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QTreeWidget `
    ///
    /// ` callback: *const fn (self: QTreeWidget, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: QTreeWidget, callback: *const fn (QTreeWidget, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#dtor.QTreeWidget)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTreeWidget `
    ///
    pub fn Delete(self: QTreeWidget) void {
        qtc.QTreeWidget_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtreewidget.html#public-types)
pub const enums = struct {
    pub const ItemType = enum(i32) {
        pub const Type: i32 = 0;
        pub const UserType: i32 = 1000;
    };

    pub const ChildIndicatorPolicy = enum(i32) {
        pub const ShowIndicator: i32 = 0;
        pub const DontShowIndicator: i32 = 1;
        pub const DontShowIndicatorWhenChildless: i32 = 2;
    };
};
